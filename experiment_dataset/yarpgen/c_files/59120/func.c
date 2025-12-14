/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59120
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
    var_12 = ((/* implicit */int) ((min(((+(var_9))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */int) var_11))))))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1399287533992142003ULL)) ? (2863299987U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))))))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) min((var_2), (((/* implicit */unsigned int) var_7))))) | (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_8)) : (arr_0 [i_0] [i_0]))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))))))));
        var_14 += ((/* implicit */int) (unsigned char)173);
    }
    var_15 = ((/* implicit */unsigned long long int) var_10);
    var_16 = ((/* implicit */unsigned long long int) ((max((0U), (((/* implicit */unsigned int) (unsigned char)228)))) > (((/* implicit */unsigned int) min((((/* implicit */int) min((var_5), (var_6)))), ((~(((/* implicit */int) (unsigned char)172)))))))));
}
