/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67864
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
    var_18 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_0)) : (var_3)))) : ((+(var_11))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_2 [i_0] [1ULL] [i_1])) ? (((((/* implicit */_Bool) arr_3 [(signed char)4])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_1])))) : (((/* implicit */int) ((signed char) arr_0 [i_1]))))) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (arr_1 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))))))))));
            arr_4 [i_1] [i_0] = ((((_Bool) ((long long int) arr_2 [i_0] [i_1] [(_Bool)1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) : (((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_0])))));
            arr_5 [i_0] [i_1] = ((/* implicit */long long int) (~((-((-(arr_1 [i_1])))))));
        }
        for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) ((short) arr_7 [i_0] [i_2])))))) : ((+(((long long int) arr_0 [(_Bool)1]))))));
            arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [(short)4]))) : (arr_6 [i_0] [i_2])))) ? (((long long int) arr_2 [(unsigned char)2] [i_2] [i_2])) : (((((/* implicit */_Bool) arr_2 [i_2] [i_2] [i_0])) ? (arr_7 [i_0] [i_2]) : (arr_7 [i_2] [i_2])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2]))) : (arr_6 [i_0] [i_2])));
        }
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_1 [i_0])))) ? (((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) : (arr_1 [(short)3]))) : (((unsigned int) arr_8 [i_0]))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)(-127 - 1)))))) : (((((/* implicit */_Bool) (~(arr_1 [7U])))) ? ((~(13051853764684182448ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))))));
        /* LoopNest 2 */
        for (signed char i_3 = 2; i_3 < 12; i_3 += 4) 
        {
            for (unsigned int i_4 = 0; i_4 < 13; i_4 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-((+(((/* implicit */int) arr_13 [i_5] [i_3]))))))) ? (((/* implicit */unsigned int) ((arr_11 [i_0]) ? ((~(((/* implicit */int) arr_17 [i_0] [i_0] [i_5] [i_0])))) : (((/* implicit */int) ((signed char) arr_3 [i_0])))))) : (arr_15 [i_0] [i_3 + 1] [i_4] [i_0])));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 1) 
                        {
                            arr_20 [i_6] [i_5] [i_5] [i_4] [i_5] [i_0] [i_0] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) ((long long int) (signed char)-76))) ? (((((/* implicit */_Bool) arr_19 [i_0] [i_3 + 1] [i_3 + 1] [i_5] [i_6])) ? (arr_19 [i_0] [i_3] [i_4] [i_5] [i_6]) : (((/* implicit */long long int) arr_1 [i_0])))) : (((((/* implicit */_Bool) arr_18 [i_0] [(signed char)10] [i_4] [i_5] [(signed char)4] [i_0])) ? (arr_12 [1LL] [1LL] [i_5] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0]))))))));
                            var_23 *= ((unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_5])) ? (arr_16 [i_5] [i_5] [4LL] [i_4]) : (((arr_17 [i_6] [i_0] [i_0] [(unsigned char)6]) ? (((/* implicit */int) arr_3 [i_5])) : (((/* implicit */int) arr_8 [i_0]))))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 4) 
                        {
                            arr_25 [i_0] [i_5] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned char) 1219207092));
                            var_24 = ((/* implicit */long long int) arr_14 [3U]);
                            var_25 += ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_21 [i_3] [i_3 - 1] [i_0] [i_4] [i_7] [i_7]))));
                        }
                        for (unsigned long long int i_8 = 4; i_8 < 10; i_8 += 1) 
                        {
                            var_26 = ((((_Bool) ((_Bool) arr_21 [i_5] [i_5] [i_4] [i_3 - 1] [i_8] [i_3]))) ? (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_21 [i_5] [i_3] [i_4] [i_4] [(signed char)10] [i_8 + 1])) : (((/* implicit */int) arr_2 [i_0] [i_0] [3ULL]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_4] [i_0])) ? (((/* implicit */int) arr_11 [i_4])) : (((/* implicit */int) arr_17 [i_0] [i_0] [i_5] [i_0]))))) ? (((((/* implicit */_Bool) arr_26 [i_5] [i_5] [i_5] [i_4] [i_3] [i_3 + 1] [i_5])) ? (arr_23 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_4]))))) : (arr_12 [i_0] [i_3 - 2] [i_4] [i_5]))));
                            arr_28 [i_0] [i_0] [i_4] [i_5] [(short)0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_0] [i_3] [0ULL]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((arr_17 [i_8 + 1] [i_5] [i_5] [i_0]) ? (((/* implicit */int) arr_17 [i_5] [i_3 - 1] [i_5] [i_5])) : (((/* implicit */int) arr_10 [i_0] [i_3] [i_4]))))))) : (((unsigned long long int) ((_Bool) arr_26 [i_0] [i_0] [i_4] [8ULL] [i_8 - 1] [i_8] [i_5])))));
                            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) ((int) arr_23 [i_5])))) ? ((-(((((/* implicit */_Bool) (short)1231)) ? (-6699662937452536717LL) : (5134070856774954696LL))))) : (((((/* implicit */_Bool) ((int) arr_3 [(signed char)12]))) ? (arr_19 [7ULL] [i_4] [i_4] [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_27 [i_0] [(signed char)5] [i_0] [i_3] [i_4]))))))));
                        }
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned char) arr_16 [i_0] [i_0] [i_0] [i_3]);
                        var_29 = ((/* implicit */unsigned int) arr_2 [i_4] [i_3] [i_0]);
                        var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) (~((-(((((/* implicit */_Bool) arr_6 [i_4] [i_0])) ? (((/* implicit */int) arr_22 [(unsigned char)11] [(unsigned char)11] [i_9])) : (((/* implicit */int) arr_17 [i_0] [i_3 - 1] [i_0] [i_9])))))))))));
                        var_31 = ((/* implicit */long long int) ((int) ((long long int) (signed char)122)));
                        arr_32 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */int) arr_11 [i_4])) : (((/* implicit */int) arr_2 [7LL] [i_3] [(_Bool)1]))))))))));
                    }
                    /* LoopSeq 2 */
                    for (long long int i_10 = 0; i_10 < 13; i_10 += 1) 
                    {
                        var_32 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_0] [i_3 + 1] [0U])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [(signed char)2] [(signed char)10] [i_4]))) : (arr_1 [1])))) ? ((-(((/* implicit */int) arr_13 [i_0] [i_0])))) : (((arr_24 [2LL] [2LL] [i_4] [0ULL] [2LL]) ? (((/* implicit */int) arr_21 [i_3] [i_0] [i_3] [i_3] [i_4] [i_10])) : (((/* implicit */int) arr_22 [i_0] [i_3] [0LL]))))))));
                        var_33 = ((((_Bool) (-(arr_6 [i_0] [i_4])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [5LL])) ? (arr_31 [i_0] [i_3 + 1] [i_4] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_4] [i_3 - 1] [i_3] [i_4] [i_10] [i_10])))))) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_3] [(_Bool)1])) ? (arr_27 [i_10] [i_4] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_10] [i_4] [i_3]))))) : (((/* implicit */unsigned long long int) arr_14 [i_0])))) : (((((/* implicit */_Bool) (+(4294967293U)))) ? (((unsigned long long int) arr_8 [i_4])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0])) ? (arr_31 [i_10] [i_4] [i_3 - 2] [i_0]) : (((/* implicit */unsigned int) arr_34 [i_4] [i_10] [i_4] [i_10]))))))));
                    }
                    for (unsigned int i_11 = 1; i_11 < 9; i_11 += 4) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_0] [i_3 - 1] [i_4] [i_11 + 2])) ? (((/* implicit */int) arr_3 [i_12])) : (arr_16 [i_3 - 1] [i_4] [i_11] [i_4])))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_0] [i_12] [(signed char)11]))))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) arr_18 [i_0] [i_0] [i_3] [i_4] [i_11 - 1] [i_12])) : (arr_27 [i_0] [i_3] [i_3] [i_3] [i_12]))))))));
                            var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_11 [i_3]) ? (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_0] [i_0] [i_4] [i_11] [i_11 + 1] [i_12]))) : (arr_23 [i_4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_12]))) : (((((/* implicit */_Bool) arr_39 [i_3] [i_11] [i_4] [i_3] [i_3])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [2ULL] [3]))))))))));
                            var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-127)))))));
                            arr_41 [i_0] [i_3] [i_11] [i_11] [i_12] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_22 [i_12] [i_12] [i_4])) ? (((/* implicit */int) arr_13 [i_4] [i_0])) : (arr_14 [i_0])))));
                        }
                        for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 1) 
                        {
                            arr_45 [i_3] [i_3 + 1] [i_3 - 2] [i_3 - 2] [i_3] [i_11] = ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) 13702349419168504135ULL)) ? (2283739561092207481ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)66))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4455681654671362644LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-10))) : (16163004512617344135ULL)))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_3] [i_11 + 1])) ? (arr_27 [i_13] [i_11] [i_4] [i_3] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_0] [i_3] [i_4] [i_13] [i_13] [i_3]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_3] [i_11] [i_3]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_11] [i_11] [i_4] [i_3] [i_11]))));
                            var_37 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_0] [i_0] [i_3 + 1] [i_3] [i_4] [i_11] [i_3]))) : (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? ((+(arr_15 [i_0] [i_3] [i_4] [i_11]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_26 [i_0] [i_0] [i_4] [i_11] [i_4] [i_0] [i_0])))))))) ? (((/* implicit */int) arr_8 [(signed char)0])) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_4] [i_4] [i_3] [i_0])) ? (arr_34 [i_0] [i_3 - 2] [i_3 - 2] [0LL]) : (arr_34 [i_0] [i_3 - 2] [i_13] [i_4])))))))));
                        }
                        var_38 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_33 [i_11] [i_4] [i_3] [i_0] [i_0])) : (((/* implicit */int) arr_36 [i_4] [i_3] [i_4]))))) ? (((/* implicit */int) arr_2 [i_0] [i_11] [i_11])) : (((/* implicit */int) ((signed char) arr_12 [i_0] [i_0] [i_0] [i_0])))))) ? (((unsigned long long int) (-(((/* implicit */int) arr_37 [i_11 + 4] [i_4] [7ULL] [i_3 - 1] [(unsigned char)11]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_3] [i_3] [i_3] [i_3] [i_0]))));
                        arr_46 [i_11] [i_3 - 2] [i_3 - 2] = ((signed char) arr_42 [i_0] [(signed char)8] [(unsigned char)3] [i_4]);
                        var_39 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_3] [i_11])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [11ULL] [i_3])) ? (((/* implicit */int) arr_2 [i_11] [i_3] [i_0])) : (((/* implicit */int) arr_39 [i_3] [i_3] [i_3] [(_Bool)1] [i_11 + 2]))))) : (((unsigned long long int) (_Bool)1))))) ? (((unsigned long long int) ((_Bool) arr_19 [i_3] [i_3 + 1] [i_0] [i_11 + 3] [i_11 + 3]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6699662937452536714LL)) ? ((-(((/* implicit */int) (signed char)121)))) : (((/* implicit */int) ((short) (short)16142))))))));
                    }
                }
            } 
        } 
    }
}
