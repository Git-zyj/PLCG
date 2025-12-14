/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93780
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 14; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_4] [i_4] = ((/* implicit */int) max((((/* implicit */long long int) var_7)), ((((~(arr_12 [i_0] [i_2] [i_2] [i_0] [i_0] [i_0]))) ^ (((long long int) var_3))))));
                                arr_14 [i_4] [(short)12] [i_2] [i_4] [i_4] [(unsigned char)1] [i_3] = ((/* implicit */_Bool) max((((/* implicit */signed char) max((arr_6 [i_2 - 1] [i_2] [i_4] [i_2]), (arr_6 [i_2 + 2] [i_3] [i_2 + 2] [i_4])))), (((signed char) arr_6 [i_2 + 1] [2LL] [i_4] [0U]))));
                                arr_15 [i_4] [i_1] [i_2] [(unsigned char)8] [i_4] = ((/* implicit */unsigned char) max((arr_7 [i_2 + 1] [(unsigned char)7] [i_2 + 2] [i_4] [i_4]), (((signed char) ((((/* implicit */unsigned long long int) var_4)) ^ (arr_10 [i_0] [i_0] [i_2] [i_2 - 1] [(unsigned char)10] [i_2 - 1]))))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] [i_0] [i_1] |= ((/* implicit */unsigned short) ((unsigned char) ((_Bool) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_1] [i_0] [i_1] [i_1]))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 11; i_5 += 1) 
    {
        var_16 *= ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_5])) > (((/* implicit */int) arr_1 [i_5]))));
        arr_20 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_5] [i_5] [i_5] [(signed char)13])) | (((/* implicit */int) ((short) var_0)))));
        arr_21 [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10))));
    }
    for (long long int i_6 = 0; i_6 < 18; i_6 += 3) 
    {
        arr_26 [i_6] = ((/* implicit */int) ((unsigned char) min((((/* implicit */short) (!(((/* implicit */_Bool) arr_25 [i_6]))))), (arr_25 [i_6]))));
        arr_27 [i_6] = ((/* implicit */short) var_7);
    }
    for (unsigned char i_7 = 0; i_7 < 23; i_7 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_8 = 0; i_8 < 23; i_8 += 3) /* same iter space */
        {
            var_17 = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)104))));
            arr_32 [i_7] = ((/* implicit */unsigned short) arr_31 [i_8] [11ULL]);
            /* LoopSeq 3 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_34 [i_7])) || (((/* implicit */_Bool) arr_35 [i_9] [i_8] [i_8] [i_7]))));
                arr_37 [i_7] [i_8] [i_7] = ((/* implicit */unsigned int) ((((_Bool) var_2)) ? (((var_13) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)141))))) : (var_15)));
            }
            for (long long int i_10 = 3; i_10 < 21; i_10 += 2) 
            {
                arr_42 [i_7] [i_8] [10ULL] [i_8] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) arr_28 [i_7])) ? (((/* implicit */unsigned long long int) var_4)) : (var_14))));
                arr_43 [i_7] = ((/* implicit */short) ((((1304422184726693705LL) + (((/* implicit */long long int) ((/* implicit */int) var_3))))) < (((/* implicit */long long int) ((/* implicit */int) (signed char)-73)))));
            }
            for (short i_11 = 2; i_11 < 21; i_11 += 2) 
            {
                arr_46 [i_7] [i_8] [i_8] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 9850474494165880289ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_34 [i_7]))))));
                /* LoopSeq 2 */
                for (unsigned char i_12 = 0; i_12 < 23; i_12 += 3) 
                {
                    arr_49 [i_7] = ((/* implicit */long long int) ((((arr_45 [i_7] [(unsigned char)2]) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) + (((var_14) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_7] [i_8] [i_11 + 2] [i_11 + 2])))))));
                    arr_50 [15LL] [i_8] [i_7] [i_8] = ((/* implicit */unsigned char) 1523218975U);
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_39 [i_11] [i_11 + 1] [i_11])) ? (arr_39 [i_11] [i_11 + 1] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_11] [i_11 + 2] [i_7])))));
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    var_20 = ((/* implicit */short) arr_33 [21U] [i_8] [i_11 + 2] [i_13]);
                    arr_54 [i_7] [i_7] [3LL] [i_13] [i_13] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_52 [i_8] [i_11] [i_13]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 3099135797U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5))))) : (var_13));
                }
                arr_55 [i_7] [i_7] [i_8] [i_11] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)112))));
                arr_56 [i_7] [i_7] [i_7] [i_11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))));
            }
        }
        for (signed char i_14 = 0; i_14 < 23; i_14 += 3) /* same iter space */
        {
            arr_59 [i_7] [i_7] = ((/* implicit */signed char) min((((int) arr_57 [i_7] [i_14])), (((/* implicit */int) ((var_6) && (((/* implicit */_Bool) min(((unsigned char)13), (((/* implicit */unsigned char) var_6))))))))));
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)229)))) ? (((/* implicit */int) arr_35 [i_7] [i_7] [i_14] [i_14])) : (((/* implicit */int) (((!(((/* implicit */_Bool) var_9)))) || (((((/* implicit */_Bool) (unsigned char)207)) || (arr_45 [20U] [i_14]))))))));
            arr_60 [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((min((((/* implicit */long long int) arr_30 [i_7] [i_7] [i_14])), (var_15))) / (((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)-108)), (var_0))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_57 [i_7] [i_14])) | (((/* implicit */int) var_3))))) && (((/* implicit */_Bool) var_15)))))) : (min((max((arr_34 [i_7]), (((/* implicit */unsigned long long int) (short)32762)))), (max((((/* implicit */unsigned long long int) var_9)), (arr_34 [i_7])))))));
            /* LoopSeq 1 */
            for (signed char i_15 = 0; i_15 < 23; i_15 += 2) 
            {
                arr_64 [i_15] &= arr_33 [(short)11] [(short)11] [i_7] [(short)11];
                arr_65 [i_7] [i_7] = ((/* implicit */long long int) (!(((_Bool) arr_34 [i_7]))));
                /* LoopSeq 1 */
                for (signed char i_16 = 0; i_16 < 23; i_16 += 2) 
                {
                    arr_69 [(signed char)12] [i_7] [i_15] [i_7] [i_15] [i_15] = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [6ULL] [i_14] [(short)0] [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_14)))) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1)))) : ((+(arr_28 [i_7]))))), (((((/* implicit */int) arr_61 [i_7] [(unsigned char)8] [(unsigned short)10])) / ((+(((/* implicit */int) (short)26507))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_17 = 2; i_17 < 20; i_17 += 2) 
                    {
                        var_22 = ((/* implicit */short) (_Bool)1);
                        arr_72 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_31 [i_17 + 1] [i_17 + 2]), (var_7)))) ? (max((((((((/* implicit */int) var_12)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)62920)) - (62890))))), (((((/* implicit */_Bool) arr_28 [i_17])) ? (((/* implicit */int) (signed char)-113)) : (((/* implicit */int) arr_36 [i_7] [i_7])))))) : (((/* implicit */int) (signed char)119))));
                    }
                }
            }
        }
        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 3612918211U)) && (((/* implicit */_Bool) var_13)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) arr_30 [i_7] [i_7] [i_7])) : (var_4))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_58 [10ULL] [i_7] [i_7])) || (var_3)))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_40 [i_7] [i_7] [i_7] [i_7]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_39 [i_7] [i_7] [i_7]) != (arr_39 [i_7] [i_7] [i_7]))))) : (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_41 [12ULL] [i_7] [i_7]))) : (-9223372036854775807LL))))) : (((/* implicit */long long int) ((/* implicit */int) arr_51 [(unsigned char)8] [(unsigned char)8]))))))));
    }
}
