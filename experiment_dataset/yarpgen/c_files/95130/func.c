/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95130
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 13; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
                            {
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) min((arr_3 [i_0]), (arr_3 [i_0]))))));
                                arr_12 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (~((-(((/* implicit */int) arr_0 [i_1]))))));
                                var_17 = ((/* implicit */signed char) arr_9 [i_1] [i_0] [i_0] [i_0] [i_0]);
                                var_18 *= ((/* implicit */_Bool) (-((+(((/* implicit */int) arr_9 [i_0] [i_1 + 2] [i_1] [i_1 + 1] [i_0]))))));
                                var_19 = ((/* implicit */short) ((signed char) ((((((/* implicit */int) arr_8 [i_2 + 1] [i_1 - 1])) + (2147483647))) >> (((((/* implicit */int) arr_8 [i_2 - 1] [i_1 - 2])) + (15621))))));
                            }
                            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((_Bool) ((signed char) arr_3 [i_2 + 2]))))));
                            arr_13 [i_1] = ((/* implicit */signed char) (~(((((/* implicit */int) arr_9 [i_1] [i_2] [i_2] [i_2 + 1] [i_2])) / (((/* implicit */int) arr_9 [i_1] [14] [i_2] [i_2 - 1] [i_2]))))));
                            arr_14 [i_0] [i_0] [i_0] [i_0] |= ((short) (~(((/* implicit */int) arr_4 [i_1 - 2] [i_0]))));
                            /* LoopSeq 2 */
                            for (unsigned int i_5 = 0; i_5 < 15; i_5 += 2) 
                            {
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((signed char) (+(((/* implicit */int) arr_9 [i_1] [i_1 + 1] [i_2] [i_2 + 2] [i_5])))));
                                arr_18 [i_0] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */long long int) min(((-(((/* implicit */int) arr_3 [i_0])))), (((((/* implicit */int) arr_16 [i_0] [i_1 - 1] [(unsigned char)3] [i_3] [i_3])) * (((/* implicit */int) arr_16 [i_5] [i_3] [i_2 + 2] [7LL] [7LL]))))));
                                var_21 = ((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) arr_1 [(_Bool)1])))));
                            }
                            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                            {
                                arr_21 [i_0] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) (-((+(((/* implicit */int) arr_9 [i_1] [i_6] [i_6 - 1] [i_6 - 1] [i_6]))))));
                                arr_22 [(unsigned char)12] [i_1] [i_2] [i_2] [i_1] [i_6] [i_6] = ((/* implicit */long long int) max((max((arr_1 [i_1 + 2]), (((/* implicit */int) arr_20 [i_2 + 2] [i_1] [i_2 + 2] [i_3] [i_1 + 3] [i_6 - 1])))), ((-(arr_1 [i_1 - 2])))));
                            }
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (int i_7 = 0; i_7 < 15; i_7 += 3) 
                {
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 15; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 1; i_9 < 11; i_9 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) (((+(((unsigned int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) / ((~(arr_6 [(unsigned char)14] [i_1 + 2] [i_8] [i_9 + 2] [i_9] [i_1])))));
                                var_23 = ((unsigned short) max((((unsigned char) arr_28 [i_0] [i_1] [i_7] [i_8])), (arr_27 [i_0] [i_1] [i_7])));
                            }
                        } 
                    } 
                    var_24 -= ((/* implicit */unsigned char) (~(((/* implicit */int) ((short) (~(((/* implicit */int) arr_4 [9U] [i_1]))))))));
                    arr_29 [i_0] [i_1] [(_Bool)1] [i_0] = ((/* implicit */long long int) ((unsigned char) (~(((/* implicit */int) (unsigned char)36)))));
                }
                /* vectorizable */
                for (unsigned char i_10 = 1; i_10 < 13; i_10 += 3) 
                {
                    arr_32 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((unsigned char) ((unsigned char) arr_3 [i_0])));
                    var_25 = ((/* implicit */unsigned char) ((unsigned int) ((unsigned int) arr_4 [i_0] [i_0])));
                    var_26 = ((/* implicit */unsigned char) arr_28 [(unsigned short)5] [i_10] [i_10] [i_1]);
                }
                for (unsigned char i_11 = 0; i_11 < 15; i_11 += 2) 
                {
                    var_27 = ((/* implicit */unsigned char) ((signed char) max((arr_36 [i_1] [i_1] [i_1]), (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0])) ^ (((/* implicit */int) arr_15 [(short)8] [i_1] [i_1] [i_1] [i_0]))))))));
                    var_28 = ((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned char) (signed char)-54)), ((unsigned char)165))))), ((-(((/* implicit */int) ((unsigned char) arr_34 [i_1] [i_1] [i_1])))))));
                }
                /* vectorizable */
                for (unsigned char i_12 = 1; i_12 < 13; i_12 += 3) 
                {
                    var_29 += arr_26 [i_0] [i_0] [i_0] [(unsigned char)14] [i_1] [i_12];
                    var_30 -= (+(((/* implicit */int) arr_20 [(unsigned short)6] [i_12] [(unsigned short)6] [i_12 + 2] [i_12 + 1] [i_12 + 1])));
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 12; i_13 += 2) 
                    {
                        for (long long int i_14 = 0; i_14 < 15; i_14 += 1) 
                        {
                            {
                                var_31 = (i_1 % 2 == 0) ? (((/* implicit */_Bool) ((((/* implicit */int) arr_35 [i_13] [i_1] [i_13])) << (((((/* implicit */int) arr_35 [i_13] [i_1] [(unsigned char)12])) - (240)))))) : (((/* implicit */_Bool) ((((/* implicit */int) arr_35 [i_13] [i_1] [i_13])) << (((((((/* implicit */int) arr_35 [i_13] [i_1] [(unsigned char)12])) - (240))) + (242))))));
                                var_32 = ((/* implicit */int) ((((/* implicit */int) arr_31 [i_0] [i_12] [i_1] [i_0])) == (((/* implicit */int) arr_10 [i_0] [i_13] [i_12] [i_1] [i_0] [i_0]))));
                                arr_44 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) arr_35 [i_12] [i_1] [i_12 + 1]))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_33 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */int) var_15)) ^ (((/* implicit */int) var_5))))), (((long long int) var_5))));
    /* LoopNest 2 */
    for (unsigned int i_15 = 0; i_15 < 22; i_15 += 2) 
    {
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            {
                arr_53 [8LL] = ((/* implicit */int) (~(arr_46 [i_15])));
                arr_54 [i_15] [i_15] [i_15] = ((/* implicit */signed char) max((((-1LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)28))))), (((/* implicit */long long int) (~(((int) arr_47 [3U])))))));
            }
        } 
    } 
}
