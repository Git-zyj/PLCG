/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67159
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
    var_11 = ((/* implicit */unsigned long long int) max(((unsigned short)28457), (((/* implicit */unsigned short) var_2))));
    var_12 = ((/* implicit */unsigned short) min((var_12), ((unsigned short)37079)));
    var_13 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) 2147483647)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (7ULL)))))));
    var_14 = ((/* implicit */signed char) var_10);
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) var_7);
        arr_3 [i_0] = ((/* implicit */long long int) (short)-7901);
    }
    for (unsigned int i_1 = 1; i_1 < 14; i_1 += 1) 
    {
        var_15 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3855557243070715322LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 + 3]))) : (7ULL)))) ? (((/* implicit */unsigned int) ((2147483647) << (((((/* implicit */int) (short)7901)) - (7901)))))) : (((arr_4 [i_1 + 3]) * (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))))));
        arr_7 [i_1 + 2] = ((/* implicit */unsigned short) ((4294963200U) % (((unsigned int) ((((/* implicit */_Bool) (short)29992)) ? (((/* implicit */int) arr_1 [(_Bool)1])) : (((/* implicit */int) arr_6 [(signed char)14])))))));
    }
}
