/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97270
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
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_10 |= ((/* implicit */unsigned char) (_Bool)1);
        var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) ((((/* implicit */_Bool) min((var_9), (((/* implicit */short) ((((/* implicit */int) var_1)) >= (((/* implicit */int) var_0)))))))) ? (((((/* implicit */int) var_5)) | (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) ((min((((/* implicit */unsigned int) (_Bool)1)), (2751966374U))) > (((/* implicit */unsigned int) ((/* implicit */int) max((var_4), ((_Bool)1)))))))))))));
    }
    for (short i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        var_12 = ((/* implicit */short) ((57344U) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-53)))));
        var_13 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1543000912U))));
        var_14 = ((/* implicit */signed char) var_6);
    }
    var_15 = ((/* implicit */_Bool) var_2);
    var_16 = ((/* implicit */_Bool) ((unsigned char) ((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1)))) >> (((/* implicit */int) var_4)))));
}
