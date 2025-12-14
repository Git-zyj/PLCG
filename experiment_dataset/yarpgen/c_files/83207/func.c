/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83207
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
    var_12 *= ((/* implicit */unsigned char) (~(((/* implicit */int) (((-9223372036854775807LL - 1LL)) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)208))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))))), (-1LL))))));
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) arr_0 [(signed char)1]);
                }
            } 
        } 
    } 
}
