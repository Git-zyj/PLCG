/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73932
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 13; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) arr_2 [i_0] [i_1 - 3] [(short)12])) ^ (((/* implicit */int) arr_2 [(unsigned char)8] [i_1 - 2] [i_1 - 1])))));
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_3 [i_0])))) ? (((/* implicit */long long int) max((((/* implicit */int) arr_2 [i_0] [i_0] [i_1 + 1])), (((var_1) ? (((/* implicit */int) arr_2 [i_0] [(unsigned char)0] [(unsigned char)0])) : (((/* implicit */int) var_5))))))) : (max((((/* implicit */long long int) (unsigned char)62)), (var_0)))));
                var_16 &= ((/* implicit */unsigned char) arr_1 [i_0]);
                var_17 = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned long long int) (short)10126)), (9506244209585235325ULL))))) != (((/* implicit */int) arr_0 [i_0]))));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) 1442041125);
}
