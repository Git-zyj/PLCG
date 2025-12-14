/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= var_7;
    var_13 = (((var_6 >= (~var_10))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_14 += (~(arr_1 [i_1] [i_2]));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_15 = ((~(arr_9 [i_0] [i_0])));
                                var_16 ^= (((arr_4 [i_0]) ? ((-29154 ? 15492332854686512566 : -32753)) : ((max((var_0 || var_11), (((arr_5 [17]) - var_1)))))));
                            }
                        }
                    }
                    var_17 &= (((-((15492332854686512566 ? var_9 : var_0)))));
                }
            }
        }
    }
    var_18 = var_4;
    var_19 = (max((((16352 && 239) ? var_11 : -23462)), (((8007 <= 209836581) & 222))));
    #pragma endscop
}
