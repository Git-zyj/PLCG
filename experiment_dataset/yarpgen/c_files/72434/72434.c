/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_1] [2] [i_0] = 127;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [6] [i_3] [5] [i_3] = (((arr_7 [i_3] [i_3]) >> (((min((((arr_3 [3] [i_0] [i_0]) | var_3)), ((max((-127 - 1), (arr_6 [i_0] [i_2] [i_3])))))) - 3952606422))));
                            var_17 = (min(var_4, (((!(((4240120148 ? 4240120135 : 18446744073709551615))))))));
                        }
                    }
                }
                var_18 = ((((((arr_1 [i_1]) ? var_5 : ((((arr_1 [i_0]) << (((-9067565694028588339 + 9067565694028588357) - 17)))))))) ? var_8 : (arr_6 [i_0] [i_1] [i_0])));
                arr_10 [i_0] [i_1] [i_0] = ((!4240120158) ? ((((arr_3 [i_0] [i_0] [i_0]) % -9067565694028588339))) : (min((arr_8 [i_1] [0] [i_0] [i_1]), 54012)));
                var_19 = ((!((min((arr_6 [i_0] [6] [i_0]), var_12)))));
            }
        }
    }
    var_20 = var_5;
    var_21 |= var_15;
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 7;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            {
                arr_15 [i_4] [i_4] [i_4] = (min((arr_1 [i_4 - 1]), ((((arr_1 [i_4 - 3]) || (arr_1 [i_4 - 1]))))));
                arr_16 [i_4] [i_4] [0] = (-9067565694028588339 < -54847143);
            }
        }
    }
    #pragma endscop
}
