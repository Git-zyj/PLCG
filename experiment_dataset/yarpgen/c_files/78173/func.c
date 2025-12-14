/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78173
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 2; i_2 < 11; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_3] [i_2] [(unsigned char)4] [i_0] [i_4 - 1] [11U] = ((/* implicit */long long int) var_5);
                                var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) 4218117770162572944LL))));
                                arr_13 [i_0] [i_0] [i_3] [(signed char)8] [i_3] [2ULL] = ((/* implicit */unsigned char) (-(((arr_7 [i_0] [i_4 + 1] [(_Bool)1] [i_2 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [4U] [i_4 - 2] [i_2] [i_2 + 1]))) : (-4218117770162572944LL)))));
                                var_12 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */int) (short)32767)) / (((/* implicit */int) arr_8 [i_4] [i_4 + 1] [i_3] [i_2] [i_0] [i_0]))))), (-4218117770162572938LL)));
                                arr_14 [2U] [8] [i_4] [i_3] |= ((/* implicit */unsigned int) (unsigned char)51);
                            }
                        } 
                    } 
                } 
                var_13 += ((/* implicit */short) ((((/* implicit */_Bool) -724327454)) ? (((/* implicit */unsigned long long int) 8732732886102869570LL)) : (0ULL)));
            }
        } 
    } 
    var_14 = ((/* implicit */int) (unsigned short)3222);
    var_15 += ((/* implicit */unsigned long long int) var_2);
}
