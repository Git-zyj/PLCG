/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69991
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
    var_20 = ((/* implicit */unsigned char) ((unsigned int) (unsigned char)195));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) max((2547280227U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_0 [2] [i_0]), ((unsigned char)61))))))))))));
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)31357)) / (((/* implicit */int) (short)63)))))));
        var_23 = ((/* implicit */_Bool) (-(max((min((2013082041), (((/* implicit */int) arr_0 [i_0] [(signed char)22])))), (((((/* implicit */int) arr_1 [i_0] [i_0])) >> (((/* implicit */int) arr_1 [i_0] [i_0]))))))));
        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (max((4294967295U), (((/* implicit */unsigned int) (short)46)))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0] [i_0])))))));
    }
    var_25 = ((/* implicit */short) var_3);
}
