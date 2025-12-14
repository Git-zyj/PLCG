/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90873
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) | (((((/* implicit */_Bool) (~(var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_0)))) : (((((/* implicit */_Bool) var_3)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
    var_18 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min(((short)32767), (((/* implicit */short) (signed char)-50))))) || (var_6))))) - (var_1)));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) min((((/* implicit */int) var_7)), (((((/* implicit */int) var_3)) | (((/* implicit */int) var_14))))));
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((int) min((var_14), (((/* implicit */unsigned short) var_8)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) ((signed char) (unsigned char)255)))))) : (((((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_2)))) - (((/* implicit */int) var_3))))));
        arr_5 [(short)14] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_9)), (var_7)))) ? (((((/* implicit */_Bool) (signed char)59)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)30))) : (2305842871774740480LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_13))))));
    }
}
