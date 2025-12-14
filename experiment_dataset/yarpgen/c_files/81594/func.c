/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81594
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
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)17)) % (var_15)))) ? ((-(((/* implicit */int) var_10)))) : (((/* implicit */int) var_8))))) || (((/* implicit */_Bool) var_3))));
    var_17 = ((/* implicit */unsigned int) 1483000980407668703ULL);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 24; i_2 += 4) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) var_8))));
                            arr_13 [i_1] [i_1] [i_1] = ((/* implicit */short) 4273958251U);
                        }
                    } 
                } 
                var_19 = ((/* implicit */long long int) ((5006154817092215998ULL) & (13440589256617335623ULL)));
                arr_14 [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((var_5) < (((/* implicit */int) ((((/* implicit */int) (short)32362)) >= (((/* implicit */int) (short)-32376))))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) 13440589256617335623ULL);
}
