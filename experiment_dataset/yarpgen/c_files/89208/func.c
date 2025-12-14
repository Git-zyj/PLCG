/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89208
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
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            for (long long int i_2 = 4; i_2 < 15; i_2 += 2) 
            {
                {
                    var_18 = ((unsigned int) min((((((/* implicit */_Bool) -508286818)) ? (9223372036854775807LL) : (arr_5 [i_0] [(signed char)3] [i_2] [i_2]))), (((long long int) var_1))));
                    arr_8 [14U] [i_1 - 2] [i_2] = (~(((/* implicit */int) ((short) -508286832))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)32767)) ? (var_7) : (((/* implicit */unsigned long long int) 1308198239300342862LL))));
    var_20 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-20316)) || (((/* implicit */_Bool) var_12))))) : (((/* implicit */int) ((unsigned short) var_10))))) >> (((max((((9223372036854775805LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)66))))), (((((/* implicit */long long int) var_14)) / (var_17))))) - (139748061164466295LL)))));
}
