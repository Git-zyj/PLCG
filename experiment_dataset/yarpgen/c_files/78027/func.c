/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78027
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((2U), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)29089)) << (((var_1) - (1374732109U))))))))) ? (2U) : (2308233493U)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1] = ((unsigned int) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) var_8)) : (2U))), (32768U)));
                    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((2504882986U) <= (((var_1) >> (((((((/* implicit */_Bool) (unsigned short)29089)) ? (((/* implicit */int) (unsigned short)25362)) : (((/* implicit */int) (unsigned short)23025)))) - (25354))))))))));
                }
            } 
        } 
    } 
}
