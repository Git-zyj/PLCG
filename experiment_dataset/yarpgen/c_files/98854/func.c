/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98854
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
    var_19 *= ((/* implicit */signed char) (short)941);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_20 |= ((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_6 [8])), (((unsigned int) -47976457))));
                                arr_13 [6U] [(signed char)20] [i_2] [i_2] [i_2] [i_4] = arr_12 [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 1] [i_4 + 1] [i_2];
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_1 - 2] [i_4 + 1] [i_4 + 1])) ? (((/* implicit */int) (short)-941)) : (((/* implicit */int) arr_8 [(short)1] [i_1 - 1] [i_4 + 1] [i_4 + 1]))))) ? (((((/* implicit */int) var_2)) * (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) (unsigned short)64528)) - (((/* implicit */int) var_15))))));
                            }
                        } 
                    } 
                    arr_14 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) ((((((/* implicit */int) (short)-930)) - (((var_3) + (((/* implicit */int) var_12)))))) <= (((((/* implicit */int) arr_0 [i_1 + 1] [i_1 + 1])) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (short)-939)))))))));
                }
            } 
        } 
        var_22 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) ((((/* implicit */int) var_13)) * (((/* implicit */int) arr_5 [(_Bool)1] [i_0])))))) / ((-(((/* implicit */int) var_5))))));
    }
    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) 
    {
        arr_17 [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))));
        arr_18 [i_5] = ((/* implicit */int) max((((unsigned short) var_13)), (((/* implicit */unsigned short) ((_Bool) (unsigned short)64544)))));
        arr_19 [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) var_18))));
    }
}
