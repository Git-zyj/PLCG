/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95004
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
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) var_11))));
    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (unsigned short)4088))));
    var_22 = ((/* implicit */unsigned int) var_19);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((arr_3 [i_0]) >> (((/* implicit */int) (_Bool)1)))) + (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((((/* implicit */unsigned int) var_19)) & (arr_3 [i_1 + 3]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)104))))))))));
                var_24 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) var_7))) ? (((/* implicit */int) arr_2 [i_1 + 2] [i_1] [(unsigned char)14])) : (((((/* implicit */int) var_10)) * (((/* implicit */int) var_18))))));
                arr_4 [(_Bool)1] &= ((/* implicit */unsigned short) ((signed char) min((((/* implicit */unsigned int) var_8)), (arr_3 [i_0]))));
            }
        } 
    } 
}
