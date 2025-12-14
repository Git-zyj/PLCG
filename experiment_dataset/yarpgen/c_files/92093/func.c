/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92093
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_15 *= (+(min((1459803677U), (1879048192U))));
    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) min((var_7), (var_4))))));
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_10)), (7724871855519308487LL)))) ? (max((var_13), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))))))) : (var_9)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0 - 1] [i_0 - 1] = ((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 2])) ? (7724871855519308487LL) : (-7459566282920688704LL));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    var_18 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0 - 1])) ? (arr_6 [i_0 + 2]) : (arr_6 [i_0 + 1])));
                    var_19 += ((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_1] [i_3]);
                    var_20 = ((unsigned int) 9223372036854775807LL);
                    var_21 = -7724871855519308487LL;
                    arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */long long int) 4U);
                }
                var_22 += arr_3 [i_0 - 1];
                var_23 = ((/* implicit */long long int) max((var_23), ((+(53155771323898350LL)))));
                var_24 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 7724871855519308487LL)) ? (((/* implicit */long long int) 3495611078U)) : (7459566282920688704LL)));
            }
            /* LoopSeq 3 */
            for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) /* same iter space */
            {
                arr_15 [i_0] [i_4] [14U] = ((144115188075331584LL) | (((/* implicit */long long int) var_0)));
                var_25 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [11U] [i_0 - 2] [i_0 - 2] [i_1])) ? (arr_12 [i_0] [i_0 - 2] [20LL] [0LL]) : (arr_12 [i_0 - 1] [i_0 - 2] [i_0 - 2] [i_0])));
            }
            for (unsigned int i_5 = 0; i_5 < 21; i_5 += 1) /* same iter space */
            {
                var_26 ^= ((arr_6 [i_1]) << (((((((/* implicit */_Bool) var_9)) ? (arr_12 [i_0] [i_0 + 1] [i_0] [i_0]) : (((/* implicit */long long int) var_0)))) - (1479384124515419806LL))));
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 21; i_6 += 4) 
                {
                    for (unsigned int i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        {
                            arr_23 [i_0] [i_5] [i_5] [i_5] [i_7] = ((/* implicit */unsigned int) -3228175512631781480LL);
                            var_27 = arr_1 [i_0];
                        }
                    } 
                } 
            }
            for (unsigned int i_8 = 0; i_8 < 21; i_8 += 1) /* same iter space */
            {
                arr_26 [i_8] [i_8] = ((var_8) << (((arr_6 [i_0 + 2]) - (1205353817U))));
                /* LoopNest 2 */
                for (long long int i_9 = 0; i_9 < 21; i_9 += 2) 
                {
                    for (unsigned int i_10 = 0; i_10 < 21; i_10 += 4) 
                    {
                        {
                            arr_31 [i_8] [i_8] [i_8] = (-(((((/* implicit */_Bool) arr_20 [i_0 + 2] [i_8] [i_8] [i_9] [i_8])) ? (arr_6 [i_1]) : (2618212957U))));
                            var_28 = ((/* implicit */long long int) arr_0 [i_0] [i_0 + 1]);
                        }
                    } 
                } 
                var_29 = arr_10 [i_0 - 1] [i_0 - 1];
                var_30 = ((/* implicit */unsigned int) var_8);
            }
        }
        var_31 ^= 0U;
    }
    for (unsigned int i_11 = 2; i_11 < 19; i_11 += 3) /* same iter space */
    {
        var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3404793531U)) ? (7459566282920688704LL) : (((/* implicit */long long int) arr_33 [i_11 + 1]))));
        var_33 = 4U;
        var_34 -= ((arr_8 [i_11] [i_11 + 1] [i_11] [14U] [i_11] [i_11]) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 939524096U)) ? (144115188075331584LL) : (-144115188075331584LL)))))))));
        var_35 = ((/* implicit */long long int) max((var_35), (min((((/* implicit */long long int) (+(min((2900865763U), (1739392080U)))))), (((((/* implicit */_Bool) (+(arr_28 [i_11] [8U] [i_11])))) ? (((/* implicit */long long int) ((unsigned int) 558300003229698822LL))) : (min((7724871855519308487LL), (7724871855519308490LL)))))))));
    }
    /* LoopSeq 2 */
    for (long long int i_12 = 0; i_12 < 11; i_12 += 4) 
    {
        var_36 ^= ((/* implicit */long long int) (+(arr_13 [i_12] [i_12] [i_12] [i_12])));
        var_37 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */long long int) var_7)) + (arr_27 [i_12] [i_12]))));
        var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((2669584626U) / (4187615067U)))) ? (((((/* implicit */_Bool) 2803757822U)) ? (arr_17 [i_12] [i_12] [i_12]) : ((~(var_5))))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((!(((/* implicit */_Bool) 3484095687U)))), (((2440457804U) > (var_11)))))))));
    }
    /* vectorizable */
    for (unsigned int i_13 = 0; i_13 < 11; i_13 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_14 = 1; i_14 < 10; i_14 += 2) 
        {
            for (long long int i_15 = 1; i_15 < 10; i_15 += 2) 
            {
                {
                    var_39 = ((((/* implicit */_Bool) 1048585312U)) ? (2618212957U) : (1658604755U));
                    /* LoopNest 2 */
                    for (unsigned int i_16 = 2; i_16 < 7; i_16 += 2) 
                    {
                        for (long long int i_17 = 1; i_17 < 9; i_17 += 1) 
                        {
                            {
                                var_40 |= (~(arr_17 [i_13] [i_14 + 1] [i_16 - 2]));
                                arr_50 [i_13] [i_13] [8U] [8U] [i_17 + 2] = ((((/* implicit */_Bool) arr_24 [i_14 + 1] [i_16 + 2])) ? (3824213544U) : (var_4));
                                var_41 = var_7;
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_51 [i_13] [i_13] = ((/* implicit */long long int) ((unsigned int) (+(-5468559058378360133LL))));
    }
}
