/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = (((56542 ? 2097151 : 56542)));
                arr_6 [i_0] [i_1] = (arr_3 [i_0]);
            }
        }
    }
    var_14 = 7036302042729170090;
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 16;i_4 += 1)
            {
                {
                    var_15 ^= var_1;
                    var_16 = ((-(max(var_6, ((var_9 ^ (arr_13 [i_2] [i_3] [i_4 + 2] [i_4])))))));
                    var_17 = (((arr_10 [i_2 + 1] [i_2]) / (((var_4 ? var_6 : var_0)))));
                }
            }
        }
    }
    #pragma endscop
}
