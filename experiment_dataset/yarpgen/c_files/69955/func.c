/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69955
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
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_12)) ^ (var_11)));
    var_17 = ((/* implicit */unsigned char) var_13);
    /* LoopSeq 1 */
    for (signed char i_0 = 4; i_0 < 22; i_0 += 1) 
    {
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) max((10336031143117238743ULL), (10336031143117238741ULL))))));
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_1 [4U])))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (max((10336031143117238744ULL), (((/* implicit */unsigned long long int) (unsigned char)0)))))))))));
    }
    var_20 = ((/* implicit */_Bool) (~(min((max((var_2), (var_2))), (((/* implicit */long long int) var_4))))));
}
