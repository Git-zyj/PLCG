/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58124
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_11 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-15)) ? (603956541911280935LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-11168)))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1486823518795207913LL)) ? (arr_2 [i_0] [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34121)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))) : (((((/* implicit */_Bool) (unsigned short)28689)) ? (var_1) : (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1] [i_2]))))));
                var_13 = ((/* implicit */long long int) ((var_7) - (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_0])))));
                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0] [10ULL] [(unsigned char)0] [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)5452))));
                /* LoopSeq 1 */
                for (short i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [(unsigned short)11] [i_1] [i_0])) ? (arr_2 [i_0] [i_0] [i_0]) : (arr_2 [i_0] [i_1] [(short)5])));
                    var_16 = ((/* implicit */unsigned short) ((((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_2 [i_1] [(signed char)4] [i_3]))) >= ((((_Bool)0) ? (var_7) : (((/* implicit */unsigned int) arr_1 [i_2]))))));
                    arr_10 [i_0] = ((/* implicit */long long int) var_10);
                    var_17 = arr_5 [i_1] [i_1] [i_1] [(signed char)7];
                }
            }
            var_18 = ((/* implicit */long long int) (short)32767);
            /* LoopSeq 1 */
            for (int i_4 = 2; i_4 < 11; i_4 += 1) 
            {
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [(short)4] [i_1] [i_4 - 1])) ? (((/* implicit */int) arr_8 [(signed char)5] [(signed char)5] [i_4 - 1])) : (((/* implicit */int) var_5))));
                /* LoopNest 2 */
                for (unsigned int i_5 = 2; i_5 < 11; i_5 += 3) 
                {
                    for (int i_6 = 1; i_6 < 11; i_6 += 3) 
                    {
                        {
                            arr_18 [i_1] [i_4] [i_5] [(unsigned short)10] = ((/* implicit */unsigned int) 1775342397);
                            var_20 = ((/* implicit */unsigned long long int) var_8);
                        }
                    } 
                } 
                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)38)) : (((/* implicit */int) var_0))));
            }
        }
        var_22 = ((/* implicit */unsigned char) ((arr_17 [i_0] [i_0] [i_0] [4LL] [i_0]) - (var_7)));
        /* LoopNest 3 */
        for (unsigned short i_7 = 0; i_7 < 12; i_7 += 1) 
        {
            for (signed char i_8 = 0; i_8 < 12; i_8 += 1) 
            {
                for (int i_9 = 0; i_9 < 12; i_9 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_10 = 1; i_10 < 11; i_10 += 3) /* same iter space */
                        {
                            var_23 = ((/* implicit */signed char) arr_9 [i_10 + 1] [i_10 - 1] [i_0] [i_10 - 1] [9ULL] [i_0]);
                            var_24 = ((/* implicit */unsigned short) arr_7 [i_0]);
                            arr_28 [i_0] [i_7] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [i_7] [i_7] [i_10 + 1] [i_10 + 1] [(unsigned short)8] [i_10 + 1] [i_10 - 1])) ? (arr_9 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10] [i_10 - 1] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_10 - 1] [i_7] [5U])))));
                        }
                        for (unsigned char i_11 = 1; i_11 < 11; i_11 += 3) /* same iter space */
                        {
                            arr_31 [i_7] [i_7] [i_8] [i_9] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) 658082834212391360ULL)) ? (6122080091389450892LL) : (((/* implicit */long long int) ((/* implicit */int) (short)4095)))));
                            arr_32 [i_9] [4] [4] [(short)8] [i_8] [4] [(short)8] |= ((/* implicit */_Bool) arr_27 [i_11] [i_11 - 1] [i_11 + 1] [i_11] [i_11 - 1] [i_11] [(_Bool)1]);
                        }
                        for (unsigned int i_12 = 0; i_12 < 12; i_12 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) arr_12 [i_0] [i_9] [i_9]))));
                            var_26 = var_4;
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_0] [i_0] [(short)0] [i_0] [i_7] [i_7] [i_0])) ? (arr_25 [i_0] [i_7] [i_7] [i_9] [i_12]) : (((/* implicit */int) arr_26 [i_0] [i_12] [i_8] [i_12] [i_7] [i_0] [i_8]))));
                        }
                        var_28 = ((/* implicit */short) var_1);
                        var_29 = arr_12 [9] [i_7] [3ULL];
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (int i_13 = 2; i_13 < 11; i_13 += 2) 
        {
            for (int i_14 = 0; i_14 < 12; i_14 += 1) 
            {
                for (long long int i_15 = 0; i_15 < 12; i_15 += 2) 
                {
                    {
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_14] [i_15] [(_Bool)1] [(_Bool)1]))) : (arr_40 [i_0] [(unsigned short)5] [(short)4])));
                        /* LoopSeq 1 */
                        for (long long int i_16 = 1; i_16 < 8; i_16 += 3) 
                        {
                            arr_48 [i_0] [i_0] [3U] [i_14] [i_16] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_46 [i_0] [i_13 - 2] [i_14] [i_14] [i_16])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0)))) <= (((/* implicit */int) arr_37 [i_16 + 1] [i_14] [i_13 - 2]))));
                            var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)57)) ? (arr_45 [i_13 + 1] [i_16 + 4] [i_16] [i_16] [(unsigned short)9]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
                        }
                        var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((((/* implicit */int) arr_38 [i_15] [i_14] [i_13] [i_15])) == (((/* implicit */int) arr_44 [i_13 - 2] [i_13 - 2])))))));
                        /* LoopSeq 3 */
                        for (unsigned int i_17 = 0; i_17 < 12; i_17 += 2) 
                        {
                            var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_15 [i_15] [(unsigned short)0] [(unsigned short)0] [i_15] [i_15] [(unsigned short)0]))))) ? (((int) 9LL)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_29 [i_0] [i_17] [i_14] [i_15] [10U] [i_17])) : (((/* implicit */int) (signed char)-8)))))))));
                            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) 2249071339U))) ? (((/* implicit */int) arr_27 [5] [i_0] [1U] [(_Bool)1] [i_14] [i_15] [i_17])) : (((((/* implicit */_Bool) (unsigned short)62836)) ? (((/* implicit */int) (signed char)-121)) : (((/* implicit */int) var_5))))));
                        }
                        for (short i_18 = 3; i_18 < 9; i_18 += 4) 
                        {
                            var_35 = ((/* implicit */int) ((((/* implicit */_Bool) 25LL)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_53 [i_13 - 2] [i_13 - 2] [i_18] [i_18 - 1] [i_18 - 1])))));
                            var_36 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) (short)7841))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_13 - 1] [i_13 - 1] [i_13 - 1])))));
                            arr_55 [i_18] [i_14] [i_14] [i_14] [i_14] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)12231)) >= (((/* implicit */int) arr_50 [i_14] [i_18 + 2]))));
                            var_37 = ((/* implicit */unsigned long long int) (signed char)127);
                            arr_56 [i_0] [i_0] [i_0] [i_14] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned char) var_1));
                        }
                        for (unsigned char i_19 = 2; i_19 < 8; i_19 += 3) 
                        {
                            var_38 = ((/* implicit */unsigned int) var_3);
                            arr_59 [(unsigned char)10] [i_19] [i_19] [i_19] [(unsigned char)10] [i_14] [i_19] = ((/* implicit */unsigned long long int) arr_42 [i_19 + 1] [i_19] [i_19 + 1] [i_19]);
                        }
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 2 */
    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
    {
        var_39 = ((/* implicit */unsigned char) (unsigned short)50692);
        var_40 = ((/* implicit */unsigned char) ((((((/* implicit */int) ((signed char) (unsigned char)57))) >= (((/* implicit */int) (short)0)))) ? ((((_Bool)1) ? (((/* implicit */int) arr_61 [i_20])) : (((((/* implicit */int) var_10)) << (((((/* implicit */int) var_3)) + (33))))))) : (((/* implicit */int) ((signed char) var_0)))));
        var_41 = ((/* implicit */unsigned short) 1165774866454955721ULL);
    }
    for (short i_21 = 0; i_21 < 16; i_21 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_22 = 3; i_22 < 15; i_22 += 2) 
        {
            var_42 = ((/* implicit */int) ((unsigned long long int) ((_Bool) arr_68 [i_22 + 1] [i_22 - 2])));
            /* LoopNest 3 */
            for (unsigned short i_23 = 4; i_23 < 13; i_23 += 3) 
            {
                for (unsigned char i_24 = 2; i_24 < 14; i_24 += 1) 
                {
                    for (unsigned int i_25 = 2; i_25 < 15; i_25 += 4) 
                    {
                        {
                            arr_76 [i_22] [i_22] [i_22] [i_23] [i_22] [i_25] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_68 [i_24 + 1] [i_25 - 1]))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) arr_71 [i_22] [i_22] [i_22])) : (0))))) : (((((/* implicit */_Bool) arr_62 [i_22 + 1])) ? (((/* implicit */int) arr_62 [i_22 - 1])) : (((/* implicit */int) var_6))))));
                            var_43 = ((/* implicit */unsigned int) arr_72 [7U] [i_25]);
                        }
                    } 
                } 
            } 
            var_44 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_71 [i_21] [8U] [i_22 - 3])) : (((/* implicit */int) (unsigned short)14506))))) ? (((((/* implicit */_Bool) arr_71 [(short)4] [(short)4] [i_21])) ? (((/* implicit */int) arr_71 [i_21] [(signed char)0] [i_21])) : (((/* implicit */int) arr_71 [i_21] [(signed char)4] [i_22 - 3])))) : (((((/* implicit */int) var_4)) | (((/* implicit */int) arr_71 [i_21] [12U] [i_22 - 1]))))));
        }
        var_45 = ((/* implicit */short) min((var_45), (((/* implicit */short) var_6))));
        var_46 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_62 [i_21])) ? (((/* implicit */int) arr_62 [i_21])) : (((/* implicit */int) arr_62 [i_21]))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_75 [6] [i_21]))) >= (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 2999180026286493275LL)) : (arr_73 [(unsigned char)1] [(unsigned char)1] [i_21] [i_21] [i_21])))))) : (1905579368)));
    }
    /* LoopSeq 1 */
    for (unsigned char i_26 = 2; i_26 < 19; i_26 += 2) 
    {
        var_47 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) ((unsigned short) var_9)))) ? (((unsigned long long int) ((((/* implicit */_Bool) arr_77 [i_26])) ? (((/* implicit */int) (signed char)30)) : (((/* implicit */int) (unsigned short)18187))))) : (arr_78 [i_26 - 2])));
        /* LoopNest 3 */
        for (unsigned short i_27 = 0; i_27 < 23; i_27 += 3) 
        {
            for (unsigned char i_28 = 0; i_28 < 23; i_28 += 3) 
            {
                for (unsigned long long int i_29 = 1; i_29 < 22; i_29 += 4) 
                {
                    {
                        var_48 ^= ((/* implicit */signed char) ((((/* implicit */int) var_10)) << (((/* implicit */int) (signed char)1))));
                        var_49 = ((/* implicit */long long int) var_8);
                    }
                } 
            } 
        } 
        arr_87 [i_26] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_83 [i_26 + 3] [i_26] [i_26] [i_26 - 1])) ? (arr_83 [i_26 - 1] [i_26 + 1] [i_26 + 1] [i_26 - 2]) : (arr_83 [i_26 + 3] [(signed char)6] [i_26] [i_26 + 3]))) / (arr_83 [i_26 + 4] [i_26] [i_26] [i_26 - 2])));
    }
    var_50 |= ((/* implicit */signed char) var_9);
}
