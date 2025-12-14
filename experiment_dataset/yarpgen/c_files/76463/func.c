/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76463
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
    var_15 = ((/* implicit */unsigned long long int) var_10);
    var_16 += ((/* implicit */int) var_7);
    var_17 = ((/* implicit */long long int) ((short) ((((/* implicit */int) (signed char)79)) + (((/* implicit */int) var_10)))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_18 += ((/* implicit */unsigned short) min(((-(arr_0 [i_0]))), ((-(arr_0 [i_0])))));
        var_19 += ((/* implicit */unsigned short) max((min((((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0]))))), (((long long int) var_11)))), (((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0]))) : (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) >> (((var_14) + (1073691933))))))))));
        var_20 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))));
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_0 [i_0]), (arr_0 [i_0]))))))), (max((arr_0 [i_0]), (arr_0 [i_0]))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) ((_Bool) (unsigned char)42));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((max((arr_7 [i_1] [i_1]), (arr_7 [i_1] [i_1]))) / (((((/* implicit */_Bool) arr_7 [i_3] [i_2])) ? (arr_7 [i_1] [i_1]) : (arr_7 [i_1] [i_1]))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_4 = 4; i_4 < 19; i_4 += 3) 
                    {
                        var_23 = ((/* implicit */short) arr_10 [i_1] [i_1] [i_1] [i_4]);
                        var_24 = ((/* implicit */unsigned short) 2606375130U);
                        arr_14 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((int) var_0)))));
                        var_25 = ((/* implicit */unsigned int) ((int) var_12));
                    }
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        var_26 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_3 [i_5])) && (((/* implicit */_Bool) arr_8 [i_1] [i_2])))) ? (((/* implicit */int) arr_13 [i_2] [i_1] [i_1])) : (((/* implicit */int) arr_13 [i_5 - 1] [i_1] [i_5 - 1]))));
                        arr_17 [2] [i_2] [(_Bool)1] [i_1] [5ULL] = ((/* implicit */_Bool) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) (signed char)-98))));
                        /* LoopSeq 2 */
                        for (int i_6 = 1; i_6 < 19; i_6 += 2) 
                        {
                            var_27 -= ((/* implicit */_Bool) ((long long int) var_8));
                            var_28 = ((/* implicit */signed char) ((unsigned char) ((unsigned char) (_Bool)1)));
                        }
                        for (long long int i_7 = 0; i_7 < 20; i_7 += 2) 
                        {
                            arr_24 [i_1] [i_1] [i_3] [i_5] [i_1] [i_7] [i_7] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_10 [i_3] [i_1] [(unsigned char)9] [i_1]))));
                            arr_25 [19] [i_1] = ((((/* implicit */_Bool) ((unsigned int) arr_15 [i_1] [i_2] [i_3] [i_5] [(unsigned short)4]))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_9 [i_1])) : (((/* implicit */int) var_6)))));
                            var_29 = ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1] [i_1])) ? (arr_12 [i_5] [i_5] [i_5 - 1] [i_5 - 1]) : (((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1] [15ULL])) ? (((/* implicit */int) (_Bool)1)) : (arr_7 [i_1] [i_2]))));
                        }
                    }
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_23 [i_1] [i_1] [i_1] [i_2] [i_3] [i_8] [i_8]) : (((/* implicit */unsigned int) ((int) var_2))))))));
                        var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_2 [i_1] [i_3]), (arr_2 [i_1] [i_8 - 1])))) ? ((-(((/* implicit */int) (unsigned short)511)))) : ((-(((/* implicit */int) arr_11 [i_1] [(unsigned short)16] [i_1] [i_1]))))));
                    }
                    for (unsigned char i_9 = 0; i_9 < 20; i_9 += 1) /* same iter space */
                    {
                        arr_33 [i_1] [i_1] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */signed char) var_9);
                        var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((unsigned int) max((arr_4 [(signed char)2]), (arr_4 [(short)2])))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_10 = 0; i_10 < 20; i_10 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (signed char i_11 = 1; i_11 < 18; i_11 += 1) 
                        {
                            arr_40 [i_11] [i_1] [3] [i_1] [i_1] = ((/* implicit */unsigned int) ((signed char) arr_30 [i_10] [i_1] [18LL] [i_1] [i_2]));
                            var_33 = ((/* implicit */int) (((_Bool)1) ? (arr_15 [i_1] [i_1] [5U] [5U] [i_11 + 1]) : (arr_15 [i_1] [i_2] [i_3] [i_10] [i_11 - 1])));
                            var_34 = ((/* implicit */unsigned long long int) var_14);
                            var_35 = (-(((/* implicit */int) (short)16)));
                        }
                        arr_41 [i_1] [i_2] [i_1] [i_10] = ((/* implicit */unsigned long long int) arr_30 [i_1] [i_2] [i_2] [i_1] [i_10]);
                    }
                    /* LoopNest 2 */
                    for (long long int i_12 = 0; i_12 < 20; i_12 += 2) 
                    {
                        for (int i_13 = 0; i_13 < 20; i_13 += 2) 
                        {
                            {
                                var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) min((var_1), (((/* implicit */short) max((((/* implicit */unsigned char) ((signed char) arr_37 [i_1] [(short)10] [(short)10] [i_12]))), (((unsigned char) arr_20 [18U] [i_2] [i_12] [i_2] [i_12] [i_2] [i_2]))))))))));
                                var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) var_9))));
                                var_38 = ((/* implicit */signed char) min((min((((/* implicit */int) var_5)), (var_14))), ((-(((((/* implicit */int) arr_9 [i_1])) * (((/* implicit */int) var_2))))))));
                                var_39 = ((/* implicit */long long int) min((((/* implicit */int) min((var_10), (((/* implicit */short) min((((/* implicit */signed char) (_Bool)1)), ((signed char)38))))))), (min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)35))))), (arr_31 [12U] [(unsigned short)11] [i_1] [i_12] [i_12])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) /* same iter space */
    {
        arr_49 [i_14] [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((unsigned long long int) (unsigned short)44403))))) ? (((/* implicit */unsigned long long int) min((arr_47 [i_14 - 1]), (((unsigned int) 325492364))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_47 [(unsigned char)3])) && (((/* implicit */_Bool) (signed char)-48))))), (arr_46 [i_14 - 1] [i_14 - 1])))));
        var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_14 - 1])) ? (((/* implicit */int) arr_48 [i_14 - 1])) : (((/* implicit */int) arr_48 [i_14 - 1])))))));
        /* LoopNest 2 */
        for (unsigned short i_15 = 0; i_15 < 21; i_15 += 2) 
        {
            for (signed char i_16 = 1; i_16 < 20; i_16 += 4) 
            {
                {
                    arr_56 [i_14] [i_14 - 1] [6ULL] [i_14] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_14]))) + (var_3)))), (max((arr_55 [i_16 - 1] [i_16 - 1] [i_16]), (arr_55 [i_16 + 1] [i_16] [(unsigned short)10])))));
                    var_41 = ((/* implicit */unsigned int) var_9);
                    var_42 &= ((/* implicit */unsigned char) (((_Bool)1) && (((/* implicit */_Bool) (signed char)-113))));
                }
            } 
        } 
    }
    for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) /* same iter space */
    {
        arr_61 [i_17] = ((/* implicit */long long int) arr_53 [i_17] [i_17] [i_17 - 1]);
        var_43 = ((/* implicit */unsigned char) ((_Bool) (short)-1));
        arr_62 [i_17] = ((/* implicit */long long int) max((((/* implicit */unsigned short) (unsigned char)146)), (arr_48 [i_17 - 1])));
        var_44 ^= ((/* implicit */_Bool) arr_59 [8LL]);
        var_45 ^= ((/* implicit */_Bool) (+(((/* implicit */int) arr_53 [i_17 - 1] [i_17 - 1] [i_17 - 1]))));
    }
}
