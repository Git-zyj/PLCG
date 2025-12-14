/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98931
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
    var_11 = ((/* implicit */signed char) (~(((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10)))) != (((/* implicit */int) (!(((/* implicit */_Bool) (short)32767))))))))));
    var_12 = ((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */short) ((((/* implicit */int) var_1)) != (((/* implicit */int) var_1))))), (var_10)))) > (max(((-(((/* implicit */int) var_0)))), (((/* implicit */int) var_10))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [(unsigned short)6])) : (((/* implicit */int) (unsigned short)14488))))));
        var_13 = ((/* implicit */unsigned int) (((-(((/* implicit */int) var_2)))) / (((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) arr_1 [(short)10])))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) (unsigned short)14507)) / (((/* implicit */int) (_Bool)1)))));
    }
    var_14 = ((/* implicit */short) (((!(((/* implicit */_Bool) min((var_0), (var_7)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_10)) / (((/* implicit */int) var_4)))))))) : ((((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) var_8))))) : ((~(((/* implicit */int) (_Bool)1))))))));
    var_15 = ((/* implicit */short) ((int) (short)-32751));
}
