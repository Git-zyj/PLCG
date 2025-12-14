/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96048
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
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        var_12 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3)) ? (((/* implicit */int) (short)-23410)) : (((/* implicit */int) (short)-23387))))) ? (((long long int) (+(((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-23372)))))));
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -215150753)) ? (7470023098157693154ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-67)))));
        arr_3 [i_0] = (short)-12214;
        var_14 = ((/* implicit */unsigned long long int) (+(min((((long long int) var_5)), (((((/* implicit */long long int) ((/* implicit */int) (short)-23375))) % (-6LL)))))));
    }
    var_15 = ((/* implicit */short) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((int) var_2)))) ^ (((/* implicit */int) var_8))));
}
