/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64444
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 4; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [(signed char)11] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_16))))) > (max((arr_5 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_12)))))) ? ((~(((/* implicit */int) ((short) var_3))))) : (((/* implicit */int) arr_2 [i_0]))));
                    arr_8 [i_0] [i_0] [i_1] [i_2] |= ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */int) arr_2 [i_2 - 3])) >= (((/* implicit */int) var_6))))), (((((((/* implicit */int) arr_2 [i_2 + 1])) + (2147483647))) >> (((((/* implicit */int) var_13)) - (91)))))));
                    arr_9 [(unsigned char)9] [(unsigned char)9] [i_2 - 4] |= ((/* implicit */signed char) max((arr_1 [i_2 - 4]), (max((((/* implicit */int) arr_2 [i_0])), (var_17)))));
                    arr_10 [i_2] [i_1] [i_2] [i_0] = ((/* implicit */_Bool) (~(min((arr_1 [i_2 + 1]), (arr_1 [i_2 + 1])))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) ((((((/* implicit */int) var_16)) >= (((/* implicit */int) var_10)))) ? ((~(((/* implicit */int) var_13)))) : (17)));
    var_20 = ((/* implicit */long long int) ((max((((134086656U) - (((/* implicit */unsigned int) var_2)))), (((/* implicit */unsigned int) var_17)))) % (4294967282U)));
}
