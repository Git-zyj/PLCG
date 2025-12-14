/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56348
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
    var_20 = ((/* implicit */unsigned long long int) ((unsigned int) (short)-32759));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (-(((/* implicit */int) (short)25647)))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)69))) % (((((/* implicit */_Bool) -1746594007)) ? (((unsigned int) 622050020U)) : (arr_1 [i_2])))));
                            var_23 = ((/* implicit */unsigned char) -1746594008);
                        }
                    } 
                } 
            }
        } 
    } 
}
