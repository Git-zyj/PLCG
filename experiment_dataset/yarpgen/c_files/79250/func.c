/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79250
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
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 24; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1 + 1] = ((/* implicit */signed char) ((unsigned int) arr_1 [i_0]));
                arr_7 [i_0 + 2] [i_0 + 3] [i_0 + 3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_2 [i_0] [i_1]) >> (((((unsigned int) (signed char)75)) - (42U)))))) ? ((~(((8898925620313284943ULL) ^ (var_17))))) : (((/* implicit */unsigned long long int) (~(max((((/* implicit */unsigned int) (signed char)-32)), (var_8))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_13), (((/* implicit */signed char) ((_Bool) var_17)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-60)) && (((/* implicit */_Bool) 6725161507179165157ULL))))) : (((/* implicit */int) ((((/* implicit */int) ((unsigned char) var_15))) > (((/* implicit */int) var_10)))))));
}
