/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65010
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
    var_19 += ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2))))) == (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) / (540039194U))))) && (((/* implicit */_Bool) (+(((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_3)))))))));
    var_20 ^= ((/* implicit */unsigned char) max((var_10), (var_10)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                var_21 = ((unsigned short) (unsigned char)226);
                var_22 += ((unsigned int) max((((((/* implicit */int) arr_1 [i_0])) % (((/* implicit */int) var_3)))), (((/* implicit */int) arr_3 [i_0]))));
                var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_1]))))) ? (max((var_4), (((/* implicit */int) var_13)))) : (((/* implicit */int) min((arr_2 [i_0]), (((/* implicit */short) (_Bool)0))))))))));
                var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (max((((arr_0 [10ULL]) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_2 [7U])))), ((((_Bool)1) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_9)))))) : (((/* implicit */int) arr_1 [i_0]))));
            }
        } 
    } 
}
