/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99191
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
    var_16 = ((/* implicit */_Bool) (+(((int) var_2))));
    var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)60536))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1501214051))))) : (((/* implicit */int) ((7869151809314500166ULL) != (((/* implicit */unsigned long long int) 1501214056))))))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (short i_3 = 3; i_3 < 13; i_3 += 1) 
                    {
                        {
                            var_18 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_9 [i_3 - 1] [i_1] [(short)13] [(short)13] [(short)13] [i_0]))));
                            arr_12 [i_3] [i_1] [i_1] [i_1] [i_1] [(unsigned char)9] = ((/* implicit */short) arr_9 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3]);
                            arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_9);
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (short)-10499))));
            }
        } 
    } 
}
