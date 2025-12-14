/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55321
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
    var_18 = ((/* implicit */short) var_4);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) 2ULL))))), (min(((short)-22977), ((short)22977)))));
                    arr_10 [i_0] [i_1] = ((/* implicit */int) ((long long int) min(((~(arr_1 [i_2]))), (((/* implicit */long long int) max(((short)22992), (((/* implicit */short) arr_4 [i_0] [i_1] [i_2]))))))));
                    arr_11 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (short)22977)) != (((/* implicit */int) (short)-23004)))))) ? (((/* implicit */unsigned int) ((int) arr_6 [i_1]))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (short)-22968))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_2 + 2] [i_2 + 2] [(short)6]))) : (var_2)))));
                    arr_12 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */short) arr_7 [i_2 + 1]);
                    var_20 = (+(((unsigned long long int) (short)22985)));
                }
            } 
        } 
    } 
}
