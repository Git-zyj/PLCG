/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91454
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
    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) 850528737U))));
    var_13 = (unsigned char)229;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) (signed char)-32))))) ? ((-(((((/* implicit */_Bool) 232929849)) ? (-1817504437) : (((/* implicit */int) var_1)))))) : (((/* implicit */int) arr_2 [i_0] [i_1] [(_Bool)1])))))));
                var_15 = ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), (var_1)))) ? (max((232929844), (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_0 [i_0])));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) var_11))));
}
