/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 = (min(var_8, -1289493711));
                    arr_8 [i_0] [i_1] [i_0 + 2] = 85;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_13 = (max(var_13, (((-((((2130760002695776770 >= 36) != var_10))))))));
                                var_14 -= (max((max(((494343899 ? var_0 : (arr_0 [i_1]))), (!var_9))), (((((var_8 ? 1032 : var_4)) | (arr_12 [1] [i_1] [18] [14]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = ((var_0 || ((min(var_6, ((var_5 ? var_1 : var_9)))))));
    var_16 = (!var_11);
    #pragma endscop
}
