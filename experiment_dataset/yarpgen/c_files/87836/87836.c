/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_7 / (max(var_9, var_5))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_17 ^= (((((((59 < (arr_1 [i_0]))) ? 18446744073709551604 : ((min(9223372036854775802, 1)))))) ? (min((arr_3 [i_0 + 2] [i_0]), -6747169420814160630)) : ((max((arr_3 [i_0 - 2] [i_0 - 1]), (min(1095735217, 26049)))))));
                arr_5 [i_1] = (min(1, 18446744073709551604));

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_18 |= (((--2034184913) ? (((arr_0 [i_0] [i_0 + 3]) ? (arr_0 [i_0 + 2] [i_0 + 1]) : (arr_0 [i_0] [i_0 - 1]))) : ((((arr_3 [8] [i_2]) > (arr_6 [0] [i_1] [i_2] [i_1]))))));
                    var_19 = ((max((3511624523141498065 == 11245729849173660378), (((arr_1 [i_2]) ? (arr_4 [i_0] [i_1] [i_2]) : 5454497357741039327)))));
                }
            }
        }
    }
    var_20 = ((((-32765 == 26049) ? ((min(var_7, 26078))) : ((max(var_12, var_13))))));

    /* vectorizable */
    for (int i_3 = 1; i_3 < 12;i_3 += 1) /* same iter space */
    {
        var_21 *= (arr_8 [6]);
        arr_10 [i_3] = ((((arr_9 [i_3] [i_3]) ? -91 : 42)));
    }
    for (int i_4 = 1; i_4 < 12;i_4 += 1) /* same iter space */
    {
        var_22 -= (max(2034184912, 11245729849173660366));
        var_23 = -6747169420814160620;
        arr_13 [i_4] = (46044 > 16841907071444659595);
    }
    #pragma endscop
}
