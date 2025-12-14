/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98640
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
    var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) (-(((/* implicit */int) (short)-1208)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_11 = ((/* implicit */short) (-(arr_1 [(signed char)19])));
        var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((-(4573863401256987370LL))), (((/* implicit */long long int) arr_2 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) 4573863401256987379LL)) ? (((arr_2 [i_0] [i_0]) ? (((/* implicit */int) (short)-11198)) : (((/* implicit */int) (unsigned char)245)))) : (((/* implicit */int) (signed char)51)))) : ((-(((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_5))))))));
    }
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_4))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) (signed char)47)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((var_7) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7))))) != (max((((/* implicit */long long int) var_9)), (-4573863401256987382LL))))))) : ((-((-(var_6)))))));
    var_14 = ((/* implicit */unsigned long long int) var_7);
}
