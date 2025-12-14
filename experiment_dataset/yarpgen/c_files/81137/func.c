/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81137
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
    var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) ((var_12) == (var_1)))))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            var_20 ^= ((/* implicit */unsigned short) arr_4 [(signed char)2] [i_1 - 1]);
            /* LoopSeq 3 */
            for (int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                var_21 ^= ((/* implicit */unsigned short) (((+(((/* implicit */int) var_9)))) << (((/* implicit */int) var_11))));
                /* LoopSeq 2 */
                for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1 + 1] [4] [i_1 + 1])))))));
                    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) var_13))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        var_24 += (+(((((/* implicit */long long int) var_17)) / (var_3))));
                        var_25 = ((/* implicit */unsigned int) -659510486);
                    }
                }
                for (long long int i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    var_26 = ((/* implicit */unsigned int) min((var_2), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */long long int) var_17)))) < (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [5ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_5 [i_0] [i_1] [i_2])))))))));
                    var_27 *= ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_11)), ((+(arr_5 [i_1 + 1] [4] [(signed char)10])))));
                }
                arr_18 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) arr_12 [i_0] [i_0] [i_0] [i_1] [i_2] [i_1] [i_0]);
            }
            for (long long int i_6 = 1; i_6 < 11; i_6 += 1) 
            {
                var_28 += ((/* implicit */unsigned char) (+((-(((/* implicit */int) (unsigned char)21))))));
                /* LoopSeq 3 */
                for (int i_7 = 0; i_7 < 12; i_7 += 3) 
                {
                    var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_15)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)214))) < (arr_0 [i_0])))) : (((/* implicit */int) ((var_16) >= (var_1)))))))));
                    var_30 = (+(659510488));
                    var_31 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)120)) ? (var_10) : (((/* implicit */long long int) var_17))))))))) * (((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 - 1])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) * (9223372036854775807ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)234)))))))));
                }
                for (unsigned int i_8 = 0; i_8 < 12; i_8 += 1) 
                {
                    /* LoopSeq 1 */
                    for (int i_9 = 1; i_9 < 11; i_9 += 1) 
                    {
                        var_32 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_29 [6U] [i_1 - 1] [i_6 - 1] [7] [i_9 + 1])), (arr_13 [i_1 - 1] [i_6 + 1] [i_6] [7] [i_0] [i_9 - 1] [(unsigned short)8]))))));
                        var_33 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_1))));
                    }
                    arr_30 [i_0] [i_0] [i_1 - 1] [i_6 - 1] [i_0] = ((/* implicit */unsigned char) (-(min((var_10), (((/* implicit */long long int) var_2))))));
                    var_34 = ((/* implicit */int) min((var_7), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) -1879986752))))) <= (((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (var_6)))))))));
                    arr_31 [(unsigned char)0] [i_1] |= ((/* implicit */long long int) (+(((min((((/* implicit */unsigned long long int) (signed char)91)), (11963190399081444788ULL))) ^ (((/* implicit */unsigned long long int) (-(var_8))))))));
                }
                for (unsigned char i_10 = 0; i_10 < 12; i_10 += 1) 
                {
                    arr_35 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) < (min((max((arr_34 [i_0] [i_0] [(signed char)4] [i_0] [i_6 - 1] [i_10]), (var_15))), (((/* implicit */unsigned int) (unsigned char)144))))));
                    arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) max((var_7), (arr_11 [i_0] [i_6 - 1] [i_0])))))));
                }
            }
            for (unsigned int i_11 = 2; i_11 < 10; i_11 += 3) 
            {
                var_35 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)234))))) < (((((/* implicit */_Bool) -1948627265)) ? (var_15) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)21)) ? (659510507) : (((/* implicit */int) (unsigned char)234)))))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_12 = 2; i_12 < 10; i_12 += 3) 
                {
                    var_36 += ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - (var_15))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_12 - 1] [i_12 + 2] [i_11 - 1] [6U] [i_1 + 1]))))))) < (((((/* implicit */_Bool) -8110196581883589562LL)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
                    var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) arr_27 [i_12])) > (var_8))))) > (arr_5 [i_11 + 1] [i_11 - 1] [i_11 - 2])))))))));
                }
                for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 1) 
                {
                    arr_46 [i_0] [i_13] = ((/* implicit */short) var_15);
                    var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) (((+(var_7))) < (((/* implicit */unsigned int) -659510467)))))));
                    arr_47 [(short)10] [i_1] [i_13] [i_13] [i_11] [i_1 - 1] &= ((/* implicit */_Bool) ((((/* implicit */int) var_5)) ^ ((+(((/* implicit */int) arr_23 [i_0] [(unsigned char)2]))))));
                    arr_48 [i_0] [0ULL] [i_0] [i_0] [i_0] [i_0] = max((((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))), (var_3));
                }
                arr_49 [i_0] [i_1 - 1] [i_11 - 2] [i_1 - 1] = ((/* implicit */unsigned char) arr_21 [i_11 - 1] [i_11] [7] [i_1] [i_0]);
            }
            var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) ((((var_13) | (((/* implicit */unsigned long long int) (~(arr_32 [i_0] [i_0] [i_0] [2] [2])))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) | (659510487)))))))));
        }
        var_40 = ((/* implicit */int) max((((/* implicit */long long int) min(((-(var_12))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)11))) > (var_7))))))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)120)) & (((/* implicit */int) (unsigned short)59440))))) ? ((+(-8110196581883589582LL))) : (((/* implicit */long long int) (+(var_15))))))));
    }
    for (int i_14 = 0; i_14 < 12; i_14 += 1) /* same iter space */
    {
        var_41 = ((/* implicit */short) ((min((((/* implicit */long long int) ((var_14) == (((/* implicit */long long int) ((/* implicit */int) var_9)))))), ((-(var_3))))) % (var_3)));
        arr_54 [i_14] = ((/* implicit */unsigned char) (((~(arr_16 [i_14] [i_14] [i_14] [i_14]))) & ((~(arr_16 [3] [i_14] [i_14] [i_14])))));
        var_42 = ((/* implicit */signed char) (((((!(((/* implicit */_Bool) var_5)))) ? ((-(((/* implicit */int) var_4)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_14]))))))) >= (((((/* implicit */_Bool) (-(var_16)))) ? (((((/* implicit */int) arr_45 [i_14])) % (((/* implicit */int) arr_45 [i_14])))) : ((-(var_12)))))));
    }
    for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 3) 
    {
        var_43 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))));
        var_44 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((var_3) % (((/* implicit */long long int) var_15)))) > (((/* implicit */long long int) max((var_12), (((/* implicit */int) var_2)))))))), (max((((((/* implicit */_Bool) 3091212098514655146LL)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_9))))), (((((/* implicit */_Bool) (unsigned char)21)) ? (var_8) : (((/* implicit */long long int) arr_55 [i_15]))))))));
        var_45 = ((/* implicit */signed char) max((var_45), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) >= (min((max((var_7), (((/* implicit */unsigned int) var_12)))), (((/* implicit */unsigned int) ((short) var_12))))))))));
        var_46 -= ((/* implicit */unsigned int) (+(var_12)));
    }
}
