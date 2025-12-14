/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89436
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
    var_17 = ((/* implicit */unsigned short) ((unsigned char) (((~(((/* implicit */int) var_12)))) / (((/* implicit */int) var_8)))));
    var_18 = ((/* implicit */unsigned int) (unsigned short)2610);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) - (var_2)))) || (((/* implicit */_Bool) var_8))))), ((~((~(0ULL)))))));
                arr_6 [(unsigned short)18] [i_0] [i_1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((var_4) + (((/* implicit */long long int) ((/* implicit */int) var_14)))))), (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (short)4026))))));
            }
        } 
    } 
}
