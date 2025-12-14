/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61527
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
        for (signed char i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_1] [i_1] [i_3] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_1 [i_0] [i_0]))));
                            var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3]))) ^ (min((arr_2 [i_0]), (((/* implicit */long long int) arr_3 [3U] [i_1 + 3] [i_2]))))))) ? (max((((((/* implicit */_Bool) (unsigned short)64323)) ? (var_3) : (((/* implicit */int) (short)-11832)))), ((~(((/* implicit */int) arr_1 [i_0] [i_0])))))) : (var_7)));
                            arr_13 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_3)))) && (((/* implicit */_Bool) ((((/* implicit */int) ((340348022) > (((/* implicit */int) var_6))))) & (((/* implicit */int) var_6)))))));
                        }
                    } 
                } 
                arr_14 [i_0] [i_0] [i_1 + 1] = ((/* implicit */int) (-(arr_5 [i_0] [i_1] [i_1])));
                arr_15 [i_0] = ((((/* implicit */_Bool) min((arr_7 [i_0]), (((/* implicit */long long int) (signed char)-97))))) ? (arr_7 [i_0]) : (((((/* implicit */_Bool) arr_8 [i_1 + 3] [i_1 + 3])) ? (arr_7 [i_0]) : (((/* implicit */long long int) arr_8 [i_0] [i_0])))));
                arr_16 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_8) ? (arr_10 [i_0] [i_0] [i_1 - 1] [i_1 - 1]) : (var_9)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) (signed char)-97)) ? (var_9) : (((/* implicit */int) var_2))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)18219))))) ? (3510594019U) : (((/* implicit */unsigned int) ((var_9) / (((/* implicit */int) (signed char)10)))))))));
                /* LoopNest 2 */
                for (unsigned short i_4 = 3; i_4 < 18; i_4 += 4) 
                {
                    for (unsigned int i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        {
                            var_12 = var_4;
                            arr_23 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_4);
                        }
                    } 
                } 
            }
        } 
    } 
    var_13 += var_1;
    var_14 = ((/* implicit */unsigned int) var_7);
    /* LoopNest 2 */
    for (unsigned char i_6 = 0; i_6 < 17; i_6 += 3) 
    {
        for (unsigned short i_7 = 0; i_7 < 17; i_7 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 4) 
                {
                    arr_34 [i_6] [i_6] [i_6] [i_8] = ((/* implicit */signed char) ((((/* implicit */int) ((var_5) == (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) > (((/* implicit */int) ((arr_28 [i_7] [i_7]) < (((/* implicit */int) arr_9 [i_6])))))));
                    arr_35 [i_6] [i_7] [i_6] = ((/* implicit */signed char) ((int) arr_9 [i_7]));
                    /* LoopSeq 2 */
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) arr_17 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 - 1]))));
                        var_16 &= ((/* implicit */int) (~(arr_8 [(unsigned char)0] [i_7])));
                    }
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        arr_40 [7ULL] [i_7] [13U] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) - (-340348010)))) ^ (((((/* implicit */_Bool) 340348015)) ? (((/* implicit */unsigned int) 340348022)) : (arr_27 [i_7] [i_6])))));
                        var_17 = ((/* implicit */int) ((long long int) arr_38 [i_7] [i_8] [i_8] [i_10 - 1]));
                    }
                }
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 1) 
                {
                    for (int i_12 = 0; i_12 < 17; i_12 += 2) 
                    {
                        {
                            var_18 = (+(((((/* implicit */_Bool) arr_27 [i_12] [i_7])) ? (((/* implicit */unsigned int) var_9)) : (arr_27 [i_7] [i_12]))));
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_6])) ? (((/* implicit */int) ((unsigned char) var_6))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (-340348010) : (arr_19 [i_6] [0LL] [0LL] [i_6])))) && (((/* implicit */_Bool) arr_39 [i_6] [i_7] [i_11] [i_12])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_13 = 1; i_13 < 14; i_13 += 4) 
                {
                    for (short i_14 = 3; i_14 < 16; i_14 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_14 - 2])) && (((_Bool) arr_5 [i_6] [i_13 - 1] [i_6]))));
                            arr_49 [i_6] [i_7] [i_13] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_37 [i_6] [i_7] [i_6] [(_Bool)1] [i_14])) && (((/* implicit */_Bool) var_9))));
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) var_2))));
                            arr_50 [i_7] [i_6] [i_13] [i_14] = ((/* implicit */_Bool) ((arr_32 [i_14] [i_6] [i_6] [i_6]) << (max((((/* implicit */unsigned long long int) var_8)), (0ULL)))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned short i_15 = 3; i_15 < 14; i_15 += 4) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_16 = 2; i_16 < 16; i_16 += 2) 
                    {
                        var_22 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_16] [i_16]))) - (((((/* implicit */_Bool) arr_30 [i_6] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (arr_5 [i_16] [i_16] [i_16])))));
                        arr_55 [i_6] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_10)))) && ((!(((/* implicit */_Bool) var_2))))));
                        var_23 = ((/* implicit */long long int) var_7);
                    }
                    arr_56 [i_6] [i_7] [i_6] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((max((-1835314256), (var_9))), (((((/* implicit */_Bool) arr_2 [i_6])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_18 [i_6] [i_6]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_6] [i_15])) ? (0ULL) : (((/* implicit */unsigned long long int) arr_41 [i_6] [i_6] [(unsigned short)6] [(signed char)1]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_6]))) : (((((/* implicit */_Bool) 340348009)) ? (((/* implicit */long long int) -1315689996)) : (-1007794815741075592LL))))) : (((/* implicit */long long int) ((int) (+(var_9)))))));
                    arr_57 [i_6] [i_6] [i_15] = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) 3344667506703361260LL)))) ? ((+(arr_8 [i_15] [(_Bool)1]))) : (((unsigned int) arr_7 [i_6])))) & (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
                }
                for (long long int i_17 = 1; i_17 < 16; i_17 += 2) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                    {
                        for (unsigned int i_19 = 3; i_19 < 16; i_19 += 3) 
                        {
                            {
                                var_24 = min((var_4), (((/* implicit */int) ((unsigned short) arr_66 [i_6] [i_17] [i_18 - 1] [i_19 - 2] [i_19 - 2]))));
                                var_25 = ((/* implicit */unsigned int) ((arr_7 [i_6]) / (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_7] [i_7])) ? (75428575U) : (((/* implicit */unsigned int) var_3))))) ? (((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */int) (unsigned short)50531)))) : (((/* implicit */int) var_8)))))));
                                arr_67 [(unsigned char)1] [i_6] [i_17 - 1] [i_6] [i_6] = ((/* implicit */unsigned short) max((var_5), (((/* implicit */unsigned int) ((unsigned short) min((((/* implicit */unsigned int) arr_42 [i_7] [i_17])), (arr_0 [i_6])))))));
                                arr_68 [i_6] [9] [i_6] [i_18 - 1] [i_18 - 1] = ((/* implicit */unsigned short) ((arr_11 [i_6] [i_7]) * (((/* implicit */unsigned int) ((643250509) & (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-21798)) : (arr_41 [i_17] [i_17] [i_17] [i_17 - 1]))))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) arr_10 [i_6] [i_7] [18] [i_17]))));
                }
            }
        } 
    } 
}
