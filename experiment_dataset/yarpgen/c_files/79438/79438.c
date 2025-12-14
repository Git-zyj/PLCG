/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_2, ((var_1 ? ((min(371733435682434079, -12645))) : 18446744073709551598))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_18 = max((max((arr_5 [i_1 + 1] [i_1] [i_1 + 1]), (arr_5 [i_1 + 2] [i_1 + 2] [i_1 - 1]))), (max((arr_5 [i_1 - 1] [1] [i_1 + 2]), (arr_5 [i_1 + 2] [i_1] [i_1 - 1]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_19 = (min((arr_5 [i_0 + 1] [i_1 + 1] [i_1 + 2]), (arr_1 [i_2] [i_0])));
                            var_20 = ((max((arr_2 [i_2] [1]), (((17 ? (-32767 - 1) : (-2147483647 - 1)))))) << (((((1065275824 ? (arr_7 [i_0] [i_3] [i_3]) : 3584))) - 18446744073569597082)));
                            var_21 = (max((((((max(3569, 10318220498238881511))) || 7646758553050660931))), (min(((((arr_0 [i_0 + 2] [i_3]) != (arr_9 [i_0] [i_0] [i_0] [i_3])))), (9 / 8128523575470670095)))));
                            var_22 = (((min((max((arr_3 [i_2]), 18446744073709551615)), (arr_5 [i_0 + 2] [i_0 - 2] [i_0]))) ^ 15872));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
