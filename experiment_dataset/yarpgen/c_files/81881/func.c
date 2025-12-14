/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81881
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
    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)65525)) : (var_12))) / (var_12))) - (((var_2) & (((/* implicit */int) var_8)))))))));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-12978)))) - (((((/* implicit */_Bool) min((440399236U), (((/* implicit */unsigned int) arr_1 [i_0]))))) ? (arr_1 [i_0]) : (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))))));
        var_15 = ((/* implicit */int) var_0);
    }
}
