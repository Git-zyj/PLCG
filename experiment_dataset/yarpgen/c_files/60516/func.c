/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60516
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
    var_15 = ((/* implicit */unsigned int) var_0);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            {
                var_16 += ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_8)), (max((4ULL), (max((((/* implicit */unsigned long long int) var_8)), (18446744073709551611ULL)))))));
                var_17 = ((/* implicit */unsigned short) min((max((18446744073709551608ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)254)) : (var_3)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) var_13))))))))));
                var_18 = (-9223372036854775807LL - 1LL);
            }
        } 
    } 
    var_19 = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((var_11), (var_4)))), (max((((/* implicit */long long int) var_6)), (var_8)))))), (min((((18446744073709551608ULL) & (((/* implicit */unsigned long long int) -789821524771518365LL)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) & (0ULL)))))));
}
