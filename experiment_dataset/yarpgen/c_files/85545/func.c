/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85545
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
    var_11 = ((/* implicit */unsigned char) ((unsigned long long int) (+(((/* implicit */int) max((((/* implicit */short) var_8)), ((short)2044)))))));
    var_12 = (~((-(((int) var_2)))));
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 8; i_0 += 3) 
    {
        arr_2 [(short)6] [i_0 - 1] &= ((/* implicit */signed char) (-(((/* implicit */int) (short)30))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) max(((short)770), ((short)-9223))))))) ? ((+(arr_1 [i_0]))) : (max((arr_1 [i_0]), ((+(((/* implicit */int) var_2))))))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            var_13 = ((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) var_2))))) + (1152919305583591424LL)));
            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (arr_1 [i_0]) : (2147483647))) ^ (((/* implicit */int) (signed char)(-127 - 1)))))) ? ((((-2147483647 - 1)) * (((/* implicit */int) (_Bool)1)))) : (max((((/* implicit */int) (!(var_3)))), ((-(((/* implicit */int) var_2))))))));
        }
    }
}
