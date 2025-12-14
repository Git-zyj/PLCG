/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54974
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_0] = (!(((/* implicit */_Bool) 8176)));
                var_14 += (((!(arr_4 [i_0] [i_1 - 1] [(_Bool)1]))) ? ((-(((/* implicit */int) arr_1 [i_1 - 1])))) : (8176));
                var_15 = ((/* implicit */unsigned short) min(((~(8188))), (((/* implicit */int) (!(((/* implicit */_Bool) 13261595789452336182ULL)))))));
            }
        } 
    } 
    var_16 |= ((/* implicit */int) (-(((((/* implicit */_Bool) ((unsigned long long int) -8177))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-1)) || (((/* implicit */_Bool) 13744419726215809470ULL)))))) : (((((/* implicit */_Bool) 2122986663U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-78))) : (var_2)))))));
    var_17 = ((/* implicit */unsigned char) min((0ULL), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)15)))))));
    var_18 ^= ((/* implicit */int) ((((/* implicit */_Bool) 945045753)) && (((/* implicit */_Bool) ((max((((/* implicit */int) (unsigned char)58)), (-8177))) % (((/* implicit */int) (unsigned short)62292)))))));
}
