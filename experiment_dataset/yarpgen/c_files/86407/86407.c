/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [14] [3] = var_3;
                var_12 = (max(var_9, ((((min(0, (arr_4 [i_1] [i_1] [i_0])))) ? (-127 - 1) : 9223372036854775807))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 19;i_3 += 1)
        {
            {
                var_13 = (max(var_13, (arr_6 [12] [i_3])));

                for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
                {
                    var_14 = (!5785667564456541164);
                    var_15 = (max(var_15, ((((max(721084554, 255)) & ((((~50389) ? 59924 : ((var_11 ? var_2 : (arr_12 [i_3])))))))))));
                }
                for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                {
                    arr_18 [9] [1] = ((((((((arr_7 [i_2]) ^ var_0))) ? (arr_16 [i_3] [9] [1] [i_3]) : 8507390886286024256)) > var_0));
                    var_16 = (max((arr_9 [18]), (min(((max(var_11, var_11))), (min(-6546145612440496262, (arr_16 [2] [1] [i_3] [i_3])))))));
                }
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    arr_21 [i_2] [i_3] [i_6] [14] = var_11;
                    arr_22 [4] [i_3] [21] [1] = ((~(arr_8 [5])));
                    var_17 = (max(((-((170 ? var_8 : var_11)))), (max((((arr_8 [i_6]) ? 17301295723724258218 : (arr_8 [i_6]))), (arr_12 [i_3 - 1])))));

                    for (int i_7 = 2; i_7 < 18;i_7 += 1)
                    {
                        arr_26 [i_7] [i_7] [1] [11] [11] = ((-(var_5 / var_4)));
                        var_18 = (+((((((arr_25 [16] [i_3] [i_6] [13]) ? (arr_25 [16] [8] [8] [8]) : var_3))) ? ((min(64, var_7))) : (min((arr_17 [i_2] [i_2] [i_2]), var_10)))));
                        arr_27 [i_7] = 1;
                    }
                    var_19 = ((((((((arr_16 [i_3] [i_3 - 2] [i_6] [i_3 + 1]) + 2147483647)) << var_6))) ? ((var_11 ? var_4 : (arr_16 [i_6] [i_6] [8] [i_3 + 1]))) : ((((arr_20 [i_2] [2] [i_6]) ? (arr_20 [i_3] [1] [i_6]) : (arr_23 [i_3] [i_3] [i_2] [i_3 + 1] [i_3]))))));
                }
                var_20 = (((((var_11 ^ ((51971 ? (arr_24 [14]) : (-9223372036854775807 - 1)))))) ? 251 : var_8));
            }
        }
    }
    #pragma endscop
}
