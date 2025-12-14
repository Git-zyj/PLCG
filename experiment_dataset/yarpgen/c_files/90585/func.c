/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90585
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
    var_10 = ((/* implicit */signed char) 2020418370);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 &= ((/* implicit */unsigned int) (+(min((min((-2020418395), (((/* implicit */int) (_Bool)0)))), ((+(((/* implicit */int) arr_1 [i_0]))))))));
                arr_5 [i_1] [(_Bool)1] [i_1] = ((((((/* implicit */_Bool) max((-3559870244714470203LL), (((/* implicit */long long int) arr_4 [i_0] [i_0] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_2 [i_0]))) / (((/* implicit */long long int) (-((-(2020418354)))))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
            }
        } 
    } 
}
