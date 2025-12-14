/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95036
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
    var_11 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((var_1) * (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))), (max((var_10), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)980)) || (((/* implicit */_Bool) (short)-27804)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_12 = ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) >= (-1426491127)));
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)106)) ? (((/* implicit */int) (short)-3982)) : (-1426491125)));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((576460735123554304LL) | (((/* implicit */long long int) 4167952649U))));
        var_14 = ((/* implicit */unsigned int) ((int) -1426491108));
    }
    var_15 = ((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) ^ (4167952629U));
    var_16 -= ((max((min((var_1), (4294967295U))), (((/* implicit */unsigned int) min(((unsigned short)16338), ((unsigned short)27886)))))) % (((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */unsigned int) min((1125349584), (((/* implicit */int) var_5))))))));
    var_17 = ((var_1) | (((/* implicit */unsigned int) ((/* implicit */int) var_8))));
}
