/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= (min(var_7, var_9));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_12 = (((((min(var_4, (arr_5 [i_0] [i_0] [i_0]))))) ^ (arr_4 [13])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] = (min(-1959677853, (((((15 ? 240 : 238)) > 240)))));
                                var_13 = var_6;
                                var_14 *= var_0;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 2; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            {
                                var_15 = ((((((((34 ? (arr_20 [i_5]) : -91))) ? ((-91 ? 123 : 91)) : (arr_21 [i_5] [1] [i_7] [i_6] [i_5])))) + (((arr_9 [i_5] [i_6] [i_7] [i_8] [9] [i_9]) + -var_7))));
                                var_16 = max(((max(88, 77))), (min(var_4, (max(-4861039220890030653, var_5)))));
                                arr_25 [i_9] [i_8] [i_5] [i_5] [i_6] [i_5] = (min((-1 || 123), (max(((((((arr_19 [i_5] [i_6] [i_7] [i_8]) + 2147483647)) >> (-7873 + 7899)))), ((var_5 ? (arr_15 [i_7]) : 15240189908575172775))))));
                                var_17 = (max(((((arr_18 [i_5]) < (((arr_24 [i_5] [i_6] [i_5] [i_8] [i_9]) ? (arr_5 [i_9] [0] [0]) : (arr_20 [i_8])))))), var_2));
                            }
                        }
                    }
                }
                var_18 = (arr_1 [i_5]);
            }
        }
    }
    #pragma endscop
}
