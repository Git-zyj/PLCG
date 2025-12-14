/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82427
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
    var_12 = ((/* implicit */_Bool) min((var_5), (((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) var_0))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) ((_Bool) var_3))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 4; i_0 < 8; i_0 += 1) 
    {
        arr_2 [7LL] = ((/* implicit */unsigned int) (short)24721);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [2LL])) ? (((var_4) * (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1] [1LL]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0 + 1])))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 10; i_4 += 4) /* same iter space */
                        {
                            arr_12 [i_0] [i_0] [i_2] [i_3] [i_1] [i_3] = ((/* implicit */short) arr_1 [i_1]);
                            arr_13 [i_0 - 3] [i_1] [i_2] [i_2] [i_0] [i_0] = ((_Bool) 21LL);
                            var_14 ^= ((/* implicit */unsigned char) (-((+(((/* implicit */int) arr_5 [i_0] [i_4]))))));
                            var_15 = ((/* implicit */unsigned short) arr_5 [i_0] [i_0]);
                        }
                        for (short i_5 = 0; i_5 < 10; i_5 += 4) /* same iter space */
                        {
                            var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)14344)) ? (((/* implicit */int) (short)24741)) : (((/* implicit */int) (unsigned short)31164))));
                            arr_16 [i_0] = var_7;
                        }
                        /* LoopSeq 1 */
                        for (signed char i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65529)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_3 - 1]))) : (6787001337664371272LL)))) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_0])) : (((/* implicit */int) var_6))));
                            var_18 *= ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)34378))));
                        }
                        var_19 = ((/* implicit */unsigned char) var_11);
                        arr_20 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1])) ? (9223372036854775806LL) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [(signed char)5] [(signed char)1] [i_2] [i_3] [8U])))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3 - 1] [i_1]))) < (arr_1 [i_1])))) : (((/* implicit */int) arr_4 [i_0] [i_1] [1U]))));
                    }
                    arr_21 [i_0] [i_1] [(unsigned char)2] [2LL] = ((/* implicit */unsigned short) (((((+(var_3))) + (9223372036854775807LL))) << (((((/* implicit */int) arr_17 [i_0] [i_0 - 4] [i_0 + 2] [i_0 - 3] [i_0 - 3])) - (3)))));
                }
            } 
        } 
        var_20 = (-(((((/* implicit */_Bool) 6787001337664371278LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))) : (arr_7 [i_0] [i_0] [(signed char)1]))));
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (-(6787001337664371283LL))))));
        arr_22 [i_0 + 2] = ((/* implicit */_Bool) arr_14 [i_0 - 4] [i_0] [i_0 + 2] [i_0 - 4] [i_0]);
    }
    for (short i_7 = 0; i_7 < 11; i_7 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_8 = 0; i_8 < 11; i_8 += 3) 
        {
            arr_28 [i_8] [i_8] [i_8] = ((/* implicit */short) ((((_Bool) ((unsigned int) arr_24 [(_Bool)1]))) ? (((/* implicit */long long int) (-(((/* implicit */int) max(((signed char)-112), ((signed char)-1))))))) : (min((var_3), (((/* implicit */long long int) arr_25 [i_8] [i_8] [i_8]))))));
            var_22 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) min((var_9), (arr_25 [i_7] [i_7] [i_7]))))) ^ (arr_26 [i_7] [i_7] [i_7])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -6787001337664371294LL)))))) : (((unsigned int) arr_23 [i_7]))));
            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((signed char) min((((/* implicit */long long int) ((((/* implicit */int) arr_24 [i_7])) << (((((/* implicit */int) arr_23 [i_7])) - (224)))))), (((((/* implicit */_Bool) arr_23 [i_7])) ? (arr_26 [i_7] [i_7] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_7] [i_7] [i_8])))))))))));
        }
        /* LoopSeq 2 */
        for (long long int i_9 = 0; i_9 < 11; i_9 += 2) 
        {
            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (max((((/* implicit */long long int) 1539906432U)), (-9223372036854775806LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_7]))))))));
            /* LoopSeq 1 */
            for (long long int i_10 = 1; i_10 < 8; i_10 += 1) 
            {
                /* LoopSeq 1 */
                for (long long int i_11 = 0; i_11 < 11; i_11 += 3) 
                {
                    var_25 = ((/* implicit */signed char) ((unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-1))))))));
                    var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_36 [i_11] [i_9] [i_11] [i_10])) ? (arr_26 [i_7] [i_11] [i_7]) : ((+(arr_26 [i_9] [i_10] [i_10 + 3]))))))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_12 = 2; i_12 < 10; i_12 += 1) 
                {
                    var_27 ^= ((/* implicit */unsigned int) (~((-(((/* implicit */int) arr_25 [i_7] [i_9] [i_12]))))));
                    /* LoopSeq 1 */
                    for (short i_13 = 0; i_13 < 11; i_13 += 4) 
                    {
                        arr_42 [i_7] [0LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_38 [1U] [i_9] [i_10 + 3] [i_12])) || (((/* implicit */_Bool) arr_35 [i_7] [i_9] [i_10 - 1] [i_10] [i_13] [i_7]))));
                        arr_43 [i_7] [i_9] [i_7] [i_12] [i_7] [i_9] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_23 [i_7])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_9] [(signed char)9])))))));
                        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_10 - 1] [i_13] [(unsigned char)4])) ? (((((/* implicit */_Bool) (short)24722)) ? (((/* implicit */int) (unsigned char)163)) : (((/* implicit */int) (short)-6791)))) : ((-(((/* implicit */int) var_7))))));
                    }
                }
                var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) ((0U) > (((/* implicit */unsigned int) ((/* implicit */int) (short)-1088))))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_32 [i_7] [i_7] [i_7] [0LL])) % (((/* implicit */int) (short)8191))))) : (arr_26 [i_9] [i_9] [i_10]))) : (-2437083113881174638LL)));
            }
        }
        /* vectorizable */
        for (unsigned int i_14 = 0; i_14 < 11; i_14 += 3) 
        {
            var_30 = ((/* implicit */unsigned char) ((signed char) 1404107904604808240LL));
            arr_46 [i_14] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_7] [i_14] [i_14] [i_14]))) > ((~(arr_36 [i_7] [i_7] [i_7] [i_14])))));
            /* LoopSeq 1 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((((unsigned int) arr_26 [i_7] [i_7] [i_7])) % (((/* implicit */unsigned int) ((((/* implicit */int) (short)-8191)) / (((/* implicit */int) (unsigned char)45))))))))));
                var_32 = ((/* implicit */long long int) (+(((/* implicit */int) arr_40 [i_7] [i_7] [i_7] [i_7] [(short)9] [i_7] [i_7]))));
            }
            arr_49 [i_7] [(signed char)7] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-15789))) * (494618165U)));
            arr_50 [i_7] [i_14] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_7] [i_7] [i_14] [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_47 [i_7] [i_7] [0LL] [(_Bool)1])));
        }
    }
    var_33 = ((/* implicit */_Bool) max((2489017679U), (((/* implicit */unsigned int) (unsigned char)179))));
}
