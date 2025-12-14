/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5711
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
    var_18 += var_3;
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3] [i_0] [i_0]))) : (var_8)))));
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) arr_6 [i_3] [i_2] [i_0] [i_0]))));
                            var_21 += ((/* implicit */short) ((var_9) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */short) ((((/* implicit */int) var_11)) & (((/* implicit */int) ((short) 10160549509798167140ULL)))));
                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1] [i_1] [i_1])) ? (((((/* implicit */_Bool) (short)-31744)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)120))) : (4363686772736ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))))))));
                arr_10 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_14);
            }
        } 
    } 
}
