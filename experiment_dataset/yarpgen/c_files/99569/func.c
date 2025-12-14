/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99569
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
    for (int i_0 = 4; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                var_17 -= arr_14 [i_0] [16] [i_0] [i_0] [i_0];
                                arr_15 [i_0 - 1] [(short)9] [i_0] [i_0] [i_0] = ((/* implicit */int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) -5506432462161878239LL)) ? (arr_10 [11] [i_1] [i_3] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_14 [i_0 - 3] [i_0 - 3] [i_2] [i_3] [(short)24]) < (arr_13 [i_2 + 1]))))) : ((~(arr_13 [i_4])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        arr_19 [i_0] [23] [22] [i_5] [i_0] = ((/* implicit */int) min((((/* implicit */long long int) -1369308552)), (5506432462161878239LL)));
                        arr_20 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_0] [15] [i_0] [i_1] [i_2] [(short)0])) ? (arr_5 [i_0] [i_1] [24U]) : (var_12)));
                    }
                    /* vectorizable */
                    for (short i_6 = 1; i_6 < 23; i_6 += 3) 
                    {
                        arr_23 [(short)23] [(short)20] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) arr_0 [2ULL]))) ? (arr_10 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -5506432462161878239LL))))))));
                        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (-6074057649622934366LL) : (((/* implicit */long long int) 1712145557U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_6)) >= (arr_16 [i_0] [(_Bool)1] [i_2] [3U] [i_6]))))) : (((((/* implicit */_Bool) arr_12 [i_2] [i_1] [i_6 - 1] [(short)13] [(short)13])) ? (260096U) : (((/* implicit */unsigned int) 2147483647))))));
                    }
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((-1335069102) + (2147483647))) >> (((18446744073709551615ULL) - (18446744073709551607ULL)))))) ? (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) arr_11 [i_0] [i_1 - 2] [i_1 + 1] [i_1 + 1] [i_2 - 1] [i_0 - 3])) : (arr_2 [i_0] [8] [i_0 - 4]))) : ((-(arr_22 [i_0]))))))));
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(5506432462161878261LL)))) ? ((-(((long long int) arr_5 [(short)8] [(short)8] [i_2])))) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) var_2);
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */int) ((min((((/* implicit */unsigned long long int) -2147483643)), (var_15))) >= (((/* implicit */unsigned long long int) min((var_11), (var_0))))))) : (var_5)));
}
