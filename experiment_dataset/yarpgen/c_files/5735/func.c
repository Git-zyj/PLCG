/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5735
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
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_15 = ((/* implicit */int) ((max((arr_1 [i_0] [i_0]), (((var_4) << (((/* implicit */int) var_13)))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned char)140), (arr_2 [i_0] [i_0])))) && (var_13)))))));
        arr_3 [(unsigned short)21] [(unsigned short)21] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)110))) : (122880U)));
    }
    var_16 -= ((/* implicit */_Bool) var_2);
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((short) var_3)))));
}
