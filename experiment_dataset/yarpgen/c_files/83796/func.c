/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83796
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
    var_12 = ((/* implicit */int) ((var_1) & (var_6)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)27790)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-107))) : (((4284003010U) % (((/* implicit */unsigned int) 1887863022))))))) || (((/* implicit */_Bool) arr_0 [i_0]))));
                    arr_9 [i_0] [i_0] [(unsigned char)6] [(unsigned short)4] = ((/* implicit */unsigned short) arr_5 [i_0] [i_0] [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                arr_16 [(_Bool)1] [i_0] [i_0] [(signed char)11] [i_0] [i_4] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (-1887863004) : (((/* implicit */int) var_11)))) ^ (((((/* implicit */int) (short)8961)) % (1887862999)))))) ? (-1887863022) : (((/* implicit */int) (!(((-1887863022) > (1887863022))))))));
                                var_14 = ((/* implicit */short) max((max((((/* implicit */int) (short)8955)), (1887863013))), (((/* implicit */int) ((((/* implicit */int) arr_8 [i_1] [i_0])) >= (((/* implicit */int) arr_5 [13] [i_1] [i_0] [i_4])))))));
                                var_15 = ((/* implicit */_Bool) -1887863004);
                                var_16 = ((/* implicit */short) max((var_16), (arr_4 [(unsigned char)10] [(unsigned char)6])));
                                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2 + 1] [i_2 + 2] [i_2 + 2] [i_0])) ? (max((var_0), (((/* implicit */int) arr_7 [i_2 + 1] [i_2 + 2] [i_2 + 2] [i_0])))) : (((((/* implicit */_Bool) arr_7 [i_2 + 1] [i_2 + 2] [i_2 + 2] [i_0])) ? (((/* implicit */int) arr_7 [i_2 + 1] [i_2 + 2] [i_2 + 2] [i_0])) : (((/* implicit */int) arr_7 [i_2 + 1] [i_2 + 2] [i_2 + 2] [i_0]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
