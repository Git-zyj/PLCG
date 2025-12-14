/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                var_14 += var_6;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_10 [i_2] [i_2] = ((min((((arr_7 [i_0] [i_0] [13] [i_0]) ? var_12 : 1984)), 13155793331904522856)));
                            var_15 = -1895080812;
                            arr_11 [i_2] [i_0] [i_1] [i_2] [i_3] = (((((((68 ? 68 : var_8)) & (arr_8 [i_1 - 3] [i_1 - 3] [7] [i_1 - 3])))) & (arr_6 [i_0] [i_2] [i_0] [i_0])));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 20;i_5 += 1)
        {
            {
                var_16 = (((((((min(120, -2092952819))) ^ (~1004634327723415008)))) ? (!25923) : ((68 ? (arr_14 [i_4]) : (~1)))));
                var_17 *= ((((var_9 ^ (((arr_14 [i_5]) * 18446744073709549653)))) < (arr_14 [i_4])));
            }
        }
    }
    #pragma endscop
}
