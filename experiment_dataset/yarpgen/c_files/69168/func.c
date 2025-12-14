/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69168
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
    var_14 = ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) (unsigned short)2048)) ? (((/* implicit */int) (unsigned char)160)) : (1008))), (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))) ^ ((((~(((/* implicit */int) var_6)))) ^ (((/* implicit */int) var_6))))));
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : ((-(2973619874U)))));
    var_16 *= ((/* implicit */unsigned int) ((((/* implicit */int) var_13)) & (max((min((1494350271), (((/* implicit */int) var_2)))), (((/* implicit */int) var_10))))));
    var_17 &= ((/* implicit */int) var_13);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */int) min((var_18), (((min(((~(((/* implicit */int) var_0)))), (1494350268))) / (((-1494350272) - (((((/* implicit */int) (unsigned short)30011)) | (((/* implicit */int) (unsigned short)30020))))))))));
                arr_7 [i_0] [i_0] = ((((/* implicit */int) ((((((/* implicit */int) var_4)) / (var_1))) < ((~(1494350271)))))) * ((-(max((414670003), (((/* implicit */int) var_11)))))));
                var_19 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) min((1494350283), (((/* implicit */int) var_4))))) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) (signed char)116))))))));
            }
        } 
    } 
}
