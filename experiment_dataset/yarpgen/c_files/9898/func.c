/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9898
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
    var_16 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_1)) ? (0U) : (var_12))), (((/* implicit */unsigned int) var_8))))) ? (((/* implicit */unsigned long long int) min(((-(0U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (var_15))))))) : (((((/* implicit */_Bool) -1739664621)) ? (((/* implicit */unsigned long long int) (~(var_7)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32763))) * (8059885827732430395ULL)))))));
    /* LoopSeq 4 */
    for (short i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (signed char i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1536U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1 - 2]))) : (max((var_11), (((/* implicit */unsigned long long int) var_13))))))) ? (min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0 + 1] [i_1 - 3])), (arr_4 [i_0 + 1] [i_0]))) : (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (short)-32758)))))))));
            arr_5 [1ULL] [(unsigned char)2] [i_0] = ((/* implicit */signed char) max((((/* implicit */int) max((arr_3 [i_0 + 1] [i_0 - 1] [i_1 - 2]), (arr_3 [i_0 + 1] [i_0 - 1] [i_1 - 2])))), (((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 - 1] [i_1 - 2])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 1] [i_1 - 2]))))));
        }
        for (signed char i_2 = 4; i_2 < 15; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_3 = 3; i_3 < 15; i_3 += 4) 
            {
                for (unsigned char i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    {
                        arr_13 [i_0] [i_2] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_2] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [i_4]))) : (1518U))))))), (arr_1 [i_0 + 1] [(unsigned char)3])));
                        arr_14 [i_0 + 1] [i_0 + 1] [i_2] = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) (signed char)0)) ? (-1086407997) : (2147483647))) == ((~(((/* implicit */int) (short)-6154)))))) ? (max((min((((/* implicit */unsigned long long int) (signed char)2)), (18014398492704768ULL))), (((/* implicit */unsigned long long int) max((2733466278U), (((/* implicit */unsigned int) (unsigned char)0))))))) : (max((((/* implicit */unsigned long long int) (-(524288U)))), ((-(arr_2 [i_0 + 1])))))));
                        /* LoopSeq 4 */
                        for (unsigned char i_5 = 3; i_5 < 15; i_5 += 3) 
                        {
                            arr_17 [6U] [i_2] [i_3 + 1] [i_4] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)32758))))) ? ((~((+(26U))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_2)))))));
                            arr_18 [2] [i_5] &= ((/* implicit */short) min((((/* implicit */unsigned long long int) (~(1604238089)))), (((((/* implicit */_Bool) (~(-1739664640)))) ? (arr_7 [i_3 - 2] [i_3] [i_5 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [10ULL] [i_3 - 2])))))));
                            arr_19 [i_2] = ((/* implicit */signed char) arr_7 [i_3 - 3] [i_3 - 3] [i_3 - 3]);
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_3 - 1] [i_3 - 1])) ? ((-(arr_9 [i_0 - 1] [i_2 - 3] [i_3 - 3] [i_5 - 1]))) : (max((((((/* implicit */unsigned long long int) -1)) ^ (var_11))), (arr_11 [i_2])))));
                        }
                        for (signed char i_6 = 1; i_6 < 12; i_6 += 4) 
                        {
                            arr_22 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_4)) ^ (max((min((arr_7 [i_0] [i_0 - 1] [i_0]), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [(unsigned char)14])))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_20 [i_0] [i_2 + 1] [i_2] [(short)10] [i_6])))))))));
                            arr_23 [i_2] [i_2] [(short)14] [i_6] = ((/* implicit */unsigned int) ((max((arr_16 [i_0 - 1] [i_6 + 3] [0] [i_6 + 4]), (arr_16 [i_0 - 1] [i_6 + 3] [(signed char)10] [i_6]))) > (max((((/* implicit */unsigned long long int) 8)), (arr_16 [i_0 - 1] [i_6 + 3] [1U] [i_6])))));
                            arr_24 [i_0 - 1] [i_0] [i_2] [4] [i_0] = (~(((((/* implicit */_Bool) arr_9 [i_0] [i_3 - 1] [i_0] [i_6 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)(-32767 - 1))) || (((/* implicit */_Bool) (short)-32757)))))) : (min((((/* implicit */unsigned long long int) (short)-4474)), (arr_9 [i_0] [12U] [i_4] [i_0]))))));
                            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) 4294965767U))));
                        }
                        /* vectorizable */
                        for (signed char i_7 = 1; i_7 < 15; i_7 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_0 + 1] [14U] [i_2] [i_2 - 4] [i_7 + 1])) ? (((/* implicit */int) arr_20 [i_0 - 1] [i_0 - 1] [i_2] [i_2 - 1] [i_7 + 1])) : (((/* implicit */int) arr_20 [i_0 - 1] [i_0 - 1] [i_2] [i_2 - 1] [i_7 - 1]))));
                            arr_27 [i_2] [5ULL] [0U] [i_4] [0U] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_3 [(unsigned char)5] [(unsigned char)5] [i_3 - 3])) ? (((/* implicit */int) arr_3 [i_0 - 1] [(short)4] [(short)4])) : (((/* implicit */int) var_10))))));
                            var_21 &= ((/* implicit */unsigned long long int) var_1);
                            arr_28 [i_2] [i_2] [i_2] [i_2] [(signed char)6] = ((/* implicit */signed char) (((~(((/* implicit */int) (short)-6323)))) | (((/* implicit */int) (short)127))));
                        }
                        /* vectorizable */
                        for (short i_8 = 4; i_8 < 12; i_8 += 1) 
                        {
                            arr_32 [i_8 - 3] [i_2] [i_3] [i_2] [(short)15] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2] [i_3 - 1] [i_8])) ? (arr_1 [i_0 - 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2345206145984873014ULL))))) : (arr_29 [i_3 + 1] [i_0 - 1])));
                            var_22 = ((/* implicit */unsigned long long int) ((unsigned char) var_6));
                            arr_33 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1576634200)) ? (arr_15 [i_3] [i_3 + 1] [10ULL] [i_3 - 2] [i_3 + 1]) : (arr_15 [i_3] [i_3 + 1] [i_3 - 3] [i_3 - 2] [i_3 - 3])));
                        }
                    }
                } 
            } 
            var_23 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)6154))) % (2733466278U)))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0] [i_0] [i_0 - 1]))))) ? (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (signed char)-54)))) : (max((((/* implicit */unsigned long long int) arr_25 [i_2] [i_2] [i_0] [i_2] [i_0])), (9980873333994291067ULL)))))));
            /* LoopSeq 1 */
            for (unsigned int i_9 = 0; i_9 < 16; i_9 += 2) 
            {
                var_24 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((arr_3 [i_0 + 1] [5U] [i_9]), (((/* implicit */unsigned char) arr_8 [6U] [i_2] [i_0])))))));
                var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_34 [i_0] [i_2] [i_9] [i_0])) || (((/* implicit */_Bool) arr_30 [i_0] [(short)9] [(short)9] [(short)3] [(unsigned char)10] [i_2 + 1] [i_9]))))), (((((/* implicit */_Bool) arr_34 [i_0] [i_2 - 3] [i_9] [(short)14])) ? (arr_30 [i_0] [i_0] [i_2 - 2] [i_2] [3ULL] [i_2] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)36))))))), (((/* implicit */unsigned long long int) ((unsigned int) (short)0))))))));
            }
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 16; i_10 += 1) 
        {
            /* LoopSeq 2 */
            for (int i_11 = 2; i_11 < 15; i_11 += 2) 
            {
                var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_35 [i_0 - 1] [i_0 - 1] [(unsigned char)13] [i_11])) << ((((~(((/* implicit */int) (unsigned char)36)))) + (40)))));
                /* LoopNest 2 */
                for (signed char i_12 = 3; i_12 < 14; i_12 += 4) 
                {
                    for (short i_13 = 1; i_13 < 13; i_13 += 2) 
                    {
                        {
                            arr_44 [(short)5] [(short)8] [i_11] [i_10] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) -1706070136)) && (((/* implicit */_Bool) var_12)))))));
                            var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0 + 1] [i_0 + 1])) ? (arr_1 [i_10] [i_11 - 1]) : (((/* implicit */unsigned long long int) arr_12 [i_10] [i_10])))))));
                            var_28 = ((/* implicit */short) (~(arr_4 [i_0 + 1] [i_11 - 2])));
                            arr_45 [i_10] = ((/* implicit */signed char) ((((/* implicit */int) arr_8 [1ULL] [i_0 - 1] [i_11 - 2])) <= (((/* implicit */int) arr_8 [i_0 - 1] [i_0 + 1] [i_11 - 1]))));
                        }
                    } 
                } 
            }
            for (unsigned int i_14 = 3; i_14 < 15; i_14 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_15 = 2; i_15 < 13; i_15 += 4) /* same iter space */
                {
                    var_29 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_48 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))));
                    arr_52 [i_15] [i_15] [i_10] [i_15] &= ((/* implicit */unsigned int) arr_34 [i_0 + 1] [i_10] [i_14] [i_15 + 2]);
                    var_30 = ((((/* implicit */_Bool) arr_31 [i_10] [i_10] [i_10] [i_10] [i_10] [i_15 - 1])) ? (arr_9 [i_0 - 1] [i_14 + 1] [i_14 - 2] [i_15 - 2]) : (arr_9 [i_0 - 1] [i_14 - 3] [i_14 - 1] [i_15 + 3]));
                }
                for (unsigned char i_16 = 2; i_16 < 13; i_16 += 4) /* same iter space */
                {
                    var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_10 [9ULL] [i_10] [i_14 - 1] [9ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_0] [4U] [i_0])))))) ? (((((/* implicit */_Bool) (short)6173)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)0))) : (1528U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-512))))))));
                    arr_56 [(unsigned char)7] [i_10] [i_10] [(unsigned char)7] [i_10] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)14228))))));
                }
                var_32 = ((/* implicit */unsigned int) var_3);
            }
            arr_57 [i_10] = ((/* implicit */unsigned long long int) ((arr_29 [i_0 + 1] [i_0 - 1]) | (arr_29 [i_0 + 1] [i_0 - 1])));
        }
        for (unsigned char i_17 = 1; i_17 < 13; i_17 += 4) 
        {
            var_33 *= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) min((1046528), (((/* implicit */int) (short)-32764))))) ? (min((((/* implicit */unsigned int) var_13)), (var_12))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_0] [i_0] [1U])))))))));
            var_34 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)4))))) * (((((/* implicit */_Bool) arr_7 [i_17 + 2] [0U] [i_0 + 1])) ? (arr_7 [i_17 + 1] [i_0] [i_0 - 1]) : (arr_7 [i_17 + 3] [i_0 + 1] [i_0 + 1])))));
        }
        var_35 = ((/* implicit */unsigned long long int) ((arr_60 [7ULL]) >= (((/* implicit */int) (!(((/* implicit */_Bool) max((4294965767U), (((/* implicit */unsigned int) 1073741824))))))))));
        arr_61 [12U] = ((/* implicit */signed char) arr_30 [i_0] [9U] [i_0 + 1] [(signed char)11] [(signed char)11] [(signed char)11] [i_0 - 1]);
    }
    for (unsigned int i_18 = 1; i_18 < 7; i_18 += 1) 
    {
        arr_66 [i_18 + 3] [(signed char)4] = ((/* implicit */unsigned char) (~((-(((/* implicit */int) (short)-6168))))));
        /* LoopSeq 1 */
        for (unsigned char i_19 = 1; i_19 < 9; i_19 += 2) 
        {
            arr_70 [i_18] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-9))))) ? (((7U) >> (((var_9) - (2484362548U))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_65 [i_18]))))))));
            arr_71 [i_18] [i_18] [i_18 + 3] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)25)) ? (((/* implicit */int) (unsigned char)248)) : (2096640))) >= (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)67)) : (((/* implicit */int) (signed char)102)))))))) != (4294965767U)));
        }
        var_36 = ((/* implicit */int) var_9);
    }
    for (int i_20 = 3; i_20 < 9; i_20 += 4) 
    {
        arr_74 [i_20] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294965767U)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_68 [i_20])))))) | (240518168576ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_64 [i_20 - 1] [i_20 - 3])) ? (((/* implicit */int) arr_64 [i_20 + 1] [i_20 - 1])) : (((/* implicit */int) var_2))))) : (max((((/* implicit */unsigned long long int) (~(var_4)))), (max((((/* implicit */unsigned long long int) (signed char)102)), (arr_7 [i_20] [i_20 + 1] [i_20 + 1])))))));
        arr_75 [i_20 - 1] [i_20] = ((/* implicit */unsigned int) arr_68 [i_20 - 1]);
    }
    for (short i_21 = 1; i_21 < 12; i_21 += 4) 
    {
        arr_78 [i_21] [2] = ((((/* implicit */_Bool) (((~(((/* implicit */int) (unsigned char)0)))) - (((((/* implicit */int) var_10)) << (((((arr_76 [i_21 - 1]) + (782558367))) - (25)))))))) ? (((((/* implicit */_Bool) 23ULL)) ? (((/* implicit */unsigned long long int) arr_31 [i_21] [2] [i_21] [i_21] [i_21] [i_21 - 1])) : (arr_4 [0ULL] [2U]))) : ((~(((((/* implicit */_Bool) (signed char)-103)) ? (240518168583ULL) : (18446743833191383031ULL))))));
        var_37 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) max((18014398501093376ULL), (((/* implicit */unsigned long long int) 12U))))) ? (((((/* implicit */_Bool) 8U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)20076))) : (2236129452U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-2)))))));
    }
}
