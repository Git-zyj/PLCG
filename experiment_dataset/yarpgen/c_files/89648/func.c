/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89648
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
    var_16 |= ((/* implicit */unsigned char) ((unsigned int) var_5));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_17 = ((/* implicit */signed char) ((_Bool) min((((/* implicit */unsigned int) var_0)), (var_10))));
        var_18 |= ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-4091))))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_10) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)-4070))))))) : (var_5)));
        var_19 = ((/* implicit */long long int) ((unsigned int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) * (arr_0 [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((signed char) arr_1 [i_0]))))));
    }
    for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        var_20 = ((/* implicit */signed char) ((unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)56))) == (var_11))) ? (min((((/* implicit */int) (signed char)76)), (7))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1] [i_1]))))))));
        var_21 = (-(((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_1))))));
        var_22 = ((/* implicit */signed char) arr_3 [i_1]);
    }
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((-372343901), (((/* implicit */int) var_7))))) ? (((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)60)), (var_15)))) / ((-(((/* implicit */int) (signed char)-70)))))) : (max((((var_8) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))), (((/* implicit */int) var_8))))));
    var_24 = ((/* implicit */_Bool) ((unsigned short) var_14));
}
