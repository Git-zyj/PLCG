/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = 50344673243496595;
                    arr_10 [i_2] [i_1] [i_0] = var_7;
                }
            }
        }
    }
    var_13 *= ((((((~40793) ? (!40793) : ((min(-20, var_5)))))) ? ((174 / ((40793 ? 16032803578062993090 : 9379273060551414516)))) : ((((var_4 >= (40793 * 1)))))));
    var_14 ^= -34;
    var_15 = ((((16618987527823463142 ? var_11 : 16784))) || var_2);
    #pragma endscop
}
