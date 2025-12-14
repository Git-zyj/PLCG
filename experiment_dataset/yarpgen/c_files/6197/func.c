/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6197
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
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 18; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_17 ^= ((/* implicit */_Bool) var_7);
                                var_18 *= ((/* implicit */unsigned char) max((8191ULL), (8221ULL)));
                                arr_11 [i_1] = ((/* implicit */short) arr_3 [i_0 + 2] [i_0 - 1] [(unsigned short)20]);
                                var_19 = ((/* implicit */_Bool) min((var_19), (((((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 3] [i_1] [i_3 + 3]))))) != (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_1] [i_2 - 1] [i_4] [14LL])) & (((/* implicit */int) arr_4 [3] [i_2 + 2] [i_2 + 1] [i_4])))))))));
                                var_20 += ((/* implicit */_Bool) ((short) 1217337841366207689ULL));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_6 [(unsigned short)8] [i_0 - 1] [i_1] [(unsigned char)10]) < (((/* implicit */int) var_2)))))) != (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (var_13))))))) - (min((max((18446744073709543419ULL), (((/* implicit */unsigned long long int) arr_2 [i_0])))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) var_11)), (arr_0 [8LL])))))))))));
                    /* LoopSeq 4 */
                    for (long long int i_5 = 0; i_5 < 21; i_5 += 1) /* same iter space */
                    {
                        var_22 ^= ((/* implicit */unsigned short) arr_4 [(unsigned char)19] [i_1] [i_1] [i_1]);
                        var_23 ^= ((/* implicit */unsigned long long int) ((int) (((_Bool)1) ? (((/* implicit */int) arr_4 [i_0 + 4] [i_0 + 4] [i_0 + 4] [(_Bool)1])) : (((/* implicit */int) arr_4 [i_0 - 4] [(unsigned short)2] [i_2] [6])))));
                    }
                    for (long long int i_6 = 0; i_6 < 21; i_6 += 1) /* same iter space */
                    {
                        var_24 = 18446744073709543424ULL;
                        arr_17 [i_1] [(unsigned char)12] [(signed char)5] [2LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? ((+(var_9))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) 368411766U)) ? (((/* implicit */int) (unsigned char)255)) : (var_4)))), (min((((/* implicit */long long int) var_15)), (var_9)))))));
                        var_25 += ((/* implicit */signed char) max((((/* implicit */long long int) arr_10 [i_6] [i_6] [10ULL] [i_6] [i_0] [10ULL] [i_6])), (max((((-1LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_6] [i_6] [(signed char)13] [i_6])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1)))))))));
                        arr_18 [i_0] [i_0] [i_2 + 1] [i_1] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) 8206ULL)) ? (18446744073709543422ULL) : (((/* implicit */unsigned long long int) 0U)))));
                    }
                    /* vectorizable */
                    for (long long int i_7 = 0; i_7 < 21; i_7 += 1) /* same iter space */
                    {
                        var_26 += ((((/* implicit */_Bool) ((unsigned int) 8201ULL))) ? (8217ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 3 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                        {
                            var_27 ^= ((/* implicit */short) (-((+(((/* implicit */int) (_Bool)1))))));
                            var_28 = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_7)) + (((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0 + 2])) ? (((/* implicit */unsigned long long int) arr_7 [(_Bool)1] [i_7] [i_2] [(unsigned short)20])) : (arr_1 [i_0] [i_2 - 1])))));
                            var_29 -= ((/* implicit */unsigned short) ((arr_16 [i_0] [i_0 - 2] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_9)));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                        {
                            var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) 11774980681127465467ULL))));
                            arr_29 [i_1] [i_1] = ((/* implicit */unsigned int) arr_3 [i_2 - 1] [i_2 - 1] [i_0 - 2]);
                            arr_30 [i_0] [i_1] [i_2] [i_7] [i_1] = ((/* implicit */unsigned short) var_6);
                            arr_31 [i_0] [i_1] [i_1] [i_7] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_21 [i_0 + 3] [(unsigned char)2] [(signed char)1] [3LL] [(unsigned char)2]))));
                            var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_5 [19ULL] [i_2] [i_1] [(unsigned char)0]) : (((/* implicit */long long int) var_7))))))))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                        {
                            var_32 = var_15;
                            var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) ((((/* implicit */int) var_14)) - (arr_14 [i_2 + 2] [i_2 - 1] [i_0 + 1] [i_0 + 4]))))));
                        }
                        var_34 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [(unsigned char)17] [i_1] [i_1] [(unsigned char)14]))) : (9223372036854775807LL))) - (((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_0] [i_0]) != (((/* implicit */unsigned long long int) (-2147483647 - 1)))))))));
                    }
                    for (short i_11 = 0; i_11 < 21; i_11 += 2) 
                    {
                        arr_36 [12ULL] [12ULL] [12] [i_11] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned int) arr_32 [i_2 - 1] [i_11]))))) ? (((max((arr_5 [i_0] [i_1] [9LL] [i_11]), (((/* implicit */long long int) 4199989552U)))) + (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_0 + 3] [i_0] [i_0 - 2] [i_2 - 1]))))) : (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */unsigned int) arr_8 [4] [i_1] [i_2] [i_11])) != (var_7)))))))));
                        var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) (-((+(((unsigned int) (signed char)-1)))))))));
                    }
                }
            } 
        } 
    } 
    var_36 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned char) var_10))), (var_10)));
    var_37 = ((/* implicit */int) min((max((((/* implicit */long long int) var_6)), (min((9223372036854775807LL), (var_9))))), (var_16)));
    /* LoopNest 3 */
    for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 2) 
    {
        for (signed char i_13 = 3; i_13 < 11; i_13 += 3) 
        {
            for (signed char i_14 = 2; i_14 < 13; i_14 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_15 = 0; i_15 < 14; i_15 += 2) 
                    {
                        var_38 += ((/* implicit */unsigned char) (~(min((((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (9223372036854775807LL))), (((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_12] [i_14 - 2] [8])) + (arr_25 [i_13] [i_12]))))))));
                        var_39 = ((/* implicit */unsigned int) max((var_39), (max((((/* implicit */unsigned int) max((var_1), (((((/* implicit */unsigned int) ((/* implicit */int) var_14))) != (var_7)))))), (max((var_7), (arr_19 [i_14] [i_13 + 1] [20ULL] [i_15] [(unsigned short)6])))))));
                        var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-(1143914305352105984ULL)))) ? (((/* implicit */int) (signed char)115)) : (-1362535682)))) : (9223372036854775807LL)));
                    }
                    var_41 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_4 [i_14 - 1] [(_Bool)1] [i_13 - 1] [i_13 + 3])) ? (((/* implicit */int) arr_4 [i_14 + 1] [(unsigned char)0] [i_13 + 1] [i_13 + 3])) : (((/* implicit */int) arr_4 [i_14 - 1] [(signed char)9] [i_13 + 3] [i_13 - 2])))) < (((/* implicit */int) (!(((/* implicit */_Bool) 3039705225026658606LL)))))));
                }
            } 
        } 
    } 
    var_42 = ((/* implicit */signed char) min((var_42), (var_11)));
}
