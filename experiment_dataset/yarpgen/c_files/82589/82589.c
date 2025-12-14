/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((+-30754) ? (((((((2463398903 ? (-127 - 1) : 16)) + 2147483647)) >> (757699662 - 757699640)))) : var_8));

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_12 ^= -30754;
        var_13 &= (18082 ? (arr_3 [i_0]) : (((-3676567940620898402 ? -30755 : (-96 && 88)))));
        var_14 = (((~-7485740751196570160) ? (((arr_1 [i_0] [i_0]) * -30767)) : -7485740751196570159));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = (((!202) ? ((((arr_6 [i_1]) == (min((arr_2 [i_1]), 295208809))))) : (((arr_0 [i_1]) ? (-1 < 141) : 44))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 22;i_4 += 1)
                {
                    {
                        var_15 += (((-((-(arr_5 [i_1]))))));
                        arr_15 [15] [15] [19] [i_4] [i_4 + 2] [5] = (!43);
                    }
                }
            }
        }
        var_16 = (max(var_16, ((((arr_0 [i_1]) ? (arr_2 [i_1]) : (~23085))))));
        var_17 = (min(var_17, 44));
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
    {
        var_18 = (arr_0 [i_5]);
        var_19 = ((-(((0 <= ((9223372036854775807 ? 0 : 1891140299)))))));
        var_20 -= ((~(((arr_5 [i_5]) ? (arr_5 [6]) : 8704))));
    }
    var_21 ^= ((((((2147483647 ? 43 : -1)))) ? -7485740751196570160 : var_8));
    #pragma endscop
}
