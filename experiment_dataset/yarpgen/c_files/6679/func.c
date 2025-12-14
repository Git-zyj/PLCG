/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6679
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
    var_16 = ((/* implicit */signed char) var_4);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                var_17 -= ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_4 [i_0] [i_1])))) | (((((/* implicit */long long int) arr_3 [16])) | (arr_2 [i_0] [(_Bool)1]))))) ^ (((/* implicit */long long int) ((int) arr_4 [i_0] [i_0])))));
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((int) arr_0 [i_1 + 1] [i_1 + 2])))));
                var_19 = ((/* implicit */short) (-(((unsigned int) arr_4 [i_0] [i_1]))));
                arr_5 [i_0] = ((/* implicit */long long int) (-(((unsigned long long int) arr_4 [i_0] [i_1 + 1]))));
            }
        } 
    } 
}
