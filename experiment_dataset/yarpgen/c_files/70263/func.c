/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70263
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
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)127)) ? (((9U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))));
    var_21 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((unsigned int) (signed char)(-127 - 1)))), ((((+(var_9))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((7ULL), (((/* implicit */unsigned long long int) (unsigned char)247))))) ? (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))), (((unsigned long long int) (signed char)110)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (-(max((((2774670921605472131ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) + (var_17)))))));
        arr_5 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) ((signed char) 1073741808))), (((((/* implicit */int) (!(((/* implicit */_Bool) -616795031))))) + ((~(((/* implicit */int) var_1))))))));
        var_22 = ((/* implicit */unsigned short) ((signed char) max((var_1), ((signed char)-1))));
    }
    var_23 = ((/* implicit */signed char) max((((((/* implicit */int) ((var_16) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))))) >> (((((2033198286U) >> (((((/* implicit */int) (signed char)(-127 - 1))) + (153))))) - (39U))))), (((/* implicit */int) ((unsigned char) max(((signed char)89), ((signed char)-17)))))));
}
