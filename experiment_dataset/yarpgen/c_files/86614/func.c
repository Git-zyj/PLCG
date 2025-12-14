/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86614
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            var_10 = ((/* implicit */long long int) min((var_10), (((/* implicit */long long int) (~(((/* implicit */int) arr_4 [8U] [i_1] [8U])))))));
            arr_5 [i_0] [i_1] = ((/* implicit */int) arr_4 [i_0] [i_1] [i_0]);
            var_11 = ((/* implicit */_Bool) var_0);
            var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) var_5))));
            arr_6 [i_0] [i_0] = ((/* implicit */short) arr_4 [i_1] [i_1] [(_Bool)1]);
        }
        for (long long int i_2 = 4; i_2 < 10; i_2 += 3) 
        {
            var_13 = max((((/* implicit */unsigned int) arr_4 [8U] [i_2 + 1] [5U])), (var_6));
            var_14 |= max((arr_0 [8LL]), (((/* implicit */long long int) (~(((/* implicit */int) min((var_0), (arr_8 [i_2] [i_0]))))))));
            /* LoopSeq 1 */
            for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */short) var_6);
                            var_16 = ((/* implicit */int) arr_4 [i_0] [8LL] [i_0]);
                            var_17 = ((/* implicit */long long int) min((var_17), (arr_16 [(short)3] [(short)3] [i_3] [i_3] [i_5] [11])));
                        }
                    } 
                } 
                arr_18 [i_3] [(_Bool)1] [i_3] = ((/* implicit */signed char) max((max((((/* implicit */long long int) var_9)), (arr_16 [i_0] [i_0] [i_0] [i_0] [i_3] [i_3]))), (max((((/* implicit */long long int) arr_10 [i_0] [i_0])), (min((((/* implicit */long long int) arr_1 [i_3])), (arr_0 [i_3])))))));
                var_18 = ((/* implicit */short) var_4);
                /* LoopNest 2 */
                for (unsigned char i_6 = 1; i_6 < 12; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 4) 
                    {
                        {
                            var_19 &= ((/* implicit */signed char) arr_20 [i_2] [i_3]);
                            var_20 = ((/* implicit */long long int) var_6);
                        }
                    } 
                } 
                var_21 &= min((((/* implicit */long long int) var_5)), (max((((/* implicit */long long int) min((((/* implicit */unsigned char) arr_2 [i_0])), (arr_15 [i_0] [i_0] [i_2] [(_Bool)1] [2LL])))), (min((arr_16 [i_0] [i_0] [i_0] [i_2] [i_2] [i_3]), (((/* implicit */long long int) var_1)))))));
            }
        }
        for (unsigned long long int i_8 = 1; i_8 < 10; i_8 += 1) 
        {
            var_22 *= ((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [i_8] [i_0] [(signed char)1]);
            /* LoopSeq 2 */
            for (unsigned int i_9 = 0; i_9 < 13; i_9 += 4) 
            {
                arr_29 [i_8] [i_8] = ((/* implicit */unsigned long long int) (-(arr_19 [i_8])));
                /* LoopSeq 2 */
                for (unsigned long long int i_10 = 3; i_10 < 12; i_10 += 1) 
                {
                    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) max((((/* implicit */unsigned int) arr_13 [i_10] [i_9] [i_0] [i_0])), ((~(min((((/* implicit */unsigned int) -348974600)), (1854291164U))))))))));
                    var_24 &= ((/* implicit */long long int) var_8);
                }
                for (unsigned char i_11 = 0; i_11 < 13; i_11 += 1) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                    {
                        arr_36 [(short)9] [i_8] [i_8] [i_11] [i_0] = ((/* implicit */long long int) arr_11 [i_0] [i_8 - 1] [i_9] [i_11] [i_9]);
                        var_25 = ((/* implicit */short) arr_31 [i_0] [i_8] [i_8] [i_9] [i_11] [(unsigned char)4]);
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        arr_40 [i_8] [i_8] [i_8] [i_8] [i_11] [i_8] [i_13] = ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_0)), (var_6)))), (max((((/* implicit */unsigned long long int) var_0)), (var_7))))), (((/* implicit */unsigned long long int) arr_4 [i_9] [i_11] [i_11]))));
                        var_26 = min((((/* implicit */unsigned int) arr_9 [i_11] [i_9] [i_8])), (var_4));
                        var_27 = ((/* implicit */unsigned short) var_9);
                        arr_41 [i_0] [i_8] [i_9] [i_11] [i_13] [(_Bool)1] = ((/* implicit */_Bool) min((((/* implicit */long long int) var_5)), ((+(513767978277500793LL)))));
                        var_28 = ((/* implicit */unsigned short) max((min((min((var_7), (((/* implicit */unsigned long long int) arr_8 [2U] [i_11])))), (((/* implicit */unsigned long long int) arr_23 [i_8] [i_8] [i_9] [i_11] [i_13] [i_13])))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4)))))));
                    }
                    /* vectorizable */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                    {
                        var_29 = ((/* implicit */long long int) (-(var_4)));
                        arr_44 [i_0] [i_8] [i_9] [i_9] = ((/* implicit */int) (-(var_2)));
                    }
                    var_30 = ((/* implicit */signed char) arr_23 [i_8] [i_8] [i_8] [i_9] [i_8] [i_8]);
                    var_31 &= ((/* implicit */_Bool) max((((/* implicit */long long int) (-(((/* implicit */int) var_0))))), ((+(arr_16 [i_0] [7U] [(unsigned char)7] [i_9] [i_9] [(_Bool)1])))));
                    /* LoopSeq 2 */
                    for (unsigned short i_15 = 1; i_15 < 12; i_15 += 3) 
                    {
                        var_32 = ((/* implicit */int) min((max((((/* implicit */unsigned long long int) min((((/* implicit */signed char) var_9)), (arr_9 [i_9] [i_9] [i_15 - 1])))), (min((var_7), (((/* implicit */unsigned long long int) arr_33 [i_8] [i_8] [i_11])))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0)))))));
                        var_33 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) var_3))))));
                        var_34 |= ((/* implicit */_Bool) arr_35 [i_0] [i_8] [i_9] [i_8] [i_0]);
                    }
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        var_35 |= min((var_6), (((/* implicit */unsigned int) var_0)));
                        var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) max((var_5), (((/* implicit */short) var_3)))))));
                        var_37 = ((/* implicit */unsigned int) arr_7 [0LL] [0LL] [i_9]);
                        var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) var_8))));
                    }
                }
            }
            /* vectorizable */
            for (unsigned short i_17 = 1; i_17 < 12; i_17 += 1) 
            {
                arr_51 [i_8] = ((/* implicit */unsigned short) arr_19 [i_8]);
                var_39 = ((/* implicit */long long int) (+(((/* implicit */int) var_5))));
                var_40 = ((/* implicit */unsigned char) var_2);
            }
        }
        var_41 = ((/* implicit */unsigned int) arr_1 [i_0]);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_18 = 0; i_18 < 13; i_18 += 1) 
        {
            var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) var_5))));
            var_43 = ((/* implicit */unsigned int) min((var_43), (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_0] [i_0]))))))))));
            var_44 = ((/* implicit */long long int) arr_14 [i_18]);
        }
        for (unsigned int i_19 = 0; i_19 < 13; i_19 += 2) 
        {
            arr_57 [10] [10] = ((/* implicit */int) max((((/* implicit */long long int) var_1)), (arr_3 [(short)9])));
            arr_58 [i_19] |= ((/* implicit */unsigned long long int) arr_37 [i_0] [i_0] [i_0] [i_0] [i_0]);
            var_45 = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) var_6)), (max((var_7), (((/* implicit */unsigned long long int) arr_54 [i_0] [i_19] [i_0])))))), (min((min((var_7), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_19])))), (((/* implicit */unsigned long long int) arr_17 [i_0] [4ULL] [i_19]))))));
            /* LoopNest 2 */
            for (unsigned char i_20 = 0; i_20 < 13; i_20 += 3) 
            {
                for (signed char i_21 = 0; i_21 < 13; i_21 += 1) 
                {
                    {
                        var_46 = ((/* implicit */long long int) max((var_46), (((/* implicit */long long int) (-(((/* implicit */int) var_5)))))));
                        var_47 = arr_26 [i_20] [i_20] [10];
                        var_48 *= ((/* implicit */unsigned int) min((max((max((var_7), (((/* implicit */unsigned long long int) arr_35 [i_0] [i_19] [i_19] [i_20] [i_21])))), (((/* implicit */unsigned long long int) arr_17 [i_20] [i_19] [i_20])))), (((/* implicit */unsigned long long int) arr_3 [i_0]))));
                    }
                } 
            } 
        }
        for (long long int i_22 = 4; i_22 < 10; i_22 += 2) 
        {
            /* LoopNest 3 */
            for (short i_23 = 0; i_23 < 13; i_23 += 2) 
            {
                for (int i_24 = 0; i_24 < 13; i_24 += 1) 
                {
                    for (unsigned int i_25 = 0; i_25 < 13; i_25 += 3) 
                    {
                        {
                            var_49 *= ((/* implicit */unsigned int) arr_71 [i_25] [i_22 - 1] [i_22 - 1] [i_22 - 1] [i_22 - 1] [i_0]);
                            var_50 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_33 [i_22] [i_22] [i_22])), (max((var_1), (max((var_2), (var_2)))))));
                            arr_75 [i_0] [i_22] [i_23] [i_22] [i_24] [i_25] = ((/* implicit */int) (~(var_1)));
                            var_51 = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((arr_28 [i_0] [i_0] [i_0] [i_24]), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_12 [i_0] [i_23] [i_24] [i_22])))))))), (max((var_7), (((/* implicit */unsigned long long int) var_1))))));
                        }
                    } 
                } 
            } 
            var_52 *= ((/* implicit */unsigned short) max((((/* implicit */long long int) min((((/* implicit */unsigned int) max((((/* implicit */signed char) var_9)), (arr_70 [i_0])))), (min((((/* implicit */unsigned int) arr_38 [i_0] [i_0] [i_0] [i_0] [i_0])), (arr_69 [i_0] [4U] [(_Bool)1] [i_0])))))), ((~(arr_3 [3LL])))));
            arr_76 [i_0] [i_22 - 1] [i_22] = ((/* implicit */int) min((var_7), (((/* implicit */unsigned long long int) (~(min((var_1), (arr_19 [i_0]))))))));
            var_53 = ((/* implicit */long long int) arr_33 [i_0] [i_0] [i_0]);
        }
    }
    var_54 = min((min((var_6), (min((((/* implicit */unsigned int) var_3)), (var_2))))), (max((min((((/* implicit */unsigned int) var_0)), (var_2))), (((/* implicit */unsigned int) var_3)))));
}
