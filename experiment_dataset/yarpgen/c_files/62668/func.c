/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62668
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
    var_13 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((short) var_5)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 15; i_1 += 4) 
        {
            {
                var_14 += ((/* implicit */unsigned int) var_9);
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_15 = arr_9 [i_0 + 1] [i_2];
                                arr_12 [i_3] [i_3] [i_3] [i_3] [i_0] = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_3] [(signed char)7]);
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */short) max((var_16), (var_11)));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) ((var_1) << (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (2335406569541948047LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-15482)))))))))));
}
