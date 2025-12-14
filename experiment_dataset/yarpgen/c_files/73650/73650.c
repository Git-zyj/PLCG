/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [10] = (!648015427);
                arr_6 [i_0] [i_0] [i_0] = ((6713148562573442577 / ((min(var_3, 1904219912)))));
                var_16 = (((var_12 ? -15016 : 648015427)));
            }
        }
    }
    var_17 &= (((((420265315 ? -7345266489152785060 : 648015444))) ? ((var_2 << ((((9223372036854775807 ? var_10 : var_6)) + 895551419)))) : ((~(~var_6)))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 12;i_4 += 1)
            {
                {
                    arr_14 [i_2] = (65535 || 1);
                    arr_15 [i_2] [i_2] = 255;
                    var_18 = (max(var_18, (((min(-1485027330, (-2147483647 - 1)))))));
                    arr_16 [i_2] [i_2] [i_2] = var_9;
                }
            }
        }
    }
    #pragma endscop
}
