/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86412
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
    for (unsigned char i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] = ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0]))))) - ((+(((unsigned int) 2342940453U)))));
        var_20 = ((/* implicit */unsigned int) arr_1 [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0])))))), (((/* implicit */int) var_15))));
    }
    var_21 = ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) 286934126U)) ? (((/* implicit */int) (short)-2730)) : (1297722500)))), (min((var_1), (((/* implicit */long long int) var_14))))))) ? ((~(((/* implicit */int) ((((/* implicit */_Bool) -1292528047)) && (((/* implicit */_Bool) var_17))))))) : (((int) (short)17374)));
}
