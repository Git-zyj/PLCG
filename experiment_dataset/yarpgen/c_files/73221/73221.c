/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_15 = var_2;
        arr_2 [i_0] = (((((max((arr_1 [i_0] [i_0 - 2]), 39))) ? (((arr_0 [i_0] [i_0]) / -9191450469020048902)) : 7378411708277554158)));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_16 -= ((8191 - (((((arr_0 [i_0] [i_1]) + 2147483647)) << (((-9191450469020048902 + 9191450469020048921) - 19))))));
            arr_5 [i_0] [i_1] = (((((((0 ? var_11 : (arr_0 [i_1] [i_0])))) ? var_8 : (((var_7 ? -9191450469020048902 : 1)))))) ? (((arr_0 [i_0] [i_0]) / -9191450469020048902)) : var_4);

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {

                for (int i_3 = 2; i_3 < 14;i_3 += 1)
                {
                    var_17 = (max(var_17, (((((((~var_11) == (arr_6 [i_1] [i_2])))) << (((((((arr_9 [1] [i_1] [i_1] [i_1] [i_1]) ? (arr_6 [i_3] [i_3]) : var_0))) >= ((-177298482050166899 ? -1890425252 : 1485077187047799152))))))))));
                    arr_10 [i_0] [i_0 + 2] [i_0] [13] [3] = ((((var_11 ? var_14 : (arr_0 [i_0 + 1] [i_0])))) ? var_5 : ((9191450469020048876 / (max(var_3, (arr_4 [0] [i_0 + 1]))))));
                }
                for (int i_4 = 1; i_4 < 14;i_4 += 1)
                {
                    var_18 = ((((((((var_9 >= (arr_1 [i_0 - 2] [i_4 + 1])))) < (var_9 + 0))))));

                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_19 = (max(var_19, 33671));
                        var_20 -= var_13;
                        arr_15 [i_0] [i_0] = max(-402562701, 8366113754894006626);
                    }
                }
                var_21 -= (max((arr_8 [10] [i_1] [i_2] [i_1] [i_0 + 2] [i_2]), (((~(max(9191450469020048876, var_11)))))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        {
                            var_22 = (-402562701 & 402562695);
                            var_23 = 9191450469020048864;
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {
        var_24 = (min(var_24, var_3));
        var_25 -= 255;
        var_26 -= (arr_22 [i_8]);
    }
    var_27 = max(9191450469020048876, ((((402562695 ? var_7 : var_0)))));
    var_28 = var_6;
    #pragma endscop
}
