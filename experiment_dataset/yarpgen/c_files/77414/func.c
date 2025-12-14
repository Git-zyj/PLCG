/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77414
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_7 [5] [(signed char)14] [5] = ((/* implicit */unsigned short) ((var_0) > ((~(max((((/* implicit */unsigned long long int) arr_6 [i_2])), (var_5)))))));
                    arr_8 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), ((~(arr_4 [i_0] [i_1] [i_2])))))) ? (((((/* implicit */int) min((arr_0 [i_0]), (var_1)))) << (((var_0) - (10312041524539045186ULL))))) : (((/* implicit */int) arr_6 [i_0 - 1]))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */signed char) min((var_7), (((/* implicit */unsigned char) (_Bool)1))));
}
