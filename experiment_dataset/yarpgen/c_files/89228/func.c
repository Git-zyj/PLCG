/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89228
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                {
                    var_10 = ((long long int) ((var_2) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)161)))));
                    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_3))))) ? (min((min((((/* implicit */long long int) 4269837643U)), (var_3))), (((/* implicit */long long int) max((arr_1 [i_0] [i_1 - 2]), (512U)))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)28))) + (arr_5 [i_0] [i_1] [i_0] [i_2 - 1]))))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))));
    var_13 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned char) (unsigned short)12)))));
}
