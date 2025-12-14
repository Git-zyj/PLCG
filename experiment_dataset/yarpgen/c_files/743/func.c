/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/743
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
    var_12 = var_8;
    var_13 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((short) var_7))) ? (((unsigned int) 1460185038U)) : (var_5)))), (((((/* implicit */_Bool) var_6)) ? ((~(576460752303423488LL))) : (min((var_10), (((/* implicit */long long int) var_7))))))));
    var_14 = ((/* implicit */long long int) var_3);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) 4194303U)) ? (-1LL) : (((/* implicit */long long int) 4294967295U))))))));
                    arr_6 [5LL] [i_1] [i_1] = ((((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_0]))))), (((var_6) ^ (arr_5 [i_0] [i_0] [i_0] [i_0])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)24935)) : (((/* implicit */int) (unsigned short)24935))))) : ((+(((((/* implicit */_Bool) var_10)) ? (524143555U) : (arr_2 [i_1 + 1] [i_1] [i_1]))))));
                    arr_7 [i_0] [5LL] [i_0] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)59046)) ? (arr_1 [i_0]) : (var_5)))))) ? (((/* implicit */long long int) arr_1 [i_2])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_9)))) ? (((var_11) + (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) 3770823741U))))));
                    arr_8 [i_0] [(unsigned short)8] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)35950)) : (((/* implicit */int) var_8))))) ? (((/* implicit */long long int) min((var_5), (arr_1 [i_0])))) : (var_6)))) ? (((((-576460752303423492LL) | (((/* implicit */long long int) var_0)))) & (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)40601))))))) : (((((/* implicit */_Bool) arr_2 [i_1 - 2] [i_1 - 2] [i_1 + 1])) ? (arr_3 [i_0] [i_0]) : (((((/* implicit */_Bool) -576460752303423477LL)) ? (arr_3 [i_0] [i_0]) : (((/* implicit */long long int) arr_1 [i_0])))))));
                }
            } 
        } 
        var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned int) min((arr_4 [i_0] [i_0] [i_0]), (min((((/* implicit */unsigned short) (short)-14608)), (arr_4 [i_0] [i_0] [i_0])))))), (((2569568659U) / (3770823747U)))));
    }
    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
    {
        var_17 = ((((/* implicit */_Bool) (~(arr_11 [i_3])))) ? ((+(var_4))) : (((/* implicit */long long int) min((3770823741U), (1574932101U)))));
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) min((((/* implicit */long long int) arr_9 [i_3])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -717151869488008656LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (2854164191U)))) ? ((~(var_6))) : (((((/* implicit */_Bool) var_8)) ? (arr_11 [i_3]) : (((/* implicit */long long int) var_0)))))))))));
    }
}
