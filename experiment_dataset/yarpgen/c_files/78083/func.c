/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78083
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
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-1)) * (((/* implicit */int) (short)-1)))) + ((+(arr_2 [10] [10] [10])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [7] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (17380286591950492297ULL)))) ? (((((/* implicit */_Bool) -80934391)) ? (arr_1 [(unsigned char)14]) : (-1537525529))) : (-665252672))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 190460804))))) : (arr_2 [i_0] [i_1] [(_Bool)1])))));
                arr_4 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((-1367703227) & (54085111))) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (1676216812) : (arr_1 [i_0 + 1])))));
            }
        } 
    } 
    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (((+(((var_4) / (((/* implicit */unsigned long long int) -190460804)))))) * (((((/* implicit */unsigned long long int) (+((-2147483647 - 1))))) / (((unsigned long long int) (signed char)-3)))))))));
}
