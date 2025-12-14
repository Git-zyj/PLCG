/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5791
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
    for (long long int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_4 [i_0 + 1] [i_1] = ((/* implicit */short) (-((~(((/* implicit */int) var_7))))));
                arr_5 [i_0 - 2] = max((((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) (unsigned short)50135)), (2674218521U))), (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) == (((/* implicit */int) (unsigned short)15371)))))))), (17734096408739749175ULL));
                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) min((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned char)227)))), (((/* implicit */unsigned long long int) max((9223372036854775807LL), (((/* implicit */long long int) (signed char)-123))))))))));
                var_14 = -8025636262919494600LL;
            }
        } 
    } 
    var_15 -= ((/* implicit */unsigned int) min((((/* implicit */long long int) var_11)), (-6768828967408727143LL)));
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_11)), (var_1)))) || (((/* implicit */_Bool) min((var_9), (((/* implicit */long long int) var_5)))))));
}
