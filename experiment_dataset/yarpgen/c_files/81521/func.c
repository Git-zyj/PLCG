/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81521
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
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)90)))))));
    var_21 = ((/* implicit */unsigned long long int) var_1);
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        var_22 -= ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)90))));
        var_23 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (unsigned short)54143)), (min((((/* implicit */unsigned long long int) (short)32256)), (8333819842133704270ULL)))));
        var_24 = ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)101)), (3066896865U)))) : (var_12))) >> (min((((/* implicit */unsigned long long int) ((long long int) arr_1 [i_0]))), (var_12))));
    }
    var_25 = ((/* implicit */unsigned long long int) ((signed char) (short)9672));
}
