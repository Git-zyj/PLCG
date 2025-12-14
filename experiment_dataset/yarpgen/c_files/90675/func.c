/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90675
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
    var_20 += ((/* implicit */unsigned char) var_10);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) var_15);
        var_21 = ((/* implicit */unsigned char) ((unsigned int) arr_2 [i_0]));
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((((/* implicit */int) max((arr_1 [i_0]), ((short)18711)))) & (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [(signed char)6])) : (((/* implicit */int) (signed char)-2)))))) ^ (min((((((/* implicit */int) (short)-18717)) ^ (((/* implicit */int) arr_2 [6U])))), (((/* implicit */int) arr_1 [(signed char)6])))))))));
    }
    for (long long int i_1 = 1; i_1 < 9; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-73)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (3214459207U)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_0 [14LL])) : (var_12)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)18711))))) ? (((/* implicit */int) (short)18711)) : (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_1 [i_1])))))) : (((/* implicit */int) (short)18711))));
        arr_7 [i_1] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (-(arr_0 [(unsigned short)8]))))))));
    }
    var_23 = ((/* implicit */unsigned int) var_8);
    var_24 = ((/* implicit */_Bool) min(((~(((var_7) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))), (((/* implicit */unsigned long long int) var_15))));
}
