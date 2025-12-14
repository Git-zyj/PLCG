/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95682
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
    var_12 = ((/* implicit */_Bool) var_5);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned char) arr_4 [i_0] [i_0] [i_0]);
                var_14 ^= ((/* implicit */_Bool) min(((~(max((((/* implicit */unsigned int) arr_2 [i_1])), (845990821U))))), (3448976489U)));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) min((max((((unsigned long long int) var_2)), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) & ((-(((/* implicit */int) (_Bool)1)))))))));
}
