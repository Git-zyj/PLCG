/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97716
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (+(((((((/* implicit */_Bool) arr_5 [i_0 - 2] [i_1] [i_2] [i_2])) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_3 [i_0 + 1] [i_1] [i_0])))) % (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_4 [i_0] [i_2] [i_2])) : (((/* implicit */int) (short)3261)))))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 3; i_3 < 16; i_3 += 2) /* same iter space */
                    {
                        arr_9 [i_1] [i_1] [i_2] [i_3] = var_9;
                        arr_10 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */int) arr_8 [i_0] [i_1])), ((((~(((/* implicit */int) (unsigned short)22991)))) ^ (((/* implicit */int) arr_7 [(short)2] [i_1] [i_1] [i_3]))))));
                    }
                    for (unsigned char i_4 = 3; i_4 < 16; i_4 += 2) /* same iter space */
                    {
                        var_16 *= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) arr_11 [i_0] [i_0 + 1] [i_1] [i_2] [i_2])) : (((/* implicit */int) (short)14218))))) ? (((/* implicit */int) arr_11 [i_0 + 1] [i_1] [i_4 + 1] [i_0 - 1] [i_0 - 1])) : (((((/* implicit */_Bool) arr_6 [i_4])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_7 [(unsigned short)4] [(unsigned short)4] [i_1] [(unsigned short)10]))))))));
                        arr_14 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_1] [(unsigned short)1] [i_4])) ? ((+((-(((/* implicit */int) (short)-10493)))))) : (min((((((/* implicit */int) (unsigned short)22971)) - (((/* implicit */int) (unsigned char)34)))), ((+(((/* implicit */int) arr_5 [i_0 + 2] [i_1] [i_2] [i_4]))))))));
                    }
                    var_17 += ((/* implicit */unsigned short) var_8);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (short i_5 = 0; i_5 < 20; i_5 += 2) 
    {
        var_18 *= ((/* implicit */short) ((((/* implicit */int) (unsigned char)80)) ^ (((/* implicit */int) (unsigned short)21414))));
        var_19 *= arr_18 [i_5] [(unsigned char)12];
        var_20 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_15 [i_5])) ? (((/* implicit */int) arr_15 [i_5])) : (((/* implicit */int) arr_15 [i_5])))) <= (((((/* implicit */int) max((arr_17 [i_5] [(short)4]), (arr_17 [(short)9] [(unsigned char)19])))) % (((/* implicit */int) (short)-3245))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_6 = 2; i_6 < 8; i_6 += 4) 
    {
        for (unsigned short i_7 = 0; i_7 < 12; i_7 += 3) 
        {
            {
                var_21 = ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_6] [i_7])) ? (((/* implicit */int) arr_1 [i_6])) : (((/* implicit */int) (unsigned short)22971))))) ? (((/* implicit */int) max((arr_5 [(unsigned short)3] [i_6] [i_6] [i_7]), (((/* implicit */unsigned short) (short)-23643))))) : (((/* implicit */int) (unsigned short)34835))));
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 12; i_8 += 4) 
                {
                    for (short i_9 = 1; i_9 < 11; i_9 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned char i_10 = 2; i_10 < 8; i_10 += 2) 
                            {
                                var_22 = ((/* implicit */unsigned short) min((var_22), (max((max(((unsigned short)32768), (arr_18 [i_6] [i_6]))), (((/* implicit */unsigned short) (short)(-32767 - 1)))))));
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_9 + 1])) ? (((/* implicit */int) arr_2 [i_6] [i_10 + 2] [i_6 + 3])) : (((/* implicit */int) arr_5 [i_6 + 3] [i_9 - 1] [i_9] [i_10 - 1]))))) ? ((((-(((/* implicit */int) arr_12 [i_6] [(unsigned char)2] [i_8] [(unsigned char)2])))) / (((((/* implicit */int) arr_25 [i_7])) * (((/* implicit */int) arr_21 [i_6] [i_6] [i_6])))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_7] [i_8] [i_7])) / (((/* implicit */int) arr_7 [i_6] [i_8] [i_6] [i_10]))))) ? (((/* implicit */int) arr_6 [i_6 - 2])) : ((+(((/* implicit */int) arr_11 [i_6 - 2] [i_6] [i_6] [i_6 + 1] [i_6]))))))));
                            }
                            /* LoopSeq 2 */
                            for (unsigned char i_11 = 1; i_11 < 8; i_11 += 1) 
                            {
                                arr_33 [i_7] [i_7] [i_8] [i_9] [(unsigned char)4] = ((/* implicit */unsigned short) (((+(((/* implicit */int) (short)-23406)))) * (((((/* implicit */int) arr_31 [i_9 - 1] [i_9] [i_9] [(short)0] [i_9 + 1])) / (((/* implicit */int) arr_31 [i_9 + 1] [(short)7] [i_9] [i_9] [i_9 - 1]))))));
                                var_24 *= ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) min(((unsigned short)63075), (((/* implicit */unsigned short) (short)-17009))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_30 [(unsigned short)10] [i_8] [(unsigned char)0] [i_9 - 1] [(short)0] [i_9] [i_8]))))) ? (((/* implicit */int) (short)-13486)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_27 [i_11] [i_8])) : (((/* implicit */int) arr_8 [i_6] [i_6]))))))));
                            }
                            for (short i_12 = 0; i_12 < 12; i_12 += 1) 
                            {
                                var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) arr_0 [i_6 - 1] [i_6 + 4]))) > (((/* implicit */int) max((arr_0 [i_6 + 4] [i_9 - 1]), (((/* implicit */short) arr_31 [i_6 + 2] [i_7] [(unsigned char)10] [i_9 + 1] [i_9])))))));
                                var_26 ^= min((((/* implicit */unsigned short) arr_34 [i_6 + 3] [i_6 + 3] [i_6] [i_8] [i_6 + 3])), ((unsigned short)32768));
                                var_27 *= ((/* implicit */short) (unsigned char)166);
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
