/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81655
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_20 = ((/* implicit */signed char) max((((min((arr_2 [i_0]), (((/* implicit */long long int) (signed char)43)))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))), ((-(((arr_3 [i_0]) - (((/* implicit */long long int) var_17))))))));
        var_21 = ((/* implicit */unsigned int) min((var_21), (max((3734646728U), (((/* implicit */unsigned int) (signed char)-44))))));
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) var_11)) : (((((/* implicit */_Bool) (((_Bool)1) ? (arr_3 [i_0]) : (-3503013673572204072LL)))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_4))))) : ((-(arr_3 [i_0])))))));
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_3 [i_0])))) ? (min((((/* implicit */unsigned long long int) 3503013673572204072LL)), (8388607ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-7795))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (1957231713U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-44))))) : (((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-51)) + (2147483647))) >> (((((/* implicit */int) (short)-7795)) + (7811)))))))))));
    }
    var_24 = ((/* implicit */unsigned int) var_3);
    var_25 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (signed char)-69)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((_Bool) var_9))))));
    var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (+(min(((-(3503013673572204072LL))), (((/* implicit */long long int) var_0)))))))));
    var_27 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (+(var_2)))) ? (((/* implicit */long long int) ((((/* implicit */int) (short)7795)) >> (((((/* implicit */int) (short)-7795)) + (7810)))))) : (min((((/* implicit */long long int) var_19)), (3503013673572204048LL))))), (((/* implicit */long long int) (-(((/* implicit */int) var_1)))))));
}
