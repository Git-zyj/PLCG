/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94269
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
    for (long long int i_0 = 4; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_2] = min((((/* implicit */long long int) max((arr_5 [i_0 - 2] [i_0 + 2]), (((/* implicit */unsigned int) var_0))))), (((((long long int) arr_2 [i_0] [i_0] [i_0 - 4])) % (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)59412), (((/* implicit */unsigned short) (short)17301)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */int) (short)17301)), ((+(((/* implicit */int) (short)31527))))))))))));
                                var_21 = ((/* implicit */unsigned int) (short)13460);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */short) min((((unsigned short) (!(((/* implicit */_Bool) var_3))))), (((/* implicit */unsigned short) (_Bool)1))));
                }
            } 
        } 
    } 
    var_23 = var_12;
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) var_10))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_8))))) : ((-(var_6)))));
    var_25 = ((/* implicit */int) max((var_25), (var_15)));
}
