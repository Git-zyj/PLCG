/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98371
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
    var_20 = ((unsigned long long int) max(((-(5367319805051270876ULL))), (((/* implicit */unsigned long long int) var_15))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) arr_1 [i_0]))));
                                arr_14 [i_1] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */signed char) (unsigned char)197);
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] [i_0] [i_1] = arr_13 [i_0] [i_1] [i_1] [(short)4] [i_1];
                arr_16 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 5367319805051270895ULL)) && (((/* implicit */_Bool) ((((arr_7 [i_1]) << (((((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_1])) + (32118))))) | (max((((/* implicit */unsigned long long int) arr_9 [i_1] [i_1] [i_1] [i_0] [i_0])), (var_1))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) var_17);
}
