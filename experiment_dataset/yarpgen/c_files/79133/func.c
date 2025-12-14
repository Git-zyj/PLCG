/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79133
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((int) (short)-27711)), (((/* implicit */int) var_9))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(var_14))))))) : (((/* implicit */int) var_4))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? ((+(var_2))) : (max((((/* implicit */int) (short)7579)), (arr_8 [i_0] [i_0] [i_1] [i_0])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_9), (arr_4 [i_0] [i_0] [i_0]))))) : (((((/* implicit */_Bool) -4220263323799045820LL)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) : (((arr_4 [i_1 - 2] [i_0] [i_2 - 1]) ? (((/* implicit */long long int) (-(((/* implicit */int) var_1))))) : ((-(var_19)))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (signed char i_3 = 2; i_3 < 18; i_3 += 1) /* same iter space */
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */short) ((-437691102) < (arr_9 [i_0] [i_2 - 1] [i_2 + 1] [(unsigned short)8])));
                        var_22 = ((/* implicit */int) (((~(var_8))) != (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)27714)))))));
                    }
                    for (signed char i_4 = 2; i_4 < 18; i_4 += 1) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 4) 
                        {
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_2 + 1] [i_4] [i_5])) ? (arr_14 [i_0] [i_0] [(short)1] [(short)1] [i_0]) : (((/* implicit */long long int) 437691105)))) | (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))))) ? (min((((/* implicit */int) var_6)), (((((/* implicit */_Bool) var_15)) ? (arr_8 [i_0] [i_1] [i_2] [i_4]) : (((/* implicit */int) (unsigned short)36727)))))) : (((/* implicit */int) ((signed char) arr_7 [i_0] [i_2 - 1])))));
                            var_24 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_4 [i_4 - 2] [i_1] [i_2])), (var_14))))));
                        }
                        for (long long int i_6 = 2; i_6 < 19; i_6 += 1) 
                        {
                            arr_19 [i_0] [i_1] = ((/* implicit */_Bool) ((max((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)28810))))), (9223372036854775807LL))) & (((/* implicit */long long int) ((/* implicit */int) (short)32767)))));
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) var_17)) >= (arr_2 [i_0])));
                            var_26 = (+(((/* implicit */int) var_16)));
                        }
                        /* vectorizable */
                        for (unsigned int i_7 = 3; i_7 < 19; i_7 += 2) 
                        {
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0]))));
                            var_28 &= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)255)) ? (((((/* implicit */_Bool) (short)18815)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4195236443U)) ? (3902786544751459380LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46449))))))));
                        }
                        /* vectorizable */
                        for (long long int i_8 = 4; i_8 < 19; i_8 += 2) 
                        {
                            var_29 = ((/* implicit */short) ((var_18) && (((/* implicit */_Bool) arr_2 [i_0]))));
                            arr_26 [i_0] [9U] [i_0] [(short)1] [i_0] = ((/* implicit */unsigned char) var_15);
                            var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_24 [i_0] [i_1] [5] [i_4 + 2] [i_8] [i_4 + 2] [i_1 + 1])) : (((/* implicit */int) (short)-24311))));
                            arr_27 [i_8] [i_1] [i_4] [i_0] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) 437691102)) ? (((/* implicit */unsigned long long int) 3902786544751459380LL)) : (2834306224742469946ULL)));
                        }
                        var_31 = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)28812))))) <= (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (var_7)))))), ((~(((/* implicit */int) ((-3902786544751459380LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36743))))))))));
                    }
                    for (signed char i_9 = 2; i_9 < 18; i_9 += 1) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */int) arr_28 [(_Bool)1] [i_2 + 1] [i_2] [i_0])) >= (((/* implicit */int) arr_29 [i_0] [6ULL] [i_2 + 1]))))), ((~(((/* implicit */int) min((var_4), (((/* implicit */unsigned char) arr_4 [i_1 + 1] [i_0] [i_9])))))))));
                        var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_9 + 2] [i_2] [i_1] [(unsigned short)7] [i_0])) ? (var_12) : (((/* implicit */unsigned int) 437691123))))) ? (var_0) : (((var_17) ? (var_7) : (((/* implicit */long long int) 1967643519))))))) ? (min((((/* implicit */int) arr_12 [i_0] [i_1 - 1] [19] [i_2] [i_2] [i_9])), (((((/* implicit */_Bool) arr_28 [i_0] [i_1] [i_2] [i_0])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_4)))))) : ((~(((/* implicit */int) arr_28 [i_0] [i_1 - 1] [i_0] [i_0]))))));
                        var_34 = ((/* implicit */unsigned int) var_18);
                        arr_30 [i_1] &= ((/* implicit */long long int) ((int) ((((/* implicit */int) (short)0)) == (((/* implicit */int) var_10)))));
                        var_35 = ((/* implicit */short) (((!(((/* implicit */_Bool) 3035828297U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127)))))) : ((+(arr_16 [i_9 - 1] [i_2 - 1] [i_1 + 1] [i_0] [i_0])))));
                    }
                    for (signed char i_10 = 2; i_10 < 18; i_10 += 1) /* same iter space */
                    {
                        arr_33 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)182)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (((((/* implicit */_Bool) (signed char)-1)) ? (-30668531737726962LL) : (((/* implicit */long long int) arr_1 [i_0])))))))) : (((((/* implicit */_Bool) var_12)) ? (3902786544751459380LL) : (((/* implicit */long long int) arr_18 [i_1 - 2]))))));
                        arr_34 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_28 [i_1] [i_1 - 2] [i_2 + 1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_0] [i_1 - 2] [i_2 - 1]))) : (-3902786544751459380LL))) ^ (((long long int) 3116279374U))));
                    }
                    var_36 = ((/* implicit */long long int) arr_8 [i_0] [i_1] [i_1] [i_0]);
                    var_37 = arr_15 [i_0] [i_0] [i_0] [i_0] [i_0];
                }
            } 
        } 
        var_38 = ((/* implicit */_Bool) ((unsigned long long int) (-(((/* implicit */int) var_17)))));
        var_39 = ((/* implicit */unsigned char) (~(((((arr_2 [i_0]) + (2147483647))) << (((var_11) - (1033659233U)))))));
    }
    for (unsigned short i_11 = 0; i_11 < 20; i_11 += 2) 
    {
        var_40 = ((/* implicit */unsigned short) arr_25 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]);
        var_41 = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) ((var_5) < (((/* implicit */unsigned long long int) var_3))))), (arr_16 [i_11] [i_11] [i_11] [i_11] [(unsigned short)12]))), (arr_16 [i_11] [i_11] [i_11] [i_11] [(short)3])));
        var_42 = ((/* implicit */unsigned short) ((short) (unsigned short)10515));
    }
    /* vectorizable */
    for (signed char i_12 = 0; i_12 < 18; i_12 += 2) 
    {
        var_43 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37867))) / (var_5)));
        var_44 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_40 [i_12])))) ? ((+(((/* implicit */int) arr_0 [i_12])))) : (((/* implicit */int) var_4))));
        /* LoopNest 2 */
        for (unsigned int i_13 = 0; i_13 < 18; i_13 += 2) 
        {
            for (unsigned long long int i_14 = 2; i_14 < 16; i_14 += 2) 
            {
                {
                    var_45 = ((/* implicit */unsigned char) ((_Bool) var_4));
                    var_46 = ((/* implicit */int) ((((/* implicit */int) arr_24 [i_14] [i_14 - 2] [i_14] [i_14 - 1] [i_14 + 1] [i_14] [i_14 - 1])) == (arr_22 [i_14 + 1] [i_14 + 2] [i_14 + 2])));
                    var_47 &= ((/* implicit */unsigned char) var_1);
                    arr_46 [i_12] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_14 + 2] [i_14 - 2] [i_14 - 2])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_15))))) : (((/* implicit */int) var_1))));
                    var_48 = ((/* implicit */long long int) min((var_48), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_28 [i_12] [i_12] [i_13] [i_14]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_2)) : (var_8))))))));
                }
            } 
        } 
    }
    var_49 = ((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3902786544751459394LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1655989349U))))));
    var_50 = ((/* implicit */int) var_7);
}
