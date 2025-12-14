/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95129
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
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */unsigned char) var_8);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned long long int) var_0);
                                arr_14 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) var_2);
                                var_12 = ((((((/* implicit */int) var_3)) * (((((/* implicit */int) (short)511)) / (arr_6 [(unsigned short)10] [(unsigned short)10] [i_2]))))) / (((int) ((unsigned long long int) (unsigned short)37772))));
                                arr_15 [i_0] [i_0] [i_2] [i_0] [i_2] = ((/* implicit */unsigned short) var_0);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned int) max((((/* implicit */int) var_0)), (((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */int) var_3))))));
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */int) (short)511)) == (((((/* implicit */_Bool) (unsigned short)58623)) ? (((/* implicit */int) (short)-522)) : (((/* implicit */int) (short)515))))))) : (((/* implicit */int) var_9))));
}
