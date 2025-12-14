/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92968
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
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                arr_5 [i_1] [(_Bool)1] = ((((/* implicit */int) arr_1 [i_1] [4])) != (((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (max((((/* implicit */unsigned short) arr_4 [i_0])), (var_0)))))));
                var_11 = ((/* implicit */long long int) var_6);
            }
        } 
    } 
    var_12 &= ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (short)12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65522)))))))) : (var_3));
}
