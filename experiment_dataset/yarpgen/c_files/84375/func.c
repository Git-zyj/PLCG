/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84375
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
    var_19 += ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) min((var_6), ((short)-14645)))) >= (((/* implicit */int) var_15)))))));
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (unsigned char)64)) <= (((/* implicit */int) (short)2578)))))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_8)) ? (var_7) : (var_7)))))) : (var_10))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((arr_1 [(signed char)20]) != (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))) ? (((((/* implicit */_Bool) ((long long int) var_16))) ? (((((/* implicit */_Bool) arr_1 [0U])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) ((1347812256) == (((/* implicit */int) arr_0 [i_0] [i_1]))))), (arr_2 [i_0])))))));
                var_21 -= ((/* implicit */short) max(((+(((/* implicit */int) min((arr_3 [i_0]), (arr_0 [i_0] [i_0])))))), (((((((/* implicit */int) arr_2 [i_0])) / (((/* implicit */int) arr_2 [i_0])))) * (((/* implicit */int) arr_3 [i_0]))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((var_10) - (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) ((unsigned char) var_8)))))) ? ((+(min((((/* implicit */unsigned long long int) var_8)), (var_10))))) : (((/* implicit */unsigned long long int) (+(((unsigned int) var_14)))))));
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_2))));
}
