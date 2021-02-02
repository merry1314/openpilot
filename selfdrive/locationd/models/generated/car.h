/******************************************************************************
 *                       Code generated with sympy 1.7                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                         This file is part of 'ekf'                         *
 ******************************************************************************/
void err_fun(double *nom_x, double *delta_x, double *out_7372740310477700999);
void inv_err_fun(double *nom_x, double *true_x, double *out_6622503638637858579);
void H_mod_fun(double *state, double *out_1295311499313815329);
void f_fun(double *state, double dt, double *out_5248883109346528839);
void F_fun(double *state, double dt, double *out_980416393684475030);
void h_25(double *state, double *unused, double *out_4617630069697255171);
void H_25(double *state, double *unused, double *out_6933966286722968177);
void h_24(double *state, double *unused, double *out_3813107835189735500);
void H_24(double *state, double *unused, double *out_2804244840872331147);
void h_30(double *state, double *unused, double *out_5332453322748556453);
void H_30(double *state, double *unused, double *out_2679932624226215103);
void h_26(double *state, double *unused, double *out_6858466029001947909);
void H_26(double *state, double *unused, double *out_1194172770042952497);
void h_27(double *state, double *unused, double *out_8033903359346325187);
void H_27(double *state, double *unused, double *out_3967514612062840415);
void h_29(double *state, double *unused, double *out_3642005488012875493);
void H_29(double *state, double *unused, double *out_6503731393355047056);
void h_28(double *state, double *unused, double *out_8818691484559768033);
void H_28(double *state, double *unused, double *out_4213587637364163719);
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
void set_mass(double x);

void set_rotational_inertia(double x);

void set_center_to_front(double x);

void set_center_to_rear(double x);

void set_stiffness_front(double x);

void set_stiffness_rear(double x);
