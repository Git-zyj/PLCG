/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    var_11 = (max((-32767 - 1), (var_9 * 32737)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_12 &= (~var_2);
                                var_13 = (((13612110057891253856 ^ 1141851550) < (((((-32757 ^ 0) == ((2305843009213693951 ? 0 : (arr_4 [i_0])))))))));
                            }
                        }
                    }
                    arr_14 [i_2] [i_0] = (max(2, (((arr_8 [i_2]) ? var_9 : (arr_8 [i_2])))));
                    arr_15 [i_2 + 1] [i_2] [i_2] [i_0] = (arr_11 [i_0]);
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_21 [i_6] [i_5 - 2] [i_2] [0] [i_2] [1] [i_0] = ((((var_6 ? 1 : (arr_11 [i_6 - 2])))) ? (max((arr_11 [i_6 - 2]), (arr_11 [i_6 - 2]))) : (arr_11 [i_6 + 1]));
                                arr_22 [i_2] [16] [i_0] [i_2] = (i_2 % 2 == 0) ? ((min(((2 >> (((arr_17 [i_2 + 1] [i_5 - 1] [i_2 + 1] [i_2] [i_6 - 1] [i_6 + 1]) - 31823)))), ((max(109, 120)))))) : ((min(((2 >> (((((arr_17 [i_2 + 1] [i_5 - 1] [i_2 + 1] [i_2] [i_6 - 1] [i_6 + 1]) - 31823)) + 25527)))), ((max(109, 120))))));
                                var_14 = ((-57 ? 68 : 99));
                                var_15 = ((arr_9 [i_5 - 2] [i_2] [i_2] [i_0]) ? (((arr_3 [i_2 - 1]) ? (arr_3 [i_2 + 1]) : var_8)) : (((((arr_19 [1] [i_5] [i_2 + 1] [i_2 + 1] [i_1] [i_0] [i_0]) <= var_7)))));
                            }
                        }
                    }
                    var_16 = ((16 ? -8151875658248350036 : 32756));
                }
            }
        }
    }
    #pragma endscop
}
