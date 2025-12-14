/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59761
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
    var_12 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned char) var_4))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((long long int) var_3)))) == (((/* implicit */long long int) ((/* implicit */int) var_7)))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 *= ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_0])) % ((~(((/* implicit */int) arr_0 [i_0] [i_0]))))));
        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_1) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) var_4))))))))) ? (max((1219616888U), ((-(1593957242U))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((((/* implicit */_Bool) 3210433535578920720LL)) && (((/* implicit */_Bool) (unsigned short)43449)))), (arr_1 [i_0])))))));
        var_15 = ((/* implicit */short) (~((+(((/* implicit */int) min((var_3), (arr_1 [i_0]))))))));
    }
    var_16 = var_5;
}
