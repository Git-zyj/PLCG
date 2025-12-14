/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72329
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
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (((-(((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))) - ((-(((((/* implicit */_Bool) (short)-462)) ? (33554431) : (((/* implicit */int) (short)-1))))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) var_2);
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) 1398500188)) || (((/* implicit */_Bool) (unsigned short)36088)))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [(signed char)1]))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) max(((short)1963), (((/* implicit */short) (unsigned char)7)))))))));
    }
    var_17 = ((/* implicit */unsigned char) (((~(((/* implicit */int) (unsigned char)4)))) * (((/* implicit */int) var_13))));
}
