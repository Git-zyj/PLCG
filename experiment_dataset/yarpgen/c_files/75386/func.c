/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75386
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_0] [i_1]))));
                var_12 ^= ((/* implicit */short) ((((/* implicit */int) arr_2 [i_1])) * (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [11ULL] [i_1])) && (((/* implicit */_Bool) var_1)))))));
                var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((((/* implicit */int) arr_0 [i_0] [i_0])) << (((((/* implicit */int) arr_0 [i_1] [i_1])) - (79))))) - (((((/* implicit */int) arr_2 [i_1])) ^ (((/* implicit */int) arr_2 [i_1])))))))));
                var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((min((1800884114771156788ULL), (((/* implicit */unsigned long long int) arr_5 [i_1] [i_1])))) - (((/* implicit */unsigned long long int) ((long long int) arr_2 [i_1]))))))));
                var_15 = ((/* implicit */unsigned short) ((7331378903033580663LL) == (288230376151711743LL)));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) (((+(min((var_8), (var_8))))) == (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-15282))) > (5469545600656453652LL))))));
}
