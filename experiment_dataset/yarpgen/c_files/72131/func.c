/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72131
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
    for (signed char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_1] [i_1] = ((/* implicit */unsigned short) min((((unsigned int) arr_6 [i_0 + 1] [i_1 + 2] [(unsigned char)8])), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0 + 3])))))));
                                var_18 = ((/* implicit */signed char) max((((/* implicit */int) arr_7 [(signed char)10] [i_1])), (((((/* implicit */int) (signed char)63)) & ((+(((/* implicit */int) arr_8 [(_Bool)1] [4LL] [i_2] [i_3] [i_4]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) ((((((/* implicit */int) ((_Bool) arr_13 [i_0] [i_1] [i_2] [i_5] [i_1]))) + (((((/* implicit */int) (unsigned short)49497)) * (((/* implicit */int) var_16)))))) & (max((((((/* implicit */int) arr_9 [i_0] [i_1] [(short)22] [i_5])) | (((/* implicit */int) arr_19 [i_0] [i_1] [i_2] [i_5] [i_6])))), ((-(((/* implicit */int) arr_16 [(unsigned short)19] [i_5] [12LL]))))))));
                                var_20 ^= ((/* implicit */short) ((((((/* implicit */_Bool) ((short) arr_11 [(_Bool)1] [(_Bool)1] [i_2] [i_5] [(unsigned short)4] [(unsigned char)2]))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_2 [(signed char)22] [i_1]))))) : (arr_12 [i_1 - 1] [i_2 + 1]))) | (((/* implicit */long long int) ((/* implicit */int) max((arr_8 [i_0 + 2] [11] [i_0 + 3] [i_0 + 1] [i_0]), (arr_8 [i_0] [i_0] [i_0 + 4] [i_0 - 1] [i_0])))))));
                                var_21 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_2))));
                                arr_20 [i_1] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) arr_9 [i_0 + 3] [i_1 - 2] [i_1 - 1] [i_2 + 1])) ? (((/* implicit */int) arr_9 [i_0 + 1] [i_1 - 2] [i_1 - 1] [i_2 - 1])) : (((/* implicit */int) arr_9 [i_0 + 3] [i_1 + 2] [i_1 - 2] [i_2 - 1])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 24; i_7 += 1) 
                    {
                        for (signed char i_8 = 0; i_8 < 24; i_8 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) max(((unsigned short)23502), (((/* implicit */unsigned short) arr_24 [i_0 + 2]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0 + 1] [i_1] [i_1] [i_7] [i_8])) ? (((/* implicit */int) arr_22 [(_Bool)1] [i_1] [i_8] [i_2] [i_8])) : (((/* implicit */int) arr_19 [i_0] [i_1] [0LL] [i_7] [i_8]))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [i_7] [i_8])) * (((/* implicit */int) arr_23 [i_1] [i_1 + 1] [i_2 + 1] [i_7] [i_8]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)16036)) : (var_13)))) : (((unsigned long long int) arr_0 [i_7]))))));
                                var_23 = ((/* implicit */short) (-((~(((((/* implicit */long long int) ((/* implicit */int) arr_24 [i_0]))) & (arr_12 [i_0] [i_1])))))));
                                arr_25 [i_0 + 1] [i_1 + 2] [i_2] [i_1] [i_7] [i_8] = ((/* implicit */long long int) ((max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-56)) : (arr_3 [i_1]))), (((arr_21 [i_1] [i_7]) ? (arr_3 [i_1]) : (((/* implicit */int) (signed char)84)))))) <= (((((((/* implicit */_Bool) arr_22 [i_0] [i_1 + 2] [i_2] [i_7] [i_8])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) var_6)))) * (((/* implicit */int) ((signed char) arr_24 [i_1])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 24; i_9 += 1) 
                    {
                        for (signed char i_10 = 0; i_10 < 24; i_10 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) max(((unsigned short)23502), (((/* implicit */unsigned short) (signed char)-47))));
                                arr_31 [i_1] [i_1] [i_2 + 2] [i_9] [i_10] = ((/* implicit */signed char) ((unsigned short) (~(max((((/* implicit */int) var_5)), (var_7))))));
                                arr_32 [10LL] [4] [i_2] [i_9] [i_1] = ((/* implicit */unsigned short) ((unsigned char) (-((((_Bool)0) ? (((/* implicit */int) arr_18 [(_Bool)1] [i_1] [i_2] [i_9] [i_10])) : (((/* implicit */int) (signed char)-60)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_11 = 0; i_11 < 18; i_11 += 4) 
    {
        for (signed char i_12 = 0; i_12 < 18; i_12 += 3) 
        {
            for (unsigned short i_13 = 0; i_13 < 18; i_13 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_14 = 0; i_14 < 18; i_14 += 3) 
                    {
                        for (signed char i_15 = 0; i_15 < 18; i_15 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */short) arr_11 [i_11] [i_13] [i_12] [i_13] [(_Bool)1] [i_15]);
                                arr_45 [i_13] = ((/* implicit */_Bool) arr_33 [i_11] [(signed char)10]);
                                arr_46 [(signed char)12] [i_12] [i_13] [(_Bool)1] [i_13] [i_15] = min((((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)49501)))), (((/* implicit */int) (unsigned char)97)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_16 = 0; i_16 < 18; i_16 += 4) 
                    {
                        for (signed char i_17 = 0; i_17 < 18; i_17 += 4) 
                        {
                            {
                                var_26 = (unsigned char)4;
                                var_27 = ((/* implicit */unsigned int) (_Bool)1);
                                var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((_Bool) arr_29 [i_11])) ? ((-(((/* implicit */int) arr_7 [(short)8] [i_17])))) : ((+(((/* implicit */int) arr_36 [i_11] [i_11])))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_18 = 0; i_18 < 18; i_18 += 1) 
                    {
                        for (signed char i_19 = 0; i_19 < 18; i_19 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */int) ((_Bool) ((((((/* implicit */_Bool) (signed char)46)) || (((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) arr_7 [i_11] [i_13])) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-57)) || (((/* implicit */_Bool) var_16))))))));
                                var_30 = ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) var_7)), (var_9)))))) ? (((long long int) (_Bool)1)) : (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)196))))) ? (((((/* implicit */_Bool) arr_15 [i_11] [i_12] [i_12] [i_13] [i_18] [(signed char)22])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_11] [(unsigned char)0] [i_11] [(_Bool)1] [21LL]))))) : (((/* implicit */long long int) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) arr_9 [i_11] [i_11] [i_11] [i_11]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
