/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [6] |= (((((1760446354 ? 1033309160216887722 : 2855538141))) ? ((((((2534520934 ? var_11 : var_18))) == (~9223372036854775807)))) : ((((3877426591161924440 + (arr_5 [i_0] [9] [15])))))));
                var_19 = ((((min(2855538134, 1)))) > ((var_10 ? (var_9 == var_11) : (arr_0 [i_0 + 1]))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 = (((2107222486 - 1439429167) >= 7186686203711824731));
                                var_21 = (min((((arr_4 [i_0 + 1] [i_0 + 1] [i_0 - 1]) ? (arr_4 [i_0 + 2] [i_0 - 1] [i_0 - 1]) : var_9)), ((((arr_3 [i_1] [i_1] [i_0]) ? (arr_11 [i_4 - 1] [i_3] [8] [i_0]) : 7186686203711824748)))));
                            }
                        }
                    }
                }
                arr_18 [4] [4] [i_0] = (((arr_2 [i_0] [i_0 + 1]) ? (min(-2107222482, (arr_1 [i_1]))) : 111));
            }
        }
    }
    var_22 = (var_5 ? ((-((17330203180000690519 ? var_15 : var_1)))) : (~var_5));
    #pragma endscop
}
