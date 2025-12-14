/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91133
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
    var_10 = ((/* implicit */unsigned short) var_2);
    var_11 &= ((/* implicit */int) var_9);
    var_12 = ((/* implicit */unsigned long long int) var_7);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_13 += ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((long long int) (unsigned short)306))))) - (max(((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_4))), (((/* implicit */long long int) (-(((/* implicit */int) arr_3 [(_Bool)1] [(_Bool)1])))))))));
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) max(((+(((/* implicit */int) var_0)))), (((/* implicit */int) (unsigned char)17))))) >= (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (arr_0 [i_0])))));
    }
}
