/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85047
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
    var_14 = ((/* implicit */_Bool) var_4);
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) arr_3 [i_1]);
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        var_16 ^= (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (15378593267052786252ULL));
                        var_17 = ((/* implicit */unsigned int) ((arr_2 [i_0] [i_1] [i_2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [(_Bool)1] [(_Bool)1]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 1]))) * (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) 2099617203U))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_18 = arr_3 [i_0 - 1];
                        arr_13 [i_2] [i_2] [i_2 - 1] [(_Bool)1] = ((/* implicit */_Bool) 2099617203U);
                    }
                    arr_14 [i_0] [i_2] [18U] = var_10;
                }
            } 
        } 
    } 
    var_19 = max((7218481234223203253ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (_Bool)1))))));
}
