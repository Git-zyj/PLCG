/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77479
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
    var_19 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) ((((/* implicit */int) (signed char)0)) > (((/* implicit */int) (_Bool)0)))))))));
    var_20 *= ((/* implicit */_Bool) var_2);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_4 [i_1] = max((((/* implicit */int) (unsigned short)8450)), (480825563));
                var_21 = ((/* implicit */int) 1503059427U);
                var_22 |= ((((/* implicit */int) ((_Bool) arr_2 [i_0] [i_1]))) > (((/* implicit */int) max((arr_2 [i_0] [(_Bool)1]), (arr_2 [i_0] [i_0])))));
                arr_5 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_1]))))));
            }
        } 
    } 
}
