/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84334
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
    var_20 = ((/* implicit */unsigned short) max((1882894153), (((/* implicit */int) (unsigned short)49152))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551614ULL))))))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 17; i_2 += 2) 
                {
                    for (short i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) (unsigned char)71)), (12ULL))), (max((18446744073709551615ULL), (3ULL))))))));
                            arr_12 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_1] [i_1] [i_3 - 1] = ((/* implicit */_Bool) min((1ULL), (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)-19452)), ((+(((/* implicit */int) (unsigned char)255)))))))));
                            arr_13 [i_3 + 1] [(short)11] [(_Bool)1] [(unsigned char)11] = ((/* implicit */_Bool) (short)-8200);
                        }
                    } 
                } 
                var_22 ^= ((/* implicit */short) min((((/* implicit */unsigned long long int) min((737312559), (((/* implicit */int) min(((short)-8200), (((/* implicit */short) (_Bool)1)))))))), ((~(min((((/* implicit */unsigned long long int) -2077421066)), (18446744073709551614ULL)))))));
            }
        } 
    } 
    var_23 = (unsigned char)30;
    var_24 = min((1ULL), (((/* implicit */unsigned long long int) (unsigned char)88)));
}
