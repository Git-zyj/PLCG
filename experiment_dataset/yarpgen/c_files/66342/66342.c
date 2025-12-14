/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((var_3 & var_6) - (var_1 / var_0))) > var_10));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = (var_8 % var_8);
        var_13 = ((((var_6 >= (min(9568564340210778828, 3392875442624447003)))) ? var_3 : var_6));
        var_14 = (max((var_5 == var_3), (((max(var_8, var_1)) == ((min(var_5, var_7)))))));
        arr_2 [i_0] [i_0] = ((min(var_5, var_6)) % ((((((var_6 ? var_3 : var_6))) / var_0))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (max((((var_6 == (max(var_6, var_1))))), ((min(var_3, var_0)))));
        var_15 = (min((var_3 ^ var_0), ((var_3 ? var_6 : var_9))));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {
        var_16 = ((((((min(var_0, var_0)))) + var_7)));
        var_17 *= var_7;
        var_18 *= ((11091 ? 1 : 32767));
        arr_9 [i_2] = (max((((7193826357383046097 - 7193826357383046125) << (min(1, 11252917716326505491)))), var_5));
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] [7] = (((var_0 | var_10) < var_9));
        var_19 = 7193826357383046097;
        arr_13 [i_3] = var_1;
        var_20 = ((((var_0 % var_1) | (var_1 | var_9))));
    }
    var_21 = ((((var_2 & ((var_3 ? var_2 : var_9)))) & (var_9 & var_1)));
    var_22 *= var_4;
    #pragma endscop
}
