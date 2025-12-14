/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98089
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
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_11 ^= ((/* implicit */unsigned short) min((11562708596674606049ULL), (((/* implicit */unsigned long long int) arr_2 [i_1]))));
                var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((short) ((unsigned int) min((13246035108095255468ULL), (((/* implicit */unsigned long long int) var_8)))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) (-(var_4)));
}
