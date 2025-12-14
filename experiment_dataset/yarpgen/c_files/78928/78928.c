/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, var_17));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_21 = ((max((((arr_3 [11]) ? 1 : var_11)), ((((arr_3 [i_0]) <= 21))))));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    arr_8 [i_1] [12] [i_2] = (((((((max(3028663844, 7035724304852174463))) ? (arr_1 [i_0 - 1]) : (arr_2 [i_1])))) ? (((1493161625 != 0) % (arr_6 [i_0 + 3] [1]))) : (((((arr_7 [11] [i_1] [15]) != ((((arr_1 [5]) < (arr_4 [9] [1]))))))))));
                    var_22 += (arr_3 [8]);
                    arr_9 [i_0] [13] [i_0] [i_1] = (((((!((!(arr_5 [i_1] [i_1] [i_0] [i_1])))))) << ((((-(arr_4 [i_0 - 1] [i_0 - 1]))) - 17888173719354184447))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
    {
        var_23 = (min(var_23, ((((arr_11 [2]) ? ((((((0 ? (arr_11 [i_3]) : (arr_11 [22])))) || ((min(25415, var_13)))))) : ((((max((arr_10 [1] [i_3]), var_10))) ? ((-(arr_10 [i_3] [i_3]))) : (~var_14))))))));
        var_24 += ((!(((-(arr_11 [i_3]))))));
        /* LoopNest 2 */
        for (int i_4 = 4; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 21;i_5 += 1)
            {
                {
                    var_25 = (arr_10 [i_4] [2]);
                    var_26 = ((((max(((max(var_3, 40098))), var_1))) ? var_17 : (arr_14 [i_4 - 2] [i_5 - 1] [i_4])));

                    for (int i_6 = 2; i_6 < 22;i_6 += 1)
                    {
                        var_27 += ((((+(((arr_18 [i_3] [i_4] [i_5] [i_6] [i_3] [i_6]) / var_6)))) * (arr_13 [11])));
                        var_28 = (arr_11 [17]);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
    {
        var_29 = (((arr_11 [i_7]) ? 25461 : ((7 ? var_16 : (arr_17 [i_7] [i_7])))));
        arr_24 [2] [i_7] = ((+((65535 ? (arr_10 [i_7] [i_7]) : -3318219864203849798))));
    }
    var_30 = -var_2;
    #pragma endscop
}
