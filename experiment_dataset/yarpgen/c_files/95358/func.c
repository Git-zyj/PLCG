/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95358
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
    var_15 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((unsigned int) var_2))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)14)) : (var_12)))) : (max((((/* implicit */long long int) -1966174154)), (-6538653074167042532LL))))), (((/* implicit */long long int) var_4))));
    var_16 |= ((/* implicit */_Bool) (short)437);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 13; i_2 += 4) 
            {
                {
                    var_17 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) arr_4 [i_0]))))), (min((arr_4 [i_0]), (((/* implicit */short) arr_7 [(unsigned char)6] [(signed char)3] [i_2])))))))) / (((((/* implicit */_Bool) 1230755146)) ? (3045819408090132928ULL) : (((/* implicit */unsigned long long int) 1230755153))))));
                    var_18 = ((/* implicit */signed char) -1230755159);
                }
            } 
        } 
    } 
}
