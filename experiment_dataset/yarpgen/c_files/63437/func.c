/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63437
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
    var_18 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) ((long long int) var_11))), (10ULL))) * (10ULL)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_2 + 2] [i_2]))))) & (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-28199)), (var_17)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_9)))) : (6ULL)))));
                    arr_8 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) var_17);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) var_11);
    var_20 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (var_8) : (var_10)))), (((((/* implicit */_Bool) var_0)) ? (9ULL) : (34ULL)))));
}
