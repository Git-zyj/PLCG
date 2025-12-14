/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85864
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
    var_11 = max((((/* implicit */long long int) min((((/* implicit */unsigned char) max(((_Bool)0), (var_2)))), (var_0)))), (var_3));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) arr_1 [i_1]);
                arr_6 [i_1] [i_1] = ((/* implicit */_Bool) arr_4 [i_1] [i_1]);
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            var_12 -= var_5;
                            arr_11 [i_1] = var_3;
                        }
                    } 
                } 
                var_13 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) (_Bool)0))))));
            }
        } 
    } 
}
