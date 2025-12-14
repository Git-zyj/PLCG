/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((0 ? (var_4 / 1) : -5493330211700276632));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_3 [4] [i_0 - 1] &= (((((-5493330211700276616 ? 134217727 : 4160749568))) ? (min((arr_2 [6]), (arr_2 [16]))) : (((-127 - 1) ? (arr_2 [22]) : var_6))));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_15 *= ((-((var_11 ? ((var_1 ? var_13 : (arr_0 [16]))) : var_4))));
            arr_6 [i_0] = ((((min(((var_10 ? var_2 : (arr_1 [i_0 - 1]))), ((var_6 ? var_10 : (arr_2 [i_0])))))) ? (max(((((arr_1 [i_1]) ? var_7 : var_9))), var_5)) : (((min((arr_5 [i_0]), var_6))))));
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 22;i_4 += 1)
                    {
                        {
                            var_16 = 9223372036854775807;
                            arr_17 [1] [i_1] [i_2 + 3] [i_0] [17] [i_1] [5] = min((((-5493330211700276616 ? var_10 : (arr_14 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_3])))), (arr_16 [i_0 - 1] [17] [7] [13] [i_0 - 1]));
                            var_17 |= (max((((4450321958753534979 ^ (((var_5 + 9223372036854775807) << var_1))))), 1125899906842112));
                            var_18 -= (max(((var_3 ? ((((arr_0 [1]) || var_8))) : ((min(var_11, -40))))), (((((min(1, 5493330211700276621))) >= (max(17705657212423347180, var_2)))))));
                            var_19 = (max(var_19, ((((((arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? (arr_9 [i_3] [22] [i_3] [i_3]) : (arr_9 [i_0] [i_1] [i_3] [i_4 + 1])))) && ((min((arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]), var_5)))))));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_20 = (max(var_20, ((((arr_0 [18]) ? var_2 : (arr_0 [6]))))));
            var_21 = (((arr_11 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) / (arr_11 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])));
        }
    }
    #pragma endscop
}
