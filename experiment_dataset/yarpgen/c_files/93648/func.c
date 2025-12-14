/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93648
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_11 ^= ((/* implicit */int) min((3681787321U), (arr_0 [i_0])));
                    arr_7 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((10511688524834445983ULL), (((/* implicit */unsigned long long int) arr_0 [i_0]))))) ? (min((arr_0 [i_0]), (arr_0 [i_2]))) : (max((((/* implicit */unsigned int) (unsigned char)255)), (arr_0 [i_0])))));
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_14 [i_1] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_2] [i_0])) ? (((/* implicit */unsigned long long int) arr_0 [i_2])) : (4419792405630656493ULL)));
                            var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0] [i_3] [(unsigned short)12] [i_3])) ? (-2744728716938613395LL) : (((/* implicit */long long int) ((/* implicit */int) (short)8191)))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_5 = 1; i_5 < 16; i_5 += 2) 
                        {
                            var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_5 + 1] [i_1] [(signed char)15] [i_3])) ? (((/* implicit */int) (short)8196)) : (((/* implicit */int) arr_5 [i_5] [i_1] [i_1])))))));
                            var_14 ^= ((/* implicit */long long int) arr_1 [i_0]);
                        }
                        arr_18 [i_0] [i_1] = ((/* implicit */short) arr_5 [i_0] [i_1] [i_2]);
                        var_15 = ((/* implicit */long long int) arr_4 [i_0] [i_0] [i_2] [i_3]);
                    }
                    for (unsigned short i_6 = 0; i_6 < 17; i_6 += 4) 
                    {
                        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((arr_8 [i_1] [i_1]), (arr_8 [i_0] [i_1])))), (((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_12 [i_0] [i_1] [i_1] [i_6] [i_6] [i_2]) : (arr_12 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))))));
                        var_17 *= ((/* implicit */_Bool) arr_17 [i_6] [i_1] [i_6] [i_6]);
                        var_18 = ((/* implicit */_Bool) min(((short)-8212), (((/* implicit */short) arr_17 [(short)9] [(_Bool)1] [i_0] [(_Bool)1]))));
                        var_19 += ((/* implicit */unsigned char) (short)8194);
                        var_20 = ((/* implicit */unsigned int) max((max((((((/* implicit */_Bool) arr_20 [i_0] [(unsigned short)1] [i_2] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)47))) : (arr_20 [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_6])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (short)8185)), (-837340937)))) ? (((/* implicit */int) (unsigned short)3269)) : (((/* implicit */int) arr_19 [i_6] [i_6] [(signed char)2] [i_1] [i_0] [i_0])))))));
                    }
                }
            } 
        } 
    } 
    var_21 += ((/* implicit */_Bool) var_8);
}
