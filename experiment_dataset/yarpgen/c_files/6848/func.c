/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6848
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
    var_13 = ((/* implicit */short) min((max((((var_6) << (((var_11) - (148891814U))))), (((/* implicit */unsigned long long int) (signed char)7)))), (((/* implicit */unsigned long long int) max((((int) var_1)), (var_2))))));
    var_14 ^= ((/* implicit */short) ((min((((/* implicit */long long int) ((short) (signed char)7))), (((long long int) (_Bool)1)))) < (((/* implicit */long long int) var_12))));
    var_15 -= ((/* implicit */long long int) min((min((min((((/* implicit */unsigned long long int) var_4)), (var_6))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) << (((var_2) - (430990101)))))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_4)), (max((((/* implicit */unsigned int) var_8)), (var_12))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_3 [i_0] = max((var_4), (((/* implicit */unsigned short) max(((signed char)-6), ((signed char)-6)))));
        var_16 |= max((max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned int) (signed char)6)))), (min((arr_2 [i_0] [i_0]), (((/* implicit */unsigned int) arr_0 [i_0] [i_0])))));
    }
}
