/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6177
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
    var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)19)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)247)) ? (186681133U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)19)))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_12 -= ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)32754))))) > (((/* implicit */int) (unsigned char)19)))));
                            var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) arr_4 [i_0] [i_1 - 1]))));
                        }
                    } 
                } 
            }
        } 
    } 
}
