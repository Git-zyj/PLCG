/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66886
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = (!(((/* implicit */_Bool) var_1)));
        var_14 = ((/* implicit */int) (((_Bool)0) ? (0ULL) : (11612711383664341838ULL)));
    }
    /* vectorizable */
    for (unsigned char i_1 = 2; i_1 < 9; i_1 += 1) 
    {
        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-105))))))))));
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) arr_3 [i_1 - 2]);
            arr_9 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2])) ? (arr_4 [i_1 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned short)25753)))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))) - (arr_4 [i_1])))));
        }
        var_16 |= ((/* implicit */short) ((((/* implicit */int) (unsigned char)27)) >> (((/* implicit */int) (!(((/* implicit */_Bool) -1353146252)))))));
    }
    for (int i_3 = 0; i_3 < 25; i_3 += 1) 
    {
        var_17 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) -1519943410))))) & (2098506590)));
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_3]))))))))));
        var_19 -= (!(((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_10 [i_3] [i_3])))));
    }
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) / (var_5)));
}
