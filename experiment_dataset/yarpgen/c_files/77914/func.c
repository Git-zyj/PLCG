/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77914
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
    /* LoopSeq 1 */
    for (short i_0 = 4; i_0 < 12; i_0 += 4) 
    {
        var_18 -= ((/* implicit */unsigned int) max((max((arr_0 [i_0 - 4]), (arr_0 [i_0 - 3]))), ((!(((/* implicit */_Bool) arr_1 [i_0 + 1]))))));
        var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0 - 1]))))) || (((/* implicit */_Bool) min((((unsigned short) -1508698122421912794LL)), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_1 [i_0]))))))))));
    }
    var_20 -= ((((/* implicit */_Bool) 2812046307U)) ? (((/* implicit */int) (short)30720)) : (((/* implicit */int) (unsigned char)48)));
    var_21 = ((((/* implicit */int) (((!(((/* implicit */_Bool) -1471932086)))) && (((/* implicit */_Bool) 18446744073709551595ULL))))) ^ (((/* implicit */int) var_11)));
    var_22 = var_4;
}
