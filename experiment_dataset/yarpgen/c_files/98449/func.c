/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98449
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
    var_10 = ((/* implicit */unsigned char) max((var_0), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)37)))))));
    var_11 *= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */int) max(((short)30238), ((short)48)))) : (((((/* implicit */_Bool) (short)-30214)) ? (((/* implicit */int) (unsigned char)37)) : (((/* implicit */int) var_1))))))));
    var_12 = ((/* implicit */unsigned char) (short)-20502);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_0] [i_2] [i_1] = (i_0 % 2 == 0) ? (((/* implicit */signed char) max((((((/* implicit */int) (unsigned char)134)) >> (((((/* implicit */int) arr_3 [i_0] [i_1] [i_2])) - (51360))))), (((((/* implicit */int) arr_2 [i_0 + 1] [i_0])) >> (((((/* implicit */int) var_5)) + (23648)))))))) : (((/* implicit */signed char) max((((((/* implicit */int) (unsigned char)134)) >> (((((((/* implicit */int) arr_3 [i_0] [i_1] [i_2])) - (51360))) + (16371))))), (((((/* implicit */int) arr_2 [i_0 + 1] [i_0])) >> (((((/* implicit */int) var_5)) + (23648))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */short) arr_5 [i_0] [i_2] [i_2]);
                                arr_17 [i_0] = ((/* implicit */unsigned long long int) 3450438368U);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)98)) + (((/* implicit */int) var_2))))) - ((-(9583723540339121852ULL))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) max(((signed char)98), ((signed char)-9)))), (max(((short)-30243), (var_8)))))))));
}
