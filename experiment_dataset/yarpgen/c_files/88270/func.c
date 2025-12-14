/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88270
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
    var_13 = ((/* implicit */unsigned char) (((~(((/* implicit */int) ((_Bool) var_1))))) ^ ((~(((((/* implicit */int) (unsigned short)30387)) ^ (((/* implicit */int) (signed char)-1))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */_Bool) var_10);
                arr_4 [i_0] [i_1] = ((/* implicit */long long int) 6057747882754805165ULL);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((max((18446744073709551607ULL), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) var_8))))) ? ((-(((var_11) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1))))))) : (((/* implicit */unsigned long long int) 2273372052U))));
    var_16 = ((((/* implicit */_Bool) ((short) (!(var_3))))) && (((/* implicit */_Bool) var_5)));
    var_17 = ((/* implicit */_Bool) (((-((-(((/* implicit */int) (signed char)-27)))))) * ((+(((/* implicit */int) var_3))))));
}
