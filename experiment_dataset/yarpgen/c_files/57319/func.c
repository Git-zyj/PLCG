/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57319
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
    var_16 = ((/* implicit */short) min((((/* implicit */long long int) ((max((var_3), (((/* implicit */unsigned int) var_7)))) ^ (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)63661)), (-1613286999))))))), (var_13)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned short) ((((var_15) & (arr_3 [i_1]))) - (((/* implicit */long long int) arr_0 [i_0] [i_0]))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */unsigned int) arr_12 [i_0] [i_2] [i_4])) & (arr_11 [i_3] [i_3] [i_2] [i_1] [i_0])))) + (71916856549572608LL)));
                                arr_16 [i_0] [i_1] [i_0] [i_0] [i_4] = ((/* implicit */long long int) arr_9 [i_3] [i_0] [i_1] [i_0]);
                            }
                        } 
                    } 
                } 
                arr_17 [i_0] = 35378855U;
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) var_1);
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) var_12))) * ((+(((/* implicit */int) var_7))))))) ? (((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned int) ((var_12) - (var_12)))))) : ((-(var_6)))));
}
