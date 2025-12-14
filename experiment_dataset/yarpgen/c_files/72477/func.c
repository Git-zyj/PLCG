/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72477
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
    var_19 &= ((/* implicit */_Bool) min((var_5), (var_5)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)8)) || (var_1))) ? ((+(arr_3 [i_0 - 1] [i_0 - 1] [i_1 + 1]))) : (((unsigned long long int) 125829120LL))));
                var_21 = ((/* implicit */unsigned int) max((max((arr_4 [i_1] [(short)3] [i_0]), (((/* implicit */short) (unsigned char)0)))), (((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0] [(unsigned char)7] [i_0])) || (((/* implicit */_Bool) var_12)))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((min((125829129LL), (((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0])))) * (((/* implicit */long long int) (-(((/* implicit */int) var_10))))))) * (max((((/* implicit */long long int) -647212940)), (125829156LL)))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) -125829121LL)) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)-32746))))) : (125829147LL)));
    var_23 = ((/* implicit */unsigned int) var_4);
}
