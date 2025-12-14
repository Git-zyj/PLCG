/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99758
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
    var_19 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((min(((unsigned short)65535), (((/* implicit */unsigned short) (_Bool)1)))), (((/* implicit */unsigned short) (unsigned char)224))))), (min((min((var_1), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) var_16))))));
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_11)))) ? (max((var_2), (var_17))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) && (((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_15))))));
    var_21 = ((/* implicit */signed char) (unsigned short)65535);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) 9092072041213594001ULL);
        arr_4 [i_0] [0U] = ((/* implicit */signed char) (_Bool)1);
        var_22 = ((/* implicit */signed char) arr_2 [4U]);
    }
}
