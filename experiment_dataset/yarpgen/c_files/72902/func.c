/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72902
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
    for (short i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_15 [(_Bool)1] [i_1] [i_1] [i_1] [(_Bool)1] [i_1] = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) 119434135U)), (-1387131658532581031LL)))), (min((((/* implicit */unsigned long long int) var_6)), (var_0))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_4])))));
                                arr_16 [i_0 + 1] [i_1] [i_2] [i_0 + 1] [i_4] = ((/* implicit */short) arr_10 [0U] [i_1] [i_2] [i_3] [i_2]);
                                var_18 = ((/* implicit */int) (~(((((/* implicit */unsigned long long int) (~(arr_5 [i_0 - 1] [i_1] [i_4])))) & (min((4979925434001436396ULL), (11075713732512085797ULL)))))));
                                var_19 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))));
                                arr_17 [i_1] = ((/* implicit */unsigned short) ((arr_9 [i_1]) >= (min((arr_5 [i_3 + 2] [i_3 + 1] [i_0 + 3]), (((/* implicit */int) ((8120203120836605828LL) <= ((-9223372036854775807LL - 1LL)))))))));
                            }
                        } 
                    } 
                    arr_18 [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) ((unsigned short) arr_10 [i_2] [i_2] [i_1] [i_0] [i_0]))) ? (min((arr_8 [19U] [i_1] [i_1]), (((/* implicit */unsigned long long int) (unsigned char)47)))) : (((/* implicit */unsigned long long int) var_4)))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (signed char i_6 = 3; i_6 < 19; i_6 += 3) 
                        {
                            {
                                arr_25 [i_5] [i_1] [i_2] [i_5] [i_6] = ((/* implicit */short) (~(((/* implicit */int) ((short) arr_2 [i_0 + 2])))));
                                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) var_16))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) (-(var_10)));
    var_22 = ((/* implicit */_Bool) var_3);
}
