/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96376
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
    var_17 = ((/* implicit */unsigned short) var_1);
    var_18 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) (unsigned short)65535)) ? (((unsigned long long int) (unsigned short)62531)) : (18446744073709551615ULL)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 22; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_19 = ((/* implicit */_Bool) (-(4294967295U)));
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((_Bool) 4294967295U)))));
                            var_21 = (!(((/* implicit */_Bool) 4294967295U)));
                            var_22 = ((/* implicit */unsigned short) (-(0U)));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)20128)) != (((/* implicit */int) (signed char)31)))))));
                            arr_20 [i_3] [(unsigned short)5] [14ULL] [i_3] [i_5] [10U] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)3))));
                            arr_21 [i_0] [9ULL] [i_2] [i_0] [i_5] = ((/* implicit */_Bool) ((unsigned short) (unsigned short)45417));
                            arr_22 [i_0] [i_0] [(_Bool)1] [i_0] [i_3] [i_5] = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((unsigned int) (unsigned short)45417)) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20119))))))));
                            arr_23 [i_5] [i_0] [i_2] [i_3] [i_1 - 2] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_3] [i_0])) ? (((/* implicit */int) (unsigned short)64330)) : (((((/* implicit */_Bool) (unsigned short)45416)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63))) <= (4U)))) : (((/* implicit */int) (unsigned short)255))))));
                        }
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (signed char i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned int) arr_7 [17U] [i_3] [i_0]);
                            var_25 = ((/* implicit */unsigned int) max((var_25), (((((((/* implicit */int) (unsigned short)20128)) <= (((/* implicit */int) (unsigned short)7)))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0])) ? (4194303U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45427))))) : (((unsigned int) (signed char)-110))))));
                        }
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) (signed char)-1)), ((unsigned short)45407)));
                            var_27 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                            arr_29 [i_0] = ((/* implicit */signed char) var_2);
                        }
                        for (unsigned int i_8 = 0; i_8 < 23; i_8 += 2) 
                        {
                            var_28 = (signed char)-56;
                            var_29 = ((/* implicit */unsigned int) min((var_29), (min((524287U), (6U)))));
                        }
                        arr_32 [i_0] [i_0] = ((((/* implicit */_Bool) (unsigned char)239)) && ((!(((/* implicit */_Bool) arr_1 [22U])))));
                        arr_33 [(_Bool)1] [i_0] [i_2] [(_Bool)1] [i_0] [i_0] = ((/* implicit */unsigned char) ((4294967291U) >> (((1024531947631439654ULL) - (1024531947631439651ULL)))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 23; i_9 += 2) /* same iter space */
                    {
                        arr_37 [(_Bool)1] [i_1 - 1] [i_0] [i_9] = ((/* implicit */unsigned char) ((1024531947631439639ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0)))));
                        var_30 -= ((/* implicit */_Bool) ((unsigned char) (signed char)31));
                        var_31 = ((/* implicit */unsigned short) (((_Bool)1) ? (1023U) : (4294967292U)));
                        var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)106)) ? (((unsigned int) ((((((/* implicit */int) (signed char)-1)) + (2147483647))) >> (((/* implicit */int) (unsigned char)11))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))));
                        var_33 |= ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)45424))));
                    }
                    for (unsigned int i_10 = 0; i_10 < 23; i_10 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_11 = 0; i_11 < 23; i_11 += 2) 
                        {
                            var_34 -= ((/* implicit */unsigned long long int) arr_11 [16U] [i_11]);
                            arr_43 [(unsigned char)21] [i_0] [i_2] [i_2] [i_11] = ((/* implicit */_Bool) var_6);
                        }
                        arr_44 [i_0] [i_1 + 1] [i_1] [i_0] = ((/* implicit */unsigned int) ((unsigned short) 11277938908411298485ULL));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_12 = 0; i_12 < 23; i_12 += 2) 
                        {
                            arr_47 [i_0] [19U] [19U] [i_1 - 4] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)2047))));
                            var_35 *= ((/* implicit */signed char) arr_28 [i_2] [i_2] [(unsigned short)1] [i_2] [i_2] [(_Bool)1] [22U]);
                            arr_48 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(18446744073709551615ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)11))) : (min((((/* implicit */unsigned int) ((unsigned char) 641571966U))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)244))) + (4U)))))));
                        }
                        for (unsigned int i_13 = 0; i_13 < 23; i_13 += 2) 
                        {
                            arr_51 [i_13] [i_0] [(unsigned char)7] [i_1 + 1] [i_0] [i_0] = ((/* implicit */unsigned int) ((_Bool) (unsigned char)11));
                            var_36 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) min(((unsigned short)60731), (((/* implicit */unsigned short) (_Bool)1))))) << ((((-(((/* implicit */int) (_Bool)1)))) + (21)))));
                        }
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_37 *= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)65535))));
                            var_38 = ((/* implicit */_Bool) ((signed char) 4294967283U));
                            var_39 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)-21)) ? (arr_10 [i_14] [i_2] [i_1] [7U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        }
                        /* vectorizable */
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            var_40 = (-(arr_46 [i_0] [i_0] [i_2] [i_15]));
                            var_41 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) < (((/* implicit */int) (unsigned char)244)))))));
                        }
                        arr_57 [i_0] [i_1] [i_2] [i_2] [8ULL] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)11613)) && (((/* implicit */_Bool) (unsigned char)255))))) ^ (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))));
                    }
                    var_42 = ((/* implicit */unsigned int) ((signed char) ((unsigned char) 600185660U)));
                    var_43 = ((/* implicit */signed char) (unsigned short)45417);
                }
            } 
        } 
    } 
}
