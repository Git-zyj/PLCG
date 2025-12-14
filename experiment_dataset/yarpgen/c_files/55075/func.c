/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55075
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) var_8);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        {
                            var_13 = var_6;
                            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) < (2602177568U)))) | (((var_6) ? (((/* implicit */int) arr_9 [i_1 + 3] [i_1 + 2])) : (((/* implicit */int) arr_9 [i_1 - 1] [i_1 + 1]))))));
                        }
                    } 
                } 
                arr_10 [i_0] = var_4;
                arr_11 [i_0] [i_0] [10ULL] = ((/* implicit */unsigned int) (((((~(var_9))) == (((/* implicit */unsigned long long int) (+(1692789735U)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (-3610714829549358995LL)));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) var_9);
}
