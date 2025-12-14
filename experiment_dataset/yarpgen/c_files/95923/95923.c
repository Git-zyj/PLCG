/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] = var_5;

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1 + 1] [i_0] [i_1] = ((127 ? ((-(max(16169613205238556049, var_9)))) : ((max(var_1, ((min(var_4, (arr_7 [i_1] [1] [5])))))))));
                        var_16 *= ((((~(~var_5))) == (((-1266956233596624302 ? 1 : 240)))));
                    }
                }
            }
            var_17 ^= ((var_0 == ((((((arr_2 [i_0]) ? (arr_10 [10] [i_1] [i_1] [i_1]) : var_7))) ? ((((arr_6 [i_0]) == 65535))) : ((48204 ? (arr_5 [i_0]) : var_15))))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 9;i_5 += 1)
                {
                    {
                        var_18 |= var_12;
                        var_19 = (max(49868, (arr_8 [i_0] [2] [i_4])));
                    }
                }
            }

            /* vectorizable */
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                var_20 = -511;
                var_21 = ((5698316019559423017 ? -6748678499621348237 : 1714613921));
            }
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                var_22 = (arr_14 [i_0] [9] [i_7]);
                var_23 &= (min((arr_24 [i_1 + 1] [i_1 + 1] [i_1 + 1]), (arr_24 [i_1 + 1] [i_1 + 1] [i_1 + 1])));
            }
        }
        for (int i_8 = 2; i_8 < 11;i_8 += 1)
        {
            arr_28 [i_0 + 1] [i_8] = (1598890041 / -7845594071041039650);

            /* vectorizable */
            for (int i_9 = 3; i_9 < 11;i_9 += 1)
            {
                var_24 -= (((var_15 | (arr_16 [4] [i_8] [i_9 + 1] [i_8] [6] [i_0]))));
                arr_31 [i_9] [11] = ((-(arr_26 [i_0 - 1] [i_0 - 2])));
            }
        }
        var_25 = ((18446744073709551615 ^ 4294967295) & (((((((-(arr_14 [i_0] [i_0] [0])))) && (((-(arr_29 [i_0 + 2] [i_0] [i_0] [i_0])))))))));
    }
    var_26 &= (var_12 == var_11);
    var_27 = (~3935180973);
    #pragma endscop
}
