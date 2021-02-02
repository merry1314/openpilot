
extern "C"{

double mass;

void set_mass(double x){ mass = x;}

double rotational_inertia;

void set_rotational_inertia(double x){ rotational_inertia = x;}

double center_to_front;

void set_center_to_front(double x){ center_to_front = x;}

double center_to_rear;

void set_center_to_rear(double x){ center_to_rear = x;}

double stiffness_front;

void set_stiffness_front(double x){ stiffness_front = x;}

double stiffness_rear;

void set_stiffness_rear(double x){ stiffness_rear = x;}

}
extern "C" {
#include <math.h>
/******************************************************************************
 *                       Code generated with sympy 1.7                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                         This file is part of 'ekf'                         *
 ******************************************************************************/
void err_fun(double *nom_x, double *delta_x, double *out_7372740310477700999) {
   out_7372740310477700999[0] = delta_x[0] + nom_x[0];
   out_7372740310477700999[1] = delta_x[1] + nom_x[1];
   out_7372740310477700999[2] = delta_x[2] + nom_x[2];
   out_7372740310477700999[3] = delta_x[3] + nom_x[3];
   out_7372740310477700999[4] = delta_x[4] + nom_x[4];
   out_7372740310477700999[5] = delta_x[5] + nom_x[5];
   out_7372740310477700999[6] = delta_x[6] + nom_x[6];
   out_7372740310477700999[7] = delta_x[7] + nom_x[7];
}
void inv_err_fun(double *nom_x, double *true_x, double *out_6622503638637858579) {
   out_6622503638637858579[0] = -nom_x[0] + true_x[0];
   out_6622503638637858579[1] = -nom_x[1] + true_x[1];
   out_6622503638637858579[2] = -nom_x[2] + true_x[2];
   out_6622503638637858579[3] = -nom_x[3] + true_x[3];
   out_6622503638637858579[4] = -nom_x[4] + true_x[4];
   out_6622503638637858579[5] = -nom_x[5] + true_x[5];
   out_6622503638637858579[6] = -nom_x[6] + true_x[6];
   out_6622503638637858579[7] = -nom_x[7] + true_x[7];
}
void H_mod_fun(double *state, double *out_1295311499313815329) {
   out_1295311499313815329[0] = 1.0;
   out_1295311499313815329[1] = 0.0;
   out_1295311499313815329[2] = 0.0;
   out_1295311499313815329[3] = 0.0;
   out_1295311499313815329[4] = 0.0;
   out_1295311499313815329[5] = 0.0;
   out_1295311499313815329[6] = 0.0;
   out_1295311499313815329[7] = 0.0;
   out_1295311499313815329[8] = 0.0;
   out_1295311499313815329[9] = 1.0;
   out_1295311499313815329[10] = 0.0;
   out_1295311499313815329[11] = 0.0;
   out_1295311499313815329[12] = 0.0;
   out_1295311499313815329[13] = 0.0;
   out_1295311499313815329[14] = 0.0;
   out_1295311499313815329[15] = 0.0;
   out_1295311499313815329[16] = 0.0;
   out_1295311499313815329[17] = 0.0;
   out_1295311499313815329[18] = 1.0;
   out_1295311499313815329[19] = 0.0;
   out_1295311499313815329[20] = 0.0;
   out_1295311499313815329[21] = 0.0;
   out_1295311499313815329[22] = 0.0;
   out_1295311499313815329[23] = 0.0;
   out_1295311499313815329[24] = 0.0;
   out_1295311499313815329[25] = 0.0;
   out_1295311499313815329[26] = 0.0;
   out_1295311499313815329[27] = 1.0;
   out_1295311499313815329[28] = 0.0;
   out_1295311499313815329[29] = 0.0;
   out_1295311499313815329[30] = 0.0;
   out_1295311499313815329[31] = 0.0;
   out_1295311499313815329[32] = 0.0;
   out_1295311499313815329[33] = 0.0;
   out_1295311499313815329[34] = 0.0;
   out_1295311499313815329[35] = 0.0;
   out_1295311499313815329[36] = 1.0;
   out_1295311499313815329[37] = 0.0;
   out_1295311499313815329[38] = 0.0;
   out_1295311499313815329[39] = 0.0;
   out_1295311499313815329[40] = 0.0;
   out_1295311499313815329[41] = 0.0;
   out_1295311499313815329[42] = 0.0;
   out_1295311499313815329[43] = 0.0;
   out_1295311499313815329[44] = 0.0;
   out_1295311499313815329[45] = 1.0;
   out_1295311499313815329[46] = 0.0;
   out_1295311499313815329[47] = 0.0;
   out_1295311499313815329[48] = 0.0;
   out_1295311499313815329[49] = 0.0;
   out_1295311499313815329[50] = 0.0;
   out_1295311499313815329[51] = 0.0;
   out_1295311499313815329[52] = 0.0;
   out_1295311499313815329[53] = 0.0;
   out_1295311499313815329[54] = 1.0;
   out_1295311499313815329[55] = 0.0;
   out_1295311499313815329[56] = 0.0;
   out_1295311499313815329[57] = 0.0;
   out_1295311499313815329[58] = 0.0;
   out_1295311499313815329[59] = 0.0;
   out_1295311499313815329[60] = 0.0;
   out_1295311499313815329[61] = 0.0;
   out_1295311499313815329[62] = 0.0;
   out_1295311499313815329[63] = 1.0;
}
void f_fun(double *state, double dt, double *out_5248883109346528839) {
   out_5248883109346528839[0] = state[0];
   out_5248883109346528839[1] = state[1];
   out_5248883109346528839[2] = state[2];
   out_5248883109346528839[3] = state[3];
   out_5248883109346528839[4] = state[4];
   out_5248883109346528839[5] = dt*((-state[4] + (-center_to_front*stiffness_front*state[0] + center_to_rear*stiffness_rear*state[0])/(mass*state[4]))*state[6] + stiffness_front*(-state[2] - state[3] + state[7])*state[0]/(mass*state[1]) + (-stiffness_front*state[0] - stiffness_rear*state[0])*state[5]/(mass*state[4])) + state[5];
   out_5248883109346528839[6] = dt*(center_to_front*stiffness_front*(-state[2] - state[3] + state[7])*state[0]/(rotational_inertia*state[1]) + (-center_to_front*stiffness_front*state[0] + center_to_rear*stiffness_rear*state[0])*state[5]/(rotational_inertia*state[4]) + (-pow(center_to_front, 2)*stiffness_front*state[0] - pow(center_to_rear, 2)*stiffness_rear*state[0])*state[6]/(rotational_inertia*state[4])) + state[6];
   out_5248883109346528839[7] = state[7];
}
void F_fun(double *state, double dt, double *out_980416393684475030) {
   out_980416393684475030[0] = 1;
   out_980416393684475030[1] = 0;
   out_980416393684475030[2] = 0;
   out_980416393684475030[3] = 0;
   out_980416393684475030[4] = 0;
   out_980416393684475030[5] = 0;
   out_980416393684475030[6] = 0;
   out_980416393684475030[7] = 0;
   out_980416393684475030[8] = 0;
   out_980416393684475030[9] = 1;
   out_980416393684475030[10] = 0;
   out_980416393684475030[11] = 0;
   out_980416393684475030[12] = 0;
   out_980416393684475030[13] = 0;
   out_980416393684475030[14] = 0;
   out_980416393684475030[15] = 0;
   out_980416393684475030[16] = 0;
   out_980416393684475030[17] = 0;
   out_980416393684475030[18] = 1;
   out_980416393684475030[19] = 0;
   out_980416393684475030[20] = 0;
   out_980416393684475030[21] = 0;
   out_980416393684475030[22] = 0;
   out_980416393684475030[23] = 0;
   out_980416393684475030[24] = 0;
   out_980416393684475030[25] = 0;
   out_980416393684475030[26] = 0;
   out_980416393684475030[27] = 1;
   out_980416393684475030[28] = 0;
   out_980416393684475030[29] = 0;
   out_980416393684475030[30] = 0;
   out_980416393684475030[31] = 0;
   out_980416393684475030[32] = 0;
   out_980416393684475030[33] = 0;
   out_980416393684475030[34] = 0;
   out_980416393684475030[35] = 0;
   out_980416393684475030[36] = 1;
   out_980416393684475030[37] = 0;
   out_980416393684475030[38] = 0;
   out_980416393684475030[39] = 0;
   out_980416393684475030[40] = dt*(stiffness_front*(-state[2] - state[3] + state[7])/(mass*state[1]) + (-stiffness_front - stiffness_rear)*state[5]/(mass*state[4]) + (-center_to_front*stiffness_front + center_to_rear*stiffness_rear)*state[6]/(mass*state[4]));
   out_980416393684475030[41] = -dt*stiffness_front*(-state[2] - state[3] + state[7])*state[0]/(mass*pow(state[1], 2));
   out_980416393684475030[42] = -dt*stiffness_front*state[0]/(mass*state[1]);
   out_980416393684475030[43] = -dt*stiffness_front*state[0]/(mass*state[1]);
   out_980416393684475030[44] = dt*((-1 - (-center_to_front*stiffness_front*state[0] + center_to_rear*stiffness_rear*state[0])/(mass*pow(state[4], 2)))*state[6] - (-stiffness_front*state[0] - stiffness_rear*state[0])*state[5]/(mass*pow(state[4], 2)));
   out_980416393684475030[45] = dt*(-stiffness_front*state[0] - stiffness_rear*state[0])/(mass*state[4]) + 1;
   out_980416393684475030[46] = dt*(-state[4] + (-center_to_front*stiffness_front*state[0] + center_to_rear*stiffness_rear*state[0])/(mass*state[4]));
   out_980416393684475030[47] = dt*stiffness_front*state[0]/(mass*state[1]);
   out_980416393684475030[48] = dt*(center_to_front*stiffness_front*(-state[2] - state[3] + state[7])/(rotational_inertia*state[1]) + (-center_to_front*stiffness_front + center_to_rear*stiffness_rear)*state[5]/(rotational_inertia*state[4]) + (-pow(center_to_front, 2)*stiffness_front - pow(center_to_rear, 2)*stiffness_rear)*state[6]/(rotational_inertia*state[4]));
   out_980416393684475030[49] = -center_to_front*dt*stiffness_front*(-state[2] - state[3] + state[7])*state[0]/(rotational_inertia*pow(state[1], 2));
   out_980416393684475030[50] = -center_to_front*dt*stiffness_front*state[0]/(rotational_inertia*state[1]);
   out_980416393684475030[51] = -center_to_front*dt*stiffness_front*state[0]/(rotational_inertia*state[1]);
   out_980416393684475030[52] = dt*(-(-center_to_front*stiffness_front*state[0] + center_to_rear*stiffness_rear*state[0])*state[5]/(rotational_inertia*pow(state[4], 2)) - (-pow(center_to_front, 2)*stiffness_front*state[0] - pow(center_to_rear, 2)*stiffness_rear*state[0])*state[6]/(rotational_inertia*pow(state[4], 2)));
   out_980416393684475030[53] = dt*(-center_to_front*stiffness_front*state[0] + center_to_rear*stiffness_rear*state[0])/(rotational_inertia*state[4]);
   out_980416393684475030[54] = dt*(-pow(center_to_front, 2)*stiffness_front*state[0] - pow(center_to_rear, 2)*stiffness_rear*state[0])/(rotational_inertia*state[4]) + 1;
   out_980416393684475030[55] = center_to_front*dt*stiffness_front*state[0]/(rotational_inertia*state[1]);
   out_980416393684475030[56] = 0;
   out_980416393684475030[57] = 0;
   out_980416393684475030[58] = 0;
   out_980416393684475030[59] = 0;
   out_980416393684475030[60] = 0;
   out_980416393684475030[61] = 0;
   out_980416393684475030[62] = 0;
   out_980416393684475030[63] = 1;
}
void h_25(double *state, double *unused, double *out_4617630069697255171) {
   out_4617630069697255171[0] = state[6];
}
void H_25(double *state, double *unused, double *out_6933966286722968177) {
   out_6933966286722968177[0] = 0;
   out_6933966286722968177[1] = 0;
   out_6933966286722968177[2] = 0;
   out_6933966286722968177[3] = 0;
   out_6933966286722968177[4] = 0;
   out_6933966286722968177[5] = 0;
   out_6933966286722968177[6] = 1;
   out_6933966286722968177[7] = 0;
}
void h_24(double *state, double *unused, double *out_3813107835189735500) {
   out_3813107835189735500[0] = state[4];
   out_3813107835189735500[1] = state[5];
}
void H_24(double *state, double *unused, double *out_2804244840872331147) {
   out_2804244840872331147[0] = 0;
   out_2804244840872331147[1] = 0;
   out_2804244840872331147[2] = 0;
   out_2804244840872331147[3] = 0;
   out_2804244840872331147[4] = 1;
   out_2804244840872331147[5] = 0;
   out_2804244840872331147[6] = 0;
   out_2804244840872331147[7] = 0;
   out_2804244840872331147[8] = 0;
   out_2804244840872331147[9] = 0;
   out_2804244840872331147[10] = 0;
   out_2804244840872331147[11] = 0;
   out_2804244840872331147[12] = 0;
   out_2804244840872331147[13] = 1;
   out_2804244840872331147[14] = 0;
   out_2804244840872331147[15] = 0;
}
void h_30(double *state, double *unused, double *out_5332453322748556453) {
   out_5332453322748556453[0] = state[4];
}
void H_30(double *state, double *unused, double *out_2679932624226215103) {
   out_2679932624226215103[0] = 0;
   out_2679932624226215103[1] = 0;
   out_2679932624226215103[2] = 0;
   out_2679932624226215103[3] = 0;
   out_2679932624226215103[4] = 1;
   out_2679932624226215103[5] = 0;
   out_2679932624226215103[6] = 0;
   out_2679932624226215103[7] = 0;
}
void h_26(double *state, double *unused, double *out_6858466029001947909) {
   out_6858466029001947909[0] = state[7];
}
void H_26(double *state, double *unused, double *out_1194172770042952497) {
   out_1194172770042952497[0] = 0;
   out_1194172770042952497[1] = 0;
   out_1194172770042952497[2] = 0;
   out_1194172770042952497[3] = 0;
   out_1194172770042952497[4] = 0;
   out_1194172770042952497[5] = 0;
   out_1194172770042952497[6] = 0;
   out_1194172770042952497[7] = 1;
}
void h_27(double *state, double *unused, double *out_8033903359346325187) {
   out_8033903359346325187[0] = state[3];
}
void H_27(double *state, double *unused, double *out_3967514612062840415) {
   out_3967514612062840415[0] = 0;
   out_3967514612062840415[1] = 0;
   out_3967514612062840415[2] = 0;
   out_3967514612062840415[3] = 1;
   out_3967514612062840415[4] = 0;
   out_3967514612062840415[5] = 0;
   out_3967514612062840415[6] = 0;
   out_3967514612062840415[7] = 0;
}
void h_29(double *state, double *unused, double *out_3642005488012875493) {
   out_3642005488012875493[0] = state[1];
}
void H_29(double *state, double *unused, double *out_6503731393355047056) {
   out_6503731393355047056[0] = 0;
   out_6503731393355047056[1] = 1;
   out_6503731393355047056[2] = 0;
   out_6503731393355047056[3] = 0;
   out_6503731393355047056[4] = 0;
   out_6503731393355047056[5] = 0;
   out_6503731393355047056[6] = 0;
   out_6503731393355047056[7] = 0;
}
void h_28(double *state, double *unused, double *out_8818691484559768033) {
   out_8818691484559768033[0] = state[5];
   out_8818691484559768033[1] = state[6];
}
void H_28(double *state, double *unused, double *out_4213587637364163719) {
   out_4213587637364163719[0] = 0;
   out_4213587637364163719[1] = 0;
   out_4213587637364163719[2] = 0;
   out_4213587637364163719[3] = 0;
   out_4213587637364163719[4] = 0;
   out_4213587637364163719[5] = 1;
   out_4213587637364163719[6] = 0;
   out_4213587637364163719[7] = 0;
   out_4213587637364163719[8] = 0;
   out_4213587637364163719[9] = 0;
   out_4213587637364163719[10] = 0;
   out_4213587637364163719[11] = 0;
   out_4213587637364163719[12] = 0;
   out_4213587637364163719[13] = 0;
   out_4213587637364163719[14] = 1;
   out_4213587637364163719[15] = 0;
}
}

extern "C"{
#define DIM 8
#define EDIM 8
#define MEDIM 8
typedef void (*Hfun)(double *, double *, double *);

void predict(double *x, double *P, double *Q, double dt);
const static double MAHA_THRESH_25 = 3.841459;
void update_25(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_24 = 5.991465;
void update_24(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_30 = 3.841459;
void update_30(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_26 = 3.841459;
void update_26(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_27 = 3.841459;
void update_27(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_29 = 3.841459;
void update_29(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_28 = 5.991465;
void update_28(double *, double *, double *, double *, double *);
}

#include <eigen3/Eigen/Dense>
#include <iostream>

typedef Eigen::Matrix<double, DIM, DIM, Eigen::RowMajor> DDM;
typedef Eigen::Matrix<double, EDIM, EDIM, Eigen::RowMajor> EEM;
typedef Eigen::Matrix<double, DIM, EDIM, Eigen::RowMajor> DEM;

void predict(double *in_x, double *in_P, double *in_Q, double dt) {
  typedef Eigen::Matrix<double, MEDIM, MEDIM, Eigen::RowMajor> RRM;

  double nx[DIM] = {0};
  double in_F[EDIM*EDIM] = {0};

  // functions from sympy
  f_fun(in_x, dt, nx);
  F_fun(in_x, dt, in_F);


  EEM F(in_F);
  EEM P(in_P);
  EEM Q(in_Q);

  RRM F_main = F.topLeftCorner(MEDIM, MEDIM);
  P.topLeftCorner(MEDIM, MEDIM) = (F_main * P.topLeftCorner(MEDIM, MEDIM)) * F_main.transpose();
  P.topRightCorner(MEDIM, EDIM - MEDIM) = F_main * P.topRightCorner(MEDIM, EDIM - MEDIM);
  P.bottomLeftCorner(EDIM - MEDIM, MEDIM) = P.bottomLeftCorner(EDIM - MEDIM, MEDIM) * F_main.transpose();

  P = P + dt*Q;

  // copy out state
  memcpy(in_x, nx, DIM * sizeof(double));
  memcpy(in_P, P.data(), EDIM * EDIM * sizeof(double));
}

// note: extra_args dim only correct when null space projecting
// otherwise 1
template <int ZDIM, int EADIM, bool MAHA_TEST>
void update(double *in_x, double *in_P, Hfun h_fun, Hfun H_fun, Hfun Hea_fun, double *in_z, double *in_R, double *in_ea, double MAHA_THRESHOLD) {
  typedef Eigen::Matrix<double, ZDIM, ZDIM, Eigen::RowMajor> ZZM;
  typedef Eigen::Matrix<double, ZDIM, DIM, Eigen::RowMajor> ZDM;
  typedef Eigen::Matrix<double, Eigen::Dynamic, EDIM, Eigen::RowMajor> XEM;
  //typedef Eigen::Matrix<double, EDIM, ZDIM, Eigen::RowMajor> EZM;
  typedef Eigen::Matrix<double, Eigen::Dynamic, 1> X1M;
  typedef Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic, Eigen::RowMajor> XXM;

  double in_hx[ZDIM] = {0};
  double in_H[ZDIM * DIM] = {0};
  double in_H_mod[EDIM * DIM] = {0};
  double delta_x[EDIM] = {0};
  double x_new[DIM] = {0};


  // state x, P
  Eigen::Matrix<double, ZDIM, 1> z(in_z);
  EEM P(in_P);
  ZZM pre_R(in_R);

  // functions from sympy
  h_fun(in_x, in_ea, in_hx);
  H_fun(in_x, in_ea, in_H);
  ZDM pre_H(in_H);

  // get y (y = z - hx)
  Eigen::Matrix<double, ZDIM, 1> pre_y(in_hx); pre_y = z - pre_y;
  X1M y; XXM H; XXM R;
  if (Hea_fun){
    typedef Eigen::Matrix<double, ZDIM, EADIM, Eigen::RowMajor> ZAM;
    double in_Hea[ZDIM * EADIM] = {0};
    Hea_fun(in_x, in_ea, in_Hea);
    ZAM Hea(in_Hea);
    XXM A = Hea.transpose().fullPivLu().kernel();


    y = A.transpose() * pre_y;
    H = A.transpose() * pre_H;
    R = A.transpose() * pre_R * A;
  } else {
    y = pre_y;
    H = pre_H;
    R = pre_R;
  }
  // get modified H
  H_mod_fun(in_x, in_H_mod);
  DEM H_mod(in_H_mod);
  XEM H_err = H * H_mod;

  // Do mahalobis distance test
  if (MAHA_TEST){
    XXM a = (H_err * P * H_err.transpose() + R).inverse();
    double maha_dist = y.transpose() * a * y;
    if (maha_dist > MAHA_THRESHOLD){
      R = 1.0e16 * R;
    }
  }

  // Outlier resilient weighting
  double weight = 1;//(1.5)/(1 + y.squaredNorm()/R.sum());

  // kalman gains and I_KH
  XXM S = ((H_err * P) * H_err.transpose()) + R/weight;
  XEM KT = S.fullPivLu().solve(H_err * P.transpose());
  //EZM K = KT.transpose(); TODO: WHY DOES THIS NOT COMPILE?
  //EZM K = S.fullPivLu().solve(H_err * P.transpose()).transpose();
  //std::cout << "Here is the matrix rot:\n" << K << std::endl;
  EEM I_KH = Eigen::Matrix<double, EDIM, EDIM>::Identity() - (KT.transpose() * H_err);

  // update state by injecting dx
  Eigen::Matrix<double, EDIM, 1> dx(delta_x);
  dx  = (KT.transpose() * y);
  memcpy(delta_x, dx.data(), EDIM * sizeof(double));
  err_fun(in_x, delta_x, x_new);
  Eigen::Matrix<double, DIM, 1> x(x_new);

  // update cov
  P = ((I_KH * P) * I_KH.transpose()) + ((KT.transpose() * R) * KT);

  // copy out state
  memcpy(in_x, x.data(), DIM * sizeof(double));
  memcpy(in_P, P.data(), EDIM * EDIM * sizeof(double));
  memcpy(in_z, y.data(), y.rows() * sizeof(double));
}



extern "C"{

      void update_25(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea) {
        update<1,3,0>(in_x, in_P, h_25, H_25, NULL, in_z, in_R, in_ea, MAHA_THRESH_25);
      }
    
      void update_24(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea) {
        update<2,3,0>(in_x, in_P, h_24, H_24, NULL, in_z, in_R, in_ea, MAHA_THRESH_24);
      }
    
      void update_30(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea) {
        update<1,3,0>(in_x, in_P, h_30, H_30, NULL, in_z, in_R, in_ea, MAHA_THRESH_30);
      }
    
      void update_26(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea) {
        update<1,3,0>(in_x, in_P, h_26, H_26, NULL, in_z, in_R, in_ea, MAHA_THRESH_26);
      }
    
      void update_27(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea) {
        update<1,3,0>(in_x, in_P, h_27, H_27, NULL, in_z, in_R, in_ea, MAHA_THRESH_27);
      }
    
      void update_29(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea) {
        update<1,3,0>(in_x, in_P, h_29, H_29, NULL, in_z, in_R, in_ea, MAHA_THRESH_29);
      }
    
      void update_28(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea) {
        update<2,3,0>(in_x, in_P, h_28, H_28, NULL, in_z, in_R, in_ea, MAHA_THRESH_28);
      }
    
}
