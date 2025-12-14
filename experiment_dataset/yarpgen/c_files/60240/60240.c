/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = ((((~(65535 | 65535))) ^ (min(-65535, var_10))));
        var_11 *= ((((min(-968732615768039745, var_8))) ? (((var_9 - var_3) | -65514)) : ((((-139440612 ^ 65535) / var_4)))));
        var_12 = ((var_4 ? (((~65535) | -65514)) : ((min(16, 45)))));
        arr_4 [i_0] = (min(((var_2 % (min(var_5, var_6)))), (((min(-24483, -3037846526913215280))))));
        arr_5 [i_0] = (min(((((min(-65514, -65536))) | (min(var_6, 51607)))), -var_9));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            {
                arr_13 [i_2] [i_2] = (min((((((min(24455, 24482)))) * (min(1, 2712440517)))), (((!(var_9 / var_9))))));
                var_13 = ((-((-(min(var_10, var_1))))));
                arr_14 [i_1] [i_2] = ((min((var_9 - 0), ((min(var_2, 116))))));
                var_14 *= ((-13886 ? 24482 : ((min(1, (~var_3))))));
            }
        }
    }
    var_15 = (min((((min(-4369, -6323797453801458498)) % -24482)), ((((253 / var_6) ? ((min(-26, 34934))) : (min(65513, var_1)))))));
    var_16 = ((((min(var_5, var_5))) ? (((0 / (11064 / 19)))) : (min((min(-61, 9223372036854775807)), (var_0 / var_3)))));
    #pragma endscop
}
