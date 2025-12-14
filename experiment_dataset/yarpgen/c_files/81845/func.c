/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81845
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))), ((-((~(((/* implicit */int) arr_1 [i_0] [i_0]))))))));
        var_15 &= ((/* implicit */signed char) max((((/* implicit */int) arr_1 [i_0] [i_0])), (max((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) == (((/* implicit */int) arr_2 [i_0]))))), (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))))));
    }
    var_16 += ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) max((var_13), (var_12)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_1))))))) % (((unsigned long long int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_0))))));
    var_17 = ((/* implicit */signed char) max((max((14256822720234180590ULL), (((/* implicit */unsigned long long int) (signed char)-66)))), (((/* implicit */unsigned long long int) var_14))));
    var_18 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) 14339109104313661023ULL)) ? (((/* implicit */int) (signed char)-108)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max((max((var_8), (var_11))), (var_5))))));
}
