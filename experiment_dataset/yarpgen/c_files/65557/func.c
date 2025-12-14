/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65557
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
    var_10 = ((/* implicit */unsigned long long int) (+((+(((unsigned int) 6864880907135788599ULL))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) var_7);
                arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_0 [i_1] [i_1 + 2]) ? (6864880907135788599ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59735)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))) : (((144110790029344768ULL) - (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)0)) - (((/* implicit */int) (unsigned short)5800)))))))));
                var_12 = ((/* implicit */unsigned long long int) max((var_12), (((((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_0 - 2]))) ? ((-(14237515092694730299ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (_Bool)0))))))));
            }
        } 
    } 
}
