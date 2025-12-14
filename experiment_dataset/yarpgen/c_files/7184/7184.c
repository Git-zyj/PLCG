/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_18 = (max(var_18, ((max((max((min(12982575760712677243, 12982575760712677243)), ((max(0, (arr_1 [i_0] [i_0])))))), ((max(((-740004748568413724 ? -2122548361562029155 : 4294967287)), var_13))))))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_19 = 30846;
                                arr_15 [i_0] [i_1] [i_1] [i_1] [i_0] [i_0] = ((((min((arr_11 [i_2] [i_1] [i_4] [i_2] [i_1]), ((-1 ? var_2 : (arr_10 [1] [i_1] [i_1] [3] [i_4] [i_4])))))) ? var_7 : (min(-635324668, 14))));
                                arr_16 [i_1] = ((((min(3225365154455247207, 4294967295))) ? ((var_0 ? (arr_12 [i_0]) : (arr_7 [i_2 - 2] [i_1] [i_2 + 1] [i_2 - 2]))) : (((min(511, ((min((arr_2 [i_0] [i_0] [i_0]), var_6)))))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        {
                            arr_21 [i_6] [i_0] [i_1] [i_1] [i_1] [i_0] = (max(-28611, -28611));
                            arr_22 [4] [i_6] [4] [4] &= ((!((max((arr_8 [i_0] [i_1]), (~9))))));
                            var_20 = (max(var_20, ((max((min((arr_3 [1]), var_14)), (((arr_17 [i_0] [i_0] [1] [1]) >> (((71 != (arr_2 [7] [1] [6])))))))))));
                        }
                    }
                }
                arr_23 [i_0] [i_1] [i_1] = var_15;
            }
        }
    }
    var_21 = (min(var_17, var_15));
    #pragma endscop
}
