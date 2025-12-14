/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_5 [i_0] [i_1] [i_1] = (min((((var_1 ? (~159) : (arr_3 [i_1])))), ((-(arr_0 [i_0])))));
            arr_6 [i_0] |= ((~(arr_4 [16] [i_0])));
        }
        var_10 = -175;
        var_11 = (((arr_2 [1]) + 182));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {

            for (int i_4 = 3; i_4 < 20;i_4 += 1)
            {
                arr_16 [7] [i_3] [i_4] [i_3] = (196 ? (arr_12 [i_2] [i_4 + 4]) : ((((arr_4 [i_3] [i_3]) & var_1))));

                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    var_12 = (((!var_4) ? var_3 : (arr_19 [i_2] [i_3 + 3] [i_4] [i_5])));
                    var_13 = (min(var_13, (arr_10 [i_5])));
                }
            }
            arr_20 [i_2] [i_3] = var_8;
            var_14 = (((arr_2 [i_3]) != (arr_0 [i_2])));
        }
        arr_21 [i_2] = (arr_13 [i_2] [i_2]);
        var_15 = (arr_0 [i_2]);
    }
    for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
    {

        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            arr_29 [i_6] [i_7] [i_7] = (((arr_9 [i_7]) ^ ((15516643324014747173 ? 2930100749694804466 : ((((arr_17 [i_6] [19] [i_7] [i_6] [19] [i_7]) + 3648244307)))))));
            var_16 = (min((~20), ((((arr_22 [i_6]) ^ (arr_11 [i_7] [i_7]))))));
        }
        var_17 = ((((!((min((arr_12 [i_6] [i_6]), 1))))) || ((((((114 ? (arr_0 [i_6]) : var_0))) ? ((9619544990235451999 ? var_6 : var_5)) : ((((arr_2 [i_6]) ? var_7 : 65535))))))));
        arr_30 [i_6] = (((min((arr_10 [i_6]), (arr_2 [i_6]))) | var_3));
        var_18 |= (((~16) & (arr_8 [i_6] [i_6])));
        arr_31 [i_6] = ((-((~(min((arr_27 [i_6]), (arr_1 [i_6])))))));
    }
    var_19 = var_8;
    var_20 = 25870;
    var_21 = ((-909272415 ? 5665479520390389035 : 117));
    var_22 += var_1;
    #pragma endscop
}
