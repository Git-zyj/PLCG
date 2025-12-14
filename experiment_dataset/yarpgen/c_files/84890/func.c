/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84890
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
    var_12 = ((/* implicit */int) min((min((((var_7) & (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned int) var_5)))), (((/* implicit */unsigned int) var_6))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_13 &= ((/* implicit */_Bool) var_7);
                var_14 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned char)169), (var_9)))) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) max((((/* implicit */short) arr_3 [i_0 - 2])), (arr_1 [i_0] [i_0]))))))) ? (((arr_2 [i_0 - 2]) ? (((/* implicit */int) arr_1 [i_0 + 2] [i_1])) : (((/* implicit */int) arr_1 [i_0 - 1] [i_1])))) : ((((-(((/* implicit */int) var_6)))) / (((((/* implicit */int) var_1)) * (((/* implicit */int) var_9))))))));
                var_15 |= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((var_0) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_2 [i_0 + 1])))), (((((/* implicit */int) var_10)) & (((/* implicit */int) var_9))))))) ? (var_4) : (((/* implicit */long long int) max((((/* implicit */int) ((var_0) && (((/* implicit */_Bool) arr_3 [i_0]))))), (((((/* implicit */int) (unsigned char)78)) + (((/* implicit */int) (unsigned char)86)))))))));
            }
        } 
    } 
    var_16 |= ((/* implicit */unsigned int) ((((var_3) ? (var_7) : (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) + (((/* implicit */int) var_9))))))) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */short) var_0)), (var_1)))) ? (((var_8) ? (((/* implicit */int) (unsigned char)169)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) min(((unsigned char)169), ((unsigned char)86)))))))));
}
