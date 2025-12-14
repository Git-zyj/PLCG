/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_14;

    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [4] [i_0] = ((+(((1 / var_6) ? (((1 ? 1 : 1))) : (max((arr_2 [5]), (arr_5 [i_2] [1] [i_0 - 1])))))));
                    arr_8 [i_0] = (((max((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1]))) ^ ((~(arr_1 [i_0 - 1])))));
                    arr_9 [i_0] [i_1] [i_0] = (arr_0 [i_2]);
                    arr_10 [i_0] = ((((1 ? -13999 : 44536))) ? ((((max(3910881200, (arr_6 [i_0])))) ? (1 | 1) : var_2)) : ((((!(((1 + (arr_0 [i_0])))))))));
                }
            }
        }
        var_21 = (max(var_21, ((((arr_6 [i_0]) ? (max(5683791235437803491, (arr_2 [i_0 - 1]))) : ((((min(var_3, 2066222709))))))))));
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_22 |= (max((min((arr_3 [i_3 - 1] [i_3 - 1]), ((1 / (arr_11 [0]))))), ((((var_14 + 2147483647) >> (((min(330084372468775828, 4950)) - 4930)))))));
        var_23 = (max(var_23, ((min((((!((min(16925, (arr_6 [i_3]))))))), (384086089 & 384086095))))));
        var_24 = (min((arr_2 [9]), (304565493 - 13998)));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 7;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 7;i_5 += 1)
            {
                {
                    arr_18 [i_3] = ((((min(1, 1)))) == (min((min(6897093743575642706, 904256292)), (arr_11 [i_3]))));
                    var_25 = (min(var_25, ((((((min((arr_15 [i_3] [i_3] [i_5] [4]), (arr_2 [i_3]))) | (!var_9))) >> (((min(2663053180, 3639866714478969462)) - 2663053142)))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        var_26 = ((1 ? var_18 : (arr_20 [i_6])));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                {
                    var_27 = -109;
                    arr_28 [i_6] [i_6] [i_6] = ((~(arr_26 [i_7] [i_7] [i_7] [i_7])));
                    var_28 = (((arr_19 [i_6]) % (arr_23 [i_6] [i_6])));
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 13;i_9 += 1)
    {
        var_29 = ((min((!30069), ((1 ? (arr_19 [i_9]) : (arr_26 [6] [i_9] [4] [i_9]))))));
        var_30 = ((((2919686918 * 116) < ((min((arr_25 [18]), (arr_29 [2])))))));
        arr_32 [i_9] = (((arr_24 [i_9]) != 7166991403523282135));
        var_31 = (min((max(116, 4516921273749079368)), ((((!var_9) | var_10)))));
        var_32 = 4964273981746765036;
    }
    var_33 ^= (min(var_2, ((min((!var_9), var_12)))));
    var_34 *= ((((min(3405225867, 889741438))) ? (min(var_2, -13987)) : (((max(var_10, var_14))))));
    var_35 *= ((var_0 ? (((var_7 > (min(var_6, var_7))))) : (!var_5)));
    #pragma endscop
}
