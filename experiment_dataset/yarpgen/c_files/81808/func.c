/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81808
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
    var_10 = ((/* implicit */signed char) var_4);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_11 &= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) min((var_8), (((/* implicit */signed char) (_Bool)0)))))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)12288))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)127)) - (((/* implicit */int) arr_3 [i_0] [i_1]))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
                var_12 *= ((/* implicit */unsigned int) arr_2 [i_0] [i_0] [i_0]);
                var_13 = ((((/* implicit */_Bool) max((min((var_3), (((/* implicit */long long int) arr_1 [i_0])))), (((/* implicit */long long int) arr_1 [i_1]))))) && (((/* implicit */_Bool) min((arr_0 [i_0]), (arr_0 [i_0])))));
                var_14 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_1 [i_1])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1])) || (((/* implicit */_Bool) (signed char)125))))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) var_1))));
    var_16 = min(((-(((long long int) var_3)))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_0) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) ((unsigned char) (unsigned short)0))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)85)) && (((/* implicit */_Bool) (signed char)-32)))))))));
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((signed char) var_8))) : (min(((-(((/* implicit */int) var_9)))), (min((-1021749433), (((/* implicit */int) var_5))))))));
}
