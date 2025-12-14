/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71724
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 2U)) ^ (12617020572504281237ULL)));
    var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)7122)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) (+(62605856)));
                var_22 = ((/* implicit */unsigned short) 2337652113U);
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */long long int) 5924660)), ((-9223372036854775807LL - 1LL))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_2 = 0; i_2 < 18; i_2 += 2) 
    {
        var_23 *= ((/* implicit */unsigned long long int) ((_Bool) (signed char)-118));
        var_24 |= ((/* implicit */unsigned int) arr_7 [i_2]);
        arr_8 [i_2] [i_2] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 5924686)) ? (1050785466) : (((/* implicit */int) (unsigned short)1))))));
        arr_9 [i_2] = ((/* implicit */unsigned int) (_Bool)1);
    }
}
