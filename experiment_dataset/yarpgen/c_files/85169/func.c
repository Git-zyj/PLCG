/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85169
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
    var_15 = ((/* implicit */int) ((unsigned char) (signed char)13));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) ((int) (short)-32746))) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)12)) + (((/* implicit */int) arr_3 [i_0] [i_1])))))))) - (((/* implicit */int) arr_1 [i_0] [i_0])))))));
                var_17 = ((/* implicit */signed char) ((max((var_4), (((/* implicit */int) arr_1 [i_0] [i_0 + 2])))) % (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_3 [i_0 + 2] [i_0 - 1])) : (((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) var_6))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) ((((((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-77))) : (5078858099810983460ULL))) - (((/* implicit */unsigned long long int) ((-5658814874328934720LL) + (((/* implicit */long long int) ((/* implicit */int) var_13)))))))) + (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))), (((var_5) + (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))));
}
