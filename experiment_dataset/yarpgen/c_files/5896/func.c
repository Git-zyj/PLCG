/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5896
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
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */int) max((var_18), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_11)))))))) + (((/* implicit */int) ((unsigned char) (-(var_14))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_6 [i_0] = ((/* implicit */unsigned char) ((arr_2 [i_2] [i_1]) | (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_13 [i_4] [i_3] = ((/* implicit */_Bool) (unsigned char)97);
                                arr_14 [i_4] = ((/* implicit */signed char) (-(((/* implicit */int) ((arr_1 [i_4 - 1]) >= (((/* implicit */unsigned long long int) 379352818725417497LL)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
