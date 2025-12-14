/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96699
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
    var_14 = (_Bool)1;
    var_15 = ((/* implicit */unsigned long long int) ((signed char) 17602418507706220777ULL));
    var_16 = ((/* implicit */short) var_10);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1)))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) arr_2 [i_0]);
                            var_19 = ((/* implicit */long long int) arr_4 [i_2]);
                            arr_8 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((int) var_7)) : (((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) (_Bool)1))))))), ((+(arr_0 [i_0])))));
                        }
                    } 
                } 
            }
        } 
    } 
}
