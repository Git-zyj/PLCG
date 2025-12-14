/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91220
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
    var_15 = min((((((/* implicit */_Bool) var_11)) ? (var_12) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_3))))))), (((/* implicit */unsigned int) (-(((int) var_13))))));
    var_16 = ((/* implicit */unsigned int) (signed char)-62);
    var_17 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((signed char) (signed char)-51))) ? (((/* implicit */long long int) ((((/* implicit */int) var_7)) * (((/* implicit */int) (signed char)62))))) : (((((/* implicit */_Bool) var_2)) ? (var_1) : (var_1)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((((~(((/* implicit */int) var_8)))) + (2147483647))) >> (((/* implicit */int) var_13))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_5) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) arr_0 [i_0] [i_0])) : (61572651155456LL)))))))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))))));
        var_19 = ((((/* implicit */_Bool) -8379713713991638827LL)) ? (((((/* implicit */_Bool) ((short) var_9))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) -37800394)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_0 [i_0] [i_0])))) ? (((/* implicit */int) (!(var_8)))) : (((/* implicit */int) ((unsigned char) (signed char)61)))))));
        var_20 = (i_0 % 2 == 0) ? (((/* implicit */int) ((unsigned char) ((arr_0 [i_0] [i_0]) >> (((arr_0 [i_0] [i_0]) - (1045383156U))))))) : (((/* implicit */int) ((unsigned char) ((arr_0 [i_0] [i_0]) >> (((((arr_0 [i_0] [i_0]) - (1045383156U))) - (2298626872U)))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((unsigned int) (+(((/* implicit */int) arr_1 [i_0] [i_0])))));
    }
}
