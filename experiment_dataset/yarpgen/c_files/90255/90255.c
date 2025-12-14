/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_19;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        arr_11 [i_3] [i_1] [i_2] [i_1] = (arr_2 [i_0 - 1] [i_3 + 1]);
                        var_21 = var_19;
                    }
                    var_22 ^= max(((((arr_0 [i_0] [i_0]) < (arr_0 [i_0 + 1] [i_0 + 1])))), (arr_8 [i_0] [i_0] [i_0 - 1] [0] [i_0 - 1] [i_0]));
                }
            }
        }
    }

    for (int i_4 = 1; i_4 < 6;i_4 += 1)
    {
        arr_14 [i_4] [i_4] = 161164831;
        var_23 ^= var_0;
    }
    var_24 = ((+((((7579186025798403310 < var_9) <= (max(var_9, var_2)))))));
    #pragma endscop
}
