/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_21 -= ((!(!6082063501785712921)));
                    arr_8 [i_2] [i_1] [i_2] [i_2] = (((arr_4 [i_2] [10] [i_1] [i_2 + 1]) ? ((~(min((arr_7 [i_0] [10] [10] [10]), 0)))) : (!48584)));
                    var_22 = (max(var_22, (arr_5 [15])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_23 = (min(var_23, (max((arr_6 [i_0 + 3] [i_1] [i_0]), (~60424)))));
                                var_24 += (arr_11 [1] [i_4] [15] [i_4] [i_4]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = min(var_12, (((!((min(var_14, 113)))))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {
            {
                var_26 = (arr_17 [i_6 + 1] [i_6] [14]);
                arr_18 [i_6] [i_6] [i_6] = 0;
            }
        }
    }
    var_27 |= 137;
    #pragma endscop
}
