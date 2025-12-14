/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66754
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
    var_15 = ((/* implicit */unsigned long long int) max((var_13), ((-(min((var_13), (((/* implicit */unsigned int) var_8))))))));
    var_16 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((var_14) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [(unsigned char)20])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) min(((short)-1952), (((/* implicit */short) arr_5 [i_0]))))) ? (((long long int) arr_1 [i_0 - 1] [2U])) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
                var_18 ^= ((/* implicit */_Bool) (-(((/* implicit */int) ((((arr_0 [i_0]) >> (((((/* implicit */int) var_5)) - (17832))))) > (((/* implicit */unsigned long long int) arr_4 [i_0] [10ULL] [i_0 + 2])))))));
            }
        } 
    } 
}
