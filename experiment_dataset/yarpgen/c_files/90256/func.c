/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90256
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
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_10 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_5 [i_0] [i_1 + 4])))) ? (((int) arr_1 [i_0] [11LL])) : ((+(((/* implicit */int) arr_8 [i_0] [(signed char)14] [i_2])))))) : ((((-2147483647 - 1)) & (((/* implicit */int) (unsigned short)48538))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_17 [i_2] [i_1] [i_2] [(short)2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)13843)) ? (((/* implicit */long long int) -1696478847)) : (-6101375271506744881LL)));
                                arr_18 [i_4] [i_3] [(signed char)5] [i_1 + 3] [i_3] [9] = ((/* implicit */short) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned short) var_3))))) ? ((-(arr_11 [i_4] [i_2] [i_1 + 4] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_13 [i_0] [i_1]))))));
                            }
                        } 
                    } 
                    var_18 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_0]))));
                    /* LoopSeq 2 */
                    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 2) /* same iter space */
                    {
                        arr_21 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 536870911)) ? (((/* implicit */unsigned long long int) 536870911)) : (var_2))))))) : (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)24576))))) % (((/* implicit */int) arr_9 [i_0] [i_0] [(short)8] [i_1 - 1]))))));
                        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((int) arr_15 [i_1 + 3] [i_1] [i_1 + 3] [i_1 + 1] [i_5] [i_5] [i_5])))));
                    }
                    /* vectorizable */
                    for (unsigned short i_6 = 0; i_6 < 15; i_6 += 2) /* same iter space */
                    {
                        arr_24 [9] [i_1] [i_1] [i_1] [i_1 + 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1232958889467211780ULL)) ? (((/* implicit */int) (unsigned short)51682)) : ((-(((/* implicit */int) (unsigned short)23343))))));
                        arr_25 [i_0] [i_1 - 1] [i_2] [i_6] = ((/* implicit */signed char) (!(((var_16) != (((/* implicit */int) var_9))))));
                        arr_26 [i_6] [i_1] [i_1] [(short)14] = ((/* implicit */unsigned short) (~(2441472064U)));
                    }
                    var_20 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_8))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (unsigned short)51718))))) : (((/* implicit */int) (unsigned short)37447)))), (((int) max((arr_5 [i_0] [i_1]), (((/* implicit */unsigned long long int) var_8)))))));
                }
            } 
        } 
    } 
    var_21 = var_17;
    var_22 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_13)) : (var_15)))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) 1575648328)) : (var_7))) : (((((/* implicit */unsigned long long int) var_11)) & (2224247727297704393ULL))))))));
}
