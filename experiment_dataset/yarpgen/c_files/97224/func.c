/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97224
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_4] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */short) (signed char)54)), ((short)21748)))) == (((/* implicit */int) arr_9 [i_0]))));
                                var_16 = ((/* implicit */long long int) (unsigned short)32736);
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned short) ((short) var_9));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            {
                                arr_19 [i_0] [i_0] = ((/* implicit */unsigned short) var_6);
                                arr_20 [i_1] [i_2] [i_6] &= ((/* implicit */signed char) var_7);
                                arr_21 [i_1] [i_2] [i_1] [6LL] = ((/* implicit */short) min((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [i_2] [i_5] [i_5]))))), (((signed char) arr_8 [i_0] [i_5] [i_6]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 &= ((/* implicit */long long int) var_7);
    var_19 = ((/* implicit */int) (signed char)102);
}
