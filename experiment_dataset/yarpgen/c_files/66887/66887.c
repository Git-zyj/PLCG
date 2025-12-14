/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_12 [i_2] [i_2] [i_2] [i_1] [i_2] = ((((2073217411 ? 12251734821676793641 : 7684)) - -7106788307454574903));
                            var_20 = (arr_6 [i_0] [3] [5]);
                            var_21 = (max(var_21, (min(((((arr_10 [i_0] [i_0 + 1] [i_0 + 1]) - (min(var_16, (arr_10 [i_1] [i_1 + 1] [11])))))), (min((min(0, var_2)), (arr_6 [i_0] [i_2] [i_3])))))));
                        }
                    }
                }
                var_22 *= ((!((!((min(var_8, var_17)))))));
                arr_13 [i_1] [i_1] = -0;
            }
        }
    }
    var_23 = 138;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 4; i_5 < 22;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 20;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        {
                            var_24 = (((arr_18 [i_5 - 3] [i_5 - 4] [i_5 - 4]) | var_6));
                            var_25 = ((((min(12457970116640838862, 127))) || (arr_25 [i_5 + 1] [i_5 - 3] [i_5 + 1] [i_5 + 1])));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            {
                                var_26 = ((((max((arr_14 [i_5 - 3]), (arr_14 [i_5 + 1])))) ? (arr_14 [i_5 + 1]) : (~var_17)));
                                var_27 ^= var_12;
                                var_28 = (~var_18);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 23;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 23;i_12 += 1)
                    {
                        {
                            arr_44 [i_12] = ((((-(arr_32 [i_4] [i_4] [i_4] [i_4]))) & (((arr_32 [i_12] [i_11 - 1] [i_5 - 2] [i_4]) ? (arr_32 [i_4] [i_5] [i_11] [i_11]) : (arr_32 [21] [14] [i_11 - 1] [i_11])))));
                            arr_45 [i_4] [i_4] [i_12] [14] = (120 + 16);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
