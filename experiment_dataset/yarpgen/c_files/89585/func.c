/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89585
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_8 [i_0] = ((/* implicit */unsigned char) (+(min((6251902660060631175LL), (((/* implicit */long long int) var_17))))));
                var_19 = ((/* implicit */unsigned short) (((-(((arr_0 [i_0]) ? (-6251902660060631188LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))))))) != (((/* implicit */long long int) min((((((/* implicit */int) arr_5 [i_0])) - (((/* implicit */int) arr_0 [i_0])))), ((-(((/* implicit */int) var_8)))))))));
                arr_9 [i_0] [(signed char)11] [i_1] = ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) * (((((/* implicit */_Bool) arr_1 [i_0])) ? (6251902660060631180LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))))));
                var_20 = ((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_6 [i_0] [i_1])) * (((/* implicit */int) (signed char)46))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (((~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_1))))) >> (((((/* implicit */int) (signed char)-63)) + (77))))))));
}
