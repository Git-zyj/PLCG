/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62256
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
    var_10 = ((/* implicit */unsigned int) (((+(((((/* implicit */_Bool) 2603532341724217742LL)) ? (159062444) : (159062444))))) + (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : ((-(var_0)))))));
    var_11 |= (~((-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (var_5))))));
    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) max((min(((+(var_2))), (((/* implicit */unsigned long long int) -1LL)))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) max((var_3), (((/* implicit */signed char) (_Bool)0)))))))))))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_2 = 1; i_2 < 8; i_2 += 3) 
                {
                    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) arr_0 [i_0]))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            arr_13 [i_0] [i_3] [(short)6] [i_3] [i_3] = ((/* implicit */_Bool) ((arr_12 [4ULL] [i_1 - 1] [i_1 - 1] [1ULL] [i_4] [i_0 - 1] [i_2 + 1]) * ((-(arr_7 [i_0] [i_0 + 1] [i_0 + 1])))));
                            var_14 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                            arr_14 [i_3] [i_1 - 1] [i_2 + 2] [2] [i_4] = ((/* implicit */_Bool) var_8);
                            arr_15 [i_3] [i_2 - 1] [i_2 - 1] [i_1 - 1] [i_3] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1920))) : (var_5)))));
                        }
                        arr_16 [i_3] = ((/* implicit */short) var_6);
                        arr_17 [i_0] [i_1 - 1] [i_3] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [(unsigned short)8] [i_3]))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_5 = 1; i_5 < 9; i_5 += 3) 
                        {
                            var_15 += ((/* implicit */int) (~(((((/* implicit */_Bool) var_6)) ? (var_2) : (var_5)))));
                            var_16 += ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_2 [i_0] [i_1] [(unsigned short)9])));
                        }
                        arr_21 [i_0] [(short)6] [i_3] [i_3] = 3693814604297033560ULL;
                    }
                    var_17 -= ((/* implicit */short) (unsigned short)12558);
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 1; i_6 < 8; i_6 += 2) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 10; i_7 += 1) 
                        {
                            {
                                arr_27 [i_7] [i_6] [i_2] [i_1 - 1] [i_7] = ((/* implicit */short) ((((unsigned int) var_4)) == (((/* implicit */unsigned int) ((int) 472862346U)))));
                                arr_28 [i_0] [i_7] [(signed char)0] [i_0] [i_7] = ((((/* implicit */long long int) ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) 2603532341724217734LL))))))) * (((-2603532341724217760LL) / ((~(arr_8 [i_7]))))));
                            }
                        } 
                    } 
                }
                for (long long int i_8 = 0; i_8 < 10; i_8 += 2) 
                {
                    arr_31 [i_1] [i_1] [(short)1] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))));
                    var_18 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) min(((unsigned char)134), (((/* implicit */unsigned char) (signed char)85)))))) ? (159062447) : (((/* implicit */int) ((unsigned char) min((((/* implicit */int) (unsigned short)57777)), (-1732939096)))))));
                    arr_32 [i_0] [i_0] [6] = (signed char)74;
                }
                for (unsigned char i_9 = 1; i_9 < 7; i_9 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_10 = 0; i_10 < 10; i_10 += 1) 
                    {
                        arr_38 [i_10] = ((/* implicit */signed char) var_9);
                        arr_39 [2U] [i_10] [(_Bool)1] [(_Bool)1] [i_9] [(_Bool)1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) -542204900)) * (2450874928U))))));
                    }
                    for (int i_11 = 0; i_11 < 10; i_11 += 3) 
                    {
                        arr_44 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned short) 472862358U);
                        /* LoopSeq 4 */
                        for (long long int i_12 = 0; i_12 < 10; i_12 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) (+(((min((159062454), (159062446))) + (-598375240)))));
                            arr_49 [i_11] [i_1] [i_11] = ((/* implicit */unsigned int) (-(max((((/* implicit */int) ((signed char) 4204745337U))), (((((/* implicit */_Bool) (signed char)-74)) ? (7) : (22)))))));
                        }
                        for (int i_13 = 0; i_13 < 10; i_13 += 4) 
                        {
                            arr_53 [i_11] [(_Bool)1] [i_9] [i_0 - 2] = ((/* implicit */short) (unsigned char)3);
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 1021293042U)) ? (((/* implicit */long long int) arr_48 [5LL] [i_11] [i_11] [i_1])) : (-1LL))) + (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_11] [i_1 - 1] [(unsigned short)8] [i_11] [i_13])))))) ? (((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_42 [i_0] [i_11] [i_11] [(_Bool)1] [(_Bool)1] [(signed char)6])), ((unsigned short)0))))) & (max((var_6), (((/* implicit */long long int) arr_30 [i_0] [i_1] [i_9] [5])))))) : (((long long int) (~(((/* implicit */int) (signed char)1)))))));
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)(-127 - 1))) <= (((/* implicit */int) (signed char)-26)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) + (12288833477374905207ULL)))))) ? (((((/* implicit */_Bool) 1785455856)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : ((~(17313283196391073922ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((!(((/* implicit */_Bool) 268435455U)))), (((arr_22 [i_0] [5] [i_0] [5] [i_13] [i_1]) == (((/* implicit */int) (_Bool)1)))))))))))));
                            arr_54 [i_0 - 1] [9ULL] [9ULL] [9ULL] [9ULL] [i_11] [i_0] = ((/* implicit */long long int) max((((0ULL) << (((arr_2 [(signed char)9] [i_1 - 1] [i_9 - 1]) - (3823163878340707512LL))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_3)), (2495087816U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_8 [i_0])))) : ((~(var_5)))))));
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_6 [i_0] [i_9 + 2] [i_9 + 2])) & (arr_9 [i_0 + 1] [i_1 - 1] [i_9 + 3] [i_13])));
                        }
                        for (unsigned long long int i_14 = 2; i_14 < 8; i_14 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)(-32767 - 1))), (2391263887U)))) ? (((((1133460877318477693ULL) & (((/* implicit */unsigned long long int) arr_5 [i_9])))) * (((/* implicit */unsigned long long int) max((arr_48 [i_1] [(signed char)2] [i_14] [i_14]), (arr_51 [(short)3] [6ULL] [(unsigned short)2] [i_9] [i_11] [i_14])))))) : (((/* implicit */unsigned long long int) max((arr_11 [i_0 - 2] [i_9 + 3] [i_14 - 2]), (arr_11 [i_0 - 2] [i_9 + 3] [i_14 + 2])))))))));
                            var_24 = ((/* implicit */short) (~((~((~(((/* implicit */int) var_3))))))));
                            var_25 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) + (((/* implicit */int) arr_40 [6LL] [i_1] [i_14] [i_14]))))) + ((-(3822104948U)))))) ? (((/* implicit */long long int) arr_46 [i_14] [i_14] [i_14] [i_11])) : (var_7)));
                        }
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            arr_60 [i_0 + 1] [i_1 - 1] [i_15] [i_11] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_36 [i_0] [i_11] [0])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_19 [i_9 - 1] [i_9 + 3] [i_1] [i_1 - 1] [i_0] [(signed char)3]))))) : ((-(((((/* implicit */_Bool) var_7)) ? (17641044966190620397ULL) : (var_5)))))));
                            var_26 = ((/* implicit */unsigned int) (unsigned short)15960);
                            arr_61 [i_15] [i_11] [i_11] [i_11] [i_0 - 2] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                        }
                    }
                    /* LoopNest 2 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        for (unsigned long long int i_17 = 0; i_17 < 10; i_17 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (-(arr_10 [i_17] [i_9 - 1] [i_9] [i_1 - 1])))), (((((/* implicit */_Bool) (+(87148384)))) ? (min((var_1), (((/* implicit */unsigned long long int) var_6)))) : (var_4)))));
                                var_28 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 472862334U)) ? (arr_58 [(signed char)6] [4LL] [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) (~(-23))))))) ? (((/* implicit */int) (signed char)15)) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
                                var_29 |= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((long long int) 13401792327586788382ULL))) != (((min((((/* implicit */unsigned long long int) var_8)), (var_4))) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)20461)))))))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */_Bool) (signed char)8);
                }
                arr_66 [4U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((0U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-60)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : ((((-(var_1))) * (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_6 [3U] [3U] [i_0])), (arr_8 [i_1]))))))));
            }
        } 
    } 
}
