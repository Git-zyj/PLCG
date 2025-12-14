/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77370
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_6 [(short)6] [0LL] [i_0] = ((/* implicit */signed char) var_0);
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            arr_12 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */int) var_3)) << (((((/* implicit */int) ((unsigned char) max(((short)5024), ((short)-5013))))) - (147)))));
                            arr_13 [i_2] [7ULL] [7ULL] [7ULL] [i_0] = arr_5 [i_0] [i_0];
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) var_6)))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned short) (short)5016))))), (4294967282U)))) : (((unsigned long long int) max((var_11), (var_11))))));
}
