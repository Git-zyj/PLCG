/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56844
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
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_10)))) : (((unsigned int) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)52))) : (((unsigned int) ((((/* implicit */_Bool) -1083111504)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-80)))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) 30U))) ? (((arr_0 [i_1] [i_1]) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0])))) : (((arr_3 [i_0 - 1] [i_0] [i_0]) ? (((/* implicit */int) (unsigned char)38)) : (arr_2 [i_0 + 2] [i_1])))))) ? (((/* implicit */unsigned int) arr_2 [2U] [i_1])) : (2757118679U)));
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_1])) ? (2492120740U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [9U])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-108)) ? (((/* implicit */int) (signed char)93)) : (((/* implicit */int) arr_1 [i_0]))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) : (1758852842U)))))) ? (((((/* implicit */_Bool) ((unsigned char) arr_2 [i_0] [i_1]))) ? (((/* implicit */int) ((unsigned char) arr_2 [i_0] [i_1]))) : (((/* implicit */int) ((_Bool) 491520U))))) : (((((/* implicit */_Bool) ((unsigned int) 2110365760U))) ? (((/* implicit */int) (short)32758)) : (((((/* implicit */_Bool) (unsigned char)201)) ? (((/* implicit */int) (signed char)-119)) : (((/* implicit */int) (signed char)-87))))))));
            }
        } 
    } 
}
