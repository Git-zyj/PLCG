/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72091
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
    var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 8851071213385342140LL))));
    var_17 ^= ((/* implicit */unsigned int) var_10);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (((/* implicit */int) (unsigned char)134)) : (((/* implicit */int) var_6)))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (unsigned char i_3 = 2; i_3 < 24; i_3 += 2) 
                    {
                        for (int i_4 = 1; i_4 < 22; i_4 += 3) 
                        {
                            {
                                arr_16 [i_4] [i_4] [i_2] [i_3] [i_4 + 2] = ((/* implicit */unsigned int) (+(((-1841550027) % (((/* implicit */int) (unsigned short)26722))))));
                                arr_17 [i_0] [23] [8] [i_2] [i_3 - 1] [i_4] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))));
                                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)26722)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)26722))) : (-8851071213385342140LL))))));
                                arr_18 [i_4] [i_2] [i_0] [i_2] [i_1] [i_0] [i_4] = max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)26722)) >= (((/* implicit */int) (unsigned short)26722))))), ((+(arr_4 [i_1 - 2] [i_3 - 2] [i_4 + 3]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) var_6);
}
