/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= (((!var_7) << var_9));
    var_18 = ((var_14 || (0 && 56978)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_1] = (18446744073709551615 && var_0);
                arr_6 [i_1] [i_1] = (max((((arr_1 [13]) ? 1 : (arr_1 [i_1]))), (((-(arr_0 [i_0]))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    arr_9 [i_1] [i_0] [i_2] [i_2] = (arr_8 [i_1] [i_1] [i_2]);
                    arr_10 [i_0] [i_1] = (((((1 ? var_14 : var_0))) ? var_6 : ((~(arr_4 [i_0] [i_0] [i_0])))));
                    arr_11 [17] [i_1] [i_2] [i_2] = var_16;
                }
            }
        }
    }
    var_19 = (var_12 ? var_9 : (((((max(-16823, -4137646462241947957))) <= (var_14 ^ var_3)))));
    #pragma endscop
}
