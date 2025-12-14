/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59977
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_5))))) << (((var_5) + (163904774)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) var_10);
                            arr_10 [i_0] [i_3] = ((/* implicit */unsigned int) max(((+(14468700974731036523ULL))), (((/* implicit */unsigned long long int) ((((unsigned int) arr_3 [i_0] [i_3])) - (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */signed char) ((((/* implicit */int) ((short) 11ULL))) + ((+(2077278626)))));
                var_19 += (-(arr_3 [i_1] [i_1]));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 22; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) var_4))));
                            var_21 = ((/* implicit */unsigned int) arr_13 [i_0] [i_1] [i_4] [(signed char)15]);
                        }
                    } 
                } 
                var_22 = ((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_1]);
            }
        } 
    } 
}
