/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92224
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
    var_18 &= ((/* implicit */int) var_16);
    var_19 = ((/* implicit */short) ((min((((/* implicit */long long int) min((((/* implicit */int) (unsigned short)35857)), (var_11)))), (var_7))) == (min(((~(2859633275705623285LL))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)255)))))))));
    var_20 = ((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)79))) < (4294967293U)))), (var_12)))) < ((-(((/* implicit */int) min(((unsigned char)243), (var_1))))))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        var_21 = ((/* implicit */int) max(((~(arr_1 [i_0 + 1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-6)) && (((/* implicit */_Bool) 0U)))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)32749))))) >= ((-(var_13))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        var_22 += ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)29676)), (0ULL))))))) == (min(((+(((/* implicit */int) (signed char)-6)))), (((/* implicit */int) (unsigned short)25597)))));
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (~(min((0ULL), (((/* implicit */unsigned long long int) (unsigned char)215)))))))));
    }
}
