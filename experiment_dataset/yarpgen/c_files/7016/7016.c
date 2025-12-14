/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 0;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_11 = ((((((1 ? (arr_1 [i_0 + 2]) : var_0)) > ((13524460455610528179 ? var_2 : (arr_0 [i_0] [i_0]))))) ? (((~7) ? 13524460455610528179 : (min(1457007103880435995, 1765642875)))) : 109));
        var_12 = (min((!7), (((((2546139806 ? 214613934163081367 : 44682))) ? (var_8 % var_6) : (arr_1 [i_0 + 2])))));
        var_13 = 2257188376;
        var_14 = (((((((arr_0 [i_0] [i_0 + 1]) ? 511 : 14169565))) ? ((4922283618099023417 ? var_2 : var_8)) : var_8)) < (((2546139806 ? 1 : 1))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 16;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 15;i_3 += 1)
            {
                {
                    var_15 = ((var_1 ? (101 <= 2546139794) : (var_1 ^ -102)));
                    var_16 = (((47857 < 4294967276) ? (arr_5 [i_2 - 1] [i_1 + 1]) : (arr_7 [i_2 - 1])));
                }
            }
        }
        var_17 = (((arr_7 [i_1]) ? var_3 : -1));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 16;i_4 += 1) /* same iter space */
    {
        arr_11 [i_4] = (!6091355332448795214);
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                {
                    var_18 = (~-6015476429663039792);
                    var_19 = (~1);
                }
            }
        }
        var_20 = ((var_6 ? (arr_2 [1]) : (arr_2 [4])));
    }
    for (int i_7 = 1; i_7 < 16;i_7 += 1) /* same iter space */
    {
        var_21 = (((((((var_1 ? var_5 : 24576))) ? var_4 : (arr_18 [i_7 + 1])))) ? ((((var_2 != 0) ? -7899047472783509579 : 1))) : (max((arr_2 [i_7]), ((2546139806 ? 2546139806 : -24576)))));
        var_22 = (((((((min(-1959815855, (arr_14 [i_7] [i_7] [i_7] [i_7])))) ? ((4095 ? 2423103635 : var_1)) : var_1))) ? 38044 : var_0));
        var_23 = (max(-1871863641, ((max((var_2 != var_9), (max((-2147483647 - 1), 48821)))))));
    }
    var_24 = ((((((var_5 ? 1 : var_3)) << (-5090 + 5091))) != var_1));
    var_25 = 1;
    #pragma endscop
}
