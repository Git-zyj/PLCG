/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92383
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
    var_16 = ((((((/* implicit */long long int) ((((/* implicit */_Bool) -4522293351040744040LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_2)))) > (((((/* implicit */_Bool) var_6)) ? (var_14) : (var_4))))) ? (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) -4522293351040744018LL)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4522293351040744055LL)))))))) : (((max((((/* implicit */long long int) var_5)), (-4522293351040744040LL))) - (((/* implicit */long long int) var_2)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_17 &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)11022)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_1 [i_0] [i_0]))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_14) : ((-(4522293351040744060LL))))))));
        var_18 &= ((/* implicit */long long int) min(((unsigned short)3839), (((/* implicit */unsigned short) (short)-32744))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)255))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_0 [i_0]))))) : (((((/* implicit */_Bool) -4233673333175702508LL)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
        var_20 = ((/* implicit */int) ((unsigned int) (unsigned char)119));
    }
}
