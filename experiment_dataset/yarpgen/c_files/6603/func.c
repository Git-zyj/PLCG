/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6603
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
    var_18 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -9151093471510540246LL)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned char)39))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)249))) : (var_13)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            {
                arr_6 [i_0] [(_Bool)1] [i_0] &= ((/* implicit */short) arr_1 [i_1] [i_0]);
                var_19 = ((/* implicit */unsigned int) max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) (+(var_5))))));
                arr_7 [i_0] [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) var_5)) ? (arr_5 [i_1] [i_1 - 1]) : (arr_5 [i_1 + 1] [i_1 - 1])))));
            }
        } 
    } 
}
