/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_1 - 1] [3] [i_0] [i_0] [i_2 - 2] = ((-1745159198 ? 45336 : 0));
                            arr_10 [i_3] [i_3] [i_0] = min((max(var_12, var_5)), (min(var_6, (min(var_7, (arr_4 [1] [i_2 - 4] [i_3]))))));
                            arr_11 [i_3] [i_2 + 1] [i_0] [i_0] [i_0] [i_0] = (((-80 + -80) || (((arr_6 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 - 1]) != var_5))));
                            arr_12 [i_0] = var_2;
                            var_13 -= max(((-(var_4 / 79))), (min(67108863, (min(64, var_8)))));
                        }
                    }
                }
                arr_13 [i_0] [0] = ((2570028960195203727 > ((max(85, (arr_6 [i_1] [i_1] [i_1 + 1] [i_1 - 1]))))));
            }
        }
    }
    var_14 = min(var_8, (((!((max(var_11, 1508722507)))))));
    #pragma endscop
}
