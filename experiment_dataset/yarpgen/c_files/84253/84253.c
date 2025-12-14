/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_2 [5] [5] = 8050463351633554191;
        arr_3 [i_0] = (min(var_12, ((-(arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_19 = (max(var_19, 9006924376834048));
        arr_7 [i_1] = (max((max(724496466, (min(var_4, -9223372036854775788)))), ((((arr_0 [i_1]) ? (arr_0 [i_1]) : (arr_0 [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
    {
        arr_10 [12] = ((724496483 & ((((min((arr_0 [i_2]), -25154177))) ? (((min((arr_6 [i_2]), (arr_0 [i_2]))))) : -116625854887105362))));
        arr_11 [10] = (((((((var_13 ? 255 : 4543126761795175599)) <= (arr_4 [i_2])))) >= (((((-724496483 % (arr_8 [i_2] [7])))) ? var_14 : (arr_4 [i_2])))));
        arr_12 [2] [6] = ((((((~var_14) & (((arr_5 [7]) ^ -2425647229684622696))))) ? ((((arr_5 [i_2]) & (~var_18)))) : (max(((12910 ? 5 : 192)), ((min(255, (arr_5 [i_2]))))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_20 *= (arr_20 [i_2]);
                        var_21 &= ((!(51682 / -4543126761795175599)));
                        var_22 = ((~(arr_4 [i_2])));
                    }
                    var_23 = ((1477954607 ? (((((((arr_17 [i_4] [i_4] [i_4]) ? var_0 : 221))) >= (arr_15 [i_2])))) : ((var_14 - (min(1598, (arr_16 [i_2] [i_4])))))));
                    arr_21 [i_2] [i_2] [i_2] [i_2] = (min((((arr_8 [i_2] [3]) ? ((116625854887105361 ? (arr_15 [i_3]) : -2034278432)) : (((((arr_0 [i_2]) && var_11)))))), -434436620));
                }
            }
        }
        arr_22 [i_2] = var_5;
    }
    var_24 = (((-2425647229684622696 ? (var_15 > 1625) : ((90 ? var_10 : 434436619)))));
    var_25 = (!32256);
    #pragma endscop
}
