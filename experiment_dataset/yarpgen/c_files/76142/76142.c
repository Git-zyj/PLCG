/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 1856437608;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_20 = (min((((arr_11 [i_3 + 1] [i_1] [i_1 - 2] [15] [i_4 + 2]) ? 127 : (arr_6 [i_3 - 2] [4] [i_1 - 1]))), (((1856437604 <= ((1856437608 - (arr_6 [i_0] [i_1] [1]))))))));
                                var_21 = (max(var_21, (((((arr_8 [i_0] [i_0] [6]) % (arr_13 [i_4 + 1] [i_2] [i_2] [12] [i_4] [10]))) > (((arr_10 [i_1] [i_2] [i_1 - 3]) >> 16))))));
                                var_22 -= ((((max(17, 2438529673))) ? ((min((arr_11 [i_4] [i_2] [i_4 - 1] [i_4 - 1] [i_4 - 1]), (arr_11 [4] [i_2] [i_4 - 2] [i_4 + 2] [i_4])))) : (arr_11 [i_4] [i_2] [i_4 + 1] [i_4 - 1] [i_4 + 2])));
                                var_23 = (arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4 + 1]);
                            }
                        }
                    }
                }
                var_24 -= ((((!var_7) >> (((arr_3 [i_1]) - 22753)))));
            }
        }
    }
    #pragma endscop
}
