/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_10 += (min((max(8388604, (max(var_6, var_4)))), (((-105 < (25728 - -103))))));
                            var_11 -= arr_4 [i_0] [i_0] [i_0];
                            var_12 = ((!((!((max(17, var_0)))))));
                            var_13 = var_3;
                        }
                    }
                }

                for (int i_4 = 4; i_4 < 15;i_4 += 1)
                {
                    var_14 = (min(var_14, ((-116 ? 261120 : (~-261121)))));
                    var_15 = -116;
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_16 &= ((((arr_4 [i_4 - 1] [i_4 - 1] [i_4 - 1]) > (arr_17 [9] [i_6] [i_5 - 2] [i_4] [i_1 - 2] [i_0]))));
                                var_17 = (min(var_17, 9223372036854775807));
                            }
                        }
                    }
                }
                for (int i_7 = 2; i_7 < 16;i_7 += 1)
                {
                    var_18 &= (((((!(~-1597879021)))) != ((((min(1762088951, var_4))) ? (arr_19 [i_1 - 3]) : -7505))));
                    var_19 = (((((!(arr_14 [i_7 + 2] [i_7] [i_7 - 2] [i_1 - 2])))) % (214 || 9806406686978553696)));
                }
                var_20 = ((((var_3 ^ (107 <= 120))) / -1597879021));
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 15;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 17;i_10 += 1)
                        {
                            {
                                arr_28 [i_0] [i_0] [i_8] [i_9] = (max(((((arr_24 [i_10 - 3] [i_0] [i_8] [i_1] [i_0]) || ((((arr_17 [i_0] [i_0] [i_0] [14] [i_0] [i_0]) / 31)))))), (((arr_23 [i_1 - 2]) - -116))));
                                var_21 = ((-120 - (max(var_9, (max(69, 3287875020))))));
                                var_22 = ((((43157 ? -2163 : 575012628))));
                                arr_29 [i_10] [0] [i_0] [i_0] [i_1 + 2] [i_0] = ((((((arr_18 [i_10 + 2] [i_10] [i_10 + 2] [i_10] [i_10]) / -2))) ? ((98 ? 65535 : 0)) : ((max(42600, 28804)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = var_5;
    #pragma endscop
}
