/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96957
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
    var_16 = ((/* implicit */signed char) (unsigned short)31744);
    var_17 = ((/* implicit */int) ((18446744073709551614ULL) << (((var_2) - (1913843163)))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned short) var_0);
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max(((+(arr_1 [i_0]))), (((/* implicit */int) (_Bool)1))))), (min((((((/* implicit */_Bool) (unsigned char)255)) ? (18446744073709551607ULL) : (((/* implicit */unsigned long long int) 9223372036854775804LL)))), (((/* implicit */unsigned long long int) ((int) 6ULL))))))))));
            }
        } 
    } 
}
