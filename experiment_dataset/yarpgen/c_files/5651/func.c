/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5651
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (long long int i_2 = 4; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_13 &= ((/* implicit */unsigned char) max((min((((short) arr_3 [i_3])), (((/* implicit */short) (!(((/* implicit */_Bool) var_11))))))), (((/* implicit */short) ((max((((/* implicit */unsigned long long int) arr_1 [(signed char)15])), (arr_4 [i_0]))) == (((((/* implicit */_Bool) arr_3 [i_0])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)197))))))))));
                                var_14 |= ((/* implicit */long long int) arr_5 [i_0]);
                                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) max((var_8), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */unsigned long long int) -1951681444)) < (6321916171272128381ULL))))))))));
                                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((((((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [9LL] [14] [(signed char)2])) >= (((/* implicit */int) var_7)))) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_7)))) <= (arr_7 [i_3] [(unsigned char)0] [i_3] [i_3]))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) arr_2 [i_0] [i_0]))));
                    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_0)) ? (var_1) : (arr_4 [i_0]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54436))))) != (((/* implicit */unsigned long long int) ((arr_0 [i_1]) | (((/* implicit */int) (unsigned short)54564))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 20; i_5 += 4) 
    {
        for (short i_6 = 0; i_6 < 20; i_6 += 2) 
        {
            {
                var_19 |= var_4;
                /* LoopNest 3 */
                for (long long int i_7 = 0; i_7 < 20; i_7 += 1) 
                {
                    for (unsigned short i_8 = 0; i_8 < 20; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 20; i_9 += 2) 
                        {
                            {
                                var_20 *= ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_9] [i_8] [i_7] [i_6] [(unsigned short)8])))))));
                                var_21 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) min((arr_12 [i_5] [i_5]), (((/* implicit */short) (signed char)-68))))))));
                                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_16 [i_8])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-6)) + (2147483647))) >> (((((/* implicit */int) (unsigned char)197)) - (190)))))) ? (((/* implicit */int) (signed char)95)) : (((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1))))))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (int i_10 = 4; i_10 < 16; i_10 += 3) /* same iter space */
                {
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_21 [i_10 - 4] [i_6] [i_6] [i_5] [i_6] [i_5])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_17 [i_5] [i_6] [i_6]))))))) ? (max((((((/* implicit */_Bool) (signed char)49)) ? (arr_21 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_5] [i_5] [i_5] [i_5]))))), (((/* implicit */long long int) arr_22 [i_10 + 4] [i_10 + 2] [i_10 - 2] [i_10] [i_10 + 2])))) : (((/* implicit */long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) var_5)))) || (((/* implicit */_Bool) arr_11 [i_10 + 4])))))))))));
                    var_24 = ((/* implicit */long long int) ((((/* implicit */int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_5] [i_5] [i_5] [i_5] [i_5]))) > (7413685697953465352ULL))), (arr_2 [i_5] [i_5])))) + (((/* implicit */int) ((unsigned char) ((var_11) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
                }
                for (int i_11 = 4; i_11 < 16; i_11 += 3) /* same iter space */
                {
                    var_25 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_17 [i_11 - 3] [i_11 + 1] [i_11]))));
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 0; i_12 < 20; i_12 += 4) 
                    {
                        for (signed char i_13 = 3; i_13 < 17; i_13 += 1) 
                        {
                            {
                                var_26 += ((/* implicit */short) (-2147483647 - 1));
                                arr_36 [i_5] |= ((/* implicit */short) max(((~((~(var_11))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-24033)) ? (4503599627370495LL) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)-68)) ^ (((/* implicit */int) (short)-1))))))))));
                                var_27 *= ((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_27 [i_13] [(unsigned short)13]))))) <= ((~(var_5)))));
                                var_28 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? ((+(arr_13 [i_11 - 1]))) : (((/* implicit */unsigned int) ((int) arr_6 [i_13])))));
                                var_29 += (~(((((((/* implicit */_Bool) -6294465513648766816LL)) ? (arr_35 [16ULL] [i_12] [i_5] [(signed char)7] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [14] [(signed char)14] [i_12] [i_5] [i_6] [i_5]))))) >> ((((~(((/* implicit */int) var_3)))) + (227))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) var_2))));
    /* LoopNest 2 */
    for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 1) 
    {
        for (short i_15 = 0; i_15 < 21; i_15 += 1) 
        {
            {
                var_31 -= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (~((~(-891006422)))))), (((((/* implicit */_Bool) max((var_0), (var_7)))) ? (((/* implicit */unsigned long long int) -1092576312)) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6))) : (var_6)))))));
                var_32 -= ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) var_4)) & (((/* implicit */int) ((short) var_8)))))) >= (((long long int) (!(((/* implicit */_Bool) arr_10 [i_14] [i_14] [i_14] [i_14] [5ULL])))))));
            }
        } 
    } 
}
