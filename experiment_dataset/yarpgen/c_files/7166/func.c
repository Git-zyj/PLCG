/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7166
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
    var_16 = ((/* implicit */_Bool) max((-1474933342), (((((((/* implicit */int) var_2)) + (2147483647))) >> (((((/* implicit */int) min(((unsigned short)60598), ((unsigned short)4938)))) - (4916)))))));
    var_17 = ((/* implicit */unsigned char) (_Bool)1);
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned char) (signed char)-66)), (max((((/* implicit */unsigned char) (signed char)39)), ((unsigned char)11)))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 13; i_2 += 3) 
                {
                    for (int i_3 = 2; i_3 < 13; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                            {
                                arr_12 [i_0] [i_1 - 1] [i_2] [i_3] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((_Bool) (unsigned short)22091))), (max((var_7), (((/* implicit */unsigned int) var_12))))));
                                var_18 = ((/* implicit */short) max((((/* implicit */unsigned int) (~(var_10)))), (max((((/* implicit */unsigned int) (unsigned char)53)), (30U)))));
                                arr_13 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned int) max((((4294967265U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128))))), (max((var_7), (var_9))))));
                                arr_14 [i_4] [i_3] [i_0] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */long long int) min((((((/* implicit */int) var_6)) << (((((/* implicit */int) var_14)) - (29249))))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)139)))))));
                            }
                            var_19 += ((/* implicit */unsigned char) (signed char)74);
                        }
                    } 
                } 
                var_20 = min((max((((/* implicit */int) var_4)), (2147483647))), (var_10));
            }
        } 
    } 
}
