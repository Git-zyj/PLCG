/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6633
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 22; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((((/* implicit */int) ((((((-1) + (2147483647))) >> (((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) var_9))))) > (((/* implicit */int) (_Bool)1)))))));
                                arr_14 [i_0] [i_1 - 1] [i_1 - 1] [i_2 - 2] [(unsigned char)2] [14LL] [i_4] |= (+((-(((/* implicit */int) ((unsigned char) 5110553038069615132LL))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] = (((-(arr_9 [i_0] [i_1 - 1] [20] [i_2 - 1] [i_2] [i_2]))) != (((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_1]))) / (var_7))))));
                }
            } 
        } 
    } 
    var_13 = ((((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) var_10))) - (((/* implicit */int) ((((/* implicit */int) (signed char)16)) > (-408969697))))))) / (((((unsigned int) var_1)) << (((max((var_8), (((/* implicit */long long int) var_10)))) - (217LL))))));
}
