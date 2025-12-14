/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91966
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_18 *= ((/* implicit */short) ((((/* implicit */int) (((~(((/* implicit */int) arr_0 [i_0])))) <= (arr_1 [i_0])))) >> ((-(((arr_0 [i_0]) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_0 [i_0]))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((signed char) ((((/* implicit */int) (unsigned short)5620)) / (-1188585018)))))));
            arr_6 [i_0] [i_0] |= ((/* implicit */signed char) 1185231804);
            var_20 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)5620)) || (((/* implicit */_Bool) (short)24499)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0])) && (((/* implicit */_Bool) var_16)))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 - 1]))) : (arr_5 [i_1])))));
            var_21 = ((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1] [i_1 - 1])) ? (((/* implicit */int) (unsigned char)70)) : (((/* implicit */int) var_16)));
        }
        for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((arr_0 [i_2]) ? (((((/* implicit */_Bool) (short)24575)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_8 [i_2] [i_2] [i_0]))) : (((/* implicit */unsigned long long int) 0U)))))));
            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) - (0))))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (long long int i_3 = 2; i_3 < 14; i_3 += 3) 
            {
                var_24 = ((/* implicit */unsigned char) (~((+(((/* implicit */int) (unsigned short)59915))))));
                var_25 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)5620)) ? (((/* implicit */int) arr_4 [i_3 + 1] [i_2] [i_3 - 2])) : (((/* implicit */int) arr_4 [i_0] [i_2] [i_3 - 1]))));
            }
            for (long long int i_4 = 4; i_4 < 14; i_4 += 4) 
            {
                var_26 = ((/* implicit */unsigned int) arr_15 [i_2]);
                arr_16 [i_0] [i_2] = ((/* implicit */long long int) min(((-(var_15))), (((/* implicit */int) (_Bool)0))));
                var_27 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) arr_4 [i_4 - 4] [i_4] [i_4 - 1])) & (((/* implicit */int) (unsigned short)59915)))));
            }
            for (unsigned short i_5 = 0; i_5 < 15; i_5 += 2) 
            {
                var_28 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(arr_5 [i_5]))))));
                /* LoopNest 2 */
                for (unsigned int i_6 = 2; i_6 < 14; i_6 += 4) 
                {
                    for (short i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        {
                            var_29 *= ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_22 [i_0] [i_2] [i_7] [i_6] [i_6 + 1])) % (arr_20 [i_0] [i_6] [i_5] [i_0])))));
                            var_30 = ((/* implicit */int) min((var_30), ((+(((/* implicit */int) ((arr_7 [(unsigned short)14] [i_2] [i_5]) <= (((/* implicit */unsigned long long int) arr_11 [i_2] [i_5] [i_7])))))))));
                            var_31 = ((/* implicit */short) max((((/* implicit */unsigned int) ((arr_21 [i_0] [i_6 - 2] [i_6]) ? (((arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) 755444830)) ? (755444830) : (((/* implicit */int) var_5))))))), (((((/* implicit */_Bool) arr_20 [i_0] [i_2] [i_0] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_6 + 1] [i_6] [i_6] [i_6 - 1] [i_6 - 2]))) : (((arr_13 [i_6] [i_2] [i_0]) + (((/* implicit */unsigned int) arr_20 [i_0] [i_2] [i_6] [i_7]))))))));
                            arr_25 [i_2] [i_2] [i_5] [i_2] [i_6 - 1] [i_6 - 1] = ((/* implicit */int) (!(((/* implicit */_Bool) (((-(0))) / (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-58)), (var_11)))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_8 = 0; i_8 < 15; i_8 += 3) 
                {
                    arr_28 [i_0] [i_2] [i_0] [i_2] [i_8] [i_8] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                    var_32 ^= ((/* implicit */_Bool) (unsigned short)5621);
                    var_33 = ((/* implicit */int) arr_15 [i_5]);
                    var_34 ^= ((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_5] [i_2] [i_5] [i_8])) > (((/* implicit */int) arr_14 [i_0] [i_5] [i_2] [i_0]))));
                    /* LoopSeq 2 */
                    for (long long int i_9 = 2; i_9 < 14; i_9 += 4) 
                    {
                        var_35 = ((((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_0] [i_2] [i_8] [i_9])) || (((/* implicit */_Bool) 755444830))))) != (((((/* implicit */int) (short)26522)) / (((/* implicit */int) (unsigned short)36379)))));
                        var_36 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 8388607)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_9 + 1] [i_9 - 2] [i_9 + 1]))) : (((arr_7 [i_5] [i_2] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    }
                    for (unsigned short i_10 = 0; i_10 < 15; i_10 += 3) 
                    {
                        var_37 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_0] [i_5] [i_5])) ? (((/* implicit */int) arr_32 [i_0] [i_2] [i_2])) : (var_3)));
                        var_38 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_0] [i_2] [i_5] [i_2] [(unsigned char)3]))));
                        arr_34 [i_2] [i_2] [i_5] [i_5] [i_2] [i_2] &= ((/* implicit */unsigned short) arr_24 [i_0] [i_0] [i_0]);
                    }
                }
                var_39 -= ((/* implicit */signed char) ((arr_1 [i_2]) == (((/* implicit */int) (signed char)0))));
            }
            for (signed char i_11 = 0; i_11 < 15; i_11 += 4) 
            {
                var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) 755444830))));
                arr_38 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_0] [i_2] [i_11] [i_11])) ? (arr_20 [i_0] [i_2] [i_2] [i_11]) : (((/* implicit */int) arr_26 [i_11] [i_11] [i_2] [i_0]))))) / (2174804274848113215ULL)));
            }
        }
    }
    var_41 |= ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)158)) - (((/* implicit */int) (unsigned char)213))))))))) : (var_2)));
    var_42 = ((/* implicit */unsigned int) min((var_42), (((/* implicit */unsigned int) ((short) var_3)))));
    var_43 += ((/* implicit */signed char) (-(((-755444831) & (((/* implicit */int) ((((/* implicit */_Bool) 18070907440203618265ULL)) || (((/* implicit */_Bool) var_6)))))))));
}
