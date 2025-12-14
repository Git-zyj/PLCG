/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_4 == ((~(~var_5)))));
    var_17 = (((65520 || 128) & ((~((-50 ? -10 : -60))))));
    var_18 *= ((-((432345564227567616 ? -368380773 : (-32767 - 1)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_2] [6] [i_2] = var_6;
                    arr_8 [i_0] [i_1] [i_2] [15] |= ((-35840 ? var_13 : (((((min(1453920894, var_2))) && (arr_3 [i_0]))))));
                }
            }
        }
    }
    #pragma endscop
}
