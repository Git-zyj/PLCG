/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77350
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
    var_12 = ((/* implicit */unsigned char) var_3);
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) max((var_2), (((/* implicit */unsigned char) var_10))))) : (((/* implicit */int) (signed char)-105))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) max((var_8), (((/* implicit */signed char) var_10))))), (var_11)))) : (((/* implicit */int) var_6))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [(unsigned char)8])) ? (((/* implicit */int) max((max(((unsigned char)249), (((/* implicit */unsigned char) (_Bool)1)))), (arr_1 [i_0] [i_0])))) : (((((/* implicit */int) arr_1 [i_0] [i_0])) % (((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */unsigned short) (unsigned char)249)))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) arr_0 [i_0]);
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) max((arr_1 [i_0] [i_0]), (max(((unsigned char)54), (((/* implicit */unsigned char) (signed char)-2))))));
    }
    for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned char) var_10);
        var_14 = ((/* implicit */unsigned short) (~(((/* implicit */int) min((arr_7 [i_1]), (var_3))))));
    }
}
