/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72977
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
    var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((-6119474811766416383LL), (((/* implicit */long long int) (short)-14569))))) || (((/* implicit */_Bool) var_0)))) ? ((~(min((((/* implicit */int) var_5)), (-1418380525))))) : (((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (~(min((arr_4 [2ULL] [i_1 + 2] [19]), (((/* implicit */long long int) arr_0 [i_0 + 2] [i_0 + 1])))))))));
                arr_5 [i_0] [(unsigned short)6] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -7405848010917359780LL)) || (((/* implicit */_Bool) 1263328752906967707LL))));
            }
        } 
    } 
}
