/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92759
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
    var_14 |= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)33591)) : (((/* implicit */int) (unsigned short)38268))))), (min((((((/* implicit */_Bool) (unsigned short)27267)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38272))))), (((/* implicit */unsigned long long int) (short)10062))))));
    var_15 = ((/* implicit */long long int) (+((+(((/* implicit */int) (signed char)-96))))));
    var_16 = ((((/* implicit */unsigned long long int) (-(var_7)))) % (max((max((var_6), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-1))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_17 = ((/* implicit */int) ((((((/* implicit */_Bool) -1638609716839175653LL)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned char)224)))) == (((/* implicit */int) min(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)1)))))));
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)27260)) % (((/* implicit */int) (signed char)-96))));
    }
}
