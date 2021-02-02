/******************************************************************************
 *                       Code generated with sympy 1.7                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                         This file is part of 'ekf'                         *
 ******************************************************************************/
void err_fun(double *nom_x, double *delta_x, double *out_8171570567150658935);
void inv_err_fun(double *nom_x, double *true_x, double *out_1963878815502533435);
void H_mod_fun(double *state, double *out_5449567751527891540);
void f_fun(double *state, double dt, double *out_2342854222697519216);
void F_fun(double *state, double dt, double *out_4643262754148727106);
void h_3(double *state, double *unused, double *out_9204311811350729283);
void H_3(double *state, double *unused, double *out_6853412558774720959);
void h_4(double *state, double *unused, double *out_1118940463389066933);
void H_4(double *state, double *unused, double *out_8542942747685979575);
void h_9(double *state, double *unused, double *out_2085234605821483660);
void H_9(double *state, double *unused, double *out_3182938399168347943);
void h_10(double *state, double *unused, double *out_2800647105937091686);
void H_10(double *state, double *unused, double *out_7124160486108102621);
void h_12(double *state, double *unused, double *out_1923088844020567627);
void H_12(double *state, double *unused, double *out_3398888431299994344);
void h_31(double *state, double *unused, double *out_8228339498858276287);
void H_31(double *state, double *unused, double *out_6073978206443414165);
void h_32(double *state, double *unused, double *out_8691584831623661773);
void H_32(double *state, double *unused, double *out_8788666103659906948);
void h_13(double *state, double *unused, double *out_5524682385895659615);
void H_13(double *state, double *unused, double *out_4146362891059433829);
void h_14(double *state, double *unused, double *out_2085234605821483660);
void H_14(double *state, double *unused, double *out_3182938399168347943);
void h_19(double *state, double *unused, double *out_1701177184287374982);
void H_19(double *state, double *unused, double *out_8295770740568940063);
#define DIM 23
#define EDIM 22
#define MEDIM 22
typedef void (*Hfun)(double *, double *, double *);

void predict(double *x, double *P, double *Q, double dt);
const static double MAHA_THRESH_3 = 3.841459;
void update_3(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_4 = 7.814728;
void update_4(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_9 = 7.814728;
void update_9(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_10 = 7.814728;
void update_10(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_12 = 7.814728;
void update_12(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_31 = 7.814728;
void update_31(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_32 = 9.487729;
void update_32(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_13 = 7.814728;
void update_13(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_14 = 7.814728;
void update_14(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_19 = 7.814728;
void update_19(double *, double *, double *, double *, double *);