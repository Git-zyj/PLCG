/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59013
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
    var_12 = ((/* implicit */short) max((max((var_7), (min(((unsigned short)59664), ((unsigned short)5545))))), (var_7)));
    var_13 = ((/* implicit */unsigned int) var_7);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */int) (!(((((/* implicit */long long int) (~(((/* implicit */int) var_11))))) > (max((0LL), (((/* implicit */long long int) 1392353564))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned int) arr_1 [i_1])))))));
                    var_14 = ((/* implicit */unsigned short) min((((/* implicit */int) ((unsigned char) arr_3 [i_2] [i_2]))), (((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) ^ (((/* implicit */int) arr_6 [i_2] [(unsigned short)4] [i_0]))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            arr_13 [(signed char)2] [i_3] [i_4] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (-(var_5)))) ? (((((/* implicit */_Bool) (unsigned short)59988)) ? (((/* implicit */int) (unsigned short)59990)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_11))))));
                            var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)4)) ? (((/* implicit */int) (unsigned short)5545)) : (((/* implicit */int) (short)-11846))));
                            arr_14 [i_4] [i_3] [(short)12] [i_1] [i_0] = ((/* implicit */long long int) (-(var_6)));
                            var_16 = ((/* implicit */short) var_9);
                        }
                        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 1) 
                        {
                            arr_17 [3] [i_1] [i_1] [(short)19] [8U] [2] = ((/* implicit */_Bool) (-((-(((/* implicit */int) (unsigned short)59995))))));
                            var_17 = ((/* implicit */unsigned char) (+(((arr_10 [i_1 + 1] [i_1 - 1] [i_1 + 2]) / (((/* implicit */long long int) (-(var_10))))))));
                        }
                        for (int i_6 = 2; i_6 < 17; i_6 += 1) 
                        {
                            arr_20 [i_6] = ((/* implicit */short) var_5);
                            arr_21 [i_6] [i_6] = ((/* implicit */unsigned char) ((int) arr_1 [(short)17]));
                        }
                        for (int i_7 = 0; i_7 < 20; i_7 += 2) 
                        {
                            arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)60004)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5546))) : (15U)));
                            arr_26 [i_7] [i_3] [i_2] [14U] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min(((+(((/* implicit */int) arr_5 [(unsigned char)11] [i_3] [i_2] [i_1 + 2])))), ((+(arr_16 [i_0] [i_1 + 2] [i_0] [i_3] [i_1 + 2]))))))));
                            var_18 = (+(((/* implicit */int) (!(((((/* implicit */_Bool) arr_18 [i_0] [i_1 - 3] [i_2] [(_Bool)1] [(_Bool)1])) && (((/* implicit */_Bool) var_3))))))));
                        }
                        var_19 ^= ((/* implicit */_Bool) arr_3 [i_3] [i_1]);
                    }
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 20; i_8 += 1) 
                    {
                        for (short i_9 = 0; i_9 < 20; i_9 += 2) 
                        {
                            {
                                var_20 += ((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((unsigned char) (unsigned short)65532))) : (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0])))) << (max((((var_11) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_9))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_4)))))))));
                                arr_32 [i_0] [i_1] [(_Bool)1] [i_0] [(_Bool)1] [i_0] [i_2] = ((/* implicit */long long int) arr_22 [i_9] [i_8] [i_0] [i_1] [i_0]);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 3 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_21 += ((/* implicit */unsigned char) (+(((/* implicit */int) max((((((/* implicit */_Bool) (unsigned short)59988)) || ((_Bool)1))), (var_11))))));
            var_22 *= ((/* implicit */short) var_6);
            var_23 = ((/* implicit */int) max((var_23), ((+(min((arr_24 [i_10] [i_10] [i_10] [i_10] [i_0] [i_0] [i_0]), (arr_24 [i_0] [i_0] [i_10] [i_10] [i_10] [i_10] [i_10])))))));
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_24 = ((/* implicit */short) min(((!(((/* implicit */_Bool) arr_23 [i_11] [i_11] [9U] [i_11] [i_11] [i_0] [i_0])))), ((!(((/* implicit */_Bool) arr_12 [i_0] [(_Bool)1] [i_11] [i_11] [i_11] [i_11] [i_11]))))));
            /* LoopNest 3 */
            for (unsigned short i_12 = 0; i_12 < 20; i_12 += 2) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (unsigned char i_14 = 0; i_14 < 20; i_14 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */int) max(((_Bool)1), ((_Bool)1)));
                            arr_45 [i_0] [i_0] [i_14] [8LL] [19U] = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_0)) ? ((+(((/* implicit */int) (unsigned short)59973)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))), (((/* implicit */int) arr_23 [i_14] [i_13] [i_12] [i_12] [i_0] [(_Bool)1] [i_0]))));
                            arr_46 [i_0] [i_14] [i_0] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned short)31)) : (((/* implicit */int) (_Bool)0)))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_15 = 0; i_15 < 20; i_15 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_16 = 0; i_16 < 20; i_16 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_17 = 0; i_17 < 20; i_17 += 4) 
                {
                    for (signed char i_18 = 0; i_18 < 20; i_18 += 3) 
                    {
                        {
                            arr_58 [i_16] = ((/* implicit */unsigned long long int) arr_54 [i_16] [i_15] [i_16] [i_17] [i_16]);
                            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!((_Bool)1))) ? (((/* implicit */int) (unsigned short)5545)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) var_7))))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5559))) / (4227858432U))))))));
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) 8388607U))) ? (((((/* implicit */_Bool) arr_31 [i_18] [(unsigned char)15] [i_16] [i_15] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [(short)0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) var_7)) ? (arr_49 [i_15] [i_15] [i_16] [i_16]) : (((/* implicit */unsigned long long int) arr_24 [i_0] [i_0] [i_0] [i_0] [(short)7] [(short)7] [i_0])))))) : (((/* implicit */unsigned long long int) var_1))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) var_9))));
                var_29 *= arr_8 [5ULL] [5U] [i_16] [i_16];
                /* LoopNest 2 */
                for (unsigned char i_19 = 0; i_19 < 20; i_19 += 3) 
                {
                    for (unsigned long long int i_20 = 1; i_20 < 19; i_20 += 2) 
                    {
                        {
                            var_30 ^= (!(((/* implicit */_Bool) (unsigned short)59989)));
                            arr_63 [i_16] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) arr_57 [i_20 + 1] [i_16] [i_16] [i_20] [(short)18] [i_20 + 1] [i_16])))));
                            arr_64 [i_16] [i_19] [i_16] [i_15] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)0) ? (2147483647) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((var_11) && (((/* implicit */_Bool) arr_56 [i_0] [i_16] [i_16] [i_19] [i_20 + 1]))))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))));
                            var_31 = ((/* implicit */short) min((var_9), (((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (var_1) : (max((arr_31 [(unsigned short)9] [i_15] [(signed char)0] [(unsigned char)15] [(signed char)0] [i_15]), (((/* implicit */long long int) var_8))))))));
                        }
                    } 
                } 
                arr_65 [19U] [i_16] = ((/* implicit */_Bool) min((9223372036854775803LL), (((/* implicit */long long int) 1086981946))));
            }
            arr_66 [i_0] = ((/* implicit */unsigned short) var_2);
            /* LoopNest 2 */
            for (unsigned char i_21 = 1; i_21 < 19; i_21 += 2) 
            {
                for (unsigned short i_22 = 4; i_22 < 18; i_22 += 3) 
                {
                    {
                        var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_62 [i_0] [(_Bool)1] [i_21] [i_0] [i_22 - 2])) ? (((/* implicit */int) arr_50 [8ULL] [i_21 - 1] [i_21 + 1])) : (((/* implicit */int) arr_50 [i_0] [i_0] [(short)4]))))))))));
                        arr_71 [i_0] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (var_0) : (3326751280U)))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-126)))), (1086981946)));
                    }
                } 
            } 
        }
        arr_72 [i_0] = ((/* implicit */unsigned short) min((min((arr_10 [i_0] [i_0] [i_0]), (arr_10 [i_0] [i_0] [i_0]))), (((/* implicit */long long int) ((_Bool) var_1)))));
    }
    /* vectorizable */
    for (unsigned short i_23 = 0; i_23 < 18; i_23 += 3) 
    {
        /* LoopNest 3 */
        for (short i_24 = 1; i_24 < 15; i_24 += 2) 
        {
            for (unsigned short i_25 = 1; i_25 < 16; i_25 += 2) 
            {
                for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_27 = 0; i_27 < 18; i_27 += 4) 
                        {
                            var_33 = ((/* implicit */short) ((((/* implicit */_Bool) -337369126)) && (((/* implicit */_Bool) 1086981946))));
                            arr_88 [10U] [i_27] = arr_27 [i_27] [i_24];
                            arr_89 [(unsigned char)13] [i_27] [i_26] [i_25 - 1] [i_24 + 3] [i_23] = ((/* implicit */signed char) (~(var_6)));
                        }
                        for (int i_28 = 0; i_28 < 18; i_28 += 3) 
                        {
                            var_34 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_59 [i_23] [18LL] [i_25] [i_28] [i_24]))));
                            var_35 = ((/* implicit */short) min((var_35), (((short) (-(arr_36 [0U]))))));
                            arr_93 [i_24] [i_28] [i_24] [4U] [i_24 + 1] [i_24] = ((/* implicit */unsigned long long int) ((long long int) var_7));
                            var_36 ^= ((/* implicit */unsigned char) arr_79 [i_24 + 1] [i_24 + 1] [i_24 + 3] [i_25 + 1]);
                            var_37 = ((/* implicit */_Bool) arr_87 [i_24 + 3] [i_24 + 1] [(unsigned char)8]);
                        }
                        var_38 = ((/* implicit */int) var_1);
                    }
                } 
            } 
        } 
        var_39 = ((/* implicit */int) min((var_39), (((/* implicit */int) arr_83 [i_23] [i_23] [i_23] [i_23] [i_23]))));
    }
}
