/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70980
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
    for (int i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            var_16 &= ((/* implicit */unsigned long long int) (-(((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [(_Bool)1] [6U]))) : (arr_2 [4LL] [4LL]))) / (((/* implicit */long long int) max((arr_0 [i_0 - 3]), (var_13))))))));
            arr_6 [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_4 [i_1] [i_1])), (arr_5 [i_0 - 1])));
            var_17 = ((/* implicit */long long int) arr_0 [i_0 - 2]);
            arr_7 [i_0] [i_1] = ((/* implicit */long long int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_5 [i_0 - 3]), (arr_5 [i_1]))))))), (arr_3 [i_1])));
        }
        for (long long int i_2 = 0; i_2 < 19; i_2 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (long long int i_3 = 1; i_3 < 18; i_3 += 1) 
            {
                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((var_13) * (arr_0 [i_2])))))) * (max((((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */unsigned long long int) arr_9 [i_0 - 2] [i_0 - 2] [11])) : (var_6))), (((/* implicit */unsigned long long int) arr_14 [i_0 - 1] [i_0 - 3] [i_3 - 1])))))))));
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 19; i_4 += 1) 
                {
                    for (unsigned int i_5 = 1; i_5 < 18; i_5 += 1) 
                    {
                        {
                            arr_19 [i_0 - 1] [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_13 [17U] [i_2] [i_5 + 1]);
                            var_19 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_3 + 1])) ? (arr_2 [i_2] [i_2]) : (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) (short)14))))), (max((((/* implicit */unsigned long long int) arr_1 [i_0 - 1])), (7923492109761086451ULL)))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned short) arr_8 [i_2] [i_3]);
                arr_20 [11LL] [i_2] [i_3 - 1] = ((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_2] [i_3 + 1] [i_2])) / ((+(((/* implicit */int) (short)4095))))));
            }
            /* vectorizable */
            for (int i_6 = 1; i_6 < 18; i_6 += 1) 
            {
                arr_23 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 17057907423696155589ULL)) ? (5086046065451117654ULL) : (((10523251963948465178ULL) & (((/* implicit */unsigned long long int) 4294967295U))))));
                /* LoopSeq 2 */
                for (short i_7 = 3; i_7 < 18; i_7 += 2) 
                {
                    var_21 = ((/* implicit */unsigned long long int) ((int) arr_25 [i_7 - 3] [i_7] [i_2] [i_7 + 1] [i_7 + 1] [i_7 - 2]));
                    arr_26 [(_Bool)1] [i_2] [i_6] [(_Bool)1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_4 [(signed char)0] [i_6])) : (((/* implicit */int) arr_11 [i_6 - 1] [i_2] [i_6] [i_7 - 1]))));
                    arr_27 [i_0 - 3] [i_7 - 3] [i_2] [i_2] = ((/* implicit */short) (-(var_3)));
                }
                for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 2) 
                {
                    var_22 ^= ((/* implicit */unsigned long long int) arr_16 [i_8]);
                    arr_30 [i_0] [i_2] [i_2] [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_0 - 3] [i_0] [i_0 - 3] [i_6 + 1] [i_0] [i_2])) ? (((/* implicit */long long int) 7U)) : (var_0)));
                    var_23 += ((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_6 - 1] [i_8] [i_8] [i_6 - 1]))));
                    arr_31 [i_2] [i_6 + 1] = ((/* implicit */long long int) ((((1649998838922864302LL) < (((/* implicit */long long int) var_14)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (arr_14 [(signed char)17] [(short)18] [i_8]))) : (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (short)-32747)))))));
                }
                /* LoopSeq 2 */
                for (unsigned short i_9 = 0; i_9 < 19; i_9 += 2) 
                {
                    var_24 += ((/* implicit */int) ((((/* implicit */int) (short)32764)) <= (((/* implicit */int) ((unsigned short) var_5)))));
                    var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) var_14))));
                    var_26 ^= ((/* implicit */unsigned short) ((((long long int) arr_8 [i_9] [i_2])) < (((/* implicit */long long int) var_13))));
                    var_27 = ((long long int) arr_9 [i_0 - 3] [i_0 + 1] [i_6 - 1]);
                }
                for (unsigned short i_10 = 2; i_10 < 17; i_10 += 2) 
                {
                    /* LoopSeq 2 */
                    for (short i_11 = 4; i_11 < 18; i_11 += 3) 
                    {
                        var_28 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0 - 3] [i_10] [i_6 + 1])) ? (((/* implicit */int) arr_13 [i_0 - 1] [i_10] [i_6 + 1])) : (((/* implicit */int) arr_13 [i_0 - 2] [i_10] [i_6 - 1]))));
                        var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((long long int) arr_14 [i_10 - 1] [i_11 - 1] [i_6 - 1])))));
                        arr_39 [i_6 - 1] [i_2] [2U] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_38 [i_2] [i_2] [(unsigned char)18] [(short)2] [i_2] [6U]))));
                    }
                    for (long long int i_12 = 0; i_12 < 19; i_12 += 4) 
                    {
                        var_30 = ((/* implicit */short) ((unsigned long long int) (-(arr_32 [i_0] [i_2] [5U] [i_10]))));
                        var_31 = ((/* implicit */unsigned short) var_1);
                    }
                    var_32 += ((short) var_5);
                    arr_42 [i_0] [i_2] = ((/* implicit */unsigned char) ((((long long int) var_7)) | (((/* implicit */long long int) (~(31U))))));
                }
            }
            arr_43 [i_2] [i_2] [i_2] = ((/* implicit */short) ((_Bool) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_11))))), (min((((/* implicit */unsigned char) (signed char)69)), (var_8))))));
            var_33 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (-(arr_15 [i_0 - 3] [i_0] [6ULL] [i_0 - 3] [14LL] [i_2])))) ? ((+(((/* implicit */int) arr_10 [i_0] [i_0 - 3] [i_2])))) : (((/* implicit */int) ((unsigned short) arr_4 [i_2] [i_2])))))));
        }
        for (long long int i_13 = 0; i_13 < 19; i_13 += 1) /* same iter space */
        {
            var_34 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [10LL] [i_13])) ? (((/* implicit */long long int) (-2147483647 - 1))) : (var_2)))) && (((/* implicit */_Bool) arr_34 [(unsigned char)8] [i_13] [9] [i_13] [i_13]))))), (((((/* implicit */long long int) var_14)) | ((+(arr_41 [i_0 - 3] [i_13])))))));
            /* LoopNest 2 */
            for (long long int i_14 = 1; i_14 < 18; i_14 += 1) 
            {
                for (long long int i_15 = 1; i_15 < 16; i_15 += 1) 
                {
                    {
                        var_35 = ((/* implicit */short) (+(((arr_1 [i_15 - 1]) - (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
                        var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) max((((arr_1 [i_0 - 3]) / (((/* implicit */long long int) ((/* implicit */int) (short)-32728))))), (((/* implicit */long long int) (~((~(((/* implicit */int) arr_11 [i_0] [(_Bool)1] [i_0] [i_0]))))))))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_16 = 4; i_16 < 18; i_16 += 2) 
            {
                arr_53 [i_0] [i_13] [i_16] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-32753))));
                var_37 = ((/* implicit */_Bool) var_6);
                var_38 = ((/* implicit */_Bool) var_2);
            }
            arr_54 [i_0] [13LL] = ((/* implicit */long long int) (-(((/* implicit */int) arr_12 [i_0] [i_0] [4LL]))));
            var_39 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_5)) & (((((var_6) >> (((var_14) - (3829643437U))))) >> (((arr_17 [0] [10LL] [8U] [(short)4] [8LL] [i_13] [4U]) - (2428504230U)))))));
        }
        var_40 *= ((/* implicit */int) arr_51 [i_0 - 1]);
        /* LoopSeq 1 */
        for (long long int i_17 = 0; i_17 < 19; i_17 += 1) 
        {
            var_41 &= ((/* implicit */unsigned int) ((((arr_1 [i_0 - 3]) + (arr_1 [i_0 - 3]))) - (((var_0) + (arr_1 [i_0 - 3])))));
            /* LoopNest 2 */
            for (int i_18 = 2; i_18 < 18; i_18 += 3) 
            {
                for (signed char i_19 = 3; i_19 < 18; i_19 += 1) 
                {
                    {
                        var_42 = ((/* implicit */unsigned short) min((var_42), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_3)))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_17] [6LL]))) & ((~(arr_56 [17LL] [2LL] [i_19])))))))))));
                        var_43 = ((/* implicit */long long int) min((((((/* implicit */int) arr_48 [i_18 - 1] [i_19 - 3])) >> (((/* implicit */int) ((var_7) <= (((/* implicit */long long int) 4294967285U))))))), ((~(((/* implicit */int) var_8))))));
                        arr_63 [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned int) arr_4 [0ULL] [i_0 - 1]))))) ? (17057907423696155572ULL) : (((/* implicit */unsigned long long int) arr_34 [12U] [i_17] [i_18 - 1] [i_19 - 3] [i_19 + 1]))));
                        var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_1)))) ^ (((((/* implicit */_Bool) arr_0 [(signed char)14])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_19 - 3]))) : (arr_5 [i_0 - 2])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (arr_21 [i_0] [i_17] [(unsigned short)10]) : (((/* implicit */long long int) arr_5 [i_0 - 2]))))) ? (1065917153671303061LL) : (arr_41 [i_18] [(unsigned char)16]))) : (max((((/* implicit */long long int) arr_34 [i_19] [16U] [i_19 - 1] [i_19] [i_19 - 1])), (((long long int) arr_1 [i_18]))))));
                    }
                } 
            } 
        }
    }
    var_45 ^= ((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 14741431488260970837ULL))))), ((unsigned short)6107)))) == (((/* implicit */int) var_4))));
    var_46 = ((/* implicit */unsigned short) min((var_46), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((10523251963948465191ULL) << (((((/* implicit */int) (unsigned char)191)) - (185)))))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_1))))))))) & (((((/* implicit */_Bool) ((var_13) << (((7384118976917276584LL) - (7384118976917276573LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_0))))))));
    var_47 = ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 12ULL)))))))) ? (((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_14)) : (var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_7)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))));
}
