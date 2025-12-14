/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71806
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
    var_10 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_3))));
    var_11 = ((/* implicit */unsigned int) (short)0);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_12 -= ((/* implicit */_Bool) ((unsigned int) ((((((/* implicit */_Bool) (unsigned char)248)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)6))))) + (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)6))))))));
        arr_3 [i_0] [i_0] = ((_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
        var_13 = ((/* implicit */unsigned long long int) min((((min((((/* implicit */long long int) arr_0 [i_0])), (arr_2 [(_Bool)1] [i_0]))) | (((arr_2 [i_0] [i_0]) + (((/* implicit */long long int) ((/* implicit */int) (signed char)127))))))), (((/* implicit */long long int) (signed char)-94))));
        arr_4 [i_0] [8LL] = ((_Bool) arr_1 [i_0] [i_0]);
    }
}
