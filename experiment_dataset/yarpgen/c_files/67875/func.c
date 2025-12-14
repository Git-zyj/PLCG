/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67875
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
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)160)) && (((/* implicit */_Bool) (short)-3551))))), (var_5)))) || (((/* implicit */_Bool) (short)-22471))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 23; i_3 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned long long int) ((9472550681988962937ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3564)))));
                            var_16 = ((/* implicit */unsigned int) var_4);
                            var_17 += ((/* implicit */int) ((short) (((!((_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3 + 2]))) : (var_7))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) arr_5 [i_0])) / (((/* implicit */int) (signed char)75)))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) var_2);
    var_20 ^= ((/* implicit */_Bool) (short)3559);
    var_21 = ((/* implicit */unsigned char) var_13);
}
