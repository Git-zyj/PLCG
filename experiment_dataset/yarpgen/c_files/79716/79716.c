/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;
    var_14 = ((((((-9020864980288648936 + 9223372036854775807) >> (var_1 - 856202272)))) ? ((-((-2982852220793668777 ? var_5 : 2982852220793668774)))) : (((((max(3091285683, var_8))) ? (max(4004108452, 960479501)) : -var_10)))));
    var_15 = var_6;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_16 = (min(var_16, ((((((arr_2 [i_0 - 1]) ? (arr_2 [i_0 - 1]) : var_0))) ? ((((!(arr_2 [i_0 - 1]))))) : (arr_2 [i_0 - 1])))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_17 ^= var_9;
                                var_18 = (min(var_18, (((((arr_14 [i_0] [i_0 - 1] [i_0 - 1] [1] [i_1 - 1] [i_2 + 4]) ? var_9 : (arr_10 [i_0] [i_0 - 1] [i_0])))))));
                                var_19 = (((-9223372036854775807 - 1) ? ((((-2059228343528500958 ? (arr_5 [i_1] [i_1] [i_1]) : 2)) ^ -2982852220793668796)) : (((15 & (arr_11 [i_2] [i_2 + 1] [i_2] [i_2] [i_2 + 3] [1]))))));
                            }
                        }
                    }
                    var_20 ^= ((((-5341579794093820026 ? (arr_18 [i_2] [i_2] [19] [23] [i_2 - 2] [20]) : (((4261412864 ? 1 : var_8))))) - (((~(arr_2 [i_0]))))));
                    arr_19 [i_0 - 1] [0] [i_1] [i_1] = (!284676423);
                }
            }
        }
        var_21 = 11893;
        arr_20 [i_0] &= var_11;
        var_22 += ((-30602 ? 12242062970564886828 : (((3734975262 ? -30589 : 4004108448)))));
    }
    #pragma endscop
}
