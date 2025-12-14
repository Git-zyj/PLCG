/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_19 = 2147483647;
                    var_20 = (((((arr_6 [i_2] [10] [i_1] [i_2]) & (arr_2 [i_0]))) % -var_8));
                    var_21 = (32767 ^ 7);
                    var_22 ^= (((((var_14 ? 2073561716154505571 : 2097151))) ? ((max((arr_6 [i_0] [i_1 + 1] [i_1 + 1] [i_1 + 1]), (arr_6 [i_0] [i_1 - 3] [i_1] [i_1 - 2])))) : (!65535)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            {
                var_23 = (max(var_23, -202));
                var_24 ^= (((arr_10 [i_3]) ? (((((var_0 ? -2147483647 : var_12)) == (arr_10 [i_3])))) : (arr_7 [7])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_25 ^= ((2147483634 | (arr_9 [i_6 + 1])));
                    var_26 = ((((((-7005743082591365852 ? var_16 : -32377))) || (!52138))) ? ((((!(arr_9 [i_6]))))) : (arr_15 [i_7] [i_6 + 4] [i_5]));
                }
            }
        }
    }
    var_27 = var_5;
    #pragma endscop
}
