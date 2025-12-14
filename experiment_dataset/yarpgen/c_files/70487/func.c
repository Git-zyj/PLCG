/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70487
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)123))) / (18446744073709551615ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (var_6)))))));
                    var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) ((4ULL) ^ (((/* implicit */unsigned long long int) 0)))))));
                }
            } 
        } 
    } 
    var_12 *= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((((((/* implicit */int) var_1)) == (-2147483630))), (((((/* implicit */int) var_4)) > (((/* implicit */int) var_1))))))), (18446744073709551611ULL)));
    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) min((((((/* implicit */long long int) ((/* implicit */int) ((1ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) + (((((/* implicit */_Bool) 17ULL)) ? (((/* implicit */long long int) 1012165467)) : (var_0))))), (((/* implicit */long long int) min((var_9), (min((var_9), (((/* implicit */unsigned short) var_7))))))))))));
}
