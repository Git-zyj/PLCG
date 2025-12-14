/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_20 = ((-((-(var_14 && 10731186543801134270)))));
                    arr_9 [i_0] [i_1] [i_0] [1] = ((-(max(var_7, 44))));
                    arr_10 [i_2] [i_2] [i_2] = (((~var_19) ? -2702515419704599815 : ((21 / (arr_0 [i_2 + 1] [i_2 - 1])))));
                    var_21 = (max(var_21, 280546126720921651));
                    arr_11 [i_0] [i_1] [i_2] [i_2] = (1152921504606846975 != 4280626205);
                }
            }
        }
    }
    var_22 = (((((((var_5 ? 9077226502098055851 : -948929631))) ^ -144115188075855744)) | (~var_14)));
    var_23 = var_18;
    #pragma endscop
}
