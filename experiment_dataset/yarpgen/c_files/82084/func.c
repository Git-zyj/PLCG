/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82084
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) (signed char)76)) | (((/* implicit */int) (unsigned char)38)))) : (((((((/* implicit */_Bool) var_13)) ? (-1630305146) : (var_15))) | ((~(((/* implicit */int) (unsigned char)43))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_1] [i_0] |= ((/* implicit */int) ((short) -1889215958));
                    arr_11 [(unsigned char)11] [i_1] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_6 [i_1 - 2])) % (((/* implicit */int) arr_6 [i_1 - 2])))) < (((/* implicit */int) (signed char)-28))));
                    var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_12)) - (((/* implicit */int) arr_3 [i_0] [i_1] [i_2])))))));
                }
            } 
        } 
    } 
    var_18 = var_9;
}
