/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_17 = 29540;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_18 = (min(var_18, var_14));
                            arr_14 [i_3] [i_2] [i_1 - 1] [0] [i_0] = (max((((!2274324267348337756) ? (max(var_9, -125)) : (arr_9 [i_1] [i_1 + 1] [i_1] [i_1]))), (min((max(var_13, var_9)), var_11))));
                            var_19 *= ((var_12 > (max(var_16, (arr_8 [i_0] [i_1 + 1])))));
                            arr_15 [i_0] [i_0] [i_0] [i_3] [i_1] [i_0] = ((((max((~56025), 22))) ? (((22 ? 1 : 16172419806361213868))) : (((((max(5, 10))) << ((((-754943132 ? (arr_2 [i_0] [10]) : 11156)) - 890491194331180390)))))));
                        }
                    }
                }
                var_20 = (max(var_20, (arr_13 [11] [11] [i_0] [i_1])));
            }
        }
    }
    var_21 = ((var_10 ? (min(((0 ? var_10 : 1202578434)), var_7)) : ((((((min(var_2, var_5))) && var_5))))));
    #pragma endscop
}
