/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78949
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
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (+(((/* implicit */int) var_1)))))));
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)12)) ^ (((/* implicit */int) (signed char)12))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((/* implicit */long long int) (~(72057593970819072ULL)));
        var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) -1865470700))));
        arr_2 [(_Bool)1] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */short) arr_1 [i_0] [i_0]))))) ? (6434407812774595054LL) : (((/* implicit */long long int) 131071U))))));
        var_23 |= ((/* implicit */short) min(((+(((/* implicit */int) var_17)))), (((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_24 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_18)))) ? ((~(6434407812774595056LL))) : (((/* implicit */long long int) (+(((/* implicit */int) var_3)))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_1] [13LL])) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-22821)) && (((/* implicit */_Bool) arr_0 [i_1]))))) : (((/* implicit */int) ((unsigned char) arr_4 [i_1])))));
        arr_6 [i_1] = ((/* implicit */unsigned long long int) 3796427679U);
    }
}
