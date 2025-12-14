/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84290
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
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) 2011797710U))));
                var_20 = ((/* implicit */_Bool) arr_3 [i_0 - 1]);
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (short)21487))));
                                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [12U])))))) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_6 [i_3] [2ULL] [(short)0] [i_3 + 2])))), (((/* implicit */int) (short)21487)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) ((var_15) ? (((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-21487)))) + (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))) : ((~((((_Bool)1) ? (((/* implicit */int) (short)31318)) : (((/* implicit */int) (_Bool)0))))))));
}
