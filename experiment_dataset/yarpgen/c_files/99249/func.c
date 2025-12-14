/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99249
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
    var_16 = ((/* implicit */_Bool) 2781750913U);
    var_17 *= ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (min((1513216380U), (((/* implicit */unsigned int) (_Bool)0)))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (~((-((~(2353185906U)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (_Bool)1))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                for (unsigned int i_3 = 4; i_3 < 13; i_3 += 1) 
                {
                    for (int i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_0] [i_4])) && (((/* implicit */_Bool) arr_14 [i_3 - 3] [i_3 - 2] [i_2] [i_3] [i_3]))));
                            arr_17 [i_0] [i_1] [i_0] [i_2] [i_2] [i_4] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_3 - 2] [i_3] [i_4] [i_4]))));
                            arr_18 [i_0] [i_2] = ((/* implicit */unsigned int) (short)32767);
                            var_20 = ((/* implicit */long long int) (+(arr_14 [i_0] [i_1] [i_2] [i_3 - 3] [i_2])));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (short i_5 = 1; i_5 < 12; i_5 += 2) /* same iter space */
            {
                /* LoopSeq 2 */
                for (signed char i_6 = 0; i_6 < 14; i_6 += 2) 
                {
                    var_21 = ((/* implicit */unsigned long long int) var_10);
                    arr_23 [i_0] [0U] [i_5] [i_0] = ((/* implicit */unsigned long long int) var_2);
                }
                for (short i_7 = 0; i_7 < 14; i_7 += 1) 
                {
                    arr_27 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) 4294967287U);
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 0; i_8 < 14; i_8 += 4) 
                    {
                        var_22 += ((/* implicit */short) ((((((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [4LL] [i_0])) / (((/* implicit */int) (unsigned short)61378)))) + ((~(((/* implicit */int) var_14))))));
                        arr_30 [i_0] [i_0] [i_5] [i_7] [i_8] [i_8] [(unsigned char)6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_7 [i_5] [(_Bool)1]))));
                        arr_31 [i_8] [i_7] [i_5] [i_1] [i_0] = ((/* implicit */unsigned int) ((((_Bool) var_11)) ? ((~(18446744073709551606ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)17)))))));
                        arr_32 [i_0] [i_0] [(signed char)11] [i_0] [i_0] [(unsigned char)9] [(short)11] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-114)) / (((/* implicit */int) (short)32767))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 0; i_9 < 14; i_9 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) arr_2 [i_0]);
                        var_24 &= ((/* implicit */long long int) var_15);
                        var_25 *= ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)6195)) >= (((/* implicit */int) (unsigned short)65535))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 14; i_10 += 1) 
                    {
                        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) ((unsigned short) arr_2 [i_0]))) : (((/* implicit */int) ((signed char) arr_11 [i_7] [i_5] [i_0]))))))));
                        arr_38 [i_0] [i_1] [i_10] [i_7] [i_10] = ((/* implicit */unsigned long long int) (unsigned short)59352);
                        var_27 = arr_11 [i_10] [(unsigned short)1] [i_10];
                    }
                }
                /* LoopSeq 1 */
                for (unsigned int i_11 = 0; i_11 < 14; i_11 += 1) 
                {
                    var_28 = ((/* implicit */int) ((var_5) >= (-1812957172)));
                    var_29 = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)-32754))));
                    var_30 += ((/* implicit */unsigned int) ((unsigned long long int) arr_2 [i_0]));
                    var_31 = ((/* implicit */short) (((-(((/* implicit */int) arr_24 [i_0])))) >> (((/* implicit */int) var_8))));
                    var_32 = ((/* implicit */unsigned long long int) (~(arr_14 [i_11] [i_5 + 2] [8] [i_1] [i_0])));
                }
            }
            for (short i_12 = 1; i_12 < 12; i_12 += 2) /* same iter space */
            {
                var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_10 [i_12 + 1] [i_12] [i_12] [i_0])) : (arr_16 [i_12 - 1] [i_12] [i_12 + 1] [i_0] [i_0] [i_0] [i_0]))))));
                var_34 = ((/* implicit */short) ((arr_41 [i_12 - 1] [i_12] [i_12] [i_12 + 2]) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                arr_45 [i_12] [i_12] = ((/* implicit */short) arr_41 [i_12] [i_12] [i_12 + 1] [i_12]);
                var_35 &= ((((/* implicit */int) arr_44 [i_12 + 1] [i_12 + 1] [i_12 + 2])) >= (((/* implicit */int) (_Bool)1)));
                arr_46 [i_12] [i_12] [i_0] = (unsigned short)6195;
            }
            var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) (~(var_5))))));
        }
        var_37 &= ((/* implicit */int) (short)32767);
    }
}
