/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86452
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
    for (signed char i_0 = 3; i_0 < 7; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 10; i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            arr_15 [(signed char)0] [(signed char)0] [i_2] [4ULL] [i_4] = ((/* implicit */short) (-(((/* implicit */int) var_15))));
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_4] = ((/* implicit */_Bool) arr_10 [i_0] [(unsigned short)8] [i_2] [i_4]);
                            arr_17 [i_4] [i_3] [8U] [(short)5] [i_1] [8U] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])), (arr_1 [i_0])));
                        }
                        for (unsigned short i_5 = 2; i_5 < 8; i_5 += 1) 
                        {
                            arr_22 [i_3] [i_5 + 2] [i_5] [i_5 - 1] [i_5 + 1] [i_5] [i_5 - 2] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 2147483640)) ? (((/* implicit */int) arr_21 [i_0 - 1] [i_0 - 1] [i_0 - 3] [i_0 - 2] [i_0 + 2] [(unsigned short)0] [i_0 + 1])) : (((/* implicit */int) arr_21 [i_0 + 2] [i_0] [i_1] [i_0] [i_3] [i_3] [i_5 + 2]))))));
                            arr_23 [i_0 - 1] [i_5] [i_1] [5ULL] [i_2] [i_3] [(signed char)4] = ((288230376143323136ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3]))));
                            arr_24 [i_5] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_0 [i_1] [i_1]))));
                            arr_25 [1U] [i_1] [i_5] [i_1] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_19 [i_0 - 1] [i_0] [i_0] [i_0 - 2] [i_5] [i_5])) ? (((/* implicit */int) arr_19 [i_0 - 1] [i_0 + 1] [(signed char)0] [i_0 - 2] [(short)9] [i_5])) : (((/* implicit */int) arr_19 [i_0] [(_Bool)1] [i_0] [i_0 - 2] [i_3] [(_Bool)1])))), (((/* implicit */int) ((_Bool) (signed char)-30)))));
                        }
                        arr_26 [i_0 + 3] [6ULL] [6U] [i_3] = ((/* implicit */_Bool) ((unsigned int) ((short) (-(((/* implicit */int) arr_10 [(signed char)2] [i_1] [i_1] [i_1]))))));
                    }
                } 
            } 
            arr_27 [i_0 - 3] [i_0 + 2] [(signed char)7] = ((/* implicit */unsigned short) min((((unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (-2147483646) : (((/* implicit */int) arr_7 [(signed char)6] [i_1]))))), (((/* implicit */unsigned long long int) ((arr_13 [i_0 - 3] [i_0 - 1]) ? (((/* implicit */int) arr_13 [i_0 + 3] [i_0 - 1])) : (((/* implicit */int) arr_13 [i_0 + 1] [i_0 - 3])))))));
            arr_28 [(_Bool)1] [i_1] [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((arr_5 [i_0 - 3]) ? (((/* implicit */int) ((unsigned char) 2147483646))) : (((/* implicit */int) arr_6 [i_0 - 1] [i_0 + 3] [i_0 + 1]))))), (((((((/* implicit */_Bool) 2147483635)) || (((/* implicit */_Bool) (signed char)126)))) ? (((/* implicit */unsigned long long int) 2147483645)) : (((unsigned long long int) arr_20 [i_0 + 1] [(_Bool)1] [i_0] [i_0] [i_0]))))));
            arr_29 [i_0 - 1] = ((/* implicit */unsigned int) var_4);
        }
        for (short i_6 = 0; i_6 < 10; i_6 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (signed char i_7 = 0; i_7 < 10; i_7 += 4) 
            {
                arr_36 [i_0] [i_6] [i_6] [4] = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((+(10082701066217144847ULL))), (((/* implicit */unsigned long long int) 2147483635))))) ? (((/* implicit */int) (short)6144)) : (((/* implicit */int) ((_Bool) (-(((/* implicit */int) (signed char)(-127 - 1)))))))));
                /* LoopSeq 1 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    arr_41 [i_6] [i_6] = max((arr_4 [i_0] [i_0 - 2] [i_6]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 - 1])) ? (((/* implicit */int) arr_2 [4] [i_7])) : (((/* implicit */int) arr_2 [i_6] [i_8]))))));
                    arr_42 [i_6] [i_6] [(short)8] [i_8] = ((/* implicit */short) var_3);
                    arr_43 [i_8] [i_8] [i_6] = ((/* implicit */unsigned short) ((_Bool) min((((288230376143323160ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) max((arr_18 [6ULL] [i_6] [i_6] [i_0]), (((/* implicit */signed char) (_Bool)1))))))));
                }
                arr_44 [i_6] = ((/* implicit */signed char) arr_38 [i_0] [i_0] [i_0] [2ULL]);
            }
            for (short i_9 = 1; i_9 < 8; i_9 += 2) 
            {
                arr_48 [i_6] = min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_47 [i_0] [i_0] [i_6] [i_9]))))), ((-(((((/* implicit */_Bool) arr_45 [i_0] [(short)1] [i_9 + 1])) ? (arr_45 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)37))))))));
                arr_49 [(signed char)9] [i_6] [i_9 + 2] = ((/* implicit */signed char) arr_5 [i_6]);
                arr_50 [i_6] [i_6] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((int) (unsigned short)23384))), (var_11)));
            }
            /* vectorizable */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                arr_53 [i_0] [4U] [i_10] [4U] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) arr_37 [4U] [i_6] [4U] [2] [(unsigned short)2]))) + (((/* implicit */int) arr_31 [i_0]))));
                /* LoopSeq 4 */
                for (signed char i_11 = 2; i_11 < 7; i_11 += 2) 
                {
                    arr_56 [i_6] [i_6] [4ULL] [i_11] [2ULL] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)182)) && (((/* implicit */_Bool) arr_33 [i_0] [(_Bool)1] [(_Bool)1] [i_0 - 3])))))));
                    arr_57 [i_11] [i_6] [2] [i_6] [i_6] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_6] [i_6]))) : (576179277326712832ULL)))) ? ((-(137371844608ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_9 [(short)4])))));
                }
                for (signed char i_12 = 0; i_12 < 10; i_12 += 2) /* same iter space */
                {
                    arr_60 [i_6] = ((/* implicit */int) (-(arr_39 [i_12] [i_0 - 1])));
                    arr_61 [i_6] [(unsigned short)8] [(unsigned char)4] [i_0] [i_6] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_10 [i_0 - 3] [i_0 + 3] [i_0 + 2] [i_0 - 1]))));
                    arr_62 [i_0] [i_6] [i_6] [i_0] [i_6] = ((/* implicit */_Bool) ((-2147483641) + ((+(((/* implicit */int) (short)18567))))));
                }
                for (signed char i_13 = 0; i_13 < 10; i_13 += 2) /* same iter space */
                {
                    arr_65 [i_13] = ((arr_37 [(signed char)0] [2] [(short)4] [(signed char)0] [i_13]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) -2147483632)))));
                    arr_66 [i_0] [i_13] [i_0] [6U] = ((/* implicit */signed char) ((unsigned long long int) (!(((/* implicit */_Bool) arr_58 [i_0] [(signed char)1] [(signed char)1] [i_10] [i_0])))));
                    arr_67 [i_0] [i_0] [i_6] [i_10] [i_6] [i_13] = ((/* implicit */unsigned short) arr_3 [i_0 + 3]);
                }
                for (unsigned long long int i_14 = 3; i_14 < 9; i_14 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 2) 
                    {
                        arr_75 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */signed char) ((arr_58 [i_0] [i_0 - 3] [i_0 - 3] [i_14] [i_14]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)237)))));
                        arr_76 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_13 [i_0] [i_6]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_20 [i_0 - 1] [i_0 - 1] [i_10] [i_14] [3ULL]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [(unsigned short)9] [(_Bool)1] [i_10]))))) : (((/* implicit */int) arr_10 [i_14] [(short)3] [(short)3] [(short)3]))));
                    }
                    arr_77 [i_0] [i_0] [i_6] [i_0] = ((/* implicit */signed char) ((((unsigned long long int) 5529272112428519733ULL)) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                }
            }
            arr_78 [(signed char)8] [(signed char)8] = ((((/* implicit */_Bool) ((18446744073709551615ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3013)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-1)))))))) : (((/* implicit */int) (signed char)-42)));
        }
        for (unsigned short i_16 = 0; i_16 < 10; i_16 += 4) 
        {
            arr_83 [i_0 - 3] [i_16] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)57))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) : (min((arr_30 [i_16]), (((((/* implicit */_Bool) arr_18 [2ULL] [2ULL] [i_16] [i_16])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_0] [i_0 - 3] [i_0 - 1] [i_16]))) : (arr_74 [i_0] [i_0] [i_0] [i_16] [i_16])))))));
            arr_84 [i_0] = 13844578145483494708ULL;
            arr_85 [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) min((10082701066217144839ULL), (((/* implicit */unsigned long long int) (signed char)27))))) && ((!(((/* implicit */_Bool) arr_64 [i_0 + 1] [(short)8] [i_0 + 1] [i_0])))))))));
        }
        arr_86 [(unsigned char)9] = ((/* implicit */signed char) min((min((((/* implicit */short) var_3)), (arr_71 [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [(unsigned short)3]))), (((/* implicit */short) var_2))));
        arr_87 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) arr_34 [i_0] [i_0 - 3] [8ULL])))))) ? (((/* implicit */int) arr_80 [i_0])) : (551289709)));
        arr_88 [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_52 [i_0] [i_0] [i_0] [i_0])) ? (min((4602165928226056913ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_10 [i_0] [i_0 - 3] [i_0 + 2] [i_0 + 2])))))));
    }
    var_16 = ((/* implicit */_Bool) var_6);
}
