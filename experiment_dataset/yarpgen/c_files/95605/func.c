/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95605
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
    var_14 = ((/* implicit */_Bool) max((((/* implicit */long long int) (+(((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */int) (_Bool)1))))))), (max((((((/* implicit */long long int) var_6)) / (9223372036854775807LL))), (((/* implicit */long long int) (+(((/* implicit */int) var_13)))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        var_15 = ((/* implicit */signed char) var_3);
        var_16 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0 + 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0 + 3]))))))) / (((/* implicit */int) var_3))));
    }
    for (int i_1 = 1; i_1 < 23; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_2 = 1; i_2 < 24; i_2 += 4) 
        {
            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) max(((+(min((((/* implicit */long long int) (short)32764)), (6352108789511649469LL))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) 134217727)), (var_0))))))))))));
            var_18 = ((/* implicit */int) ((long long int) var_0));
            arr_9 [8LL] &= ((/* implicit */unsigned short) max((var_0), (((/* implicit */long long int) ((_Bool) (-(((/* implicit */int) var_5))))))));
            arr_10 [i_2] [i_2] [i_1 + 2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(arr_4 [i_2 - 1]))))));
            var_19 ^= ((/* implicit */long long int) ((unsigned long long int) max((arr_6 [24LL]), (((/* implicit */unsigned long long int) var_8)))));
        }
        /* LoopSeq 3 */
        for (signed char i_3 = 2; i_3 < 22; i_3 += 3) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned long long int) ((unsigned int) min((min((arr_4 [i_1 - 1]), (((/* implicit */unsigned long long int) (unsigned char)93)))), (((/* implicit */unsigned long long int) var_13)))));
            arr_14 [i_3] = ((/* implicit */short) (~(((/* implicit */int) (short)-32756))));
            var_21 = ((/* implicit */short) ((arr_6 [i_3]) / (arr_6 [i_3])));
        }
        for (signed char i_4 = 2; i_4 < 22; i_4 += 3) /* same iter space */
        {
            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((max((arr_4 [i_1 - 1]), (((/* implicit */unsigned long long int) arr_8 [i_1 + 1] [i_1 + 2] [14U])))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (((/* implicit */int) arr_8 [i_1 - 1] [i_1 + 2] [(unsigned short)22])) : (((/* implicit */int) arr_8 [i_1 + 1] [i_1 - 1] [10LL]))))))))));
            arr_18 [i_4 - 2] = ((/* implicit */_Bool) (-((~(((/* implicit */int) var_8))))));
            var_23 = ((int) ((long long int) var_3));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_5 = 1; i_5 < 23; i_5 += 1) 
            {
                arr_21 [i_5] [i_5] [i_5] = ((/* implicit */long long int) (short)-32764);
                var_24 = ((/* implicit */long long int) (+(((/* implicit */int) arr_15 [i_4 - 1] [i_1 + 2]))));
                var_25 &= ((/* implicit */unsigned short) ((arr_6 [2]) / (arr_6 [12U])));
                var_26 ^= ((/* implicit */unsigned long long int) (+(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) / (-6352108789511649455LL)))));
            }
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_7 = 3; i_7 < 21; i_7 += 1) 
                {
                    var_27 += ((/* implicit */unsigned int) (~(max((arr_4 [i_1 + 1]), (arr_4 [i_1 + 2])))));
                    arr_27 [i_6] [i_6 - 1] [i_4 + 3] [(unsigned short)4] [i_6] = ((/* implicit */signed char) min((((/* implicit */long long int) (short)-32753)), (0LL)));
                    var_28 |= ((3023897858058938696LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)24))));
                    var_29 = ((/* implicit */unsigned int) var_9);
                    var_30 += ((/* implicit */int) min(((-(max((arr_4 [i_1]), (((/* implicit */unsigned long long int) (short)20562)))))), (((/* implicit */unsigned long long int) min((arr_3 [i_1 - 1]), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))))))))));
                }
                for (signed char i_8 = 1; i_8 < 22; i_8 += 1) 
                {
                    arr_31 [(unsigned short)3] [(unsigned short)3] [(unsigned short)3] [i_6] [13LL] = ((/* implicit */unsigned short) ((short) (short)-32752));
                    var_31 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6168650237100696318LL)) ? (5514044178086394857LL) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_6] [i_4] [i_6])))))) | (3041967773787466354ULL))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_9 = 4; i_9 < 23; i_9 += 1) 
                    {
                        var_32 = ((/* implicit */unsigned char) min((((min((var_9), (((/* implicit */long long int) arr_11 [(unsigned char)12] [(unsigned char)12] [i_1])))) / (((/* implicit */long long int) (+(((/* implicit */int) var_5))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_1 + 1] [i_1 + 1] [i_6] [i_8 + 2])) ? (((((/* implicit */int) var_5)) - (((/* implicit */int) var_12)))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_34 [24LL] [8] [i_6] [i_1] [i_1])), ((unsigned char)87)))))))));
                        var_33 = ((/* implicit */long long int) (((+((+(((/* implicit */int) (_Bool)1)))))) * (((/* implicit */int) (!(((_Bool) 5514044178086394857LL)))))));
                        var_34 = ((/* implicit */unsigned long long int) (~((((_Bool)1) ? (((/* implicit */int) arr_34 [i_1 - 1] [i_4 - 2] [i_8 - 1] [8LL] [i_6 - 1])) : (var_6)))));
                        var_35 -= ((/* implicit */_Bool) arr_15 [i_1] [i_1]);
                        var_36 += ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_20 [(unsigned char)0] [i_6 - 1] [i_9 - 2]), (((/* implicit */unsigned int) arr_19 [(unsigned short)16] [i_6 - 1] [i_9 - 3] [(unsigned char)22]))))) && (((/* implicit */_Bool) min(((+(10ULL))), (max((((/* implicit */unsigned long long int) arr_26 [i_1] [i_1])), (arr_6 [4LL]))))))));
                    }
                    for (long long int i_10 = 2; i_10 < 22; i_10 += 3) 
                    {
                        var_37 |= ((/* implicit */long long int) var_8);
                        arr_37 [i_1 + 2] [(_Bool)1] [(_Bool)1] [i_8] [i_6] = ((/* implicit */unsigned short) min((min((var_0), (((/* implicit */long long int) min((var_12), (((/* implicit */short) arr_17 [i_1] [i_6] [(_Bool)1]))))))), (((/* implicit */long long int) max((((/* implicit */int) arr_13 [i_6] [i_8 + 1] [i_6])), (((((/* implicit */int) arr_32 [3] [i_8 - 1] [i_1] [(unsigned char)0] [i_1] [i_1])) / (((/* implicit */int) (_Bool)1)))))))));
                        var_38 = ((/* implicit */short) (+(((/* implicit */int) ((arr_19 [i_6] [i_8 + 2] [i_8 + 2] [i_6]) && (((/* implicit */_Bool) var_13)))))));
                        var_39 = ((/* implicit */unsigned long long int) -1711441251);
                    }
                }
                for (unsigned long long int i_11 = 1; i_11 < 24; i_11 += 3) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_40 *= ((/* implicit */long long int) arr_36 [10LL] [i_6]);
                        var_41 = ((/* implicit */unsigned long long int) (-(arr_22 [i_6] [i_6 - 1] [i_6 - 1] [i_6])));
                    }
                    var_42 -= ((/* implicit */int) min((((/* implicit */unsigned long long int) var_8)), (max((((/* implicit */unsigned long long int) ((4622144238161528534LL) + (((/* implicit */long long int) ((/* implicit */int) (short)-32756)))))), (arr_28 [8LL])))));
                }
                var_43 = ((/* implicit */unsigned int) ((arr_3 [i_1 - 1]) == (((/* implicit */long long int) ((/* implicit */int) min((arr_23 [i_1 - 1] [i_4 - 1] [i_6] [i_6 - 1]), (arr_23 [i_1 - 1] [i_4 - 1] [i_6] [i_6 - 1])))))));
            }
            var_44 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))), ((((-2147483647 - 1)) / (((/* implicit */int) var_3)))))))));
        }
        for (unsigned int i_13 = 1; i_13 < 24; i_13 += 2) 
        {
            arr_45 [i_1] [i_13] = ((/* implicit */unsigned long long int) var_12);
            /* LoopSeq 1 */
            for (unsigned short i_14 = 2; i_14 < 22; i_14 += 1) 
            {
                var_45 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (max((min((arr_39 [i_1] [i_1] [i_13 - 1] [(unsigned char)20] [i_14]), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) ((_Bool) arr_12 [i_13] [i_13])))))));
                var_46 = ((/* implicit */signed char) max((((((/* implicit */int) (!((_Bool)1)))) % (((((/* implicit */_Bool) (unsigned char)19)) ? (var_6) : (((/* implicit */int) arr_23 [(unsigned short)10] [(signed char)0] [(signed char)0] [(unsigned short)10])))))), (((/* implicit */int) ((unsigned char) max((((/* implicit */long long int) (short)11955)), (var_0)))))));
                var_47 |= ((/* implicit */int) ((min((arr_4 [i_1 - 1]), (arr_4 [i_1 + 2]))) | (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (_Bool)1)))), ((+(var_6))))))));
                /* LoopNest 2 */
                for (int i_15 = 1; i_15 < 22; i_15 += 4) 
                {
                    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                    {
                        {
                            arr_54 [(signed char)1] [(signed char)1] [(signed char)1] [i_15 + 3] [i_15 + 3] [i_15] [(signed char)1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (!(arr_50 [i_15] [i_14 + 1] [19LL] [i_1 + 1] [i_15])))), (min((arr_25 [i_1] [i_13 + 1]), (((/* implicit */unsigned long long int) (signed char)127))))));
                            arr_55 [(unsigned char)20] [i_13] [i_14 + 2] [i_15] [i_16 - 1] [i_1] = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)0))));
                            var_48 *= ((/* implicit */int) ((((arr_39 [i_1] [i_1] [(unsigned char)13] [i_15] [i_16 - 1]) % (arr_53 [18LL]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)65530)) == (((((/* implicit */int) (unsigned short)5)) * (((/* implicit */int) (unsigned short)1))))))))));
                        }
                    } 
                } 
                var_49 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((max((((/* implicit */long long int) (-2147483647 - 1))), (arr_5 [i_1 - 1] [16] [(unsigned char)6]))), (min((((/* implicit */long long int) var_4)), (arr_3 [7LL]))))))));
            }
        }
    }
    var_50 = ((/* implicit */short) (~(var_0)));
    var_51 -= ((/* implicit */unsigned short) (-(((/* implicit */int) ((min((var_9), (((/* implicit */long long int) (short)32764)))) == (min((((/* implicit */long long int) var_10)), (1316000061194653388LL))))))));
    /* LoopSeq 1 */
    for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
    {
        var_52 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_20 [i_17] [i_17 - 1] [i_17 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_43 [i_17] [i_17] [i_17 - 1]))))))))) : (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)23))))), (min((arr_25 [2LL] [i_17]), (((/* implicit */unsigned long long int) arr_40 [i_17 - 1] [i_17 - 1] [18LL] [18LL] [i_17] [i_17 - 1] [0]))))))));
        var_53 = ((/* implicit */long long int) max((var_53), (((/* implicit */long long int) ((((((/* implicit */int) arr_12 [i_17 - 1] [i_17 - 1])) + (((/* implicit */int) arr_12 [i_17] [i_17 - 1])))) + (((/* implicit */int) min((max((((/* implicit */short) (unsigned char)168)), (var_13))), (min((var_13), (((/* implicit */short) arr_16 [(signed char)1]))))))))))));
        arr_60 [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((unsigned long long int) (signed char)105))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) 1765704534U)), (arr_2 [(signed char)1])))) ? (max((((/* implicit */unsigned int) arr_11 [i_17] [0LL] [16ULL])), (1765704535U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) : (max((min((((/* implicit */long long int) arr_20 [i_17] [i_17] [i_17 - 1])), (-430989007220292806LL))), (((/* implicit */long long int) ((_Bool) arr_24 [i_17] [i_17 - 1])))))));
    }
}
