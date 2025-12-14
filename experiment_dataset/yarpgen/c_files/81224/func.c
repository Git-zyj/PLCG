/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81224
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
    var_19 = ((/* implicit */unsigned char) var_3);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) min((((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned char)244)) >> (((arr_1 [(unsigned char)1] [17LL]) - (1314276260))))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)153))) == (((((/* implicit */_Bool) arr_0 [i_0] [(unsigned char)14])) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)85)) || (((/* implicit */_Bool) arr_2 [i_0]))));
            arr_7 [i_0] [i_1] [(unsigned short)14] = ((/* implicit */unsigned int) min((((/* implicit */int) arr_0 [i_0] [i_0])), (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_4 [i_1] [i_0])) : (((/* implicit */int) (unsigned char)153)))) / (((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_0])), ((unsigned short)65535))))))));
            var_21 ^= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_15) : (arr_1 [i_0] [i_1])))) ? (((/* implicit */int) ((((/* implicit */int) var_5)) >= (var_17)))) : (((/* implicit */int) (unsigned char)11)))), (((/* implicit */int) (unsigned char)153))));
        }
        arr_8 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) var_7)) / (((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_0]))))) ? (((/* implicit */int) max((var_14), (((/* implicit */unsigned char) arr_4 [i_0] [i_0]))))) : (((((/* implicit */int) (unsigned char)102)) - (((/* implicit */int) (unsigned char)37))))))));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 18; i_2 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((14340697162964288546ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)153))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            /* LoopSeq 1 */
            for (signed char i_4 = 0; i_4 < 18; i_4 += 1) 
            {
                var_23 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_2]))));
                var_24 += ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_11 [i_2] [i_2]))));
                arr_19 [i_4] = ((/* implicit */short) (unsigned char)102);
                /* LoopSeq 2 */
                for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    var_25 = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)47)) + (((/* implicit */int) (signed char)-3)))) + (((((/* implicit */_Bool) (unsigned char)80)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)236))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_16 [i_5]) / (arr_21 [i_2] [i_3] [i_2] [i_3] [i_6])))) ? (((/* implicit */int) arr_9 [i_2])) : (((/* implicit */int) arr_22 [4LL] [i_5] [(unsigned short)7] [i_2] [i_2])))))));
                        var_27 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)117)) : (((/* implicit */int) (unsigned char)0)))))));
                    }
                    for (signed char i_7 = 0; i_7 < 18; i_7 += 3) 
                    {
                        arr_29 [i_4] [i_4] [1U] = ((/* implicit */unsigned long long int) arr_28 [i_4] [i_4] [i_4] [i_4] [i_7] [i_4] [i_3]);
                        var_28 = ((/* implicit */unsigned long long int) (((~(arr_25 [i_2] [i_3] [i_2] [i_2] [i_3]))) / ((+(var_15)))));
                    }
                    arr_30 [i_3] [i_3] [i_4] [i_5] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [13U] [13U] [13U])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_0 [i_2] [(signed char)2]))));
                }
                for (signed char i_8 = 3; i_8 < 17; i_8 += 3) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned long long int) arr_23 [i_8 - 3] [(short)14] [(unsigned char)14] [i_8 - 3] [i_8 - 1] [i_8 + 1] [i_8 - 2]);
                        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_9])) ? (((((/* implicit */_Bool) arr_25 [i_2] [i_2] [i_4] [i_2] [i_9])) ? (-1322746528) : (((/* implicit */int) arr_14 [i_9] [i_9])))) : (((/* implicit */int) (unsigned short)13061))));
                        arr_38 [i_2] [i_2] [i_3] [(short)12] [i_2] [i_2] [i_9] |= ((/* implicit */long long int) (unsigned char)103);
                        arr_39 [i_4] [5LL] [i_4] [i_8] [5LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-25)) ? (7512387071247969351LL) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_2] [i_3] [(short)2] [i_8 + 1] [i_2])))));
                        arr_40 [i_2] [i_4] [i_2] [(_Bool)1] [5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_35 [i_8 + 1] [i_8] [(unsigned char)11] [(unsigned short)4] [i_8 + 1] [i_8 + 1] [i_4])) == (((/* implicit */int) arr_37 [i_8 - 1] [i_4] [i_4] [i_4] [i_4]))));
                    }
                    arr_41 [i_2] [(unsigned char)9] [i_4] [i_2] [(unsigned char)14] = ((/* implicit */unsigned char) ((signed char) arr_23 [i_2] [i_8 - 1] [(unsigned short)9] [i_2] [i_8] [i_8 - 1] [(signed char)7]));
                }
            }
            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) (-(((/* implicit */int) arr_33 [i_2] [i_2] [i_2] [i_2])))))));
            /* LoopSeq 1 */
            for (unsigned char i_10 = 2; i_10 < 17; i_10 += 1) 
            {
                arr_44 [i_2] [i_2] [i_10] [i_10] |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_23 [i_10] [9ULL] [i_3] [i_3] [i_2] [9ULL] [i_2]))))) + (arr_43 [(short)4] [i_10 - 1] [(short)4])));
                var_32 = ((/* implicit */int) -2879958129813587598LL);
            }
        }
        arr_45 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */int) (short)21299)) : (((/* implicit */int) arr_9 [i_2]))));
    }
    var_33 = ((/* implicit */unsigned short) var_8);
    var_34 = ((short) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)-97)))) == (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_10)))))));
    var_35 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned char)255), ((unsigned char)255)))) && (((/* implicit */_Bool) ((unsigned char) (unsigned short)52475)))))) == (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-97)))))))));
}
