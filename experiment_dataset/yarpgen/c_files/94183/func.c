/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94183
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
    var_16 = ((/* implicit */long long int) var_3);
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) var_4))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) min((max((arr_0 [i_0]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 1598439168U)) || (var_10)))))), (((/* implicit */unsigned char) var_4))));
        /* LoopNest 3 */
        for (long long int i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    {
                        arr_14 [i_2] = ((/* implicit */unsigned long long int) 2251799813685247LL);
                        /* LoopSeq 3 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((unsigned long long int) ((var_12) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [(unsigned short)2] [i_3] [12] [2] [i_0 - 1]))) : (arr_8 [i_0 + 2] [i_1 + 2] [4ULL] [i_4])))))));
                            arr_18 [i_0] [7LL] [i_2] [i_2] [(_Bool)1] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) min((arr_1 [i_0 - 1] [i_1 - 2]), (((/* implicit */unsigned char) arr_2 [i_2 + 2])))))));
                            arr_19 [9LL] [6LL] [i_1] [(unsigned short)0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2696528127U)) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)4971)), (1598439169U)))) : (arr_12 [i_2])));
                        }
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            var_19 = ((/* implicit */unsigned char) min(((~(((/* implicit */int) arr_0 [i_1 + 1])))), (((/* implicit */int) arr_2 [i_0 + 1]))));
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0 + 2] [i_2] [i_2] [i_1 + 1] [i_0 + 2])) ? (var_1) : (2251799813685247LL)))) ? (((/* implicit */int) max((arr_15 [i_5 - 1] [i_3] [i_2 + 1] [i_1] [i_0]), (arr_15 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_0 - 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1125899906842623LL)))))));
                        }
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26761))) % (1598439169U)));
                            arr_27 [i_0] [i_0] [i_2] [2LL] [i_3] [(unsigned char)3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [8LL] [i_6 - 1])) ? (((/* implicit */long long int) min((((((/* implicit */int) (unsigned short)8160)) + (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (_Bool)0))))) : (arr_12 [i_2])));
                            var_22 = ((/* implicit */long long int) (((+(((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_6 [12LL] [i_2 + 2])))))) != (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_15)), (var_6)))))))));
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1125899906842647LL)) ? (-2251799813685247LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4971)))))) ? (((long long int) arr_22 [13U] [13U] [i_6 - 1] [(signed char)4] [i_6 - 1])) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34820)))));
                        }
                        var_24 = ((/* implicit */long long int) min((var_24), (var_6)));
                        var_25 = ((/* implicit */long long int) min((var_25), (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1 - 1] [17])) || (((/* implicit */_Bool) arr_25 [i_3] [i_1 - 1]))))), ((+(min((arr_10 [i_1] [(_Bool)1] [i_1] [18]), (((/* implicit */long long int) (unsigned short)8168))))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
        {
            for (unsigned char i_8 = 3; i_8 < 18; i_8 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_9 = 1; i_9 < 17; i_9 += 1) 
                    {
                        for (long long int i_10 = 3; i_10 < 18; i_10 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-32449)) ? (((/* implicit */long long int) (+(max((((/* implicit */unsigned int) arr_2 [i_9 - 1])), (var_13)))))) : (((max(((_Bool)0), ((_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_0] [i_7 + 1])), (arr_30 [i_0]))))) : ((~(var_6))))))))));
                                var_27 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~((~(arr_5 [5U]))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned int i_11 = 0; i_11 < 19; i_11 += 4) 
                    {
                        var_28 += ((/* implicit */_Bool) max(((+(((/* implicit */int) arr_4 [i_8 - 3] [i_7 + 1] [i_0 + 1])))), (((/* implicit */int) ((short) arr_12 [i_11])))));
                        var_29 = ((/* implicit */_Bool) min((var_29), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))), (max((((/* implicit */unsigned int) (_Bool)1)), (var_13)))))) || ((((~(0ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                        var_30 -= ((/* implicit */unsigned char) max((((/* implicit */int) arr_29 [i_8 - 1])), (((((/* implicit */_Bool) arr_13 [i_7 + 1] [(unsigned short)0] [(unsigned short)12] [i_7 + 1] [(unsigned short)0] [17ULL])) ? (arr_13 [i_7 + 1] [3LL] [i_7] [i_7] [6LL] [i_7]) : (((/* implicit */int) var_10))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_12 = 0; i_12 < 19; i_12 += 2) 
                    {
                        arr_43 [(_Bool)1] [(_Bool)1] = ((/* implicit */signed char) arr_36 [i_12] [i_12] [8U] [i_8 - 1] [i_0] [i_0 - 1]);
                        var_31 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_4))));
                        /* LoopSeq 2 */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [(_Bool)0] [i_7] [i_8 - 2] [i_12] [3ULL])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_10 [i_0] [i_0] [i_8 + 1] [i_0]))))));
                            var_33 = ((/* implicit */unsigned int) var_7);
                            arr_47 [i_13] = ((/* implicit */unsigned char) ((arr_45 [9LL] [9LL]) * (((((/* implicit */_Bool) arr_12 [i_13])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_15))))));
                        }
                        for (long long int i_14 = 2; i_14 < 18; i_14 += 3) 
                        {
                            arr_50 [5LL] [14LL] [i_12] [(short)12] [14LL] [5LL] [14ULL] = ((((/* implicit */_Bool) (~(((/* implicit */int) (short)17878))))) ? (arr_32 [i_0]) : (2079951892537992055LL));
                            arr_51 [i_0] [(unsigned char)3] [i_8] [(_Bool)1] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0 - 1])) ^ (((/* implicit */int) ((((/* implicit */int) arr_42 [i_0 + 1] [i_0 + 1] [(signed char)14] [i_12])) > (((/* implicit */int) arr_34 [i_7] [i_12] [i_14])))))));
                            var_34 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 5732889646236379334ULL)) ? (var_14) : (((/* implicit */long long int) arr_8 [i_0] [7U] [(_Bool)1] [(short)3]))))));
                            var_35 |= arr_42 [i_8] [(unsigned short)17] [i_8 - 3] [i_8];
                        }
                    }
                    for (unsigned short i_15 = 0; i_15 < 19; i_15 += 1) 
                    {
                        arr_54 [i_15] [i_15] [i_7] [13U] [i_15] = ((/* implicit */unsigned char) 9223372036854775807LL);
                        arr_55 [8LL] [8LL] [8LL] [i_15] [(_Bool)1] &= ((/* implicit */unsigned int) max((min((((((/* implicit */_Bool) arr_35 [i_0] [(_Bool)1] [(_Bool)0] [i_15])) ? (((/* implicit */int) arr_24 [8LL] [8LL] [10LL])) : (((/* implicit */int) (unsigned short)57376)))), (arr_13 [i_0] [(unsigned short)18] [i_8 - 1] [(_Bool)1] [(unsigned short)18] [i_15]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (var_6) : (((/* implicit */long long int) arr_40 [i_0] [i_0] [(unsigned char)1] [i_0] [(_Bool)1] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) > (var_14)))) : (((/* implicit */int) (short)17882))))));
                    }
                    for (unsigned long long int i_16 = 2; i_16 < 18; i_16 += 4) 
                    {
                        var_36 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)57376)) ? (((/* implicit */int) arr_4 [i_7 + 1] [i_7 + 1] [i_7 + 1])) : (((/* implicit */int) arr_4 [i_7 + 1] [i_7 + 1] [i_7 + 1]))))) || (((/* implicit */_Bool) arr_4 [i_7 + 1] [i_7 + 1] [i_7 + 1]))));
                        var_37 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_6 [i_0] [(_Bool)1])) ? (max((((/* implicit */long long int) arr_16 [i_16] [i_16] [i_16] [i_0])), (var_6))) : (arr_38 [i_0] [i_7 + 1]))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_37 [i_16 + 1] [(short)2] [i_7]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_16]))) : (arr_32 [i_0 - 1])))));
                        arr_60 [i_0 + 2] [i_7] [i_16] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_58 [i_16 - 2] [i_8 - 3] [i_7 + 1] [i_0 + 2])) / (((/* implicit */int) arr_58 [i_16 + 1] [i_8 + 1] [i_7 + 1] [i_0 + 1]))))));
                    }
                }
            } 
        } 
        var_38 = ((/* implicit */unsigned char) (~(arr_5 [(_Bool)1])));
        var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) arr_4 [i_0] [i_0] [i_0]))));
    }
    var_40 = ((/* implicit */signed char) var_8);
}
