/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88733
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
    var_15 = ((/* implicit */unsigned int) max((((/* implicit */int) var_10)), (((((/* implicit */int) ((var_13) != (((/* implicit */long long int) ((/* implicit */int) (signed char)-42)))))) & (((/* implicit */int) var_12))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_16 = arr_1 [i_0];
        arr_2 [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (+(arr_1 [i_0])))), (arr_0 [i_0])));
        var_17 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)10))) : (var_5))) == (arr_1 [i_0]))))) ^ (arr_0 [i_0])));
    }
}
