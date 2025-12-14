/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81945
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
    var_17 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_16))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_9))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_14))))), (var_10)))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_18 = ((/* implicit */long long int) arr_0 [i_0]);
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)52)) ? (((((/* implicit */_Bool) var_15)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((unsigned long long int) -7009090293891792605LL))))) ? (((/* implicit */unsigned long long int) min((0), (((/* implicit */int) arr_0 [(unsigned short)12]))))) : (((unsigned long long int) max((var_0), (((/* implicit */int) arr_1 [i_0] [i_0])))))));
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1 + 1] [i_1 - 1])) + (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_15)))))));
            /* LoopSeq 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 0)))) || ((!(((/* implicit */_Bool) arr_6 [i_1 + 1] [22ULL] [i_2])))))))));
                arr_8 [i_0] [i_1] [(unsigned short)8] [i_2] = ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) (short)-13006)) ? (arr_4 [i_0] [i_0] [i_2]) : (((/* implicit */long long int) var_12)))), (((/* implicit */long long int) max((18), (((/* implicit */int) (unsigned short)34029))))))) != (((/* implicit */long long int) (((((-(((/* implicit */int) arr_6 [i_2] [i_1 + 1] [8ULL])))) + (2147483647))) >> (((((/* implicit */int) max(((short)6844), (((/* implicit */short) var_3))))) - (6835))))))));
                arr_9 [(short)1] [(short)1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1 + 1] [(unsigned short)22] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_4 [i_1 - 1] [i_1] [(unsigned short)23]) != (arr_4 [i_1 + 1] [i_2] [i_2]))))) : (((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_2] [i_2])) ? (arr_4 [i_1 + 1] [i_1 + 1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
                var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_0])) ? (((/* implicit */int) ((unsigned short) arr_1 [i_1 - 1] [i_1]))) : (((int) arr_1 [i_1 - 1] [i_0]))));
                var_22 += (short)-13014;
            }
            for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        {
                            arr_18 [i_0] [i_1] [i_3] [i_4] = ((/* implicit */unsigned char) max((min((6663969425159723640ULL), (((/* implicit */unsigned long long int) arr_6 [i_1 - 1] [(unsigned short)21] [i_1 - 1])))), (((/* implicit */unsigned long long int) ((_Bool) var_2)))));
                            var_23 *= (!(((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_1 + 1] [i_3] [i_5])) - (((/* implicit */int) arr_6 [i_5] [i_1] [i_0]))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */_Bool) max((3614721181U), (((/* implicit */unsigned int) (unsigned short)34706))));
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 21; i_6 += 3) 
                {
                    for (unsigned short i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        {
                            arr_24 [i_0] [i_6] [i_3] [i_3] [i_7] = (!(((/* implicit */_Bool) (+(arr_10 [i_0] [i_0] [i_3])))));
                            var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */int) ((-7009090293891792598LL) > (arr_4 [i_0] [13LL] [i_0])))), (((0) >> (((((/* implicit */int) var_13)) + (28267))))))))));
                            arr_25 [i_7] [i_6] [i_6] [i_1 - 1] [(unsigned short)13] = ((/* implicit */unsigned short) ((int) arr_7 [(unsigned short)23] [i_6 + 1] [i_6] [i_6]));
                            arr_26 [i_6] [(signed char)6] = arr_23 [i_0] [i_7] [i_3] [i_6] [i_0] [i_3];
                            arr_27 [i_6] [i_6 - 2] [i_6] = ((/* implicit */unsigned short) ((((arr_20 [(_Bool)1] [i_6] [16ULL]) != (((/* implicit */unsigned long long int) (~(7009090293891792613LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)26), (((/* implicit */unsigned short) ((short) var_8))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_3]))) & (((arr_19 [(short)23] [i_1] [i_1] [i_6] [i_7]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7)))))))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (-(((/* implicit */int) (unsigned short)65534)))))));
            }
            for (unsigned short i_8 = 2; i_8 < 22; i_8 += 2) 
            {
                arr_30 [i_0] [3] [i_0] [16ULL] = ((/* implicit */short) ((max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) - (14577350791064626550ULL))), (((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)65510))))) - (((/* implicit */unsigned long long int) arr_15 [i_8] [i_0]))));
                arr_31 [(unsigned char)22] [i_8 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(14577350791064626541ULL)))) ? (((/* implicit */int) ((((/* implicit */int) max((var_14), (arr_16 [i_1])))) > (((int) 9223372036854775807LL))))) : (((var_12) ^ (((/* implicit */int) arr_0 [i_0]))))));
                arr_32 [i_1 - 1] [i_1 - 1] = ((/* implicit */unsigned int) arr_1 [(short)14] [i_1]);
                arr_33 [18U] [18U] [i_8] = ((/* implicit */int) var_14);
            }
        }
        for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 4) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_10 = 1; i_10 < 22; i_10 += 2) 
            {
                var_27 = ((signed char) arr_37 [i_10] [i_10 - 1] [i_10]);
                arr_38 [i_10] [i_9] [(unsigned short)8] = ((/* implicit */signed char) var_4);
            }
            /* vectorizable */
            for (signed char i_11 = 0; i_11 < 24; i_11 += 2) 
            {
                arr_41 [i_0] [i_9] [i_11] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_14))))));
                arr_42 [i_0] [i_11] = ((/* implicit */unsigned char) (((_Bool)1) && (((/* implicit */_Bool) (unsigned short)26))));
            }
            arr_43 [i_0] [(_Bool)1] = ((/* implicit */long long int) arr_22 [13]);
            /* LoopNest 2 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (unsigned long long int i_13 = 3; i_13 < 22; i_13 += 1) 
                {
                    {
                        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) arr_15 [i_12] [i_13]))));
                        arr_49 [i_13] [i_0] [i_9] [(_Bool)1] [(short)16] = ((/* implicit */unsigned int) arr_7 [i_13] [i_13] [i_13] [i_13 - 3]);
                        var_29 = ((/* implicit */unsigned int) arr_36 [i_0] [i_9] [i_12] [(unsigned char)2]);
                        arr_50 [i_0] [i_9] [i_13] [i_12] [i_13 - 3] = ((/* implicit */unsigned long long int) (-(arr_47 [i_0] [i_0] [i_9] [(short)21] [(short)21] [i_13])));
                    }
                } 
            } 
        }
    }
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        arr_53 [(_Bool)1] = ((/* implicit */short) ((14577350791064626524ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)127)))));
        /* LoopNest 2 */
        for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
        {
            for (short i_16 = 3; i_16 < 21; i_16 += 2) 
            {
                {
                    var_30 = ((/* implicit */int) min(((unsigned short)64362), ((unsigned short)55992)));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_17 = 0; i_17 < 22; i_17 += 2) 
                    {
                        var_31 = 68719214592ULL;
                        arr_64 [i_17] [i_17] [i_14] [i_15] [i_14] = ((/* implicit */short) max((max((((unsigned long long int) var_6)), (((/* implicit */unsigned long long int) 2829052092U)))), (((/* implicit */unsigned long long int) max(((~(arr_7 [i_14] [i_15] [i_16] [i_17]))), (((/* implicit */long long int) max((2527110433U), (((/* implicit */unsigned int) (unsigned short)40794))))))))));
                        var_32 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1767856863U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
                        arr_65 [i_14] [i_14] [(short)12] [i_14] [i_14] [i_14] = ((/* implicit */unsigned short) ((long long int) (unsigned short)1173));
                    }
                }
            } 
        } 
        var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) (((!(((/* implicit */_Bool) var_16)))) ? (((3988867822U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_14] [i_14] [i_14]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)32766)) ? (((/* implicit */int) (unsigned short)65520)) : (((/* implicit */int) (unsigned short)64375))))))))));
    }
    for (unsigned long long int i_18 = 0; i_18 < 15; i_18 += 2) 
    {
        var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) arr_56 [i_18] [i_18]))));
        var_35 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) ((signed char) arr_3 [i_18] [i_18]))))));
        arr_68 [i_18] [i_18] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_1)))) ? (arr_61 [i_18] [i_18] [i_18] [i_18]) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_9)))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64350))) & (11782774648549827967ULL)))));
    }
    var_36 = ((/* implicit */unsigned short) ((((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)64360))) / (var_10))) & (((/* implicit */long long int) var_12)))) > (((/* implicit */long long int) ((/* implicit */int) (short)-13006)))));
}
