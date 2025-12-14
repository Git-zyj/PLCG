/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96635
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
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_4 [i_1] [i_0] &= 9301220313112089597ULL;
                var_17 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */int) min((arr_0 [i_1] [i_0]), ((unsigned short)35227)))) * (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)35220)) : (((/* implicit */int) arr_2 [1ULL] [i_0] [i_0])))))));
                arr_5 [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (unsigned short)12448)) ? (((((/* implicit */_Bool) 6228929024089963772ULL)) ? (3ULL) : (arr_1 [i_0] [i_1]))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0 - 1] [(unsigned short)9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53910))) : (6101842664093485302ULL))))), (((/* implicit */unsigned long long int) arr_2 [i_0 + 2] [i_0] [i_1]))));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14213))) >= (min((((/* implicit */unsigned long long int) arr_2 [14ULL] [13ULL] [i_1])), (arr_1 [i_0 - 1] [i_1]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15))) : (arr_1 [i_0] [i_1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0] [i_1])) ^ (((/* implicit */int) (unsigned short)65509))))) : (((((/* implicit */_Bool) (unsigned short)65519)) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_0]))))))) : ((~(((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1])) ? (arr_1 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_0])))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8))) < (((((/* implicit */_Bool) 18446744073709551600ULL)) ? ((~(var_3))) : (((((/* implicit */_Bool) var_0)) ? (var_16) : (2028540790385890593ULL))))))))));
}
