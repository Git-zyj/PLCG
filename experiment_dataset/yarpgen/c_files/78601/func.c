/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78601
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
    var_20 += ((/* implicit */long long int) ((_Bool) var_17));
    var_21 ^= ((/* implicit */unsigned int) ((unsigned short) var_5));
    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) var_11))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            {
                var_23 += ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_4 [i_1 - 1] [i_1 - 2]), (arr_4 [i_1 - 2] [i_1 - 2])))) ? (((/* implicit */unsigned long long int) (+(var_4)))) : (((arr_4 [i_1 - 1] [i_1 - 1]) / (arr_4 [i_1 - 1] [i_1 - 2])))));
                /* LoopSeq 3 */
                for (signed char i_2 = 2; i_2 < 9; i_2 += 1) 
                {
                    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) min((1878369974U), (2416597333U)))) ? (((((/* implicit */_Bool) 2416597323U)) ? (arr_9 [i_1 + 1] [i_2] [i_1 + 1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_7 [1ULL] [i_1 - 1] [(short)3]))))))) : (min((((1896144362664145474LL) << (((((/* implicit */int) var_0)) - (232))))), (((/* implicit */long long int) var_9))))));
                    var_25 = ((/* implicit */signed char) (~(((/* implicit */int) max((var_15), (((/* implicit */short) var_9)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        arr_13 [(unsigned char)6] [i_2] [i_2] [9] = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_10 [(short)0] [(short)0] [i_1 - 1] [i_1 - 1] [(short)0] [i_1 - 1])) : (((/* implicit */int) arr_2 [i_0] [(signed char)0]))));
                        var_26 = ((/* implicit */signed char) arr_3 [i_1]);
                        arr_14 [i_2] = var_11;
                        var_27 += var_15;
                    }
                    var_28 = ((/* implicit */short) max((3026512289U), (((/* implicit */unsigned int) ((min((arr_4 [(unsigned short)2] [i_2 + 1]), (((/* implicit */unsigned long long int) var_1)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [(signed char)8] [i_0]))))))));
                    var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) min((((/* implicit */int) arr_7 [(_Bool)1] [i_0] [(unsigned char)6])), (((((/* implicit */_Bool) arr_11 [(unsigned short)5] [i_0] [i_0] [i_1 + 1] [5ULL] [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_2 [i_0] [5ULL])))))))));
                }
                for (unsigned short i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    var_30 *= ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2416597317U)) ? (arr_15 [7ULL] [0LL] [i_1 - 1] [(signed char)4]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) min((var_1), (((/* implicit */unsigned short) var_15))))) : (((/* implicit */int) min((((/* implicit */short) arr_10 [4] [0] [(short)9] [i_0] [(signed char)6] [(short)2])), (arr_8 [i_0]))))))), (((((arr_6 [i_4]) + (9223372036854775807LL))) << ((((((+(((/* implicit */int) var_10)))) + (20982))) - (12)))))));
                    var_31 = ((/* implicit */short) arr_2 [(_Bool)1] [(_Bool)1]);
                    var_32 = ((/* implicit */short) arr_16 [9] [(unsigned short)2]);
                }
                /* vectorizable */
                for (unsigned short i_5 = 3; i_5 < 9; i_5 += 2) 
                {
                    var_33 = arr_1 [i_0];
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 10; i_6 += 3) 
                    {
                        for (int i_7 = 0; i_7 < 10; i_7 += 1) 
                        {
                            {
                                var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_1 - 1] [9] [i_5 - 2] [(signed char)2] [3] [i_1 + 1])) ? (arr_9 [(unsigned char)7] [i_5] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_0] [i_0] [i_0])))));
                                var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) arr_8 [i_5])) ? (2416597321U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                    {
                        arr_28 [i_5] [(_Bool)1] [8ULL] [6] [i_5] [6] = ((/* implicit */signed char) var_0);
                        /* LoopSeq 2 */
                        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                        {
                            var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_1 [(signed char)2])))) ? (((((/* implicit */int) var_1)) | (((/* implicit */int) var_10)))) : (((/* implicit */int) (short)21565))));
                            var_37 = ((/* implicit */unsigned int) ((arr_0 [i_5 + 1] [i_8 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_15 [i_5 - 2] [i_8 + 1] [8] [i_9 + 1])));
                            var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) arr_8 [i_1]))));
                            var_39 |= ((/* implicit */short) var_18);
                        }
                        for (signed char i_10 = 3; i_10 < 9; i_10 += 4) 
                        {
                            var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) ((var_9) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [9ULL] [(_Bool)1] [(short)1] [(signed char)3] [(short)1])) ? (arr_12 [i_0] [i_0] [(short)2] [4] [6U]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(unsigned short)8] [(unsigned short)8])))))) : (((((/* implicit */_Bool) arr_25 [i_0] [i_1 + 1] [i_8 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_29 [i_0] [(_Bool)1] [(short)2] [(short)9] [(unsigned short)8]))))))));
                            var_41 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_0] [i_1] [4LL] [8ULL])) ? (((/* implicit */long long int) arr_26 [i_0] [i_0] [i_10 - 3] [i_10 - 3])) : (arr_29 [(_Bool)1] [i_1 + 1] [i_5 - 3] [(_Bool)1] [i_10 - 3])))) ? (arr_9 [(short)4] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -252869832))))))));
                            var_42 *= ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_10 + 1] [i_10 + 1])) & (((/* implicit */int) var_10))));
                        }
                    }
                    for (int i_11 = 0; i_11 < 10; i_11 += 2) 
                    {
                        arr_36 [i_5] [i_5] [3] [3] [3] [i_11] = ((short) ((signed char) var_1));
                        var_43 += ((/* implicit */unsigned int) ((long long int) arr_26 [i_5 - 1] [i_11] [i_5 - 1] [i_11]));
                    }
                    var_44 = ((/* implicit */int) max((var_44), (((/* implicit */int) ((((((/* implicit */_Bool) arr_16 [(_Bool)1] [(_Bool)1])) ? (2416597306U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [(unsigned short)3] [(signed char)3] [(unsigned short)7] [(signed char)3] [i_0] [i_0]))))) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-48))) != (var_17))))))))));
                }
                /* LoopNest 2 */
                for (short i_12 = 0; i_12 < 10; i_12 += 4) 
                {
                    for (int i_13 = 4; i_13 < 9; i_13 += 2) 
                    {
                        {
                            var_45 *= ((/* implicit */short) (~(((unsigned int) var_14))));
                            arr_42 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((arr_22 [4] [(_Bool)1] [(unsigned short)2] [i_1 - 1] [i_1] [i_13 - 4]) >> (((((/* implicit */int) (short)21582)) - (21556)))))))) ? (var_4) : (((((/* implicit */_Bool) arr_38 [i_1 - 2] [(short)5] [(short)7] [i_13 - 1])) ? (arr_29 [i_0] [i_0] [i_0] [i_13 - 2] [i_1 - 2]) : (((/* implicit */long long int) arr_38 [i_1 - 1] [(unsigned short)2] [5] [i_13 - 1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
