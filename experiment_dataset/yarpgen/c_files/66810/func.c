/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66810
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
    var_10 = ((/* implicit */short) max((((((/* implicit */_Bool) max(((short)28380), (var_7)))) ? (((/* implicit */int) ((_Bool) var_8))) : (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_2)))))), ((-(((((/* implicit */int) (short)-28387)) * (((/* implicit */int) var_8))))))));
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */long long int) var_1)) - (((((/* implicit */_Bool) var_6)) ? (min((((/* implicit */long long int) (short)28380)), (var_6))) : (((/* implicit */long long int) var_1))))));
    var_12 = ((/* implicit */_Bool) var_4);
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 12; i_1 += 4) 
        {
            {
                arr_7 [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) (signed char)118))) ? (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (short)28405)) - (28397))))) : (((((/* implicit */int) (signed char)54)) | ((+(((/* implicit */int) (short)13864))))))));
                arr_8 [i_1] = ((((/* implicit */int) (signed char)54)) * (((/* implicit */int) (signed char)-54)));
                var_13 ^= ((/* implicit */long long int) ((((((/* implicit */int) arr_6 [i_0 + 2] [i_0 + 2])) / (((/* implicit */int) arr_6 [i_0 + 2] [i_1])))) | (((((/* implicit */_Bool) arr_6 [i_0 + 2] [i_0])) ? (((/* implicit */int) arr_6 [i_0 + 2] [i_0 + 2])) : (((/* implicit */int) arr_6 [i_0 + 2] [i_1]))))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) min((((/* implicit */int) var_5)), (((int) max((((/* implicit */unsigned long long int) var_3)), (var_0))))));
}
