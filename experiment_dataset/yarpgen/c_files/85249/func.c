/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85249
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
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((long long int) ((unsigned char) var_3)));
        var_12 *= ((min((((/* implicit */int) arr_1 [i_0])), (((int) (unsigned short)64285)))) % (((/* implicit */int) (((-(((/* implicit */int) (unsigned short)33612)))) <= (((((/* implicit */int) (unsigned short)2205)) - (((/* implicit */int) (_Bool)1))))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((arr_1 [i_0]) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2205)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63330))) : (var_7)))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) ^ (var_6))))));
        arr_4 [i_0] = ((/* implicit */short) max(((-(((/* implicit */int) arr_1 [i_0])))), ((-(((/* implicit */int) (unsigned short)63330))))));
    }
    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((long long int) ((((/* implicit */int) ((signed char) var_9))) < (((/* implicit */int) var_5))))))));
    var_14 = ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_3)) & (((/* implicit */int) (signed char)-100))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)2206)) || (((/* implicit */_Bool) (unsigned short)8598))))))) : (var_6));
}
