/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89073
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
    var_19 = ((/* implicit */_Bool) (signed char)8);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (((-(((/* implicit */int) (_Bool)1)))) > (min((-1128530503), (((/* implicit */int) (_Bool)1)))))))));
        arr_2 [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_0 [i_0] [i_0])))) : (((/* implicit */int) ((_Bool) var_11))))), (max((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)230)))), ((+(((/* implicit */int) arr_0 [i_0] [i_0]))))))));
    }
    var_21 = (+(min((((/* implicit */int) var_9)), ((+(((/* implicit */int) (_Bool)1)))))));
    var_22 = ((/* implicit */unsigned char) min((var_13), (min((((((/* implicit */int) (signed char)-21)) / (((/* implicit */int) var_11)))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1))))))));
}
