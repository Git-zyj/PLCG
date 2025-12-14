/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    var_15 ^= (((2147483645 ^ (arr_0 [i_2 - 2]))));
                    var_16 += min((((((~(arr_4 [i_2])))) ? (var_6 & 106) : (18446744073709551615 & 0))), 45973);
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 21;i_5 += 1)
            {
                {
                    var_17 ^= ((((arr_1 [i_5 + 1]) < 1)));
                    var_18 = (min(var_18, (arr_6 [1] [4] [4])));
                }
            }
        }
        var_19 += (max((arr_9 [i_3] [i_3]), ((min(51662, (var_0 + 2328851954))))));
        arr_15 [i_3] [1] = (((min((max(1, (arr_5 [i_3] [i_3] [i_3]))), 150)) > (arr_4 [i_3])));
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        var_20 = (min(var_20, ((min(4294967295, (arr_9 [i_6] [i_6]))))));
        var_21 = (min(var_21, (((((65535 == (arr_9 [i_6] [i_6]))) ? var_14 : (((arr_17 [13] [i_6]) ? 107458682675613241 : var_12)))))));
        /* LoopNest 3 */
        for (int i_7 = 2; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 18;i_9 += 1)
                {
                    {
                        var_22 ^= 1078689509;
                        var_23 = (min(var_23, (~13857)));
                        var_24 = (min(var_24, ((~((max((arr_11 [i_7 + 3]), (arr_11 [i_7 - 1]))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
