/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/790
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
    for (unsigned short i_0 = 4; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) (short)-7704)), (var_1)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)8)), ((unsigned short)65535)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (-(max((var_5), (((/* implicit */long long int) (unsigned char)22))))));
    }
    var_11 = ((/* implicit */int) max((var_11), (((((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) var_1)) : (var_8)))) ? (((/* implicit */int) min(((unsigned short)11), (((/* implicit */unsigned short) (unsigned char)8))))) : (((/* implicit */int) max(((unsigned short)60162), ((unsigned short)65535)))))) % (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) (unsigned short)2))))))));
    var_12 = ((/* implicit */unsigned int) var_4);
}
