/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87280
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */_Bool) var_5);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((short) (+(((/* implicit */int) min(((short)-2917), ((short)-2900)))))));
                                var_16 -= ((/* implicit */unsigned short) var_2);
                                var_17 = ((/* implicit */long long int) min((((/* implicit */int) var_11)), (((((/* implicit */_Bool) (short)-2917)) ? (((/* implicit */int) (short)-2905)) : (((/* implicit */int) (short)0))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */long long int) arr_7 [i_0]);
                    var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0])))))));
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)92))))) == ((-(var_0)))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+((+(((/* implicit */int) (short)-2900))))))))))));
}
