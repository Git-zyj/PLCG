/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92740
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0])) || (((/* implicit */_Bool) ((unsigned int) arr_3 [(unsigned short)12]))))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) var_14))));
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) / (-3853242466736203039LL)))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_3 [6U]) : (((/* implicit */long long int) -1)))) : (arr_3 [i_0])));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) (-(((/* implicit */int) var_1))))) : (arr_2 [i_0])));
        var_20 -= ((/* implicit */unsigned int) ((unsigned short) -3853242466736203039LL));
    }
    var_21 = ((/* implicit */long long int) var_6);
}
