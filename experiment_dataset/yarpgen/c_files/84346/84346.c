/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_17 ^= ((((((arr_6 [i_3]) >> (128 - 97)))) ? ((max(var_10, (arr_5 [i_3] [i_2] [i_1])))) : (arr_5 [i_1] [i_1] [i_1])));
                        arr_10 [i_3] [i_2] [i_1] = 89;
                        arr_11 [i_0] [i_1] [i_2] [i_0] = (max((0 < 64), (max((!0), var_15))));
                    }
                    for (int i_4 = 3; i_4 < 17;i_4 += 1)
                    {
                        var_18 = (min(var_18, -var_11));
                        var_19 = 32752;
                        var_20 = (((5 >> 7) == (max(2251765453946880, 255))));
                    }
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        arr_17 [i_0] [i_2] [i_0] [i_5] = -2352850214;
                        var_21 = 3302270706;
                        var_22 = (((2456625215205237458 - var_0) ? (((~var_13) ? (max(1942117081, 3497826962627115053)) : (arr_14 [i_0]))) : 18446744073709551606));
                    }
                    var_23 = (((arr_4 [i_0] [i_0]) ? (((var_1 | var_13) ? ((9 ? var_12 : var_1)) : (arr_7 [i_0] [i_0]))) : ((~(arr_13 [i_0] [i_0] [i_0])))));
                    var_24 -= (((((-90 ? (arr_16 [i_2] [9] [i_1] [i_1] [i_0]) : 1))) ? ((((max(var_1, (arr_15 [i_0] [i_1] [i_0] [i_1] [i_0])))) ? (~var_6) : var_4)) : (((((max(var_14, (arr_4 [i_1] [i_0])))) >> (((arr_3 [i_1] [i_0]) - 34)))))));
                    var_25 = (arr_4 [i_0] [i_1]);
                }
            }
        }
    }
    #pragma endscop
}
