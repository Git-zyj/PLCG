/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60019
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
    /* LoopSeq 4 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        var_13 = var_11;
        arr_2 [(_Bool)1] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) arr_1 [3LL]))))))) * (max((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), ((-(5135999776651252104ULL)))))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_14 = ((/* implicit */signed char) ((((((1411179430U) << (((arr_5 [16]) + (416786235))))) ^ (min((1411179430U), (((/* implicit */unsigned int) arr_0 [i_0] [i_1])))))) % (((/* implicit */unsigned int) max((arr_4 [i_1]), (((int) arr_5 [i_0])))))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                for (int i_3 = 1; i_3 < 19; i_3 += 3) 
                {
                    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */short) ((arr_10 [i_0] [i_0] [i_2] [i_4]) ^ (max((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))), (arr_9 [i_0] [i_1] [i_2] [i_3 - 1])))));
                            arr_15 [i_0 - 1] [i_1] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_5 [i_0 - 1]), (((/* implicit */int) (!(((/* implicit */_Bool) 2247230859660245009LL))))))))));
                            var_16 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((short) ((int) arr_7 [i_4] [i_1] [i_0 - 1])))), (552276790U)));
                            var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) arr_0 [5U] [i_1]))))))));
                            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) max((arr_13 [i_0 + 1] [i_0 + 1]), (arr_13 [i_0] [i_1])))), (arr_4 [i_1])))) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_2), (((/* implicit */long long int) arr_5 [i_4])))))))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_5 = 0; i_5 < 21; i_5 += 2) /* same iter space */
        {
            var_19 = ((/* implicit */int) max((arr_12 [i_0] [i_5] [i_5] [i_5] [i_5]), ((unsigned char)33)));
            var_20 = ((/* implicit */unsigned char) max((max((arr_8 [i_0] [i_5] [i_5]), (arr_8 [i_0] [i_5] [i_5]))), ((-(arr_8 [i_0] [i_5] [(signed char)12])))));
        }
        /* vectorizable */
        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_17 [i_0 - 1])) : (((/* implicit */int) arr_17 [i_0 + 1])))))));
            var_22 -= ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
            /* LoopSeq 1 */
            for (unsigned short i_7 = 0; i_7 < 21; i_7 += 4) 
            {
                var_23 = (~((~(2883787866U))));
                arr_24 [i_0] [i_0] [i_6] [(short)1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_14 [i_0 + 1] [i_6] [i_7] [4U] [i_7])) : (arr_4 [i_6]))) - (((/* implicit */int) (!(((/* implicit */_Bool) 956815296)))))));
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 21; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 2; i_9 < 19; i_9 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_14 [i_0] [i_0] [i_9 + 1] [i_0 + 1] [i_7]))));
                            var_25 -= (!(((/* implicit */_Bool) ((4065333976493267518LL) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_7] [(unsigned char)4])))))));
                        }
                    } 
                } 
            }
        }
    }
    for (int i_10 = 0; i_10 < 22; i_10 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_11 = 0; i_11 < 22; i_11 += 4) 
        {
            var_26 = max((min((min((arr_33 [i_10] [i_11]), (var_9))), (((/* implicit */unsigned int) arr_32 [i_10])))), (((/* implicit */unsigned int) var_10)));
            arr_35 [i_10] [i_10] [6U] = ((unsigned int) max(((-(((/* implicit */int) arr_34 [i_11] [(unsigned char)1])))), (((/* implicit */int) ((short) arr_32 [i_10])))));
            var_27 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_31 [i_10] [i_11])) ? (arr_31 [i_11] [i_10]) : (arr_31 [i_11] [i_10]))));
        }
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 22; i_12 += 2) 
        {
            for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 2) 
            {
                for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 1) 
                {
                    {
                        var_28 = ((/* implicit */short) (+(min((((/* implicit */unsigned long long int) (~(var_5)))), (max((((/* implicit */unsigned long long int) var_8)), (arr_40 [1LL])))))));
                        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_14] [i_13])) || (((/* implicit */_Bool) arr_34 [i_10] [i_10]))))))))));
                    }
                } 
            } 
        } 
    }
    for (int i_15 = 0; i_15 < 22; i_15 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
        {
            for (signed char i_17 = 0; i_17 < 22; i_17 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_18 = 0; i_18 < 22; i_18 += 3) /* same iter space */
                    {
                        var_30 ^= ((short) arr_53 [i_15]);
                        arr_59 [i_17] [i_16] [i_15] = ((/* implicit */long long int) ((arr_31 [i_16 - 1] [i_16 - 1]) != (((/* implicit */unsigned int) ((int) arr_33 [i_15] [i_16])))));
                        var_31 ^= ((((/* implicit */_Bool) arr_51 [i_15] [i_16 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_16] [i_16 - 1]))) : (var_12));
                        arr_60 [i_15] [i_15] [i_16] [i_18] [i_17] [i_15] = (+(arr_37 [i_16 - 1] [i_16 - 1]));
                        var_32 = ((/* implicit */signed char) ((short) ((unsigned int) arr_41 [(signed char)0] [i_15] [i_15] [i_15])));
                    }
                    for (short i_19 = 0; i_19 < 22; i_19 += 3) /* same iter space */
                    {
                        var_33 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) var_7)) < (arr_39 [(short)5] [9U] [i_15] [i_19]))))))) % (min((arr_55 [i_16] [i_16 - 1] [i_16] [i_16 - 1] [i_16 - 1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_42 [6] [(short)14])) ? (850824467696371019LL) : (((/* implicit */long long int) 956815302)))))))));
                        var_34 += ((/* implicit */unsigned int) max((arr_63 [i_15] [i_17] [(unsigned short)6] [i_19]), (arr_63 [i_16 - 1] [i_15] [i_15] [i_16 - 1])));
                        arr_64 [i_16] [i_16] [i_17] [i_19] = ((/* implicit */signed char) ((arr_37 [i_15] [i_15]) * ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_45 [i_15])))))))));
                    }
                    for (short i_20 = 0; i_20 < 22; i_20 += 3) /* same iter space */
                    {
                        var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) max((max((((/* implicit */unsigned int) ((unsigned char) var_7))), (max((((/* implicit */unsigned int) var_0)), (arr_61 [i_15] [(unsigned short)18] [i_17]))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_58 [i_16 - 1] [i_17] [i_17] [i_16]))))))))));
                        var_36 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2247230859660245030LL))))), (max((((/* implicit */unsigned long long int) arr_58 [i_15] [i_16] [i_16] [i_20])), (arr_67 [i_15] [i_16] [i_17] [i_20])))));
                    }
                    /* LoopNest 2 */
                    for (short i_21 = 1; i_21 < 21; i_21 += 3) 
                    {
                        for (signed char i_22 = 0; i_22 < 22; i_22 += 1) 
                        {
                            {
                                arr_73 [i_15] [i_16] [i_17] [i_15] [i_16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) var_4)), (arr_45 [i_21])))))) ? (((/* implicit */unsigned long long int) (~(max((4065333976493267518LL), (((/* implicit */long long int) arr_37 [i_15] [i_15]))))))) : ((~(arr_41 [i_16 - 1] [i_16] [i_16] [i_15])))));
                                var_37 = ((/* implicit */signed char) max((((unsigned int) arr_56 [i_15] [i_21 - 1] [19] [i_16 - 1])), (((/* implicit */unsigned int) arr_39 [i_15] [i_15] [i_16] [i_15]))));
                                var_38 ^= max((((((/* implicit */_Bool) var_5)) ? (arr_58 [(short)0] [i_15] [i_15] [i_15]) : (arr_58 [i_22] [i_17] [i_17] [i_22]))), (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_74 [i_15] &= ((/* implicit */unsigned int) min((max((arr_40 [i_15]), (((/* implicit */unsigned long long int) -450156687)))), ((~(arr_40 [i_15])))));
        var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_2)))))));
    }
    for (int i_23 = 0; i_23 < 22; i_23 += 4) /* same iter space */
    {
        arr_78 [i_23] = ((/* implicit */int) max((((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) / (var_9)))), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_75 [i_23] [i_23])))))));
        arr_79 [i_23] [i_23] = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((1411179447U), ((~(arr_52 [i_23] [i_23])))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_1)) * (((/* implicit */int) (unsigned char)131))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59975))) : (((((/* implicit */_Bool) arr_68 [i_23] [i_23] [i_23] [i_23] [12U] [i_23])) ? (((/* implicit */unsigned long long int) -8066574768026412782LL)) : (arr_41 [i_23] [i_23] [i_23] [(_Bool)1])))))));
        var_40 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_62 [i_23] [i_23] [i_23])), (var_7))))));
    }
    var_41 ^= ((/* implicit */short) ((((/* implicit */_Bool) max(((~(((/* implicit */int) (unsigned char)40)))), (((/* implicit */int) max((var_10), (((/* implicit */short) (signed char)-68)))))))) ? (((max((var_5), (var_5))) | (((/* implicit */int) ((signed char) var_8))))) : ((~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4))))))));
    var_42 = -836984808;
    var_43 = ((/* implicit */_Bool) ((unsigned long long int) var_6));
}
