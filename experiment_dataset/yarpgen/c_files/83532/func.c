/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83532
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
    var_10 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */long long int) (-(var_0)))))));
    var_11 = ((/* implicit */unsigned short) ((long long int) 2628994336U));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 4; i_1 < 18; i_1 += 4) 
        {
            var_12 |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1]))) == (max((((/* implicit */unsigned long long int) min((arr_3 [i_0] [i_1 - 2] [(signed char)15]), (((/* implicit */unsigned int) var_3))))), (arr_1 [15])))));
            var_13 = ((/* implicit */unsigned long long int) min((var_13), (max((arr_1 [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_8)) > (arr_0 [i_1] [i_1]))))))));
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 3) /* same iter space */
        {
            var_14 = ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_2 + 2])) ? (((((/* implicit */_Bool) (-(arr_1 [i_2])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) : (((2378341045146613144ULL) << (((arr_6 [i_0] [i_2]) - (6177942255817721955LL))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) arr_5 [i_0] [i_2])) & (var_0))) == ((~(var_0)))))))));
            var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)255))))) ? (((((/* implicit */_Bool) (~(arr_0 [i_0] [i_2 - 1])))) ? ((((_Bool)1) ? (arr_7 [i_0 - 1] [i_0] [i_2 + 2]) : (((/* implicit */unsigned long long int) var_3)))) : ((~(arr_1 [i_0]))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || ((_Bool)1)))), (arr_6 [i_0] [i_2]))))));
            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (~(2181431069507584ULL))))));
            var_17 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [(short)4] [i_2 + 2] [i_0])) + (((/* implicit */int) arr_2 [(_Bool)1] [(_Bool)1] [i_0]))))) > (((unsigned long long int) arr_0 [i_0] [i_0])))) ? (((((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_0]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_7 [i_0] [i_0 - 2] [i_0])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)21037)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (3686028414256782681LL))))));
        }
        for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 3) /* same iter space */
        {
            /* LoopSeq 3 */
            for (int i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                var_18 = (((!(((/* implicit */_Bool) arr_6 [i_4] [i_0])))) ? ((~(((long long int) arr_1 [i_3])))) : (arr_11 [i_0 - 2]));
                var_19 ^= ((/* implicit */unsigned int) ((((_Bool) arr_4 [7ULL] [i_3 + 1])) && ((!(((/* implicit */_Bool) arr_4 [i_0 - 2] [i_3]))))));
            }
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                var_20 = ((/* implicit */int) max((var_20), (var_8)));
                var_21 = ((/* implicit */unsigned short) -1LL);
                var_22 = ((/* implicit */unsigned char) arr_6 [i_3] [3ULL]);
                var_23 = ((/* implicit */long long int) (-((-(var_7)))));
            }
            for (int i_6 = 0; i_6 < 20; i_6 += 1) 
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_7 = 1; i_7 < 17; i_7 += 3) /* same iter space */
                {
                    var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) * ((-(arr_3 [i_0] [i_6] [i_7]))))))));
                    var_25 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((long long int) ((arr_3 [i_0] [i_0] [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))), (((arr_7 [i_7 - 1] [i_3] [i_0]) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 36028796750528512LL)) ? (-1LL) : (((/* implicit */long long int) arr_18 [i_0] [(unsigned char)6] [i_7 + 3] [i_0])))))))));
                    var_26 = ((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */unsigned int) -2036597508)), (3980067550U))));
                }
                for (unsigned long long int i_8 = 1; i_8 < 17; i_8 += 3) /* same iter space */
                {
                    var_27 &= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((-9223372036854775807LL) | (-3686028414256782704LL)))) < ((~(((((/* implicit */_Bool) arr_10 [i_0] [6U])) ? (var_1) : (var_7)))))));
                    var_28 = ((/* implicit */_Bool) max((var_28), ((!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) var_6)))) / (((/* implicit */unsigned long long int) ((arr_21 [i_8 + 2]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [10LL] [10LL])))))))))))));
                }
                for (unsigned long long int i_9 = 1; i_9 < 17; i_9 += 3) /* same iter space */
                {
                    var_29 = ((/* implicit */long long int) (-(((unsigned long long int) arr_2 [i_0] [i_0 - 2] [i_0]))));
                    arr_29 [i_0] [i_3] = ((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_0] [i_6] [i_6] [i_9 + 3]);
                }
                for (unsigned char i_10 = 1; i_10 < 18; i_10 += 1) 
                {
                    /* LoopSeq 2 */
                    for (short i_11 = 1; i_11 < 19; i_11 += 3) 
                    {
                        var_30 = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) 10333859515463308295ULL))) & (((/* implicit */int) ((((/* implicit */unsigned long long int) -9223372036854775807LL)) != (3970698142879833570ULL))))));
                        var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((signed char) (~(max((((/* implicit */int) arr_2 [i_3] [i_6] [(unsigned short)16])), (arr_12 [(unsigned char)18] [i_3] [i_3])))))))));
                        var_32 = ((unsigned long long int) ((((/* implicit */long long int) arr_21 [i_11])) | (((((/* implicit */_Bool) arr_13 [i_0] [i_3 - 1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [(short)11] [i_0]))) : (var_5)))));
                        var_33 = ((/* implicit */_Bool) max((((arr_11 [i_0 + 1]) / (((/* implicit */long long int) ((var_0) / (arr_12 [i_0] [i_3] [i_3])))))), (((/* implicit */long long int) ((((int) (_Bool)0)) * (((/* implicit */int) min(((unsigned short)65535), ((unsigned short)0)))))))));
                        var_34 = ((/* implicit */short) arr_18 [i_0 - 1] [i_3] [i_0 - 1] [i_0]);
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 1) 
                    {
                        var_35 = ((/* implicit */unsigned short) (_Bool)1);
                        var_36 = ((/* implicit */long long int) max((var_36), (arr_30 [i_0] [i_3] [i_0] [i_10])));
                    }
                    var_37 |= ((/* implicit */unsigned long long int) (((_Bool)1) && (((/* implicit */_Bool) (short)-18986))));
                    var_38 = ((/* implicit */short) (+(((long long int) ((unsigned long long int) var_5)))));
                }
                var_39 = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) min((var_9), (var_9))))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)21049), (((/* implicit */unsigned short) arr_32 [i_0] [i_3])))))) == (min((((/* implicit */unsigned long long int) arr_16 [i_0] [i_0] [i_0] [i_0])), (arr_22 [i_6] [i_3 + 1] [i_3] [i_3 + 2] [(_Bool)1]))))))));
                var_40 += ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) arr_11 [i_3 + 1])) - (var_1))), (((/* implicit */unsigned long long int) (_Bool)1))));
            }
            var_41 = ((/* implicit */int) ((((/* implicit */_Bool) (-(max((var_6), (arr_3 [i_0 - 2] [i_3 + 3] [i_0 - 1])))))) && (((/* implicit */_Bool) (+(arr_16 [i_0 + 1] [13ULL] [i_0 + 1] [6ULL]))))));
            var_42 -= ((/* implicit */_Bool) ((((int) ((arr_28 [i_0] [i_3] [i_3 + 3] [i_3]) || (((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_0] [i_0 - 2] [i_0] [i_0]))))) >> ((((~(arr_7 [11LL] [11LL] [(_Bool)1]))) >> ((((~(var_0))) - (1961333816)))))));
            var_43 = ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_32 [i_0 - 2] [i_3 + 1]), (arr_32 [i_0] [i_3 + 3]))))) - ((-(1967090633U))));
        }
    }
    var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_1) >> (((var_0) + (1961333887)))))) ? (((/* implicit */unsigned long long int) var_8)) : (min((((/* implicit */unsigned long long int) var_0)), (var_1))))))));
}
