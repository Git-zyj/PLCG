/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77792
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
    var_15 *= ((/* implicit */signed char) var_6);
    var_16 = ((/* implicit */unsigned short) var_6);
    var_17 = min((min((min((((/* implicit */unsigned int) var_1)), (var_12))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) && (var_13)))))), (((((/* implicit */_Bool) min((var_14), (((/* implicit */unsigned char) var_7))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (min((((/* implicit */unsigned int) var_9)), (var_12))))));
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (max((((/* implicit */unsigned int) ((((/* implicit */int) var_7)) + (((/* implicit */int) var_8))))), (((var_2) | (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) ((signed char) var_7))), (((unsigned char) var_14))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) ((signed char) (~(arr_1 [i_0]))))), (((unsigned short) ((unsigned int) arr_1 [i_0])))));
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) min((arr_1 [i_0]), (((/* implicit */int) max((max((arr_0 [i_0]), (arr_0 [i_0]))), ((!(arr_0 [i_0])))))))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 2; i_1 < 21; i_1 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)49)) & (((/* implicit */int) (unsigned char)89))));
        var_21 = ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_4 [i_1] [i_1])) - (((/* implicit */int) arr_0 [i_1]))))));
        arr_6 [i_1] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_1 [i_1]) : (arr_1 [i_1])))));
    }
}
