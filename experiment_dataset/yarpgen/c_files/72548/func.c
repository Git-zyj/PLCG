/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72548
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
    var_11 = ((/* implicit */unsigned char) var_7);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        arr_2 [(short)11] [i_0] = min((((unsigned char) var_7)), (arr_1 [i_0] [(signed char)0]));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) arr_5 [(_Bool)1] [(_Bool)0])))), (((/* implicit */int) ((15888380571629460793ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))))) ? (min(((+(11435628699564322546ULL))), (((/* implicit */unsigned long long int) min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned char) arr_4 [(unsigned short)10]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [i_1] [i_0])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_2]))))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))));
                    arr_7 [i_0 + 2] = ((/* implicit */short) var_3);
                }
            } 
        } 
        var_13 = ((unsigned int) (+(((/* implicit */int) max((arr_0 [i_0 - 3] [i_0]), (((/* implicit */unsigned char) (signed char)58)))))));
        arr_8 [i_0] [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(signed char)3] [i_0 + 1]))) : (max((15888380571629460793ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0 - 3] [i_0])) * (((/* implicit */int) arr_3 [i_0] [(unsigned char)9]))))) < (min((((/* implicit */unsigned long long int) arr_4 [i_0 - 3])), (2558363502080090823ULL))))))) : (15888380571629460786ULL)));
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) 2558363502080090797ULL))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 19; i_4 += 1) 
        {
            for (unsigned char i_5 = 1; i_5 < 15; i_5 += 1) 
            {
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 0; i_7 < 19; i_7 += 1) 
                        {
                            arr_23 [i_3] [i_4] [i_4] [(_Bool)1] [i_5] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(15888380571629460804ULL)))) ? (15888380571629460819ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_6 - 1])))));
                            arr_24 [i_5] [i_3] [i_4] [(short)1] [i_6 - 1] [4LL] = ((/* implicit */signed char) arr_18 [i_4] [i_4] [i_4] [i_4]);
                        }
                        for (signed char i_8 = 0; i_8 < 19; i_8 += 3) 
                        {
                            arr_27 [i_5] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_10 [i_5 + 1] [i_5 - 1]))));
                            var_15 *= ((/* implicit */_Bool) ((var_7) ? ((+(((/* implicit */int) arr_20 [i_3] [i_6])))) : (((/* implicit */int) arr_13 [(unsigned char)9] [i_4]))));
                            var_16 |= ((/* implicit */signed char) (+((~(((/* implicit */int) var_9))))));
                        }
                        arr_28 [i_5] = ((/* implicit */unsigned long long int) arr_25 [i_3] [i_3] [i_3] [i_3] [i_5] [i_3]);
                        /* LoopSeq 4 */
                        for (unsigned char i_9 = 0; i_9 < 19; i_9 += 4) 
                        {
                            arr_31 [i_5] [i_5] [i_6] [i_9] = ((_Bool) arr_18 [i_5 + 2] [i_5 + 2] [i_5 + 2] [i_5 + 2]);
                            arr_32 [i_9] [i_9] &= ((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_5 - 1] [i_5 + 2] [i_5 - 1])) - (((/* implicit */int) arr_11 [i_5] [i_5 + 1] [i_5]))));
                        }
                        for (short i_10 = 0; i_10 < 19; i_10 += 4) 
                        {
                            arr_35 [i_10] [i_10] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_3] [i_3] [i_5 - 1] [(unsigned char)0] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-30))) : (276858400021138704ULL)))) ? (((/* implicit */int) (!(var_2)))) : ((~(((/* implicit */int) arr_12 [i_4] [i_3]))))));
                            var_17 = ((/* implicit */unsigned long long int) arr_12 [i_3] [i_3]);
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            arr_38 [i_4] [i_5] [i_4] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */int) arr_36 [i_5] [i_5] [i_5] [i_5 + 4] [i_5] [i_5] [i_11])) >> (((((/* implicit */int) arr_30 [i_3] [i_5] [i_5 - 1] [i_5 + 3] [i_5])) - (87)))));
                            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [(signed char)17] [i_4] [i_6 - 1] [i_4])) ? ((-(15888380571629460785ULL))) : (((var_9) ? (((/* implicit */unsigned long long int) -851747093534015619LL)) : (2558363502080090805ULL))))))));
                        }
                        for (signed char i_12 = 2; i_12 < 17; i_12 += 1) 
                        {
                            arr_41 [i_3] [i_3] [i_3] [i_3] [i_5] = (i_5 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)116)) << (((((/* implicit */int) arr_39 [i_5] [i_4] [i_4] [i_4] [i_4])) + (4340)))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) >= (((/* implicit */int) var_0))))) : (((/* implicit */int) (!(var_9))))))) : (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)116)) << (((((((/* implicit */int) arr_39 [i_5] [i_4] [i_4] [i_4] [i_4])) + (4340))) - (15298)))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) >= (((/* implicit */int) var_0))))) : (((/* implicit */int) (!(var_9)))))));
                            var_19 &= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_22 [i_3] [i_3] [i_5] [(unsigned short)6] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_25 [i_3] [i_3] [i_3] [i_3] [(unsigned char)10] [i_3])))));
                            arr_42 [i_3] [i_3] [i_5] [i_5] [i_12] [i_12 + 1] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_12 - 2])) ? (-851747093534015613LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_12 - 2])))));
                            arr_43 [i_3] [i_5] [(_Bool)1] [(_Bool)1] [i_6 - 1] [i_6 - 1] [(unsigned char)12] = ((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (32768)));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_13 = 2; i_13 < 16; i_13 += 4) 
        {
            for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_15 = 0; i_15 < 19; i_15 += 3) 
                    {
                        for (signed char i_16 = 2; i_16 < 18; i_16 += 4) 
                        {
                            {
                                var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_14] [i_14] [i_14 + 1] [i_14 + 1] [i_15] [(short)17])) ? (var_1) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) (signed char)37)) : (((/* implicit */int) var_7)));
                                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 15888380571629460811ULL)) ? ((-(((/* implicit */int) (signed char)77)))) : ((~(((/* implicit */int) (_Bool)1)))))))));
                            }
                        } 
                    } 
                    arr_57 [i_3] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) var_6))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_17 = 0; i_17 < 19; i_17 += 2) 
                    {
                        var_22 &= (+((-(8ULL))));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((16962955797439159662ULL) + (2558363502080090794ULL)))) ? (((/* implicit */int) (unsigned short)11)) : ((~(((/* implicit */int) (_Bool)1))))));
                    }
                    for (unsigned char i_18 = 0; i_18 < 19; i_18 += 4) 
                    {
                        arr_63 [i_3] [i_3] = (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_3)) ^ (arr_37 [i_3] [i_3] [i_3] [i_18] [i_18])))));
                        /* LoopSeq 1 */
                        for (signed char i_19 = 4; i_19 < 15; i_19 += 1) 
                        {
                            var_24 -= ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_1)))) ? ((-(arr_15 [(unsigned char)5]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_61 [i_19 + 2] [i_14] [i_13] [i_3])) : (((/* implicit */int) arr_11 [i_14] [(signed char)3] [i_14 + 1])))))));
                            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((((/* implicit */int) arr_56 [i_3] [(unsigned char)8] [i_14] [i_18] [10U])) ^ (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)197))))))))));
                        }
                        /* LoopSeq 2 */
                        for (int i_20 = 0; i_20 < 19; i_20 += 3) 
                        {
                            var_26 = ((/* implicit */unsigned short) arr_12 [i_3] [i_13]);
                            arr_71 [i_3] [i_13 + 3] [(_Bool)1] [(short)9] [i_20] &= ((/* implicit */signed char) arr_40 [i_3] [i_13] [i_14] [(unsigned short)17] [(short)8]);
                            var_27 |= ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_12 [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29328))) : (14027403585288770302ULL))));
                        }
                        for (signed char i_21 = 0; i_21 < 19; i_21 += 2) 
                        {
                            arr_74 [(_Bool)0] [i_13] [i_14] [(_Bool)0] [i_21] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_73 [i_3] [i_13] [i_13 - 1] [i_18] [i_14 + 1]))));
                            arr_75 [i_14] [i_14] [i_14] [i_18] [i_21] [i_13] = ((/* implicit */unsigned char) arr_53 [i_3] [i_13] [i_13]);
                        }
                    }
                }
            } 
        } 
        arr_76 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((var_7) ? (2090716059571449678ULL) : (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)56)))))));
    }
}
