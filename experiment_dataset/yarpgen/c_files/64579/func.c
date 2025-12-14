/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64579
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_11 [i_2 - 3] [i_2] [(_Bool)1] [i_4] [i_3] = ((/* implicit */long long int) ((unsigned char) ((long long int) ((long long int) arr_10 [i_0] [i_2] [i_1 + 1] [i_3] [i_2] [1LL] [i_1]))));
                                arr_12 [i_3] [i_3] [i_3] [i_3] [(signed char)16] [i_3] [i_3] |= ((/* implicit */long long int) var_14);
                                var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) arr_1 [i_4]))));
                                var_16 = ((/* implicit */unsigned long long int) max((arr_6 [i_4] [i_2 + 3] [i_2] [i_3]), (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_2] [i_2 - 1] [i_2] [i_3])) | (((/* implicit */int) arr_7 [i_0] [i_2 + 3] [16U] [i_3])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 4; i_5 < 15; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_19 [i_6] [i_5] [9U] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((_Bool) arr_10 [i_0] [(unsigned short)1] [i_1] [i_2] [(unsigned short)1] [i_1] [3LL]));
                                arr_20 [i_0] [i_1 - 1] [(unsigned short)1] [(_Bool)1] [i_6] [i_6] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)243))))) ? (((arr_7 [i_2 + 3] [i_1] [i_5] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_8))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_0] [9LL] [i_0] [(_Bool)1] [13])) & (((/* implicit */int) (_Bool)1))))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [(_Bool)1] [(_Bool)1] [i_2] [i_5] [i_6])))));
                                var_17 = ((/* implicit */int) arr_3 [i_2] [i_1]);
                                arr_21 [i_0] [(signed char)4] [(short)16] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) arr_13 [i_0] [i_1] [i_5 - 2]);
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((arr_5 [i_1]) ^ (((/* implicit */int) arr_17 [(signed char)15] [i_1] [i_2])))) & ((~(((/* implicit */int) arr_18 [8LL] [i_1] [i_1] [i_0] [8LL]))))))) ? (((int) ((arr_15 [i_2] [(unsigned char)9] [i_2] [(_Bool)0] [i_1 + 2] [i_0]) & (((/* implicit */int) arr_18 [i_0] [i_0] [i_1] [i_0] [i_1]))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_2)) & (((/* implicit */int) (_Bool)1))))) ? (max((arr_5 [i_2]), (var_10))) : (((((/* implicit */int) arr_7 [i_0] [(short)16] [i_2] [(short)16])) | (((/* implicit */int) var_3))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) var_3);
    /* LoopNest 3 */
    for (unsigned char i_7 = 1; i_7 < 21; i_7 += 3) 
    {
        for (signed char i_8 = 0; i_8 < 23; i_8 += 4) 
        {
            for (long long int i_9 = 1; i_9 < 22; i_9 += 4) 
            {
                {
                    arr_31 [i_7] = ((/* implicit */_Bool) ((int) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)0)))));
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 23; i_10 += 2) 
                    {
                        for (long long int i_11 = 1; i_11 < 19; i_11 += 1) 
                        {
                            {
                                arr_38 [i_7 + 2] [16] [i_7] [7] [i_7] = ((/* implicit */long long int) arr_27 [i_7]);
                                arr_39 [i_7] [i_7] [i_9 + 1] [i_10] [i_7] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65527)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)0))))) : ((((_Bool)0) ? (((/* implicit */long long int) 925731706U)) : (63LL))))), (((/* implicit */long long int) min((arr_32 [i_7] [i_8] [i_10] [i_11 + 4] [i_11] [16LL]), (arr_32 [15] [i_8] [14LL] [i_11 + 1] [i_11 + 1] [i_11 + 4]))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) arr_33 [10] [i_7]))));
                    arr_40 [i_7 + 1] [i_8] [i_9] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_34 [i_7] [(_Bool)1] [i_7] [i_8] [i_7] [i_9 + 1] [i_9 - 1])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_33 [12] [12]))))) : (((((/* implicit */_Bool) arr_32 [i_7 + 1] [i_7] [i_8] [i_8] [i_9] [i_9])) ? (((/* implicit */int) arr_25 [i_7])) : (((/* implicit */int) arr_34 [i_7] [i_7] [i_7] [i_9] [i_7] [i_8] [i_7]))))))) != (((unsigned int) ((((/* implicit */_Bool) arr_23 [16LL])) ? (arr_28 [i_7]) : (2515161920U))))));
                }
            } 
        } 
    } 
}
