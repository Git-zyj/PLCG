/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78942
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 23; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */_Bool) min((min((arr_5 [i_0] [i_0] [i_1 + 1] [i_2]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_2 - 2])) && (((/* implicit */_Bool) 3726209663340513773LL))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_0 [i_0]))) && (((/* implicit */_Bool) min((var_15), (((/* implicit */unsigned long long int) arr_3 [i_2 + 1] [i_1 + 1] [i_0]))))))))));
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (unsigned short)45307)))) || (((/* implicit */_Bool) -3726209663340513751LL))));
                    arr_9 [i_0] [i_1] [i_2] [i_2 - 1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((((arr_0 [i_2]) | (((/* implicit */long long int) ((/* implicit */int) var_9))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-27756)) ? (var_1) : (3171008194U))))))), (((((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) (unsigned short)45307)))) ? (((/* implicit */unsigned long long int) var_5)) : ((~(arr_5 [i_0] [i_1] [i_2] [i_2])))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) var_10);
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) var_12))));
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 614404220U)) ? (((/* implicit */long long int) var_1)) : (3726209663340513773LL)));
}
