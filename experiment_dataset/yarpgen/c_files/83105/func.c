/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83105
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
    var_15 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((int) var_5))) ? (((/* implicit */int) max((((/* implicit */signed char) var_5)), (var_2)))) : (((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) var_9))))))), (min((((((/* implicit */_Bool) (signed char)-123)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)58681)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)58681))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [4LL])) + (((/* implicit */int) var_0))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) / (1341981741U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_6)))))))))))));
        var_17 &= ((/* implicit */unsigned int) ((int) min((((/* implicit */int) (signed char)-104)), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)-21)) : (((/* implicit */int) (unsigned short)6854)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_18 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) ((unsigned short) var_5))), (((((/* implicit */int) var_12)) * (((/* implicit */int) (signed char)-8))))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) ((signed char) -1560992298))), (var_8)))) : (((/* implicit */int) arr_4 [i_1]))));
        arr_6 [i_1] [i_1] = ((/* implicit */short) (+(((/* implicit */int) arr_4 [i_1]))));
        var_19 += ((/* implicit */long long int) ((((((/* implicit */_Bool) ((var_9) ? (var_14) : (var_14)))) ? (((/* implicit */int) (!(var_0)))) : (((/* implicit */int) var_4)))) | (min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_4 [i_1])))), (((/* implicit */int) arr_4 [i_1]))))));
    }
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) max((((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */int) var_5)))))), ((((_Bool)0) ? (2647301183U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)14))))))))));
}
