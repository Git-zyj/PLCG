/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91235
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) 3622982923U)) || (((/* implicit */_Bool) var_9))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((_Bool) 3888876693U));
        var_12 ^= ((/* implicit */_Bool) ((3888876693U) * (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 0ULL))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */int) ((((arr_6 [i_1] [15ULL]) + (4142569379U))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((arr_0 [i_1]) / (((/* implicit */long long int) 2944992079U)))) < (((/* implicit */long long int) ((/* implicit */int) (short)4078)))))))));
        arr_8 [i_1] = ((/* implicit */unsigned long long int) ((((-152533480) + (2147483647))) >> (((((((/* implicit */_Bool) arr_2 [(unsigned char)8] [i_1 + 3])) ? (((/* implicit */unsigned int) 1641535751)) : (arr_2 [16] [i_1 + 2]))) - (1641535745U)))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 1; i_3 < 9; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_18 [i_2] [i_3] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) arr_0 [i_2]))) >> (((arr_6 [i_3 + 1] [i_3 + 3]) - (3154804709U)))));
                    arr_19 [i_2] [i_4] = ((/* implicit */unsigned int) ((short) arr_9 [i_3 + 3]));
                    var_14 *= ((/* implicit */unsigned int) var_1);
                    var_15 -= ((/* implicit */unsigned char) ((1220158306U) >= (1950155246U)));
                    var_16 ^= ((/* implicit */int) 735463995U);
                }
            } 
        } 
        var_17 = ((/* implicit */_Bool) ((3824897144U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3777)))));
        /* LoopSeq 1 */
        for (short i_5 = 2; i_5 < 11; i_5 += 1) 
        {
            arr_22 [i_5] = ((/* implicit */unsigned char) (_Bool)0);
            /* LoopSeq 1 */
            for (unsigned int i_6 = 4; i_6 < 8; i_6 += 1) 
            {
                arr_26 [i_2] [i_5] [i_5] [i_6 - 2] = ((/* implicit */unsigned int) (_Bool)1);
                var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)67)) : (((/* implicit */int) arr_25 [i_5 - 2] [i_5 + 1] [i_6 - 3] [i_6 - 2]))));
                arr_27 [i_5] [i_5 - 2] [i_5] = ((/* implicit */short) ((arr_11 [i_5 - 1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                arr_28 [i_5] [i_2] [i_2] [i_5] = ((unsigned int) (signed char)36);
            }
            arr_29 [i_2] [i_5] = ((/* implicit */unsigned int) (unsigned short)0);
        }
        var_19 = ((((/* implicit */int) (unsigned short)16007)) != (((/* implicit */int) (unsigned char)254)));
        var_20 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned short)54764)))) == (((unsigned int) var_2))));
    }
    for (unsigned char i_7 = 1; i_7 < 11; i_7 += 2) 
    {
        /* LoopSeq 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((int) ((arr_1 [i_7 + 2]) == (((/* implicit */unsigned long long int) 2484505972U))))))));
            arr_36 [i_8] [i_7] [i_7] = ((/* implicit */short) -1364528776730260883LL);
            arr_37 [i_7 + 2] [i_8] = arr_31 [i_7];
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned int i_10 = 0; i_10 < 13; i_10 += 1) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 1) 
                {
                    for (unsigned short i_12 = 1; i_12 < 12; i_12 += 1) 
                    {
                        {
                            var_22 -= ((/* implicit */unsigned int) var_3);
                            arr_50 [i_7] [i_9] [i_7 + 2] [i_7 - 1] = ((/* implicit */short) ((((/* implicit */int) ((var_7) <= (((/* implicit */unsigned int) var_0))))) <= (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63297))) > (arr_48 [i_9] [i_7 - 1] [i_9] [1LL]))))));
                        }
                    } 
                } 
            } 
            arr_51 [i_7 + 2] [i_9] = ((/* implicit */unsigned short) ((unsigned char) ((unsigned short) (_Bool)1)));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_13 = 0; i_13 < 13; i_13 += 2) 
        {
            var_23 = ((/* implicit */short) 16783969241321190965ULL);
            arr_54 [i_7] = ((((/* implicit */_Bool) 3487360190U)) ? (var_9) : (0U));
        }
        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((((/* implicit */_Bool) arr_48 [2ULL] [i_7 + 1] [i_7 + 1] [10ULL])) ? (3059919045U) : (var_2))) == (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) << (((2331987167U) - (2331987153U)))))))))));
    }
}
