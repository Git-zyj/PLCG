/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81094
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
    var_17 = ((/* implicit */unsigned int) var_7);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_6 [(short)10] [2] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned int i_3 = 3; i_3 < 20; i_3 += 2) 
                    {
                        {
                            arr_12 [i_3] = ((/* implicit */unsigned int) var_7);
                            var_18 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_3 [i_0]))));
                        }
                    } 
                } 
            }
        } 
    } 
}
