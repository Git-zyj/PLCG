/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_17 ^= ((((1537054126 ? 1 : (!2186768830)))) ? ((-239473819 - ((var_16 ? 55 : 1)))) : (((!(((15963798350774057055 ? -1349087202 : 11)))))));
                                var_18 *= (26016 & 47638);
                            }
                        }
                    }
                }
                var_19 = max(var_12, var_7);
                var_20 += (max((~5459738825774348270), ((68 ? 34297 : 15963798350774057054))));
                var_21 = 18706;
            }
        }
    }
    var_22 -= var_5;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 10;i_6 += 1)
        {
            {
                var_23 += (!var_10);
                var_24 = ((max((arr_15 [i_6 + 2] [i_6]), var_4)));
            }
        }
    }
    #pragma endscop
}
