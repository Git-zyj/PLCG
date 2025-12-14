/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max((((!(((var_3 ? -134422249 : var_2)))))), var_11));
    var_14 = var_10;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = ((10978766685606206291 | ((~((var_12 ? var_6 : var_2))))));
        arr_3 [i_0] = var_12;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_16 = (((((var_6 ? -3738772251129736851 : 3738772251129736851))) ? -49 : (max(var_3, (-16 & var_0)))));
        arr_6 [2] |= (min((((~var_5) ? ((-3738772251129736860 ? 7581636495507821568 : 1)) : (((-3738772251129736866 ? -13175 : -3738772251129736860))))), var_1));
    }
    /* vectorizable */
    for (int i_2 = 4; i_2 < 19;i_2 += 1)
    {
        var_17 += var_5;
        var_18 &= ((254 ? (var_10 & var_0) : var_11));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        arr_13 [i_3] = ((-3738772251129736870 & var_9) || (((16942589071943807492 ? -19 : 16777208))));
        var_19 = 3738772251129736830;
        arr_14 [i_3] = -3738772251129736860;
    }
    #pragma endscop
}
