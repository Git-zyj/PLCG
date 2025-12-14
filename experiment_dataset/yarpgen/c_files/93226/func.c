/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93226
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
    var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) (_Bool)1))));
    var_12 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) (-(var_3)))) && (var_5))))));
    var_13 = ((/* implicit */int) max((var_13), (var_2)));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned long long int) arr_0 [i_0 - 2]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            var_15 = ((/* implicit */long long int) min((var_15), (((((((/* implicit */long long int) 351701509)) | (var_9))) % (((/* implicit */long long int) arr_4 [i_0] [i_0 - 1] [i_0]))))));
            var_16 += ((/* implicit */unsigned char) arr_1 [i_1]);
            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 + 2] [i_1])))))));
        }
    }
    for (int i_2 = 4; i_2 < 19; i_2 += 1) 
    {
        arr_7 [i_2] = ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) arr_5 [(short)14])) | (var_3))), (((/* implicit */unsigned long long int) arr_5 [i_2]))));
        var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_3 [i_2 - 4])), (((((/* implicit */long long int) var_1)) % (arr_0 [i_2])))));
    }
    for (short i_3 = 4; i_3 < 9; i_3 += 3) 
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_3 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (((arr_10 [i_3 + 3] [i_3]) & (((/* implicit */long long int) ((((/* implicit */int) (signed char)7)) - (((/* implicit */int) var_4)))))))));
        /* LoopSeq 3 */
        for (unsigned int i_4 = 4; i_4 < 11; i_4 += 1) 
        {
            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_2 [10] [10] [16ULL])), (arr_3 [i_4])))) ? (((((/* implicit */_Bool) 173320058U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_3))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_4 - 3])))));
            var_21 -= ((/* implicit */_Bool) max((((/* implicit */long long int) (+(((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)1))))))), (arr_15 [i_4])));
            arr_16 [i_4] [4ULL] [2LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_4 - 4] [i_4 + 1])) ? (arr_4 [i_3] [i_3 - 2] [i_4 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) : (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)7)) != (arr_8 [(unsigned char)7]))))) % (arr_15 [2LL])))));
            var_22 = ((/* implicit */int) var_3);
            arr_17 [i_3] [i_4 - 2] [i_4] = arr_6 [i_3 - 3] [i_4];
        }
        /* vectorizable */
        for (unsigned int i_5 = 3; i_5 < 9; i_5 += 4) 
        {
            var_23 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_3])) ? (arr_1 [i_3 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_5]))))) & (((/* implicit */unsigned long long int) arr_5 [i_3 + 1]))));
            arr_20 [i_3 + 3] [i_5] [11ULL] = ((/* implicit */int) arr_14 [i_3 + 1]);
            var_24 = (-(arr_13 [i_3 + 2] [i_5] [7]));
            /* LoopSeq 3 */
            for (long long int i_6 = 0; i_6 < 12; i_6 += 3) 
            {
                arr_23 [i_6] [i_6] [i_6] [(short)6] = ((/* implicit */signed char) (+(((/* implicit */int) arr_6 [i_3] [i_3]))));
                var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_3])) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_18 [i_6])) : (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) var_2)) ? (arr_12 [i_6] [i_5 - 3] [i_3 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3]))))))))));
                arr_24 [i_3] [i_3 - 2] [(short)3] = ((/* implicit */long long int) var_3);
            }
            for (unsigned long long int i_7 = 2; i_7 < 11; i_7 += 1) /* same iter space */
            {
                var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) <= (-9223372036854775804LL)))) : (((/* implicit */int) arr_6 [i_7 + 1] [i_5 + 1]))));
                arr_27 [i_7] [i_5 + 2] [i_7 + 1] = ((/* implicit */unsigned char) (+(arr_26 [i_3 - 3] [i_5 - 3] [i_7 + 1] [2ULL])));
                arr_28 [i_7] = (-(9223372036854775778LL));
                var_27 = ((/* implicit */long long int) var_1);
                /* LoopSeq 3 */
                for (int i_8 = 1; i_8 < 10; i_8 += 1) 
                {
                    arr_33 [9ULL] [9ULL] [9ULL] [i_7] [i_8 - 1] [i_3 + 2] = ((/* implicit */unsigned short) arr_4 [i_3] [2ULL] [i_8]);
                    var_28 = ((/* implicit */int) min((var_28), (((((/* implicit */_Bool) arr_0 [i_8 + 2])) ? ((+(((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) (_Bool)1))))))));
                    /* LoopSeq 2 */
                    for (long long int i_9 = 1; i_9 < 11; i_9 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [i_9] [i_7] [i_7] [i_8])) || (((/* implicit */_Bool) ((((/* implicit */long long int) arr_8 [i_9])) + (9223372036854775807LL))))));
                        var_30 = ((/* implicit */_Bool) min((var_30), ((!(arr_29 [i_9] [i_9 - 1] [i_7 - 1] [i_3 - 4])))));
                        var_31 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_29 [i_7 - 2] [i_7 - 2] [i_7 - 2] [i_7]))) >= (9223372036854775807LL)));
                        var_32 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_8))));
                    }
                    for (int i_10 = 1; i_10 < 10; i_10 += 2) 
                    {
                        var_33 += ((/* implicit */unsigned long long int) var_8);
                        var_34 = ((/* implicit */int) (-(arr_12 [i_3 + 2] [i_3] [i_3])));
                        var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : ((+(var_9))))))));
                        var_36 = ((/* implicit */signed char) arr_14 [i_5]);
                    }
                }
                for (int i_11 = 0; i_11 < 12; i_11 += 1) 
                {
                    arr_41 [i_3] [i_7] [i_7] = (-(((/* implicit */int) var_5)));
                    var_37 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_5 + 1] [i_7 - 1]))));
                }
                for (unsigned int i_12 = 1; i_12 < 11; i_12 += 4) 
                {
                    var_38 = ((/* implicit */int) arr_6 [i_7 - 1] [i_12 - 1]);
                    arr_44 [i_3] [i_5] [i_3] [i_7] [i_3] = ((/* implicit */_Bool) arr_37 [i_12 + 1] [0U] [i_7] [i_5] [i_3]);
                    var_39 = ((/* implicit */unsigned long long int) (-(var_9)));
                }
            }
            for (unsigned long long int i_13 = 2; i_13 < 11; i_13 += 1) /* same iter space */
            {
                arr_49 [i_3 - 2] [5LL] [5LL] = ((/* implicit */int) arr_3 [i_3 + 2]);
                /* LoopSeq 1 */
                for (unsigned char i_14 = 0; i_14 < 12; i_14 += 2) 
                {
                    var_40 |= ((/* implicit */long long int) (+(var_3)));
                    var_41 = ((/* implicit */unsigned short) var_1);
                }
                arr_53 [i_3] [i_5 - 1] [i_3] |= ((/* implicit */unsigned char) arr_43 [i_13 - 2] [i_5]);
            }
        }
        for (unsigned long long int i_15 = 4; i_15 < 11; i_15 += 2) 
        {
            var_42 -= ((((/* implicit */_Bool) var_2)) ? (min((arr_54 [i_3 - 3] [i_3] [i_3]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_15])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [11U] [11U] [i_15] [i_3]))) : (arr_12 [i_15] [0ULL] [0ULL])))))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_3 - 3] [i_3 + 1] [i_15]))))));
            var_43 = var_2;
            arr_57 [i_3] [i_15 - 2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [6] [i_15 - 4] [(short)4] [i_15])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_52 [i_15] [i_15 - 1] [i_15] [i_15 - 1] [i_15 + 1] [i_15 + 1])) || (((/* implicit */_Bool) arr_52 [i_15 - 4] [i_15] [i_15 - 3] [i_15 - 2] [i_15 - 3] [i_15 - 1])))))) : (arr_12 [i_15] [i_3] [i_3])));
            var_44 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [7]))) % (((max((((/* implicit */unsigned long long int) var_6)), (var_7))) ^ (((/* implicit */unsigned long long int) min((arr_55 [i_15]), (arr_55 [i_15]))))))));
            arr_58 [i_3] = min((arr_42 [i_3 + 2] [i_15]), (((/* implicit */int) (_Bool)1)));
        }
    }
}
