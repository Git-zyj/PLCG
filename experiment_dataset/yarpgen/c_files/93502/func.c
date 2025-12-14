/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93502
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
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned short) var_12)), ((unsigned short)5710))))) : (((/* implicit */int) var_12))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 += ((((/* implicit */_Bool) ((short) arr_2 [i_0 + 1] [i_1]))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1]))) & (var_4))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) var_9)) : ((~(var_3)))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 2; i_2 < 12; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) arr_3 [i_1])) & (((/* implicit */int) var_10)))));
                                var_17 -= ((/* implicit */_Bool) (+(((/* implicit */int) max((arr_4 [i_0] [i_2] [i_2]), (((/* implicit */unsigned char) arr_2 [i_2 - 2] [i_2 - 2])))))));
                                var_18 = ((/* implicit */short) max((var_18), (((short) (+(((/* implicit */int) var_1)))))));
                            }
                        } 
                    } 
                } 
                var_19 *= ((/* implicit */int) max((max((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_4))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [(unsigned char)4] [i_0 + 1] [(unsigned char)4])) ? (((/* implicit */int) arr_3 [0LL])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))))), (((/* implicit */unsigned int) arr_6 [i_0] [i_0 + 1] [i_0 + 1]))));
            }
        } 
    } 
    var_20 *= ((/* implicit */_Bool) var_1);
}
