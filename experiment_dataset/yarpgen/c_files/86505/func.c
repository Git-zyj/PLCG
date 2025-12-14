/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86505
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
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) var_12))));
    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((_Bool) var_5))), (((3079555340U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5549)))))))) ? (((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)56))))) & (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 4127623224U)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_4 [i_0] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) arr_0 [i_0] [i_1])))));
                arr_5 [i_0] [i_0] = ((/* implicit */short) ((signed char) (short)31935));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) ((unsigned int) var_11));
}
