/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71987
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) (-(304187840U)));
        var_19 -= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */int) (short)-18930)) & (((/* implicit */int) (short)-18930)))) : (((/* implicit */int) arr_2 [i_0]))))));
        arr_3 [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
    }
    var_20 = ((/* implicit */unsigned short) ((((long long int) ((2147483647) != (((/* implicit */int) var_13))))) * ((-(max((((/* implicit */long long int) (unsigned char)121)), (9223372036854775776LL)))))));
    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) var_0))));
    var_22 &= ((/* implicit */_Bool) ((((int) var_2)) / (((/* implicit */int) var_6))));
}
