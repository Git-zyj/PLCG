/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97139
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
    var_10 = ((/* implicit */int) var_6);
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_9 [i_1] [i_1] [i_1] = ((/* implicit */signed char) var_7);
                    var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-25500)) * (((/* implicit */int) (unsigned short)11))))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) ((((((/* implicit */_Bool) (short)25500)) ? (arr_8 [i_0] [i_0]) : (((/* implicit */int) arr_0 [i_0])))) <= (((/* implicit */int) arr_1 [i_0]))))))))));
                    arr_10 [i_1] = ((/* implicit */int) ((unsigned short) arr_6 [(unsigned char)7] [i_1] [i_1] [i_2]));
                    var_12 -= ((/* implicit */short) ((unsigned short) (((!(((/* implicit */_Bool) (short)-25510)))) ? (((((/* implicit */_Bool) arr_4 [i_2] [i_2])) ? (3588565113U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)25500))))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((short)-25516), ((short)-25516))))))));
                    var_13 = arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1];
                }
            } 
        } 
    } 
}
