/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (65529 + ((-((var_7 ? 1 : var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_12 = 1;

                            for (int i_4 = 0; i_4 < 25;i_4 += 1)
                            {
                                var_13 ^= 3340596321636027473;
                                arr_11 [i_0] [i_1] [i_1] [i_0] [23] = -40;
                            }
                            for (int i_5 = 0; i_5 < 25;i_5 += 1)
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_2] [i_0] [i_3] = min(0, 1);
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 1;
                                arr_16 [i_0] [i_0] [i_0] = (((+-1) + 0));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        {
                            arr_22 [13] [i_1] [i_0] [8] = max((~1), var_1);
                            var_14 = (min((((!1) + ((min(45657, (arr_0 [6])))))), ((min(var_7, 242)))));
                            var_15 += (max(((32768 + ((min(1, 0))))), var_0));
                            var_16 = 1;
                            arr_23 [i_0] [i_0] [i_0] [i_0] [1] [i_0] = max((max(1, var_6)), (((!(arr_10 [i_1] [i_0] [i_1] [i_6 - 2] [i_1] [i_6] [i_6 + 2])))));
                        }
                    }
                }
            }
        }
    }
    var_17 = (min(((~((1 ? 1 : var_4)))), ((25 ? -1 : (max(-1098086726, 76))))));
    var_18 = (~0);
    #pragma endscop
}
