/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96287
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
    var_11 = ((/* implicit */_Bool) (-(var_3)));
    var_12 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned short)23485)) ? (var_2) : (((/* implicit */unsigned int) -311472070)))), (((/* implicit */unsigned int) var_3))))), (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42056))) * (var_0))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) / (((/* implicit */int) var_7)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned int) min((((arr_1 [i_1]) | (((/* implicit */int) (unsigned char)197)))), (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_4 [i_1]))))));
                arr_8 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_8)), (((((-361657493) + (2147483647))) << (((((/* implicit */int) (unsigned short)42033)) - (42033)))))));
                var_14 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned short)6531)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_1]))) : (var_2))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2074038137)) ? (((/* implicit */int) (unsigned char)197)) : (((/* implicit */int) (signed char)101)))))));
            }
        } 
    } 
    var_15 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(max((((/* implicit */long long int) var_3)), (var_10)))))) ? ((-(((int) var_7)))) : (var_3)));
}
