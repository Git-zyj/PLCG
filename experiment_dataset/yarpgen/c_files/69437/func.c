/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69437
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
    var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((+(((/* implicit */int) var_4)))), (((/* implicit */int) var_1))))) ? (((/* implicit */int) ((unsigned short) var_7))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_18))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) min((var_18), (var_14))))))));
    var_20 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_10)) : ((-(((/* implicit */int) var_18))))))));
    var_21 = ((/* implicit */long long int) var_1);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */int) arr_1 [i_2] [i_1 + 1])) | (((/* implicit */int) ((var_0) >= (((/* implicit */long long int) ((/* implicit */int) var_12)))))))));
                    arr_9 [i_1] [i_1 - 1] = ((/* implicit */_Bool) var_5);
                    arr_10 [i_0] [i_1] [(unsigned short)18] = ((/* implicit */signed char) (~(((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 1]))));
                }
            } 
        } 
    } 
    var_22 = var_18;
}
