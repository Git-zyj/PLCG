/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87069
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 4; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_11 *= arr_6 [i_0] [i_1] [2ULL] [i_3];
                            arr_8 [i_0] [i_0] [i_1] [i_2] [14] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 7548211051187376023ULL)) ? (((/* implicit */long long int) var_1)) : (5867428529469509433LL))))) / (((/* implicit */int) ((var_8) != (arr_3 [i_2 - 4] [i_2 - 3]))))));
                            arr_9 [i_0] = ((/* implicit */signed char) arr_6 [i_0] [i_0] [i_0] [i_3]);
                        }
                    } 
                } 
                var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) (-(min((14543021747404370907ULL), (((/* implicit */unsigned long long int) 3978542819U)))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) (+(var_1)));
}
