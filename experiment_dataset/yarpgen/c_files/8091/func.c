/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8091
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
    var_15 = ((/* implicit */_Bool) (unsigned short)26565);
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)32256)) & (((/* implicit */int) (((+(((/* implicit */int) (signed char)-15)))) <= (((/* implicit */int) var_10))))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) (unsigned short)65521))))))));
        arr_3 [i_0] |= (((-(((/* implicit */int) (_Bool)1)))) < (((/* implicit */int) (unsigned short)33267)));
        arr_4 [i_0] [i_0] |= ((/* implicit */signed char) ((((/* implicit */int) var_0)) <= (((((/* implicit */_Bool) ((((/* implicit */int) var_12)) / (((/* implicit */int) (unsigned short)33267))))) ? (((/* implicit */int) arr_2 [i_0])) : (((((/* implicit */int) var_0)) & (((/* implicit */int) arr_0 [i_0]))))))));
    }
    var_18 = (unsigned short)64821;
}
