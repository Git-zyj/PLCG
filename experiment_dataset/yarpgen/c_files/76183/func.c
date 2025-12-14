/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76183
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned char i_3 = 3; i_3 < 18; i_3 += 1) 
                    {
                        {
                            arr_13 [9U] [i_1] [i_3] [i_1] = (+((~(min((-941366520), (-2111477684))))));
                            arr_14 [i_0] [i_3] = (+(((/* implicit */int) (unsigned char)0)));
                        }
                    } 
                } 
                arr_15 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)127))) ^ (var_11)))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) (+(min((var_8), (((/* implicit */int) var_2))))));
}
