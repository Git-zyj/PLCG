/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95742
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
    var_17 = ((/* implicit */unsigned long long int) var_12);
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) arr_1 [i_0])), (max((var_14), (((/* implicit */unsigned int) arr_1 [i_0])))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(1727543424U))))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) (((-(arr_0 [i_0]))) ^ ((~(arr_0 [i_0])))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                arr_10 [1] [1] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)63424)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)216))) : (4294967295U)))), (max((-3250955926866185927LL), (((/* implicit */long long int) ((((/* implicit */unsigned int) var_7)) / (var_4))))))));
                /* LoopSeq 2 */
                for (int i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_4 = 1; i_4 < 14; i_4 += 2) 
                    {
                        arr_16 [i_0] [0LL] [1U] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) 1627004137839151633LL)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1]))))) ^ (arr_12 [i_2 + 2] [i_0] [i_0])));
                        arr_17 [i_0] = (+(-748825076));
                        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0 - 2] [(short)1] [i_2 + 2] [i_4 + 1])) ? ((-(arr_15 [i_0] [i_0] [i_0] [i_3] [i_3] [i_3] [i_1]))) : (((/* implicit */unsigned long long int) arr_0 [i_0]))));
                    }
                    var_19 = (((-(arr_0 [i_0]))) / (max((arr_0 [i_0]), (arr_0 [i_0]))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 15; i_5 += 2) 
                    {
                        arr_20 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) || (((/* implicit */_Bool) (unsigned short)36694))));
                        var_20 = ((/* implicit */unsigned long long int) ((unsigned short) (~(arr_13 [(unsigned short)10] [i_1] [i_2] [i_3] [i_5]))));
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((2450025311U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_5])))))) ? (((/* implicit */unsigned long long int) ((arr_18 [i_0 - 2] [i_3] [5]) / (((/* implicit */long long int) var_15))))) : (arr_5 [i_0] [i_0 - 2])));
                    }
                    for (unsigned short i_6 = 2; i_6 < 15; i_6 += 2) 
                    {
                        arr_23 [i_1] [i_2] [i_2] [i_0] = ((unsigned int) max((((arr_0 [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_6]))))), (((arr_4 [11] [11]) << (((((/* implicit */int) var_2)) - (224)))))));
                        arr_24 [i_0 - 1] [i_0] [i_1] [i_0] [i_3] [i_6] = ((((/* implicit */int) ((18446744073709551615ULL) > (((/* implicit */unsigned long long int) (-(arr_18 [i_1] [(short)14] [i_6 - 2]))))))) | (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 262143ULL))))) : (((arr_14 [i_6] [i_2 + 1] [i_1] [i_0]) + (arr_14 [i_0] [i_0] [i_1] [i_0]))))));
                        var_22 = ((/* implicit */short) min((((/* implicit */long long int) ((((arr_12 [i_0 - 2] [(unsigned short)5] [i_2 + 2]) << (((3138701004129459691LL) - (3138701004129459684LL))))) ^ (var_14)))), (2415771133934110764LL)));
                    }
                }
                /* vectorizable */
                for (unsigned char i_7 = 0; i_7 < 16; i_7 += 1) 
                {
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) arr_18 [i_0] [i_1] [i_2])) : (arr_15 [i_7] [i_7] [i_2] [11LL] [i_1] [i_0 + 1] [i_0 + 1])))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_1]))) : (var_13))) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0 - 1])))));
                    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) arr_1 [i_0 + 1]))));
                }
            }
            /* LoopNest 3 */
            for (long long int i_8 = 0; i_8 < 16; i_8 += 2) 
            {
                for (short i_9 = 0; i_9 < 16; i_9 += 2) 
                {
                    for (unsigned short i_10 = 0; i_10 < 16; i_10 += 3) 
                    {
                        {
                            arr_36 [i_0] [4U] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((arr_18 [i_0 - 1] [i_1] [i_1]) + (9223372036854775807LL))) >> (((arr_18 [2] [i_8] [i_9]) + (7550928558383915581LL))))))));
                            var_25 = ((/* implicit */short) ((long long int) (unsigned short)3));
                        }
                    } 
                } 
            } 
            arr_37 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((913820512) | (max((((/* implicit */int) (short)-14491)), (34001099)))))) <= ((+(arr_22 [4U] [i_1] [i_1] [4U] [i_0])))));
        }
    }
}
