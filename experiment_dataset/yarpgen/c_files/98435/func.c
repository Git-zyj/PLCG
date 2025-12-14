/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98435
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
    for (signed char i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) var_10);
                                arr_12 [i_0] [i_2] [i_2] [i_3] [2LL] [i_1 + 1] [i_4] = ((/* implicit */long long int) (-((~(((/* implicit */int) var_5))))));
                                var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(2097592755U))))));
                                var_20 ^= ((/* implicit */unsigned short) ((unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) (short)-31125))))), (var_13))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_10))))))))));
                    var_22 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_10 [i_0 + 1] [4] [i_2] [16LL]), (((/* implicit */unsigned long long int) min((((/* implicit */short) (_Bool)1)), (var_15)))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_7)) + (var_14))) < (((/* implicit */int) var_15))));
}
