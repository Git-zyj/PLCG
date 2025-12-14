/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62346
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
    var_18 = ((/* implicit */unsigned short) (+((+(((var_4) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) && (((/* implicit */_Bool) (-(((/* implicit */int) (short)8920)))))));
                    var_19 = max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((unsigned char) 0LL))), (((((/* implicit */_Bool) 2LL)) ? ((-9223372036854775807LL - 1LL)) : (2LL)))))), (max((((/* implicit */unsigned long long int) 2LL)), (14995358201707694694ULL))));
                }
            } 
        } 
    } 
}
