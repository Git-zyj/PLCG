/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88723
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_20 = ((/* implicit */_Bool) var_18);
        var_21 = ((/* implicit */unsigned short) ((short) ((signed char) arr_1 [i_0])));
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) ? (min((((/* implicit */long long int) (!(((/* implicit */_Bool) (short)511))))), (arr_1 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (short)-511))))))))));
        var_23 = ((unsigned short) ((((/* implicit */_Bool) min((arr_0 [i_0]), ((short)511)))) ? ((-(((/* implicit */int) var_9)))) : (((/* implicit */int) var_9))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) << (((5844085671260896409LL) - (5844085671260896400LL)))))) ? (((/* implicit */unsigned long long int) min((7068084470994601191LL), (((/* implicit */long long int) (short)511))))) : (((((/* implicit */_Bool) min((var_15), (((/* implicit */unsigned int) arr_0 [i_0]))))) ? (max((var_14), (((/* implicit */unsigned long long int) arr_1 [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_15))))), (arr_5 [i_1]))))) + (((((/* implicit */_Bool) (short)-513)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-8415040285723747122LL)))));
        var_24 = ((/* implicit */unsigned short) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1]))) + (arr_4 [i_1])))));
    }
    var_25 = (+(min((((unsigned int) var_1)), (((/* implicit */unsigned int) (short)-21924)))));
    var_26 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (!(((/* implicit */_Bool) (short)3511))))) >= (((/* implicit */int) (unsigned short)15508)))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? ((-(((/* implicit */int) (unsigned short)57251)))) : (((/* implicit */int) var_18)))) : (((/* implicit */int) (short)21934))));
    var_27 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_15)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_10))) * (min((((/* implicit */unsigned int) ((((/* implicit */int) var_0)) * (((/* implicit */int) (unsigned short)26318))))), (min((2929949418U), (((/* implicit */unsigned int) var_8))))))));
}
