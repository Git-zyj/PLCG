/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] = -9223372036854775807;
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_2] [i_4] |= (~4294967295);
                                var_18 = ((0 ? (arr_14 [i_0] [i_3] [i_2 - 2] [i_3] [i_4 + 2]) : ((max((arr_14 [i_0] [i_3] [i_2 + 2] [i_1] [i_4 + 2]), (arr_14 [i_0] [i_3] [i_2 + 1] [i_3] [i_4 + 2]))))));
                            }
                        }
                    }
                }
                var_19 = ((arr_8 [i_0] [i_0] [i_1] [i_1]) ? (((arr_8 [i_0] [i_0] [i_0] [12]) ? (arr_8 [i_0] [i_0] [i_1] [9]) : 88)) : (((arr_8 [7] [i_1] [i_1] [i_1]) ? 248 : (arr_8 [6] [i_1] [i_1] [3]))));
                var_20 = (((((min(0, 3191768465117738651))) ? (arr_10 [i_1] [i_1] [i_1] [i_0]) : -1089387724)));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 10;i_6 += 1)
                    {
                        {
                            var_21 = ((-(arr_1 [12] [i_1])));
                            var_22 = ((((((!125) ? (arr_10 [i_0] [i_6] [i_6] [i_0]) : -15))) ? (((!(arr_0 [i_1])))) : ((16 ? 70 : (arr_8 [i_6 - 1] [i_6 + 2] [i_6 + 1] [i_6 + 2])))));
                            var_23 = 4463532564444907384;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
