/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69151
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
    var_17 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))));
    var_18 = ((/* implicit */_Bool) (-(3612069338U)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_19 ^= ((/* implicit */long long int) (~((+(507575130U)))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) (signed char)-112);
                var_20 = (-((-((-(arr_0 [i_0]))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 18; i_2 += 1) 
                {
                    for (short i_3 = 3; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */int) 13803970764911705540ULL);
                            var_22 = ((/* implicit */unsigned char) (+((~(563624869421742479LL)))));
                            arr_13 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1] [i_1] [(unsigned short)18] [i_3]))));
                            var_23 = ((/* implicit */signed char) arr_1 [i_1]);
                            arr_14 [i_0] [i_0] [i_0] [i_3 - 1] [i_0] [i_3 - 1] = arr_0 [9ULL];
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) (short)-3336);
}
