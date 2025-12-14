/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_11 = ((max((-23524 - var_5), (!12282586844590278447))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [i_2] [i_2] [i_2] [i_2] [i_2] = (max((arr_5 [i_0] [i_1] [i_3] [i_4]), (((max(12282586844590278447, var_9))))));
                                arr_13 [i_2] [i_1] [i_2] [i_3] [i_2] [i_4] = (((6164157229119273168 * 127) || (6164157229119273168 != 6164157229119273168)));
                                arr_14 [i_2] = ((!(((min(12282586844590278448, 127))))));
                                arr_15 [i_0] [i_1] [i_1] [i_3] [i_2] = (arr_5 [i_0] [i_2] [i_3] [i_4]);
                            }
                        }
                    }
                    arr_16 [i_2] = var_5;
                    arr_17 [i_2] [i_2] = (arr_9 [i_0] [i_1] [i_1] [i_1] [i_1] [i_2]);
                }
            }
        }
    }
    var_12 += (12282586844590278447 * var_3);
    var_13 = (((((~(var_1 / 3)))) ? ((((((min(var_1, 229)))) - (min(var_3, -127))))) : (min(var_9, var_9))));
    var_14 = (max(var_5, var_10));
    #pragma endscop
}
