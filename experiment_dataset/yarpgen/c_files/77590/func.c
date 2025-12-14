/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77590
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
    var_17 = ((/* implicit */unsigned short) var_0);
    var_18 = ((/* implicit */int) var_0);
    var_19 |= ((/* implicit */long long int) min((var_2), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_4)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_0]))));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) max((((arr_4 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_10)))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_14)) : (min((((/* implicit */int) arr_3 [i_0 + 1] [i_1] [i_0 - 1])), (-986262148)))))));
                var_20 ^= ((/* implicit */unsigned int) arr_1 [(unsigned short)12]);
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? ((~(((/* implicit */int) max((var_10), (arr_1 [i_0])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) -986262149)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) min((var_4), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_16)) != (((/* implicit */int) var_2))))) != ((~(((/* implicit */int) var_14)))))))));
}
