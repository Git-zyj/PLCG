/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86378
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
    var_10 = ((/* implicit */short) 541676515U);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned int) ((long long int) min((((/* implicit */int) ((short) var_4))), ((-(((/* implicit */int) var_4)))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_12 &= -7238599582373827280LL;
                                var_13 -= ((/* implicit */short) (~(min((arr_4 [i_0 + 1] [i_1 - 1]), (((/* implicit */long long int) var_5))))));
                                arr_14 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) arr_9 [i_0] [i_1] [i_2] [i_3]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) var_6))));
}
