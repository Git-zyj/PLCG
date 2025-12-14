/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77714
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */short) var_2);
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_17 &= ((/* implicit */_Bool) arr_3 [i_0] [i_0]);
                            arr_9 [i_0] [(unsigned short)12] [(unsigned short)12] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) ^ (2664489845U)));
                            arr_10 [i_0] &= ((/* implicit */int) (!(((/* implicit */_Bool) ((((var_2) >= (((/* implicit */int) (unsigned char)98)))) ? (var_2) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
                            arr_11 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) min((var_6), (var_6)))) ? (((/* implicit */int) var_11)) : (((var_2) - (var_8))))) : (var_6)));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_4 = 1; i_4 < 12; i_4 += 4) 
                {
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned int) var_11)), (2664489839U))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) >> (((((/* implicit */int) var_12)) - (64))))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_7 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_0]) >= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_1])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))))) : (var_13)));
                    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_8 [i_4] [i_4 + 3] [i_4 + 2] [i_4 + 3]) + (var_14)))) ? (((((/* implicit */_Bool) arr_8 [i_4] [i_4 + 3] [i_4 + 2] [i_4 + 3])) ? (arr_8 [i_4] [i_4 + 3] [i_4 + 2] [i_4 + 3]) : (arr_8 [i_4 - 1] [i_4 + 3] [i_4 + 2] [i_4 + 3]))) : (((((arr_8 [i_4] [i_4 + 3] [i_4 + 2] [i_4 + 3]) + (9223372036854775807LL))) << (((((arr_8 [6U] [i_4 + 3] [i_4 + 2] [i_4 + 3]) + (6490865925264560903LL))) - (62LL)))))));
                }
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
    {
        var_20 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) (-(((/* implicit */int) var_9))))) : (7138311864655706566LL)));
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (16384454474037453573ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
        arr_17 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) var_9))));
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 25; i_6 += 4) 
        {
            for (int i_7 = 0; i_7 < 25; i_7 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) arr_14 [i_5]);
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2126979968U)) ? (((/* implicit */int) ((var_13) >= (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) : (((/* implicit */int) var_9))));
                    var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                }
            } 
        } 
    }
    for (int i_8 = 0; i_8 < 22; i_8 += 4) 
    {
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 21; i_9 += 1) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 1) 
            {
                {
                    var_25 = ((/* implicit */unsigned int) min((max((((7138311864655706566LL) / (((/* implicit */long long int) 2664489843U)))), (((/* implicit */long long int) max((var_5), (var_12)))))), (((/* implicit */long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_3))) * (2936612882U))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_11 = 0; i_11 < 22; i_11 += 1) 
                    {
                        var_26 += ((/* implicit */unsigned int) arr_25 [i_8] [i_8] [(_Bool)1]);
                        var_27 = ((/* implicit */unsigned char) 494365580);
                    }
                }
            } 
        } 
        arr_35 [i_8] = ((/* implicit */short) ((6375109694932338593ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)480)))));
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) 15ULL)) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)51067), (((/* implicit */unsigned short) (unsigned char)109)))))) : (var_14))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) <= (2664489839U)))))))));
        var_29 = ((/* implicit */unsigned int) ((((((((/* implicit */int) var_9)) * (((/* implicit */int) var_12)))) / (((((/* implicit */int) arr_26 [i_12] [i_12] [i_12])) * (((/* implicit */int) (unsigned short)65531)))))) / (((var_6) * (((((/* implicit */int) var_5)) / (((/* implicit */int) var_5))))))));
        /* LoopNest 2 */
        for (unsigned int i_13 = 0; i_13 < 17; i_13 += 4) 
        {
            for (unsigned short i_14 = 0; i_14 < 17; i_14 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_30 = ((((/* implicit */_Bool) max((max((var_13), (((/* implicit */unsigned int) arr_38 [i_12] [i_12])))), (((/* implicit */unsigned int) var_11))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_12] [i_12] [i_12]))) : (((((((/* implicit */long long int) 3936017531U)) / (var_0))) * (min((((/* implicit */long long int) var_4)), (-6647786728024419312LL))))));
                        var_31 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) var_6)) <= (((max((2824727187833767041ULL), (((/* implicit */unsigned long long int) (unsigned char)76)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_42 [13] [i_14] [i_14]))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                        {
                            var_32 = ((unsigned short) 3547216628U);
                            var_33 = ((/* implicit */unsigned short) arr_32 [17U]);
                        }
                        var_34 ^= ((/* implicit */unsigned long long int) ((long long int) (unsigned short)65055));
                    }
                    for (long long int i_17 = 0; i_17 < 17; i_17 += 1) 
                    {
                        var_35 -= ((/* implicit */unsigned char) 2664489839U);
                        arr_54 [i_12] [i_12] [i_12] [(short)13] = ((/* implicit */int) ((unsigned long long int) var_3));
                    }
                    for (int i_18 = 0; i_18 < 17; i_18 += 2) 
                    {
                        var_36 = ((/* implicit */unsigned int) var_11);
                        var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_15), ((unsigned short)65516))))) * (((((/* implicit */unsigned int) var_8)) * (arr_15 [21ULL])))))) ? (((/* implicit */int) arr_22 [i_14] [i_13])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                        arr_57 [i_12] = ((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned int) arr_24 [i_12] [i_12]))));
                        var_38 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_13)))), (max((arr_55 [i_12] [16U] [i_14] [i_12]), (((/* implicit */long long int) var_5))))))) && (((/* implicit */_Bool) min((min((arr_23 [i_12]), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4396972769280ULL)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_9))))))))));
                        arr_58 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */int) (-(max((max((-6647786728024419325LL), (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)208)) ? (((/* implicit */int) arr_51 [i_12] [i_12] [i_12] [i_18])) : (((/* implicit */int) (unsigned short)29148)))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_19 = 0; i_19 < 17; i_19 += 1) 
                    {
                        var_39 = (~(arr_44 [i_12] [i_13] [i_12] [i_19]));
                        arr_61 [12U] [i_13] [i_12] [i_19] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_12]))) / (arr_20 [11ULL] [11ULL] [11ULL] [11ULL]))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                        arr_62 [i_12] [i_12] [i_14] [i_19] [i_12] = ((unsigned short) arr_56 [i_19] [i_14]);
                        var_40 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_20 [i_12] [i_13] [i_14] [i_19]) : (arr_20 [i_12] [i_12] [i_14] [i_14])));
                        /* LoopSeq 1 */
                        for (long long int i_20 = 3; i_20 < 15; i_20 += 4) 
                        {
                            var_41 += ((/* implicit */unsigned short) ((unsigned long long int) arr_34 [i_20] [i_20] [i_20] [i_20 - 1] [i_20]));
                            var_42 *= ((/* implicit */unsigned char) arr_21 [i_20 - 3] [i_20 - 3] [i_20]);
                        }
                    }
                    var_43 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((arr_47 [i_12] [i_12] [i_13] [i_13] [i_13] [i_14]), (((((/* implicit */_Bool) -6647786728024419312LL)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)146)))))))) < ((-(max((((/* implicit */unsigned long long int) arr_44 [i_12] [i_13] [i_14] [i_13])), (var_10)))))));
                }
            } 
        } 
    }
    var_44 = ((/* implicit */unsigned int) max((((((/* implicit */unsigned int) var_6)) != (min((var_1), (((/* implicit */unsigned int) (unsigned short)36379)))))), (((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (+(var_8))))))));
}
