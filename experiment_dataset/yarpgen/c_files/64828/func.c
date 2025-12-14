/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64828
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_14 -= ((/* implicit */unsigned int) arr_7 [(_Bool)1] [i_1]);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_1] [(unsigned char)6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0 - 1]))))) || (((/* implicit */_Bool) arr_6 [i_0] [i_1] [(unsigned char)12]))));
                                var_15 = ((/* implicit */_Bool) arr_6 [i_0] [i_0 - 1] [i_4 + 2]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned char) var_13);
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((~(983374006485215145LL)))))) && (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (signed char)28)) > (((/* implicit */int) (_Bool)1))))))))));
}
