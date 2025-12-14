/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72030
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 15; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (signed char i_4 = 1; i_4 < 14; i_4 += 1) 
                            {
                                arr_15 [(signed char)2] [i_0] [6U] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0]))) | (6U)));
                                arr_16 [i_4 - 1] [i_3] [i_1] [i_1] [i_1] [i_0] |= ((/* implicit */signed char) var_10);
                                arr_17 [6ULL] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */int) arr_7 [(signed char)7] [i_2] [i_3])) : (((/* implicit */int) (_Bool)1)))));
                                arr_18 [i_0] [i_0] [4LL] [i_2] [i_2] [i_0] [i_4 - 1] = ((/* implicit */unsigned short) ((unsigned long long int) ((signed char) (_Bool)1)));
                                arr_19 [i_4] [i_2] [i_2] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_6 [i_0] [(signed char)15] [i_2])) ? (var_4) : (((/* implicit */int) arr_8 [i_1] [i_2] [i_2]))))));
                            }
                            for (signed char i_5 = 0; i_5 < 16; i_5 += 1) 
                            {
                                arr_23 [i_0] [i_1] [14LL] = ((/* implicit */unsigned char) min((arr_10 [i_5] [i_1]), (((/* implicit */long long int) ((_Bool) -2147483640)))));
                                arr_24 [i_0] [i_3] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)44693)) | (((/* implicit */int) (_Bool)1))));
                                arr_25 [i_2] [i_2 - 3] [(_Bool)1] [i_3] [i_2] = ((/* implicit */unsigned char) arr_14 [i_1] [i_2] [i_2] [i_1] [i_1] [i_1] [i_1]);
                                arr_26 [i_1] [i_1] [i_2] [(_Bool)1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_5 [i_2 - 1])) || (((/* implicit */_Bool) arr_9 [0LL] [i_2 - 3] [i_2] [(signed char)7])))) ? (((arr_5 [i_2 + 1]) - (((/* implicit */long long int) 6U)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_2 - 3])) ? (((/* implicit */int) arr_9 [i_0] [i_2 - 1] [i_2 - 1] [i_2 - 1])) : (((/* implicit */int) arr_9 [(unsigned short)8] [i_2 + 1] [i_2] [i_3])))))));
                            }
                            for (unsigned char i_6 = 2; i_6 < 15; i_6 += 2) 
                            {
                                arr_29 [i_0] [i_1] [i_2] [i_3] [i_6] = ((/* implicit */unsigned short) min((5316820133306305104ULL), (((/* implicit */unsigned long long int) 4294967289U))));
                                arr_30 [i_0] [i_0] [i_0] [i_0] [(unsigned short)14] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) (signed char)-17)) & (arr_4 [i_0] [i_2 - 2] [i_6 + 1])))));
                                arr_31 [(signed char)4] [(signed char)4] [(signed char)4] [i_2] [14] [i_3] [1ULL] = ((/* implicit */unsigned char) (~(((((/* implicit */int) var_5)) >> ((+(((/* implicit */int) var_12))))))));
                                arr_32 [i_6 + 1] [i_6] [i_1] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) arr_9 [i_2 - 3] [12] [i_6 - 2] [i_3]);
                                arr_33 [i_0] [i_1] [(_Bool)1] [i_2] [i_6] = ((/* implicit */unsigned short) (((+(((/* implicit */int) ((arr_28 [i_2] [i_1] [i_1] [i_1] [i_1]) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)39)))))))) / (((/* implicit */int) min(((signed char)47), (((/* implicit */signed char) (_Bool)1)))))));
                            }
                            arr_34 [i_2] [i_2] [i_2] [(unsigned short)7] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((-4307035531765821045LL) + (4307035531765821068LL))))));
                        }
                    } 
                } 
                arr_35 [i_0] [i_1] = ((/* implicit */unsigned int) (signed char)-44);
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (6U)))) ? (((/* implicit */int) ((_Bool) var_0))) : (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (var_6))) : (((((/* implicit */_Bool) -5264182357205324805LL)) ? (var_4) : (((/* implicit */int) (unsigned short)53608))))))));
    /* LoopNest 2 */
    for (unsigned char i_7 = 2; i_7 < 12; i_7 += 1) 
    {
        for (unsigned short i_8 = 3; i_8 < 13; i_8 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_9 = 0; i_9 < 15; i_9 += 1) 
                {
                    arr_42 [i_7] [i_7] [i_7] = min((((/* implicit */int) arr_40 [i_8] [i_8] [i_7])), (((((/* implicit */int) arr_3 [i_8] [i_7 - 2])) ^ (((/* implicit */int) arr_11 [i_8 - 1] [i_8 - 3] [1ULL] [i_7 - 2])))));
                    arr_43 [i_7] [i_8 - 1] = ((/* implicit */unsigned short) min((((unsigned long long int) ((unsigned char) arr_11 [i_7] [i_8] [i_9] [i_7]))), (((/* implicit */unsigned long long int) ((unsigned short) max((((/* implicit */unsigned int) arr_21 [(unsigned short)12] [i_8] [(signed char)3] [(unsigned short)12])), (4294967275U)))))));
                }
                for (unsigned char i_10 = 1; i_10 < 14; i_10 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (signed char i_12 = 1; i_12 < 14; i_12 += 1) 
                        {
                            {
                                arr_51 [i_7] [i_11] [i_7] = ((/* implicit */long long int) var_12);
                                arr_52 [(unsigned short)10] [i_12] = ((/* implicit */signed char) max((((((int) (signed char)25)) * (((/* implicit */int) (!(((/* implicit */_Bool) 1963728369))))))), (arr_45 [i_7] [(unsigned short)14] [i_7 + 1])));
                            }
                        } 
                    } 
                    arr_53 [i_7] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_7] [i_10] [i_10] [i_10] [i_10 + 1])) ? ((+(((/* implicit */int) (unsigned char)232)))) : (((/* implicit */int) arr_50 [i_10 - 1] [i_10] [i_10 + 1] [13]))))) || (arr_2 [i_8 - 1]));
                    arr_54 [i_10] [10LL] [10LL] [i_7] = ((/* implicit */_Bool) var_11);
                    arr_55 [0LL] [i_8 - 3] [i_7] [0LL] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((-4307035531765821045LL) | (((/* implicit */long long int) ((/* implicit */int) max(((signed char)25), ((signed char)-52))))))))));
                }
                arr_56 [i_7 + 3] [i_7] [i_7] = (signed char)124;
                /* LoopNest 3 */
                for (long long int i_13 = 0; i_13 < 15; i_13 += 2) 
                {
                    for (signed char i_14 = 3; i_14 < 11; i_14 += 3) 
                    {
                        for (unsigned short i_15 = 4; i_15 < 12; i_15 += 3) 
                        {
                            {
                                arr_66 [i_7] [i_7] [3] [i_7] [i_7] [i_15] = (+(((int) arr_60 [i_7])));
                                arr_67 [i_7] [i_8] [(unsigned short)6] [i_13] [i_15] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_20 [i_13])) * (((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_57 [i_13]), (((/* implicit */unsigned short) (unsigned char)12)))))) / ((+(arr_62 [i_13] [i_14])))))));
                                arr_68 [i_7] [13ULL] [i_14] [13ULL] [i_8 - 2] [i_7] = ((/* implicit */_Bool) ((((/* implicit */int) min((arr_1 [i_8 - 2]), (((/* implicit */unsigned short) arr_63 [13ULL]))))) + (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (signed char)50)))) != (arr_61 [i_8] [i_8] [i_13] [i_8] [i_15] [i_7]))))));
                            }
                        } 
                    } 
                } 
                arr_69 [i_7] [i_7] [i_7 + 2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_61 [(_Bool)1] [i_7 + 2] [i_7] [i_8 - 1] [(_Bool)1] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_63 [i_7 - 1]))) : (arr_61 [(signed char)8] [i_7 + 2] [i_8] [i_8 - 3] [(signed char)8] [i_7]))))));
                arr_70 [i_7] = ((/* implicit */signed char) ((1696543727) % (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
}
