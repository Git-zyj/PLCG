/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97676
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_11 [i_3] [6LL] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */unsigned short) var_8);
                                arr_12 [i_3] [i_1] = arr_5 [i_2];
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)72))));
                    var_19 = ((((/* implicit */_Bool) ((int) arr_10 [i_2] [i_2] [6]))) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_2])) : (((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [3U])) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_2])))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 2) 
    {
        for (long long int i_6 = 0; i_6 < 25; i_6 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 25; i_7 += 3) 
                {
                    for (unsigned long long int i_8 = 2; i_8 < 24; i_8 += 1) 
                    {
                        {
                            arr_25 [i_5] [i_6] [i_7] [i_7] = ((/* implicit */unsigned int) (signed char)-72);
                            var_20 -= ((/* implicit */unsigned int) (signed char)67);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_9 = 0; i_9 < 25; i_9 += 2) 
                {
                    for (unsigned char i_10 = 3; i_10 < 22; i_10 += 1) 
                    {
                        for (unsigned long long int i_11 = 4; i_11 < 21; i_11 += 2) 
                        {
                            {
                                arr_34 [i_5] [i_5] [i_9] = ((/* implicit */long long int) arr_31 [i_9]);
                                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) arr_26 [i_5] [i_6] [i_10 + 2] [i_11 - 4]))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_12 = 1; i_12 < 21; i_12 += 1) 
                {
                    for (unsigned char i_13 = 0; i_13 < 25; i_13 += 1) 
                    {
                        {
                            arr_41 [i_5] [i_6] [i_12] [i_12 + 1] [i_12 + 1] = ((/* implicit */unsigned char) min((max((arr_17 [i_12 + 4] [i_6]), (((/* implicit */unsigned int) arr_29 [i_5] [i_12])))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)64)) * (((/* implicit */int) (signed char)-70)))))));
                            var_22 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (((~(var_13))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_26 [i_5] [i_5] [i_12 + 1] [i_13]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [(short)17] [9] [19U] [i_12 + 1] [i_13]))) : ((~(arr_16 [i_13] [i_6] [i_5])))));
                            var_23 = ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_28 [i_13] [i_12 + 2] [i_12] [i_13])))) == (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)63)))))));
                            arr_42 [i_12] = ((/* implicit */signed char) (+((+(((((/* implicit */_Bool) (signed char)-78)) ? (arr_27 [i_12 + 4] [i_6] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-73)))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_14 = 3; i_14 < 24; i_14 += 3) 
                {
                    for (unsigned int i_15 = 0; i_15 < 25; i_15 += 3) 
                    {
                        for (unsigned long long int i_16 = 0; i_16 < 25; i_16 += 3) 
                        {
                            {
                                arr_51 [20LL] [i_6] [i_14 - 1] [i_14] [i_14] [i_14] [4] = ((/* implicit */long long int) max((((/* implicit */int) (signed char)77)), (max((((((/* implicit */int) (signed char)77)) & (((/* implicit */int) (signed char)64)))), (((/* implicit */int) (signed char)-73))))));
                                arr_52 [i_16] [(signed char)9] [i_14] [i_14] [i_6] [(unsigned char)17] = ((/* implicit */unsigned int) (signed char)72);
                                arr_53 [i_14] [(unsigned short)1] [i_14] [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_40 [i_5] [i_5] [i_14 - 2] [i_14 - 2] [i_14 - 3]))))) ? (((((/* implicit */_Bool) arr_40 [i_5] [i_6] [i_14 + 1] [i_6] [i_14 + 1])) ? (((/* implicit */int) arr_40 [i_5] [i_5] [i_5] [i_15] [i_14 - 3])) : (((/* implicit */int) arr_40 [i_5] [i_5] [i_14] [(_Bool)1] [i_14 - 3])))) : (((((((/* implicit */int) arr_40 [i_6] [2U] [17U] [i_15] [i_14 + 1])) + (2147483647))) << (((((((/* implicit */int) arr_40 [i_5] [i_6] [(unsigned short)16] [19] [i_14 - 1])) + (101))) - (14)))))));
                                arr_54 [i_14] [i_6] [i_6] [i_6] [i_6] [i_6] = ((((/* implicit */int) (signed char)-75)) + (((/* implicit */int) (signed char)-64)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_24 &= ((/* implicit */unsigned int) (+((~(((var_17) & (var_7)))))));
    /* LoopNest 2 */
    for (int i_17 = 3; i_17 < 18; i_17 += 2) 
    {
        for (short i_18 = 0; i_18 < 22; i_18 += 2) 
        {
            {
                var_25 = ((/* implicit */unsigned int) (signed char)67);
                var_26 = ((/* implicit */long long int) (signed char)-94);
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) var_4))));
}
