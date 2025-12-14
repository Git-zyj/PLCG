/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 = (!0);
                var_19 = ((((min(((min(5850, var_3))), (var_11 & var_17)))) ? (((arr_1 [i_0]) ? (((-(arr_3 [i_0] [8])))) : (((arr_4 [i_0] [i_1]) ? (arr_0 [i_0] [i_1]) : 8945704972848127333)))) : (((((9501039100861424271 ? 8945704972848127333 : (arr_1 [i_0]))))))));
            }
        }
    }
    var_20 = ((-((~(~var_14)))));

    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    {
                        arr_16 [i_2] [i_3] [i_3] [i_3] = ((((((var_3 + 9501039100861424287) ? -2993196120 : -12244994758780292119))) ? (min((arr_5 [i_3]), (var_14 - var_3))) : 28027));
                        arr_17 [i_3] = (min(((((min(var_15, var_5))) ? (9501039100861424278 ^ var_0) : (min(1269023881, (arr_13 [1] [1] [i_5]))))), 1));
                    }
                }
            }
        }
        var_21 = (min((arr_8 [i_2]), ((min((arr_6 [i_2]), ((~(arr_6 [i_2]))))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_22 = (~var_15);
        var_23 = 9992896336008302184;
        var_24 = ((((arr_19 [i_6] [i_6]) % (arr_18 [i_6] [i_6]))) << 1);
        arr_20 [i_6] = 21466;
    }
    #pragma endscop
}
