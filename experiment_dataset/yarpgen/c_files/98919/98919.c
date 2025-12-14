/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_18 = (arr_0 [i_0]);
                arr_4 [i_1] = (!88);
                var_19 = (max(var_19, ((((((((!(arr_3 [i_1]))) && ((max((arr_3 [i_1]), 427344247)))))) ^ -5812)))));
                arr_5 [i_1] = (17358177790376843529 && 4294967295);
            }
        }
    }

    for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] [i_2] = ((1088566283332708086 << ((((+(((arr_2 [i_2]) ? (arr_3 [i_2]) : (arr_0 [16]))))) + 26375))));
        arr_10 [1] [i_2] = ((!(!10395163135534913206)));
        arr_11 [i_2] = ((!(arr_7 [i_2])));
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
    {
        var_20 = (max(var_20, ((((((min(var_5, -5809)) ? 22840 : var_6)))))));
        arr_14 [i_3] = var_3;
        var_21 = (max(var_21, ((min((((!-6568868205756703256) ? var_17 : 17358177790376843542)), (arr_8 [i_3] [i_3]))))));
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
    {
        arr_19 [i_4] = ((((max(var_0, var_4))) ? ((-5795 ? (max(var_6, (arr_2 [i_4]))) : (((min((arr_16 [i_4]), var_1)))))) : ((9380993476013763249 ^ (9380993476013763237 * -5812)))));
        arr_20 [i_4] = (max(((((((var_7 ? var_4 : -89))) ? (((arr_3 [i_4]) ^ -89)) : (0 ^ var_3)))), -4164230181454524979));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 22;i_6 += 1)
            {
                {
                    var_22 = ((!(arr_23 [i_4])));
                    arr_25 [i_4] [i_4] [i_4] = var_12;

                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        var_23 = 18446744073709551615;
                        var_24 = var_12;
                        arr_29 [i_5] = ((!((min((((arr_12 [i_4] [i_5]) << (((arr_15 [i_7]) + 95)))), (((arr_18 [i_5]) << (2376061408 - 2376061395))))))));
                        arr_30 [i_4] [i_4] [i_5] [i_6] [i_7] [i_7] = ((+(max((((arr_1 [i_4]) ? var_15 : (arr_26 [i_4] [i_5] [i_6] [i_6]))), (-10 && -109)))));
                    }
                }
            }
        }
        arr_31 [i_4] [i_4] = (max(((-(arr_24 [i_4] [i_4] [12] [i_4]))), (((var_3 && 4164230181454524979) ? ((max(var_17, (arr_3 [i_4])))) : (88 && 60537)))));
    }
    var_25 = var_5;
    var_26 &= var_5;
    #pragma endscop
}
