/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85493
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
    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-39)) : (((/* implicit */int) var_10)))), (((/* implicit */int) var_6))))) <= (((((/* implicit */_Bool) (-(var_2)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) & (1117586661U))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) % (((/* implicit */int) (signed char)-9))))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 13; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned long long int) var_5);
                                arr_12 [(signed char)5] [i_1 - 4] [i_2] = ((/* implicit */unsigned long long int) var_7);
                                var_14 = ((/* implicit */signed char) ((var_6) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)19401)))) : ((~(((((/* implicit */_Bool) arr_5 [(_Bool)1] [i_1] [i_3])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-32529))))))));
                            }
                        } 
                    } 
                    var_15 ^= ((/* implicit */unsigned long long int) ((_Bool) (~((~(var_5))))));
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)38)) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned char)188))))) != (var_2)));
                }
            } 
        } 
    } 
    var_17 ^= ((/* implicit */_Bool) var_4);
    var_18 |= ((/* implicit */unsigned long long int) 2147483647);
}
