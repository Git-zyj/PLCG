/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63973
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
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 4; i_2 < 10; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        {
                            var_10 = var_2;
                            arr_9 [i_2] [i_2] = ((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), (7)));
                            arr_10 [i_0] [i_2] [i_1] [i_2] [(unsigned char)12] [i_3] = ((/* implicit */_Bool) max(((((~(0))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))), (((/* implicit */int) var_6))));
                            var_11 = ((/* implicit */int) max((((/* implicit */long long int) 0)), ((+((-9223372036854775807LL - 1LL))))));
                        }
                    } 
                } 
                arr_11 [i_0] [10LL] = ((/* implicit */long long int) max((((/* implicit */int) ((short) var_1))), ((-(((/* implicit */int) (_Bool)0))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 3701458766760336628ULL)))))));
    var_13 = (-(var_5));
}
