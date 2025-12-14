/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90300
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */int) min((min((((/* implicit */unsigned long long int) min((var_8), (((/* implicit */unsigned char) (_Bool)1))))), (min((((/* implicit */unsigned long long int) (short)23269)), (var_3))))), (((/* implicit */unsigned long long int) ((signed char) var_0)))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_14 -= ((/* implicit */long long int) var_4);
                                var_15 |= ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) var_11)), (max((var_3), (var_2))))), (((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_9)) | (((/* implicit */int) arr_7 [i_2] [i_1])))))))));
                                var_16 = ((/* implicit */long long int) (unsigned char)42);
                                var_17 = ((/* implicit */short) min((((/* implicit */int) var_11)), ((-(((/* implicit */int) var_11))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */signed char) arr_4 [i_0]);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_5 = 2; i_5 < 22; i_5 += 4) 
    {
        var_19 += ((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_5] [i_5]))) : (arr_13 [i_5 + 1]))), (((/* implicit */unsigned long long int) var_4)))), (min((((var_10) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_5] [i_5]))))), (((/* implicit */unsigned long long int) ((unsigned int) arr_14 [i_5 + 1] [i_5])))))));
        /* LoopNest 2 */
        for (short i_6 = 1; i_6 < 22; i_6 += 3) 
        {
            for (signed char i_7 = 0; i_7 < 23; i_7 += 1) 
            {
                {
                    var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [i_5 - 2] [i_5 + 1] [i_5 - 1]))))) ? (((/* implicit */int) var_8)) : (min((((((/* implicit */int) (short)-494)) - (var_5))), ((-(((/* implicit */int) var_8))))))));
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_11)), ((unsigned char)213)))) ? (6897759849638101800LL) : (((/* implicit */long long int) max((var_0), (var_0))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (signed char i_8 = 1; i_8 < 22; i_8 += 1) 
        {
            var_22 ^= ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)6557))))) ? (min((min((((/* implicit */unsigned long long int) (unsigned short)4756)), (var_2))), (((/* implicit */unsigned long long int) ((var_10) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8)))))));
            var_23 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)30720))))), (((var_10) << (((arr_19 [i_5] [i_5 + 1] [i_5] [12ULL]) - (9231123534732090746ULL))))))) << ((((+(((/* implicit */int) (unsigned short)60779)))) - (60766)))));
            var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 15131063892872189868ULL))));
        }
        for (signed char i_9 = 0; i_9 < 23; i_9 += 4) 
        {
            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) && (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (var_2)))) && (((/* implicit */_Bool) arr_20 [(unsigned short)4] [i_5] [i_9] [i_9]))))));
            var_26 |= ((/* implicit */signed char) (unsigned short)58975);
            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_5 - 2]))) : (arr_18 [i_5 + 1] [i_9])))) ? (((/* implicit */int) arr_14 [i_5] [1LL])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_24 [i_5] [(signed char)5]) : (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */int) (unsigned short)3)) : (((/* implicit */int) var_8)))))))));
        }
        /* vectorizable */
        for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 3) 
        {
            var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_24 [(unsigned char)17] [(unsigned char)17]))) ? (((((/* implicit */_Bool) arr_13 [i_5])) ? (((/* implicit */int) (short)30720)) : (((/* implicit */int) arr_26 [20LL])))) : (arr_15 [i_5 - 2])));
            var_30 = ((((/* implicit */_Bool) var_0)) ? (arr_27 [i_5 + 1]) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)30))) | (7U)))));
        }
        /* LoopNest 2 */
        for (signed char i_11 = 0; i_11 < 23; i_11 += 3) 
        {
            for (unsigned long long int i_12 = 4; i_12 < 20; i_12 += 4) 
            {
                {
                    var_31 = min((((long long int) var_7)), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-96)) ? (arr_24 [i_5 + 1] [i_5 - 2]) : (arr_24 [i_5 - 1] [i_5 + 1])))));
                    /* LoopNest 2 */
                    for (short i_13 = 0; i_13 < 23; i_13 += 1) 
                    {
                        for (unsigned short i_14 = 2; i_14 < 20; i_14 += 2) 
                        {
                            {
                                var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_0), (((/* implicit */int) (short)-494))))) ? (0) : (((/* implicit */int) var_7))));
                                var_33 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967294U)) ? (22ULL) : (0ULL)))) ? (((long long int) (short)4095)) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_5 - 2] [i_12 - 1])))));
                            }
                        } 
                    } 
                    var_34 ^= ((/* implicit */unsigned int) arr_15 [i_5 + 1]);
                }
            } 
        } 
        var_35 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_29 [i_5 - 2])), (7U))))));
    }
}
