/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/725
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
    for (short i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_7 [i_0 + 3] [i_1] [i_2 + 1] [i_0 - 1] = (-9223372036854775807LL - 1LL);
                    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) -9223372036854775779LL)) && (((/* implicit */_Bool) -9223372036854775804LL)))))) : (((arr_4 [i_0 + 2]) * (arr_4 [i_0 + 2])))));
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 16; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((long long int) 9223372036854775807LL))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((-9223372036854775807LL - 1LL))))));
                                var_16 = ((/* implicit */signed char) var_0);
                            }
                        } 
                    } 
                    arr_14 [i_1] [i_0 + 1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? ((-(arr_6 [i_0 + 1] [i_1] [i_2 + 1] [i_2 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0 + 1] [i_2 + 1])))));
                    arr_15 [i_0 + 3] [i_2 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? ((~(min((arr_5 [i_0 + 2] [i_1] [i_2 + 1] [i_2 + 1]), (((/* implicit */unsigned int) arr_13 [i_0 + 3] [i_1] [i_2 + 1] [i_1] [14U])))))) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_13 [i_0 - 1] [i_0 + 2] [i_0 + 1] [i_0 - 1] [(short)8])) : (-975998857))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) var_9);
    var_18 = ((/* implicit */unsigned char) -1314080348);
}
