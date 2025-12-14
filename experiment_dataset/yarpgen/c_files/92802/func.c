/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92802
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
    var_10 ^= ((/* implicit */int) max((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_3)), ((short)-6914))))) ^ (((((/* implicit */_Bool) (short)-29799)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) min((201326592ULL), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) | (((/* implicit */int) (short)29798))))), (max((18446744073508225005ULL), (var_7))))))))));
                var_12 = ((/* implicit */unsigned char) ((short) ((18446744073508225039ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))));
                var_13 = max((((/* implicit */unsigned long long int) var_3)), (arr_3 [i_0]));
            }
        } 
    } 
}
