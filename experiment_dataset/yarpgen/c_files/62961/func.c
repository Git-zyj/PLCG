/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62961
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
    for (signed char i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0 - 1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)0))));
        var_11 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_0 [i_0 - 2])), (var_1))))));
    }
    for (unsigned short i_1 = 4; i_1 < 14; i_1 += 3) 
    {
        var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)4572)) ? (((((((/* implicit */int) (signed char)-4)) + (2147483647))) >> (((9223372036854775807LL) - (9223372036854775790LL))))) : ((+(((/* implicit */int) (signed char)7))))));
        var_13 = ((/* implicit */int) min((arr_6 [i_1]), ((-(arr_6 [i_1])))));
        var_14 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((arr_1 [i_1 - 3]), (((/* implicit */short) arr_3 [i_1]))))), (max((var_6), (((/* implicit */unsigned long long int) arr_1 [i_1 + 2]))))));
        var_15 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((var_5) / (((/* implicit */int) var_3))))), (((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)27)))))))), (min((arr_5 [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_1 [i_1]))))));
    }
    for (long long int i_2 = 2; i_2 < 20; i_2 += 3) 
    {
        var_16 = ((/* implicit */int) var_8);
        /* LoopSeq 4 */
        for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            var_17 = ((/* implicit */int) ((signed char) (~(((/* implicit */int) (unsigned char)121)))));
            var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_2 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_6)))) : (arr_7 [i_2] [i_2]))) % (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)28578)))))));
            var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_9 [i_2 - 2] [i_2 - 1])), ((unsigned short)36957)))), (max((((/* implicit */unsigned int) arr_13 [i_2] [(signed char)3] [(signed char)3])), (arr_7 [9LL] [i_2])))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
            {
                arr_18 [i_4] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((17179869120LL) >> (((/* implicit */int) (signed char)33))));
                var_20 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_2 - 1] [(short)12])) ? (((/* implicit */int) (signed char)-37)) : (((/* implicit */int) (signed char)-26))));
                var_21 = ((/* implicit */long long int) arr_13 [i_2 + 1] [i_2 + 1] [i_2 - 1]);
                var_22 = ((/* implicit */long long int) ((signed char) arr_7 [i_2 - 1] [i_2]));
            }
            /* vectorizable */
            for (unsigned char i_5 = 0; i_5 < 21; i_5 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_6 = 2; i_6 < 18; i_6 += 2) 
                {
                    arr_25 [i_6] [i_5] [i_2] [i_2] [i_2] = ((/* implicit */long long int) var_1);
                    /* LoopSeq 4 */
                    for (short i_7 = 1; i_7 < 19; i_7 += 2) 
                    {
                        var_23 &= ((/* implicit */unsigned int) ((short) arr_29 [i_2] [i_2 - 2] [i_6 + 2] [i_7 + 2] [i_7 + 2]));
                        arr_30 [i_6] [10] [i_5] [i_3] [i_7 + 1] [i_7] [i_2] |= ((/* implicit */long long int) ((int) arr_22 [i_2 + 1]));
                    }
                    for (short i_8 = 2; i_8 < 20; i_8 += 1) 
                    {
                        arr_35 [i_2] [(unsigned char)14] [i_2] [0] = ((/* implicit */unsigned int) ((short) arr_29 [i_6 - 2] [i_6 - 1] [i_6 + 1] [i_6] [i_6 - 2]));
                        var_24 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)241))));
                        arr_36 [i_2] [i_3] [i_2] [(unsigned char)7] [i_8 + 1] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_3]))));
                        var_25 = ((/* implicit */signed char) (unsigned short)21545);
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_32 [i_2 - 2] [i_2 - 1] [i_5] [i_6 + 2] [i_6 + 2]))));
                        arr_40 [i_2] [i_2] [(signed char)5] [(signed char)10] [i_3] [16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_32 [i_6] [3LL] [i_6] [3LL] [i_6 - 2])) ? (((/* implicit */int) arr_32 [i_2] [i_3] [i_2] [i_5] [i_6 - 1])) : (((/* implicit */int) arr_32 [i_3] [(signed char)10] [i_3] [i_3] [i_6 - 1]))));
                    }
                    for (unsigned short i_10 = 1; i_10 < 20; i_10 += 2) 
                    {
                        var_27 += ((/* implicit */unsigned int) arr_11 [i_10 + 1] [i_5]);
                        arr_43 [i_2] [8LL] [i_5] = ((((/* implicit */_Bool) arr_22 [i_2 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_2 - 1] [i_3] [i_6 + 3]))) : (-1998426805048481529LL));
                        arr_44 [i_5] [i_2] [i_2] [i_6 - 2] [i_6 - 2] [i_5] = ((/* implicit */unsigned short) (~(arr_41 [0] [i_10] [i_10 - 1] [(short)8] [i_10])));
                    }
                    var_28 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))));
                    arr_45 [i_2 + 1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (+(1980995753U)));
                }
                var_29 = ((/* implicit */unsigned int) ((unsigned long long int) arr_7 [i_2 - 2] [i_2]));
                arr_46 [14ULL] &= ((/* implicit */unsigned char) ((long long int) (short)-18453));
                /* LoopSeq 2 */
                for (long long int i_11 = 0; i_11 < 21; i_11 += 4) 
                {
                    var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_2 + 1] [(unsigned char)16])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((signed char) arr_22 [(signed char)20]))))))));
                    var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) ((((((/* implicit */int) ((signed char) 1980995725U))) + (2147483647))) >> ((((-(arr_19 [i_11] [(unsigned short)10] [i_11]))) - (1792383327))))))));
                    /* LoopSeq 1 */
                    for (signed char i_12 = 0; i_12 < 21; i_12 += 2) 
                    {
                        var_32 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_34 [(signed char)20] [(signed char)20] [(unsigned char)12] [(unsigned char)12] [i_2 - 1] [i_11] [i_12])) + (2147483647))) << (((((-1998426805048481529LL) + (1998426805048481558LL))) - (29LL)))));
                        arr_53 [i_2] [i_11] [i_12] = ((/* implicit */unsigned int) ((arr_49 [i_2] [i_2] [i_5] [i_11] [i_12] [i_12] [i_12]) | (((((/* implicit */int) arr_48 [i_3])) | (((/* implicit */int) (unsigned short)21522))))));
                    }
                }
                for (unsigned int i_13 = 1; i_13 < 20; i_13 += 1) 
                {
                    arr_57 [i_13 - 1] [i_2] [i_3] [(short)3] [i_2] [i_2 - 2] = ((/* implicit */long long int) ((short) (-(var_6))));
                    var_33 = ((/* implicit */short) (+(((/* implicit */int) arr_17 [i_13 - 1] [i_2] [i_5] [i_2]))));
                    var_34 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_56 [3U] [18] [i_5] [i_13 + 1])) ? (arr_29 [i_2 + 1] [i_3] [i_3] [13] [13]) : (((/* implicit */unsigned long long int) 3147935800267200398LL)))) / (((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_5] [(signed char)3] [i_13] [i_13 + 1])))))));
                }
                var_35 = ((/* implicit */unsigned char) var_7);
            }
        }
        /* vectorizable */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            var_36 |= ((/* implicit */unsigned short) ((unsigned int) -1189599843));
            /* LoopSeq 1 */
            for (unsigned int i_15 = 2; i_15 < 18; i_15 += 3) 
            {
                arr_62 [i_2] = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-26)) : (((/* implicit */int) arr_11 [i_2 - 2] [i_15 + 1])));
                /* LoopSeq 2 */
                for (unsigned char i_16 = 0; i_16 < 21; i_16 += 2) 
                {
                    arr_67 [i_2] = ((/* implicit */unsigned short) ((long long int) (unsigned char)6));
                    arr_68 [i_16] [i_2] [i_2] [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) arr_33 [i_2] [i_2] [i_14] [i_14] [7U] [i_14] [i_15 - 1]))));
                }
                for (unsigned long long int i_17 = 0; i_17 < 21; i_17 += 2) 
                {
                    var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_2 + 1] [i_2] [i_14] [i_15] [i_14]))) : (arr_39 [i_17] [i_15] [(unsigned short)10] [i_14] [i_14] [(short)4] [(short)4]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_15 + 3] [i_15 + 2] [i_17])))));
                    var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_2 - 1] [i_17] [i_2] [i_2 - 1] [i_2])) ? (-1189599843) : (arr_66 [i_2 - 2] [i_2 - 2] [8] [8] [8] [i_2 - 2])))) ? (((/* implicit */int) ((unsigned short) (signed char)-2))) : (((/* implicit */int) arr_59 [i_2 + 1] [i_2 - 1]))));
                }
                var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) ((((unsigned long long int) (unsigned short)22536)) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_34 [i_2] [i_2 - 2] [i_14] [(unsigned char)20] [i_14] [i_15] [i_14])) : (arr_49 [(signed char)5] [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])))))))));
                arr_71 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((-1189599868) - (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_64 [i_15 - 1] [i_14] [i_15 - 1])) : (arr_66 [i_2] [i_14] [i_14] [i_15] [i_2] [i_15])))) : (((unsigned int) arr_34 [i_15] [i_15 + 1] [i_15 + 1] [i_14] [i_14] [i_15] [i_15]))));
            }
            arr_72 [i_2 - 1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) (unsigned char)185))));
            var_40 = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) 1189599844)) | (arr_16 [i_2] [(unsigned short)1] [i_14] [i_2 - 1])))) ? (((((/* implicit */_Bool) arr_27 [i_2 - 1] [(_Bool)1] [(_Bool)1] [i_2] [i_2 - 2] [i_2 - 2])) ? (((/* implicit */long long int) arr_69 [i_2] [i_2] [i_14] [i_2] [i_2] [i_14])) : (870839325616060012LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)960))));
        }
        for (unsigned char i_18 = 0; i_18 < 21; i_18 += 1) /* same iter space */
        {
            arr_76 [i_2] = ((/* implicit */unsigned char) (~(((/* implicit */int) min((((/* implicit */short) (unsigned char)133)), (arr_37 [i_2 - 2] [i_18] [i_2 + 1] [i_2] [i_2 + 1]))))));
            var_41 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-26))))) ? (((unsigned int) (signed char)37)) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_3)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : ((-9223372036854775807LL - 1LL))));
        }
        for (unsigned char i_19 = 0; i_19 < 21; i_19 += 1) /* same iter space */
        {
            var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_2 - 1])) ? ((~(((((/* implicit */_Bool) arr_47 [i_2] [(unsigned short)5] [i_2 - 1] [i_2] [(unsigned char)18])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_21 [i_2] [i_2] [i_2] [i_19])))))) : (((((((/* implicit */int) (signed char)-26)) + (2147483647))) << (((((/* implicit */int) (unsigned short)21545)) - (21545)))))));
            arr_79 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_19 [i_2] [(signed char)15] [i_2 + 1])))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) max((var_9), (((/* implicit */short) (signed char)25)))))))) : (((((/* implicit */_Bool) arr_60 [i_2 + 1] [i_2] [i_19])) ? (arr_39 [i_2] [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_19] [(unsigned char)20]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [0U] [i_2] [i_19] [i_19] [(unsigned short)2] [i_19])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0)))))))));
        }
        var_43 = ((/* implicit */signed char) max((var_43), (((/* implicit */signed char) ((unsigned int) ((arr_7 [i_2 + 1] [(short)10]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_54 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 - 1])))))))));
    }
    var_44 -= ((/* implicit */unsigned short) var_8);
    var_45 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) min((((/* implicit */short) (signed char)25)), (var_9))))))) ? (((/* implicit */int) var_8)) : (var_5)));
}
