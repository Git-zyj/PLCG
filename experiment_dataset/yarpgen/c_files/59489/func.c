/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59489
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    arr_8 [i_2] [i_1] [i_1] [i_0] = ((_Bool) arr_3 [i_0] [i_2]);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_10 = ((/* implicit */long long int) arr_4 [i_0] [i_1]);
                                var_11 = (!(((/* implicit */_Bool) arr_1 [i_0] [i_1])));
                                var_12 = ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_2)));
                                var_13 = ((/* implicit */signed char) arr_14 [i_0] [i_1] [i_3] [i_0]);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        var_14 += ((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0]);
                        var_15 += ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_5 - 1] [i_5 - 1])) / (((/* implicit */int) var_3))));
                    }
                    var_16 = ((/* implicit */long long int) (_Bool)1);
                    /* LoopSeq 1 */
                    for (int i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_7 = 2; i_7 < 14; i_7 += 1) 
                        {
                            arr_23 [i_0] [i_1] [i_0] [i_6] [i_7] [i_1] = ((/* implicit */unsigned short) (signed char)110);
                            arr_24 [i_7] [i_6] [i_2] [i_0] [i_0] = ((((/* implicit */int) var_0)) >> (((((unsigned int) -5920623597588065835LL)) - (4042772928U))));
                        }
                        arr_25 [i_0] [(short)13] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [i_1] [i_0]))));
                        var_17 = ((/* implicit */signed char) var_8);
                        arr_26 [i_0] [i_6] [i_2] [i_1] [i_1] [i_0] |= ((/* implicit */unsigned char) ((arr_20 [i_0] [i_1] [i_2] [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_12 [i_2] [i_2] [i_1] [i_2] [i_2])))))));
                    }
                }
                /* vectorizable */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_18 = ((/* implicit */unsigned char) arr_0 [(unsigned char)13] [i_1]);
                    var_19 += (-(((/* implicit */int) arr_22 [i_0] [i_1] [i_8])));
                }
                arr_29 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0])) ? (((/* implicit */int) arr_15 [i_1])) : (((/* implicit */int) arr_28 [i_0] [i_0] [i_1]))))) || (((/* implicit */_Bool) ((int) arr_9 [i_0] [i_1])))));
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (min((max((((/* implicit */long long int) var_8)), (var_9))), (((/* implicit */long long int) max((var_6), (arr_6 [i_0])))))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1])))));
                /* LoopNest 2 */
                for (unsigned char i_9 = 1; i_9 < 16; i_9 += 2) 
                {
                    for (unsigned char i_10 = 0; i_10 < 17; i_10 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */short) -2999299650551954518LL);
                            var_22 &= ((/* implicit */unsigned int) var_7);
                            var_23 = ((/* implicit */int) max((var_23), (min((((arr_33 [i_9 - 1] [i_9 + 1] [i_9 - 1] [(unsigned char)2]) + (arr_33 [i_9 - 1] [i_9 + 1] [i_9] [(_Bool)1]))), (arr_33 [i_9 - 1] [i_9 + 1] [i_9] [(signed char)6])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) var_7);
    /* LoopNest 2 */
    for (unsigned char i_11 = 0; i_11 < 17; i_11 += 2) 
    {
        for (unsigned int i_12 = 0; i_12 < 17; i_12 += 3) 
        {
            {
                var_25 ^= ((/* implicit */long long int) arr_40 [i_12]);
                arr_44 [i_11] [i_11] [i_11] = ((/* implicit */unsigned char) ((_Bool) arr_2 [i_11] [i_12]));
                var_26 &= ((/* implicit */long long int) max(((~(arr_4 [i_11] [i_12]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -5920623597588065831LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-111)))))));
            }
        } 
    } 
    var_27 = ((/* implicit */signed char) var_3);
}
