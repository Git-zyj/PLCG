/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56725
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
    var_19 = ((/* implicit */long long int) min((var_19), (max((880008958976167049LL), (((/* implicit */long long int) 1716806635U))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (-((((_Bool)1) ? (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1)))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) ((unsigned char) (short)695));
                            arr_12 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */long long int) ((-1358314241) != (((/* implicit */int) (short)695))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 ^= ((/* implicit */unsigned short) var_7);
}
