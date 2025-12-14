/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87207
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((-922778233948863099LL), (-922778233948863099LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) var_7))) || ((!(((/* implicit */_Bool) var_1)))))))) : (var_1)));
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(((/* implicit */_Bool) max((922778233948863106LL), (922778233948863095LL))))))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_13 -= ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)12))))), (-922778233948863099LL)))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 922778233948863099LL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_1 [i_0] [i_0])))))) : (((((/* implicit */int) ((arr_0 [i_0]) != (arr_0 [i_0])))) % (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_0 [8LL]) : (((/* implicit */int) arr_1 [i_0] [i_0]))))))));
        var_14 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) arr_0 [i_0])) != (var_3))) ? ((((+(((/* implicit */int) (short)-3924)))) | (((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) var_7))));
        arr_2 [i_0] = ((/* implicit */unsigned short) arr_1 [(signed char)2] [(signed char)2]);
    }
    var_15 &= ((/* implicit */unsigned long long int) 922778233948863106LL);
}
