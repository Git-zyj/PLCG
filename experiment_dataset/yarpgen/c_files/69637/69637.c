/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= ((var_0 ? ((((min(var_2, -17))) + (!8951))) : ((((max(var_8, 47873))) ? ((max(-31487, var_13))) : ((var_11 ? var_10 : var_6))))));
    var_20 = var_3;
    var_21 = (!1);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_22 = ((((((arr_3 [i_0 + 1]) & 1364276381355716445))) ? (((arr_3 [i_0 + 1]) ? var_17 : (arr_3 [i_0 + 1]))) : (arr_3 [i_0 + 1])));
                arr_5 [i_0] = (min((arr_0 [i_0 + 1] [i_0 - 1]), (arr_0 [i_1] [i_0 + 1])));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_1] [i_0] = -1479097754;
                                var_23 = ((-14875 ? (arr_3 [i_0 + 1]) : (arr_3 [i_0 + 1])));
                                var_24 = (((((~((var_18 ? 237 : (arr_4 [2] [i_0])))))) ? (min(-20076, (arr_4 [i_0 - 1] [i_0]))) : 16383));
                                var_25 = (((-16167 / 6211608086239179201) > ((((arr_0 [i_4 + 1] [i_0 - 1]) ? (arr_0 [i_4 - 1] [i_0 + 1]) : var_14)))));
                                var_26 = max(38, (((64 ? 29261 : 32288))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = ((((min(var_17, -2970772715216342290))) ? (((min(var_14, -1350459737)))) : (min((min(var_4, 1364276381355716445)), (min(var_3, 1))))));
    #pragma endscop
}
