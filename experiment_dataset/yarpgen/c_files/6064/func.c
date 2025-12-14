/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6064
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_8 [i_1 + 1] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)81))) ^ (arr_6 [i_1 - 1] [i_1] [i_1] [i_1 - 1]))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 24; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3 + 1] [i_4] = ((/* implicit */_Bool) (-((+(((/* implicit */int) arr_3 [i_0] [i_2] [i_3 + 1]))))));
                                var_10 = ((/* implicit */int) (signed char)-104);
                                var_11 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) (signed char)116)) >> (((/* implicit */int) arr_7 [i_4] [i_4] [i_4 - 1])))));
                                var_12 *= ((/* implicit */unsigned int) ((var_4) == (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_6)), ((short)28157)))))));
                                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_4] [i_0])) ? (((/* implicit */int) ((var_7) == (((/* implicit */unsigned int) -901766727))))) : (((/* implicit */int) ((((/* implicit */unsigned int) 1887490517)) != (var_7))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned long long int) (unsigned short)32955);
                }
            } 
        } 
    } 
    var_15 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((+(var_1))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)28)))))))) || (((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
    var_16 = ((/* implicit */int) var_6);
}
