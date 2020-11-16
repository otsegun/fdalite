#' Compute the band depth for a sample of curves/observations.
#'
#'This function computes the band depth of López-Pintado and Romo (2009). Bands of 2 functions are always considered using
#'fast algorithm of Sun et al. (2012).
#'
#' @param dt A matrix or data frame of size \eqn{n} observations/curves by \eqn{p} domain/evaluation points.
#'
#' @return A numeric vector of size \code{nrow(dt)} containing the band depth values of each curve.
#'
#' @references
#' López-Pintado, S., & Romo, J. (2009). On the Concept of Depth for Functional Data.
#' \emph{Journal of the American Statistical Association}, 104(486), 718-734.
#'
#' Sun, Y., Genton, M. G., & Nychka, D. W. (2012). Exact fast computation of band depth for large functional datasets:
#' How quickly can one million curves be ranked?. \emph{Stat}, 1(1), 68-74.
#'
#' @export
#'
#' @examples
#' bd2 <- band_depth(sim_data1$data)
#'
band_depth <- function(dt){
  if (is.data.frame(dt)) {
    dt <- as.matrix(dt)
  }

  if (!is.array(dt) || !is.numeric(dt))
    stop("Argument \"dt\" must be a numeric matrix or dataframe.")

  if (any(!is.finite(dt))) {
    stop("Missing or infinite values are not allowed in argument \"dt\"")
  }

  n <- dim(dt)[1]
  rank_matrix <- apply(dt, 2, rank)
  down <- apply(rank_matrix, 1, min) - 1
  up <- n-apply(rank_matrix, 1, max)
  unname((up*down+n-1)/choose(n,2))
}