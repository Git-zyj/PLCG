/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58144
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                var_15 ^= ((/* implicit */unsigned char) (-((~(arr_6 [i_1 + 4])))));
                arr_8 [i_0] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_5 [i_1 + 3] [i_1 - 1] [i_1 + 1])), (-2147483645))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 3; i_2 < 12; i_2 += 2) 
                {
                    for (signed char i_3 = 1; i_3 < 14; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_16 [i_1] [i_1] = 1073725440U;
                                arr_17 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) -1394996405);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))))), (var_9)));
    var_17 += ((/* implicit */unsigned char) ((int) var_7));
    var_18 *= ((/* implicit */unsigned short) min((((var_4) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) ((unsigned short) var_2)))));
}
