#define NUMBER_OF_SCATTERING_ORDERS 4
#define ATMOSPHERE_HEIGHT 80.0
#define ATMOSPHERE_HEIGHT_SQUARED 6400.0
#define ONE_OVER_HEIGHT_OF_ATMOSPHERE 0.0125
#define ONE_OVER_TWO_TIMES_THE_HEIGHT_OF_THE_ATMOSPHERE 0.025
#define RAYLEIGH_SCALE_HEIGHT 8.0
#define ONE_OVER_RAYLEIGH_SCALE_HEIGHT 0.125
#define ONE_OVER_MIE_SCALE_HEIGHT 0.833333333333333333333333333333333333
#define ONE_OVER_ZERO_POINT_NINE 1.111111111111111111111111111111111111111111111
#define ZERO_POINT_FIVE_OVER_ONE_POINT_ONE 0.45454545454545454545454545454545454545454545454545
#define TAN_OF_ONE_POINT_THREE_EIGHT_SIX 0.349623499187428997458118357100444434285067337233648122248
#define PARAMETER_TO_COS_OF_SUN_VIEW_CONST 0.722695983908032851939963402997985942588713919243915613609
#define NUMERATOR_FOR_ONE_PLUS_OR_MINUS_PARAMETERIZED_HEIGHTS 0.03125 //((0.5^5)^0.2) allows us to bring the multiple of 0.5 inside for each
#define N_AIR 1.00029
#define RADIUS_OF_EARTH 6366.7
#define TWO_TIMES_THE_RADIUS_OF_THE_EARTH 12733.4
#define RADIUS_OF_EARTH_SQUARED 40534868.89

//8 * (PI^3) *(( (n_air^2) - 1)^2) / (3 * N_atmos * ((lambda_color)^4))
//(http://publications.lib.chalmers.se/records/fulltext/203057/203057.pdf - page 10)
//n_air = 1.00029
//N_atmos = 2.545e25s
//lambda_red = 650nm
//labda_green = 510nm
//lambda_blue = 475nm
#define EARTH_RAYLEIGH_RED_BETA 0.00000612434
#define EARTH_RAYLEIGH_GREEN_BETA 0.0000161596
#define EARTH_RAYLEIGH_BLUE_BETA 0.0000214752
#define EARTH_RAYLEIGH_RED_BETA_OVER_FOUR_PI 0.00000048735949
#define EARTH_RAYLEIGH_GREEN_BETA_OVER_FOUR_PI 0.00000128594010
#define EARTH_RAYLEIGH_BLUE_BETA_OVER_FOUR_PI 0.0000017089421
#define EARTH_MIE_BETA 0.000002
#define EARTH_MIE_BETA_OVER_FOUR_PI 0.000000159
//Mie Beta / 0.9, http://www-ljk.imag.fr/Publications/Basilic/com.lmc.publi.PUBLI_Article@11e7cdda2f7_f64b69/article.pdf
#define EARTH_MIE_BETA_EXTINCTION 0.00000222222222222222222222222222222222222222
#define SUN_INTENSITY
#define RAYLEIGH_PHASE_AT_ZERO_DEGREES 0.75
#define OZONE_PERCENT_OF_RAYLEIGH 0.0000006
