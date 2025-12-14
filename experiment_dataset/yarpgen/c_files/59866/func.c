/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59866
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
    var_19 = ((/* implicit */unsigned short) var_8);
    var_20 = ((/* implicit */long long int) var_18);
    var_21 = ((_Bool) var_11);
    var_22 = ((signed char) (~(((int) var_4))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0 + 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)47))) ? (((((/* implicit */_Bool) max((var_16), (((/* implicit */signed char) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)181))) : (((((/* implicit */long long int) ((/* implicit */int) var_7))) + (arr_0 [i_0]))))) : (((((/* implicit */_Bool) (unsigned short)65530)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))) : (min((arr_1 [i_0]), (arr_1 [i_0])))))));
        arr_3 [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((long long int) (signed char)(-127 - 1))) < (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)156)))))))), (-1LL)));
    }
}
