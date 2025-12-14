/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62914
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
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) ((((/* implicit */int) var_7)) * (((/* implicit */int) min((((/* implicit */short) var_8)), (var_10)))))))));
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)32242)) ? ((-(((/* implicit */int) var_13)))) : (((((/* implicit */int) var_3)) - (((/* implicit */int) (short)-1))))));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) (short)-1)) >= (((/* implicit */int) var_13))))), (((((/* implicit */int) (unsigned char)178)) * (((/* implicit */int) var_1))))))) ? (max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_11)) : (var_2))), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
    /* LoopSeq 4 */
    for (signed char i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        var_22 = ((/* implicit */short) ((((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) arr_1 [i_0 + 2])))) + (((/* implicit */int) arr_1 [i_0 + 4]))));
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            /* LoopSeq 2 */
            for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                arr_9 [(unsigned char)6] [i_1] [i_2] = ((/* implicit */unsigned char) arr_3 [i_0] [i_2]);
                var_23 = ((/* implicit */short) (+(((/* implicit */int) min((((short) arr_0 [i_0])), (((/* implicit */short) arr_4 [i_0] [i_0 + 4])))))));
                arr_10 [(unsigned char)7] [i_1] [i_2] = ((/* implicit */short) ((unsigned int) min((arr_2 [i_0 + 3]), (arr_2 [i_0 + 4]))));
            }
            for (short i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                var_24 = ((/* implicit */signed char) max((((long long int) (unsigned char)178)), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_1 + 1] [i_1] [i_0 + 1])) && (((/* implicit */_Bool) arr_7 [i_1 - 1] [3LL] [i_0 - 1])))))));
                arr_14 [i_0 + 2] [i_1 + 2] [i_3] = 1913582473;
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_4 = 2; i_4 < 11; i_4 += 1) 
                {
                    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_3] [i_0])) && (((/* implicit */_Bool) arr_16 [i_3] [i_3] [i_3] [i_1] [i_0] [i_3]))));
                    arr_18 [i_0] [i_1] [i_3] [i_3] [i_3] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_1] [i_1 - 1] [i_1 + 1] [i_1 + 2])) ? (arr_11 [i_1 + 2] [i_1 + 3] [i_1] [i_1 + 2]) : (arr_11 [i_1] [i_1 + 3] [i_1] [i_1 + 3])));
                    var_26 = ((int) arr_7 [i_4] [i_1 + 3] [i_0]);
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned short) ((arr_11 [i_4 - 1] [i_1] [i_1 + 1] [i_0 + 3]) | (arr_11 [i_4 - 1] [i_1] [i_1 + 1] [i_0 + 3])));
                        arr_23 [i_0] [i_1 + 1] [i_3] [(signed char)10] [i_5] = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_4 - 1] [i_1 + 3]);
                        var_28 = ((/* implicit */unsigned char) ((arr_11 [i_0 + 4] [i_1 - 1] [i_4 - 2] [i_4]) <= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_1 + 3] [i_1 + 3] [i_4] [i_5])) ? (((/* implicit */int) arr_15 [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_6 [i_0] [i_0 - 2] [i_0 + 4])))))));
                    }
                }
                /* vectorizable */
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    var_29 = ((/* implicit */int) ((((arr_13 [i_0] [i_1] [i_3] [i_6 + 1]) > ((-9223372036854775807LL - 1LL)))) ? (((((/* implicit */_Bool) -8158990356177733509LL)) ? (11809512211730964223ULL) : (((/* implicit */unsigned long long int) arr_19 [i_0 - 1] [9] [i_1 + 3] [i_0 - 1] [i_0])))) : (((/* implicit */unsigned long long int) arr_7 [i_6 + 1] [i_1 - 1] [i_3]))));
                    arr_28 [i_0] [i_0] [i_3] = ((/* implicit */int) (short)-32755);
                    var_30 = ((((/* implicit */int) arr_4 [i_0 - 1] [i_1 + 3])) >= (((/* implicit */int) arr_4 [i_0 + 2] [i_1 + 2])));
                    var_31 = ((/* implicit */long long int) ((((/* implicit */int) arr_25 [i_3] [i_1 + 2] [i_3])) ^ (((/* implicit */int) arr_25 [i_3] [i_3] [i_3]))));
                }
                for (int i_7 = 3; i_7 < 11; i_7 += 2) 
                {
                    arr_31 [i_0] [i_1 + 1] [i_3] [i_7] = ((/* implicit */_Bool) (((~(((/* implicit */int) arr_20 [i_1 - 1] [i_0 + 3])))) + (((arr_20 [i_1 + 1] [i_0 - 1]) ? (((/* implicit */int) arr_20 [i_1 + 2] [i_0 + 2])) : (((/* implicit */int) arr_20 [i_1 + 1] [i_0 + 1]))))));
                    var_32 = ((/* implicit */unsigned char) ((((unsigned int) arr_21 [i_3])) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_12 [i_3] [i_1]))) ? (((((/* implicit */_Bool) (unsigned char)68)) ? (((/* implicit */int) arr_5 [(unsigned char)4] [(unsigned char)4] [i_7])) : (((/* implicit */int) arr_26 [i_7])))) : (((/* implicit */int) arr_25 [i_3] [i_1 + 2] [i_3])))))));
                }
                arr_32 [i_3] = ((((arr_7 [i_3] [i_1 + 2] [i_0 + 2]) * (((/* implicit */int) arr_26 [i_3])))) >> (((/* implicit */int) ((unsigned char) arr_7 [i_0 - 2] [i_1 + 2] [i_3]))));
                arr_33 [i_0] [i_1] [i_3] = ((/* implicit */long long int) ((((((((/* implicit */int) arr_25 [i_3] [i_1 + 3] [i_3])) > (((/* implicit */int) arr_6 [i_0] [i_1 + 3] [i_3])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_22 [i_3] [i_0] [i_1] [i_0] [i_0])) == (((/* implicit */int) (short)-13052)))))) : (((((/* implicit */long long int) arr_3 [i_0] [i_0])) / (arr_11 [i_3] [i_1 - 1] [i_1 - 1] [i_0]))))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)78)) || (((/* implicit */_Bool) arr_4 [i_3] [i_1 - 1]))))))));
            }
            arr_34 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)0)) / (((/* implicit */int) (short)-1))));
            arr_35 [i_0 + 3] [(short)1] = ((/* implicit */signed char) min(((unsigned short)35944), (((/* implicit */unsigned short) (signed char)-1))));
            /* LoopNest 2 */
            for (unsigned char i_8 = 1; i_8 < 8; i_8 += 2) 
            {
                for (int i_9 = 3; i_9 < 9; i_9 += 2) 
                {
                    {
                        arr_40 [i_0 - 1] [i_9] = ((int) max((((/* implicit */int) arr_12 [(unsigned char)2] [i_1 + 2])), (((((/* implicit */int) arr_2 [i_0 + 4])) + (((/* implicit */int) (unsigned short)35960))))));
                        arr_41 [i_1 + 3] [i_0] [i_1] [i_1 + 3] [i_0] = ((/* implicit */long long int) arr_21 [(signed char)0]);
                    }
                } 
            } 
            arr_42 [2] [i_1] = ((/* implicit */_Bool) ((((((((/* implicit */int) arr_2 [i_1 + 2])) ^ (((/* implicit */int) (short)1)))) <= (arr_8 [i_0] [i_0] [i_0 + 2] [i_0 - 2]))) ? (((/* implicit */int) min((((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_0 + 4] [i_0 + 4] [i_1 + 2] [i_0] [i_0])) && (((/* implicit */_Bool) arr_30 [(unsigned char)2] [2U]))))), (arr_12 [(unsigned char)6] [i_1])))) : (((/* implicit */int) ((((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0 + 4] [i_0] [i_1 + 1])) != (((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) arr_15 [(short)2] [i_1] [i_1])))))))));
        }
    }
    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
    {
        arr_46 [i_10] [i_10] = ((/* implicit */int) ((((((/* implicit */int) ((short) arr_45 [(_Bool)1]))) & (((/* implicit */int) arr_45 [i_10 + 1])))) <= (((/* implicit */int) arr_43 [(unsigned char)19] [(unsigned char)19]))));
        arr_47 [i_10] [i_10 + 1] = ((/* implicit */signed char) ((((((/* implicit */int) arr_43 [i_10 + 1] [i_10 + 1])) * (((/* implicit */int) arr_43 [i_10 + 1] [i_10])))) != (((/* implicit */int) max((arr_43 [i_10 + 1] [(short)5]), (((/* implicit */short) arr_44 [i_10 + 1] [i_10 + 1])))))));
        arr_48 [i_10 + 1] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_45 [i_10 + 1])) == (((/* implicit */int) arr_45 [i_10 + 1]))))) & (((/* implicit */int) arr_45 [i_10 + 1]))));
    }
    for (unsigned char i_11 = 0; i_11 < 24; i_11 += 1) 
    {
        arr_53 [i_11] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)63))) + (min((arr_49 [i_11] [i_11]), (arr_49 [i_11] [i_11])))));
        /* LoopSeq 2 */
        for (unsigned char i_12 = 0; i_12 < 24; i_12 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_13 = 3; i_13 < 22; i_13 += 4) 
            {
                var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-3)) ? (((/* implicit */int) arr_44 [i_13 + 2] [i_11])) : (((/* implicit */int) ((((/* implicit */int) arr_51 [i_11])) < (((/* implicit */int) arr_44 [i_11] [i_12])))))));
                var_34 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_51 [i_13])) && (((/* implicit */_Bool) arr_52 [i_11])))) && (((/* implicit */_Bool) arr_52 [i_11]))))), (max((((arr_57 [i_12]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)4))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_56 [i_11] [i_12])) && (((/* implicit */_Bool) arr_59 [2LL] [i_12] [i_12])))))))));
            }
            arr_60 [i_12] [i_12] = ((/* implicit */unsigned short) arr_57 [i_12]);
            arr_61 [i_11] [i_12] [i_11] = ((/* implicit */long long int) ((((/* implicit */int) (short)31184)) % (((/* implicit */int) (unsigned short)29597))));
            arr_62 [i_11] [i_12] = ((/* implicit */short) max((arr_49 [i_11] [i_12]), (((/* implicit */long long int) ((arr_49 [i_11] [23ULL]) < (arr_49 [i_11] [i_11]))))));
            arr_63 [i_12] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)21526)), (arr_49 [i_11] [i_11])))) ? (((/* implicit */int) arr_45 [i_12])) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)35973))) >= (arr_56 [i_11] [i_12])))))) << (((((((/* implicit */int) arr_45 [i_12])) * (((/* implicit */int) max(((signed char)127), (((/* implicit */signed char) arr_55 [i_11] [i_11] [8LL]))))))) - (2993390)))));
        }
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            arr_66 [i_11] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_59 [i_11] [i_11] [i_14]))))) ? (((/* implicit */int) arr_59 [i_11] [i_14] [i_11])) : (((/* implicit */int) min((arr_59 [i_11] [i_11] [i_14]), (arr_59 [(short)21] [i_14] [(short)21]))))));
            var_35 = ((/* implicit */signed char) (unsigned char)5);
            arr_67 [i_11] = ((/* implicit */unsigned char) max((1927082572013548785LL), (((/* implicit */long long int) (unsigned char)178))));
        }
        var_36 = ((/* implicit */signed char) ((arr_58 [(unsigned char)12]) <= (((((/* implicit */_Bool) arr_58 [(short)10])) ? (arr_58 [4LL]) : (arr_58 [(_Bool)1])))));
        arr_68 [i_11] = ((/* implicit */short) arr_64 [i_11] [i_11] [i_11]);
        arr_69 [i_11] [i_11] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_51 [i_11])))) ? (((/* implicit */int) ((unsigned short) arr_59 [(signed char)23] [i_11] [(signed char)23]))) : (((/* implicit */int) arr_59 [i_11] [i_11] [i_11]))));
    }
    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
    {
        arr_73 [i_15] = ((/* implicit */int) min((((arr_57 [(_Bool)1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)178))))), (((/* implicit */unsigned long long int) max((arr_65 [i_15 - 1] [i_15 - 1] [i_15 - 1]), (arr_65 [i_15 - 1] [i_15 - 1] [i_15 - 1]))))));
        arr_74 [i_15] [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) arr_49 [i_15] [i_15]))), (1367927251)))) ? (((/* implicit */int) min((((/* implicit */short) (signed char)127)), ((short)13051)))) : ((+(((/* implicit */int) arr_44 [i_15] [i_15 - 1]))))));
        var_37 = ((/* implicit */unsigned char) min((((/* implicit */int) arr_50 [i_15 - 1])), (max((((/* implicit */int) arr_50 [i_15 - 1])), (-1130632614)))));
    }
    var_38 = ((/* implicit */long long int) var_18);
}
