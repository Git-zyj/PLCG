/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78445
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
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        var_10 = ((/* implicit */short) -60586252);
        var_11 = ((((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (96987791) : (((/* implicit */int) arr_1 [i_0 - 1])))) % (((((arr_0 [i_0] [i_0 - 2]) & (2147483647))) ^ (((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) (short)8483)))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                for (long long int i_3 = 1; i_3 < 22; i_3 += 4) 
                {
                    {
                        var_12 -= ((/* implicit */short) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) min((arr_8 [i_0 - 1] [i_2] [i_2]), (arr_0 [i_1] [i_1])))) : (arr_9 [i_0] [i_1] [i_2] [i_2] [i_2] [i_3])));
                        arr_11 [i_1] |= ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_3]))) * (((1839722497U) & (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) -768181974)))))));
                        arr_12 [i_0] [i_1] [i_1] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) % (((((/* implicit */_Bool) arr_10 [i_3 + 1] [i_3 + 1] [i_3] [i_3])) ? (((3770730683U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_0]))))) : (524236613U))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (long long int i_5 = 0; i_5 < 23; i_5 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_6 = 2; i_6 < 22; i_6 += 2) 
                    {
                        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) arr_0 [i_6] [i_6]))));
                        arr_22 [i_0] [i_4] [i_4] [i_5] [i_5] [i_0] = ((((((/* implicit */_Bool) arr_19 [i_0 + 1] [i_0 - 1] [i_0 - 2] [i_6 - 1] [i_6 - 1])) ? (((/* implicit */unsigned long long int) arr_10 [i_0 - 1] [i_0 + 1] [i_0] [i_6 - 2])) : (arr_19 [i_0 - 2] [i_0 - 1] [i_0 + 1] [i_6 + 1] [i_6 - 1]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 0U)))));
                        var_14 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned int) (short)32767)), (1335409259U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) arr_0 [i_6] [i_6])) == (4503595332403200LL)))))))) ? (min((((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_5] [i_5]))) / (arr_2 [i_6] [i_6]))), (((/* implicit */long long int) ((((/* implicit */_Bool) 7936U)) ? (((/* implicit */int) arr_20 [i_0] [i_6] [i_5] [i_6])) : (-2147483647)))))) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_4] [i_5] [i_6])))));
                    }
                    for (signed char i_7 = 0; i_7 < 23; i_7 += 2) 
                    {
                        var_15 -= ((/* implicit */long long int) arr_6 [i_0] [i_4] [i_5] [i_7]);
                        var_16 = ((/* implicit */int) min((var_16), (((int) var_5))));
                        var_17 -= ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0 - 3] [i_0 - 2] [i_0 - 1])) + (((/* implicit */int) arr_3 [i_0 - 2] [i_0 + 1] [i_0 - 3]))))) < (((long long int) arr_3 [i_0 - 1] [i_0 - 2] [i_0 - 3]))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_8 = 0; i_8 < 23; i_8 += 1) 
                    {
                        var_18 = ((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_4] [i_4])) ? (((/* implicit */int) (unsigned short)28637)) : (((/* implicit */int) arr_26 [i_0 - 3] [i_0 - 1] [i_0] [i_0 - 2])));
                        var_19 = ((/* implicit */int) ((arr_17 [i_5] [i_4] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_0] [i_0 - 1] [i_0 - 2] [i_0 - 1])))));
                        arr_28 [i_0] [i_5] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_0] [i_0 - 2] [i_0] [i_0] [i_0 - 1])) ? (arr_19 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0 - 3]) : (((/* implicit */unsigned long long int) arr_21 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_4]))));
                    }
                    var_20 = ((/* implicit */unsigned int) min((var_20), (arr_15 [i_5])));
                }
            } 
        } 
        var_21 ^= ((/* implicit */unsigned short) (+(((((/* implicit */int) ((_Bool) var_1))) | (2147483647)))));
    }
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((int) max((((/* implicit */unsigned int) var_7)), (345016132U))))) : (min((max((((/* implicit */unsigned long long int) var_5)), (var_1))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) & (var_1)))))));
}
