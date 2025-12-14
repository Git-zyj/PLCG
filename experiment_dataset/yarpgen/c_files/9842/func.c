/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9842
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
    var_11 |= var_4;
    var_12 -= var_9;
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) max((((/* implicit */unsigned long long int) var_3)), (var_4)))))) : (var_4)));
    var_14 = ((/* implicit */short) ((max((var_2), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) var_8))))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (int i_2 = 4; i_2 < 20; i_2 += 1) 
            {
                for (int i_3 = 1; i_3 < 21; i_3 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            var_15 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1 + 1])) && (((/* implicit */_Bool) arr_4 [i_1 - 1])))));
                            var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_9 [i_3] [i_3] [i_3 - 1] [i_3])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((short) var_2))))) ^ (((/* implicit */int) ((-8309214762478738989LL) == (8309214762478738991LL))))));
                            arr_13 [i_0] [i_3] [i_2] [i_3] [5ULL] = ((/* implicit */int) arr_10 [i_2] [i_3] [i_2 + 1] [i_2]);
                            var_17 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)32763)), (10189361050328291610ULL)))) ? (max((((((/* implicit */_Bool) var_5)) ? (arr_1 [i_0]) : (((/* implicit */int) arr_12 [i_4] [i_1] [i_1] [i_1] [i_1])))), (((((/* implicit */_Bool) arr_7 [i_2] [i_3] [i_4])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1)))))) : (((/* implicit */int) var_5))));
                            var_18 = ((/* implicit */short) (~(((/* implicit */int) max((arr_0 [(_Bool)1] [i_2 + 2]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))))))));
                        }
                        arr_14 [i_0] [i_0] [i_0] [i_3] [i_0] [(unsigned char)5] = ((/* implicit */long long int) max((((/* implicit */int) (((+((-9223372036854775807LL - 1LL)))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_0))))))))), (((((/* implicit */_Bool) arr_5 [i_2 - 1] [i_2 - 3] [i_2 - 3])) ? (((((/* implicit */_Bool) (short)-32764)) ? (((/* implicit */int) (unsigned char)20)) : (((/* implicit */int) (short)21879)))) : (((/* implicit */int) min((var_5), (((/* implicit */unsigned short) arr_12 [i_3] [i_1] [i_2] [i_2] [i_3])))))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 1) 
                        {
                            arr_18 [i_0] [i_1 + 1] [i_1 + 1] [(short)13] [i_2] [i_3] [i_5] = ((/* implicit */signed char) arr_7 [i_2] [i_3 - 1] [i_5]);
                            arr_19 [i_1] [i_3] [i_2] [i_3] [i_5] = ((/* implicit */_Bool) (-(min((arr_9 [i_1] [i_2 - 3] [i_3 + 1] [i_3]), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))));
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) << (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) ? (((5063081176620732865ULL) & (((/* implicit */unsigned long long int) 9223372036854775807LL)))) : (((/* implicit */unsigned long long int) (+(9223372036854775807LL))))));
                            var_20 ^= ((/* implicit */unsigned long long int) arr_3 [i_2 - 2] [i_1 + 2]);
                        }
                        var_21 = arr_12 [i_3] [i_1] [(short)0] [i_3 + 1] [i_0];
                    }
                } 
            } 
            arr_20 [(unsigned short)0] [i_1 + 2] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_12 [i_0] [i_1 + 3] [i_1] [i_1] [i_1]), (arr_12 [i_0] [i_1 + 1] [i_1] [i_1] [6LL])))) ? (((unsigned long long int) (~(arr_9 [i_0] [6ULL] [(unsigned short)2] [i_0])))) : (((/* implicit */unsigned long long int) min((arr_16 [i_0] [14U] [i_0]), (((/* implicit */unsigned int) min((952315998), (((/* implicit */int) (short)-1))))))))));
            var_22 = ((/* implicit */int) arr_7 [i_1 + 2] [i_1 + 2] [i_1]);
        }
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_15 [i_0] [(unsigned char)8] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((((var_2) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [(short)4] [i_0] [i_0] [i_0] [i_0]))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0])) ? (arr_16 [i_0] [i_0] [i_0]) : (arr_16 [i_0] [i_0] [i_0]))))));
        arr_21 [(unsigned short)16] = ((/* implicit */unsigned long long int) ((signed char) max((arr_1 [i_0]), (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [(short)0] [i_0] [(short)0] [(short)0]))))))));
    }
    for (int i_6 = 4; i_6 < 22; i_6 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (signed char i_7 = 3; i_7 < 20; i_7 += 3) 
        {
            var_24 = ((/* implicit */int) (!(((3543271782U) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)100)))))));
            arr_27 [(signed char)12] [i_6] = arr_24 [i_7 + 2] [i_7 - 1] [i_6];
            var_25 = ((((((/* implicit */int) arr_25 [i_6] [i_6])) ^ (((/* implicit */int) arr_25 [i_6] [i_6])))) ^ (((/* implicit */int) arr_25 [i_6] [i_6])));
        }
        for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 4) 
        {
            arr_31 [1ULL] [1ULL] [i_6] = ((/* implicit */signed char) var_8);
            var_26 += ((short) ((unsigned short) arr_25 [i_8] [i_8]));
            var_27 -= ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_28 [i_6 - 1])), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (arr_29 [i_6 - 2] [i_6] [i_6])))) : (((/* implicit */int) arr_22 [i_6 + 1]))))));
            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) min((((var_4) ^ (((/* implicit */unsigned long long int) arr_23 [i_8])))), (((/* implicit */unsigned long long int) arr_23 [i_8])))))));
            var_29 &= ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_24 [i_6 - 1] [i_6 - 3] [i_8])) ? (arr_24 [i_6 - 3] [i_6 + 2] [i_8]) : (arr_24 [i_6 + 1] [i_6 - 2] [i_8]))));
        }
        arr_32 [i_6] [6ULL] = ((/* implicit */unsigned char) ((short) (+(((/* implicit */int) var_3)))));
    }
    for (int i_9 = 4; i_9 < 22; i_9 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_10 = 2; i_10 < 23; i_10 += 4) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 1) 
            {
                for (unsigned int i_12 = 0; i_12 < 24; i_12 += 2) 
                {
                    {
                        var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((unsigned int) var_10)))));
                        var_31 = ((/* implicit */int) ((unsigned long long int) var_4));
                        var_32 = ((/* implicit */int) max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_37 [i_10] [i_10]))))), (((((/* implicit */_Bool) arr_37 [i_10] [i_10])) ? (arr_30 [i_10]) : (arr_30 [i_12])))));
                        arr_44 [17LL] [i_10] [i_11] [i_9] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_9] [i_12]))) / (arr_40 [i_9 + 1] [i_9 + 1]));
                        var_33 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_35 [(unsigned short)1] [(unsigned short)1]))))) / (min((((/* implicit */unsigned int) arr_34 [i_12])), (arr_40 [i_10 - 1] [14])))))) ? (((((/* implicit */_Bool) min((var_8), (var_8)))) ? (((/* implicit */int) arr_29 [(short)12] [i_9 + 1] [i_10 + 1])) : (((/* implicit */int) ((((/* implicit */int) arr_22 [i_11])) == (((/* implicit */int) var_10))))))) : (((((/* implicit */_Bool) ((long long int) arr_24 [i_9] [(unsigned char)22] [i_12]))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_22 [i_12])) : (((/* implicit */int) arr_22 [i_12])))) : (((/* implicit */int) arr_22 [i_9]))))));
                    }
                } 
            } 
        } 
        arr_45 [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) min((var_5), (((/* implicit */unsigned short) var_0)))))) ? (((int) arr_43 [i_9] [(unsigned char)5] [i_9 - 3] [i_9 - 2] [i_9])) : ((-(((/* implicit */int) arr_42 [i_9 - 1] [1]))))));
    }
    for (int i_13 = 2; i_13 < 17; i_13 += 4) 
    {
        arr_48 [i_13] = ((/* implicit */signed char) arr_6 [i_13 + 3] [i_13 + 3] [i_13 - 2]);
        var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((int) ((((/* implicit */_Bool) arr_23 [i_13])) ? (arr_8 [i_13] [i_13] [(unsigned char)1]) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [17ULL])))))) : (((/* implicit */int) ((signed char) arr_10 [i_13 + 3] [i_13] [i_13] [i_13 + 3])))));
        arr_49 [(unsigned short)1] [i_13 + 3] = arr_12 [i_13] [i_13 + 3] [i_13] [i_13] [i_13 - 1];
    }
}
