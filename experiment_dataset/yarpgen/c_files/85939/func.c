/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85939
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) (short)12288);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_14 &= ((/* implicit */long long int) arr_6 [i_1] [i_3] [i_4 - 1]);
                                var_15 = ((/* implicit */unsigned char) arr_8 [i_0] [i_0] [i_0] [i_3] [i_4 + 1]);
                                var_16 = ((/* implicit */unsigned long long int) (+(((min((9223372036854775803LL), (9223372036854775792LL))) >> (((arr_8 [i_0] [i_4 + 1] [i_2] [i_3] [i_0]) - (3975594390U)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        var_17 ^= ((/* implicit */_Bool) ((((arr_13 [i_1] [i_1] [i_1] [i_1]) ^ (arr_13 [i_0] [i_0] [i_0] [i_0]))) + (((-8574096705455223795LL) / (((/* implicit */long long int) 815020801U))))));
                        arr_14 [i_5] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_1])) : (((/* implicit */int) var_4)))))))));
                        arr_15 [i_2] = -6059446940019991621LL;
                        arr_16 [i_0] [i_1] [i_2] [i_2] [i_5] = ((/* implicit */unsigned short) (~(6678966213232313755ULL)));
                    }
                    /* vectorizable */
                    for (unsigned char i_6 = 0; i_6 < 24; i_6 += 3) 
                    {
                        arr_19 [i_0] [i_0] [i_1] [i_0] [i_1] [i_2] |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_17 [i_0] [i_0] [i_2] [i_0] [i_6] [i_6])) == (((/* implicit */int) var_3)))))) & (11767777860477237866ULL)));
                        arr_20 [i_0] [i_1] [i_6] [i_1] [i_6] = ((/* implicit */unsigned int) arr_2 [i_0] [i_0] [i_0]);
                        arr_21 [i_6] [i_1] [i_2] [i_2] [i_6] = ((/* implicit */unsigned char) var_4);
                        /* LoopSeq 1 */
                        for (short i_7 = 0; i_7 < 24; i_7 += 3) 
                        {
                            arr_24 [i_0] [i_0] [i_0] [i_6] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_7] [i_2] [i_2] [i_1] [i_0])) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_2] [i_1])) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_7]))));
                            var_18 = ((/* implicit */short) ((unsigned int) arr_7 [i_0] [i_2]));
                        }
                        arr_25 [i_0] [i_6] [i_6] = ((/* implicit */long long int) arr_17 [i_6] [i_2] [i_1] [i_1] [i_0] [i_0]);
                    }
                }
            } 
        } 
    } 
    var_19 |= ((/* implicit */unsigned int) var_10);
}
