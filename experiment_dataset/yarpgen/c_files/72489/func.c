/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72489
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
    var_19 = ((/* implicit */_Bool) min((var_2), (var_1)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 ^= ((/* implicit */unsigned short) (+(((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))))));
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned short)65524))))) + (((/* implicit */int) min((var_12), (((/* implicit */unsigned short) (_Bool)1)))))))) / (min(((~(arr_3 [i_1]))), (var_13)))));
                arr_7 [i_1] = ((/* implicit */_Bool) (unsigned short)65519);
            }
        } 
    } 
    var_21 = 16801340479269333339ULL;
}
