/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70817
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
    var_10 = ((/* implicit */int) max((((var_3) ^ (((/* implicit */long long int) ((/* implicit */int) min(((short)-19179), (((/* implicit */short) (unsigned char)238)))))))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) -1519564593))))), (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_0))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_2 = 2; i_2 < 15; i_2 += 2) 
                {
                    var_11 = (unsigned short)0;
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_0 - 1] [i_1 - 1] [i_2 + 3] [i_3 + 1])) - (((((/* implicit */int) arr_7 [i_1] [6] [(short)10])) + (((/* implicit */int) var_0))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_1])) ? (((/* implicit */int) (unsigned short)31696)) : (((/* implicit */int) (unsigned short)65535))))) : (((((/* implicit */_Bool) 5560045038468469389LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_2 + 2] [i_3 - 1] [i_0]))) : (arr_4 [i_1] [i_0 + 1])))));
                                var_13 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)31680))) ? (-2073314326) : ((-(((/* implicit */int) (unsigned char)0)))))));
                            }
                        } 
                    } 
                    var_14 *= ((/* implicit */short) ((((((/* implicit */_Bool) arr_6 [i_2] [6LL] [i_2])) ? (((((/* implicit */_Bool) 234937139)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)33))) : (var_5))) : (-87431797908816588LL))) << (((((/* implicit */int) arr_10 [i_2 - 2] [i_1 - 2] [i_2 - 2] [i_1 - 2])) >> (((((/* implicit */int) arr_6 [i_2] [i_0 + 1] [i_2 + 3])) - (3651)))))));
                }
                for (short i_5 = 2; i_5 < 16; i_5 += 2) 
                {
                    var_15 = ((/* implicit */unsigned short) ((int) ((((((/* implicit */long long int) var_2)) == (9223372036854775807LL))) ? (8626088391266969402LL) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (var_5))))));
                    var_16 |= ((/* implicit */short) (+(((/* implicit */int) arr_7 [i_0 - 1] [(short)2] [(short)2]))));
                    /* LoopSeq 2 */
                    for (unsigned char i_6 = 3; i_6 < 16; i_6 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (int i_7 = 3; i_7 < 16; i_7 += 4) 
                        {
                            var_17 -= ((/* implicit */unsigned char) ((((-87431797908816565LL) / (((((/* implicit */_Bool) 1519564569)) ? (2250362011250526183LL) : (6LL))))) + (((((/* implicit */long long int) -1519564593)) * (max((-2250362011250526183LL), (((/* implicit */long long int) arr_19 [i_5] [i_6 + 2] [i_5] [i_5]))))))));
                            var_18 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483623)) ? (((/* implicit */int) (unsigned short)33822)) : (((/* implicit */int) (unsigned short)31696))))) ? (((/* implicit */long long int) max((-2147483631), (((/* implicit */int) arr_19 [i_0 - 2] [i_1 - 1] [i_5] [i_5]))))) : (var_5)));
                        }
                        var_19 ^= ((/* implicit */int) (unsigned char)172);
                    }
                    for (unsigned char i_8 = 2; i_8 < 15; i_8 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_9 = 0; i_9 < 18; i_9 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned short) max(((+(((/* implicit */int) arr_10 [(unsigned char)5] [i_1 - 1] [i_5] [(unsigned char)5])))), (-842151484)));
                            var_21 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_0] [i_0 + 1] [i_1] [i_1] [i_1] [i_1 - 1])) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) arr_18 [i_0] [i_0 - 1] [i_1] [i_0 - 1] [(unsigned short)17] [i_1 - 1]))))) ^ (((max((var_5), (((/* implicit */long long int) (unsigned short)33839)))) - (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_0 - 2] [i_1 - 1])))))));
                        }
                        for (unsigned char i_10 = 3; i_10 < 16; i_10 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */short) ((unsigned short) (+(((/* implicit */int) var_1)))));
                            var_23 |= ((/* implicit */short) ((((min((((/* implicit */long long int) 1909866680)), (-2325080791202371313LL))) + (9223372036854775807LL))) << (((((-2325080791202371313LL) + (2325080791202371331LL))) - (18LL)))));
                            var_24 = ((/* implicit */unsigned char) -8601456412554517636LL);
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) (unsigned char)31)) == (((/* implicit */int) (unsigned char)48))))), ((~(((/* implicit */int) (unsigned char)254))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 - 2] [i_1 - 1] [i_0 - 2]))) : (max((((((/* implicit */_Bool) (short)25362)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)146))) : (var_3))), (((/* implicit */long long int) ((short) -2250362011250526189LL)))))));
                        }
                        for (unsigned char i_11 = 3; i_11 < 16; i_11 += 1) /* same iter space */
                        {
                            var_26 = ((/* implicit */int) arr_10 [i_0] [i_5 + 1] [i_8] [i_11]);
                            var_27 = ((/* implicit */int) (short)(-32767 - 1));
                            var_28 = ((/* implicit */unsigned char) max((max((((((/* implicit */_Bool) (unsigned char)1)) ? (842151483) : (((/* implicit */int) (unsigned char)16)))), (((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) (unsigned char)24))));
                        }
                        var_29 &= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (+(((/* implicit */int) (short)0))))), (min((-1LL), (87431797908816555LL)))))) ? (((/* implicit */int) ((((long long int) -995553460)) == (((((/* implicit */_Bool) arr_21 [i_1 - 1] [i_1 - 1])) ? (arr_2 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (short)17664)))))))) : (((/* implicit */int) min((((unsigned char) 2147483643)), (arr_10 [i_5] [i_5] [i_0] [i_0]))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_12 = 2; i_12 < 16; i_12 += 3) /* same iter space */
                        {
                            var_30 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1056318058)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_8] [i_5 + 1] [i_8 + 1]))) : (var_6)));
                            var_31 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -6390801120637366676LL)) ? (-3082375099458980932LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-1))))) ^ (-8573249896659430125LL)));
                        }
                        for (unsigned char i_13 = 2; i_13 < 16; i_13 += 3) /* same iter space */
                        {
                            var_32 = (short)-25364;
                            var_33 = ((/* implicit */int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : (((arr_5 [i_1] [i_5 - 1] [i_8 - 1]) | (((((/* implicit */_Bool) -162163037)) ? (var_6) : (-8573249896659430125LL)))))));
                            var_34 = ((/* implicit */int) min((((/* implicit */unsigned short) min((arr_27 [i_8 + 2] [i_1] [i_1]), (arr_27 [i_8 + 2] [1] [i_1])))), (min(((unsigned short)32870), (((/* implicit */unsigned short) (unsigned char)98))))));
                        }
                        for (unsigned char i_14 = 2; i_14 < 16; i_14 += 3) /* same iter space */
                        {
                            var_35 = 127633159;
                            var_36 = ((/* implicit */int) (!(((/* implicit */_Bool) min(((short)32767), (max((((/* implicit */short) (unsigned char)0)), ((short)25362))))))));
                        }
                    }
                }
                for (unsigned char i_15 = 1; i_15 < 16; i_15 += 2) 
                {
                    var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)255))) ? (((((/* implicit */_Bool) 1198144173)) ? (((/* implicit */int) ((unsigned short) (short)-8292))) : (((/* implicit */int) (short)-9286)))) : ((~(((/* implicit */int) arr_23 [i_0 - 1] [(unsigned char)10] [i_1] [(short)12] [i_0 - 1]))))));
                    var_38 = ((/* implicit */unsigned short) (+(((((((/* implicit */int) (short)-32762)) ^ (var_7))) + (((/* implicit */int) min(((unsigned char)255), ((unsigned char)15))))))));
                }
                var_39 ^= ((/* implicit */int) arr_19 [i_0] [4LL] [i_1] [i_0]);
                var_40 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)8305)) + (134217727)))) ? (((/* implicit */long long int) min((-1535746960), (1657104363)))) : (var_3)))) ? (((((/* implicit */int) max((arr_27 [i_0] [i_0 - 2] [i_1]), ((unsigned char)0)))) + (((/* implicit */int) ((unsigned char) var_9))))) : ((+(678722475))));
            }
        } 
    } 
    var_41 = ((/* implicit */short) 3082375099458980931LL);
}
