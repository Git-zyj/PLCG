/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97633
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                arr_7 [i_2] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_4 [i_2] [(_Bool)1] [i_2])) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_2])) : (((/* implicit */int) var_4)))), (((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) arr_0 [i_1])))))));
                arr_8 [i_0] [(signed char)8] [i_0] &= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) != (arr_2 [i_0] [i_1] [4U])));
                var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_1 [i_0]), (arr_1 [i_0])))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */int) arr_1 [i_1])) ^ (((/* implicit */int) arr_1 [i_2]))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    arr_11 [i_0] [i_2] = ((/* implicit */short) ((int) (-(((int) var_9)))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((arr_0 [i_4]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [(signed char)10])) ? (arr_10 [i_0] [i_4] [i_4] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3]))))))))));
                        var_13 ^= ((/* implicit */unsigned long long int) ((((arr_0 [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_8))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                        arr_16 [i_2] [8ULL] [i_0] [(_Bool)1] = ((/* implicit */_Bool) (+(var_2)));
                        arr_17 [i_4] [9U] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) arr_9 [i_1] [i_1] [i_1] [(unsigned char)4]);
                    }
                    for (long long int i_5 = 3; i_5 < 10; i_5 += 3) 
                    {
                        arr_20 [i_2] [9] [i_2] [i_3] = ((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_14 [i_0] [i_2] [i_2] [i_2] [i_3] [i_5]) && (((/* implicit */_Bool) var_5)))))) * ((~(var_8))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_14 [i_1] [i_2] [i_2] [i_2] [i_5] [10ULL]))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_3 [i_0])))))));
                        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_12 [i_5 + 2] [i_5 + 2] [i_5 - 3] [i_3] [i_5])) && (((/* implicit */_Bool) arr_12 [i_5 + 2] [i_5] [i_5 - 1] [i_3] [6LL])))) ? (arr_12 [i_5 - 3] [i_5 - 3] [i_5 + 2] [i_3] [8]) : (((((/* implicit */_Bool) var_10)) ? (arr_12 [i_5 - 2] [(unsigned short)2] [i_5 - 3] [i_3] [i_5 - 3]) : (arr_12 [i_5 + 1] [i_5] [i_5 - 1] [i_3] [i_5]))))))));
                        var_15 = ((/* implicit */long long int) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) min((arr_9 [i_0] [i_0] [i_2] [i_3]), (((/* implicit */short) arr_1 [i_0]))))) : (((/* implicit */int) max((var_3), (((/* implicit */short) var_7))))))), (((/* implicit */int) min((((/* implicit */unsigned char) var_6)), (var_4))))));
                        arr_21 [i_0] [8U] [i_2] [i_3] [i_5] = (~(var_10));
                        arr_22 [i_0] [i_2] [i_0] = ((/* implicit */short) var_2);
                    }
                    var_16 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_18 [i_0] [i_1] [i_0] [i_3] [i_2] [(short)11]), (((/* implicit */int) var_1))))) ? (((var_10) << (((var_9) + (1645751945770498382LL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [(short)9] [i_3] [i_3] [(_Bool)1])))))) ? (((/* implicit */int) arr_13 [i_3] [i_3])) : (((/* implicit */int) arr_19 [i_3] [i_3] [i_3] [(unsigned short)7]))));
                }
                arr_23 [i_2] [9U] [i_2] [i_2] = max((min(((~(((/* implicit */int) var_0)))), (((/* implicit */int) max((((/* implicit */short) var_1)), (arr_4 [10] [10] [8])))))), ((-(((/* implicit */int) var_7)))));
            }
            for (unsigned char i_6 = 0; i_6 < 12; i_6 += 2) /* same iter space */
            {
                arr_28 [(signed char)1] [6] [i_6] [(unsigned short)4] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_26 [i_0] [i_1] [i_6] [i_0]))))) >= (((((/* implicit */_Bool) ((arr_14 [(_Bool)1] [i_6] [i_6] [i_0] [i_6] [i_0]) ? (511) : (((/* implicit */int) var_6))))) ? (4575657221408423936ULL) : (min((((/* implicit */unsigned long long int) arr_26 [5ULL] [5ULL] [(signed char)4] [(_Bool)1])), (var_8)))))));
                /* LoopSeq 2 */
                for (short i_7 = 2; i_7 < 11; i_7 += 1) 
                {
                    arr_31 [i_7] = ((/* implicit */signed char) max((((((/* implicit */int) arr_27 [i_7 + 1] [(short)10] [i_7] [(unsigned short)3])) / (((/* implicit */int) arr_27 [i_7 - 1] [i_7 - 1] [i_7] [(short)3])))), ((+(((/* implicit */int) var_7))))));
                    arr_32 [i_0] [i_1] [0U] [i_7] = ((/* implicit */long long int) min((var_8), (((/* implicit */unsigned long long int) var_1))));
                    /* LoopSeq 3 */
                    for (unsigned char i_8 = 2; i_8 < 10; i_8 += 3) 
                    {
                        var_17 = ((/* implicit */unsigned char) (((~((~(4575657221408423936ULL))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                        arr_36 [i_0] [4ULL] [i_6] [1ULL] [i_8 - 1] [i_8] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) ((short) max((arr_3 [i_8]), (((/* implicit */unsigned long long int) arr_35 [i_0] [i_0] [8LL])))))) ? (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_33 [i_0] [i_6] [(_Bool)1] [i_7] [i_8])) ? (((/* implicit */int) var_3)) : (arr_2 [i_1] [i_7] [(_Bool)1]))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_6] [i_6]))) > (var_5))))))) : (((((/* implicit */_Bool) arr_12 [4ULL] [i_6] [i_8 + 1] [i_6] [i_6])) ? (arr_12 [i_8] [i_6] [i_8 + 2] [i_6] [i_7]) : (arr_12 [(_Bool)1] [i_6] [i_8 + 2] [i_6] [i_0])))));
                    }
                    for (unsigned long long int i_9 = 4; i_9 < 11; i_9 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned int) var_3);
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_26 [i_0] [i_7 + 1] [i_6] [i_9 + 1])) : (((/* implicit */int) arr_26 [i_0] [i_7 - 1] [i_0] [i_9 - 3]))))) ? (((((/* implicit */int) arr_26 [1LL] [i_7 - 2] [i_6] [i_9 - 3])) / (((/* implicit */int) arr_26 [i_0] [i_7 - 1] [i_6] [i_9 - 2])))) : ((~(((/* implicit */int) arr_26 [2U] [i_7 + 1] [i_6] [i_9 - 2]))))));
                        var_20 *= arr_10 [i_0] [i_1] [i_7] [i_9 - 3];
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned char) (-(18446744073709551615ULL)));
                        var_22 = (-(((/* implicit */int) (unsigned char)92)));
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) min((var_6), ((_Bool)1)))), (arr_38 [i_0] [i_0] [i_0] [0] [i_0] [i_0] [i_6])))) ? (((/* implicit */unsigned long long int) (-(arr_18 [i_0] [i_0] [i_7 - 1] [i_7 + 1] [11ULL] [2])))) : (min((min((var_5), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) arr_12 [i_7 - 1] [2] [i_7 - 1] [i_6] [i_10]))))));
                        var_24 = ((/* implicit */signed char) (~(((/* implicit */int) arr_40 [(_Bool)1] [i_7] [i_0] [i_7 + 1] [i_10]))));
                    }
                    /* LoopSeq 1 */
                    for (short i_11 = 2; i_11 < 10; i_11 += 1) 
                    {
                        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (max((((/* implicit */unsigned int) arr_38 [i_1] [i_7 - 2] [i_11 - 2] [(_Bool)1] [i_11 + 1] [i_11] [i_6])), (19U))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)163)), ((unsigned short)53142)))))));
                        var_26 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_2))) ? (((/* implicit */int) arr_25 [10ULL] [i_7 + 1] [10ULL])) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)10)) == (((/* implicit */int) (unsigned short)48560)))))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (!((_Bool)1)))) : (var_2))) : (((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0]))));
                        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_12 [i_11 - 2] [i_1] [(_Bool)1] [i_6] [i_7 + 1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(var_7))))) : (max((arr_12 [i_11 - 2] [i_0] [i_11] [i_6] [i_7 + 1]), (arr_12 [i_11 - 2] [(short)0] [i_11 - 2] [i_6] [i_7 + 1]))))))));
                    }
                    var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) min((((arr_0 [1]) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_42 [i_0] [i_0]))))) : (max((arr_41 [(_Bool)1] [i_1] [i_1] [i_1] [i_1]), (arr_3 [i_0]))))), (((/* implicit */unsigned long long int) (+(var_2)))))))));
                }
                for (int i_12 = 1; i_12 < 10; i_12 += 3) 
                {
                    /* LoopSeq 1 */
                    for (int i_13 = 0; i_13 < 12; i_13 += 2) 
                    {
                        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) 6098347089118058941ULL))) > ((+(((((/* implicit */int) (unsigned char)239)) / (((/* implicit */int) (unsigned char)23))))))));
                        var_30 = ((/* implicit */unsigned char) ((int) (+((+(((/* implicit */int) var_6)))))));
                    }
                    /* LoopSeq 3 */
                    for (short i_14 = 4; i_14 < 11; i_14 += 1) /* same iter space */
                    {
                        var_31 = ((/* implicit */unsigned short) var_5);
                        var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) 15187986071478199259ULL))));
                        arr_53 [i_1] [4] [i_12] [i_12] = ((/* implicit */long long int) (-(4244148139U)));
                    }
                    for (short i_15 = 4; i_15 < 11; i_15 += 1) /* same iter space */
                    {
                        var_33 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */short) var_0))))) ? (((/* implicit */unsigned long long int) min((((var_9) + (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((/* implicit */long long int) 44U))))) : (max((13113113268270689874ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
                        arr_56 [i_12] [i_1] [i_6] [(_Bool)1] [i_15] = ((/* implicit */int) arr_35 [i_0] [i_6] [(short)0]);
                        var_34 &= ((/* implicit */unsigned int) arr_51 [i_15 - 3] [i_0] [i_0]);
                        var_35 = ((/* implicit */short) var_10);
                    }
                    for (short i_16 = 4; i_16 < 11; i_16 += 1) /* same iter space */
                    {
                        var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) ((((/* implicit */_Bool) ((((arr_41 [i_0] [i_0] [i_0] [(unsigned char)7] [(unsigned char)0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_0] [3U] [i_12] [i_12]))))) ? (((/* implicit */int) ((short) var_2))) : ((+(((/* implicit */int) arr_42 [i_0] [i_0]))))))) ? (max(((+(var_9))), (var_9))) : (((/* implicit */long long int) (-((+(((/* implicit */int) (short)14))))))))))));
                        var_37 = ((/* implicit */long long int) max((arr_0 [i_1]), (var_7)));
                        arr_59 [(short)7] [i_12] [i_6] [i_12] [i_12 + 2] [i_16 - 3] = ((unsigned long long int) var_10);
                        arr_60 [(signed char)0] [(signed char)0] [i_12 - 1] [i_12 + 1] [i_12] [i_12 - 1] [i_12] = ((((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0])) <= (((/* implicit */int) ((((/* implicit */_Bool) 349534076U)) && (((/* implicit */_Bool) arr_12 [i_16] [i_16 - 4] [i_16 - 4] [i_12] [i_16]))))));
                    }
                }
            }
            /* vectorizable */
            for (unsigned char i_17 = 0; i_17 < 12; i_17 += 2) /* same iter space */
            {
                arr_63 [(unsigned char)6] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_0] [i_0] [i_17] [i_1] [i_0])) ? (arr_41 [i_17] [8LL] [i_17] [i_17] [i_1]) : (((/* implicit */unsigned long long int) var_9))))) ? (((((/* implicit */int) (unsigned char)178)) / (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) arr_39 [(short)2])) / (((/* implicit */int) arr_9 [i_0] [5U] [(short)2] [5U]))))));
                var_38 = ((/* implicit */unsigned long long int) arr_34 [i_17] [i_1] [4U] [i_0]);
                arr_64 [i_0] [i_1] [i_0] = ((/* implicit */short) (+(arr_52 [i_0] [i_0] [i_17] [i_17])));
            }
            arr_65 [(short)6] [i_0] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) var_6))))));
        }
        for (unsigned short i_18 = 0; i_18 < 12; i_18 += 4) 
        {
            var_39 = ((/* implicit */unsigned int) (~(min((((var_10) | (((/* implicit */unsigned long long int) 7548839122997630039LL)))), (((/* implicit */unsigned long long int) var_2))))));
            var_40 = ((/* implicit */unsigned char) (+(var_8)));
        }
        var_41 += ((/* implicit */signed char) arr_38 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [6U]);
        arr_69 [8ULL] [(short)7] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) arr_26 [i_0] [i_0] [(_Bool)1] [i_0])) : (((/* implicit */int) arr_26 [i_0] [i_0] [11LL] [i_0])))), (((arr_26 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_0]))))));
    }
    var_42 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((((/* implicit */int) var_4)) << (((/* implicit */int) var_7))))) : (var_9)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) (short)8176)) / (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6))))))) : (((((/* implicit */_Bool) max((var_4), (var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_9)))));
    var_43 = ((/* implicit */unsigned long long int) var_2);
    var_44 = ((/* implicit */short) (-(min((((/* implicit */unsigned int) var_6)), (3326998390U)))));
    var_45 = ((/* implicit */unsigned int) min(((+((+(var_10))))), (((/* implicit */unsigned long long int) var_7))));
}
