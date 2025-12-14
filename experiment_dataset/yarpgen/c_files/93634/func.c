/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93634
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
    var_15 = ((/* implicit */unsigned short) var_7);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) min((((/* implicit */int) ((arr_13 [i_0 + 1] [i_0 + 1]) <= (arr_13 [i_0 + 1] [i_0 + 1])))), (((((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1])) / (((/* implicit */int) (unsigned short)25042)))))))));
                                arr_16 [(unsigned char)0] [i_1] [i_2] [i_3] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)47265)) ? (min((((/* implicit */int) ((((/* implicit */int) (unsigned char)20)) != (((/* implicit */int) var_12))))), (var_9))) : (((/* implicit */int) var_7))));
                                var_17 ^= ((/* implicit */long long int) (unsigned char)231);
                            }
                        } 
                    } 
                    arr_17 [(signed char)4] [(signed char)4] |= var_11;
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned int i_6 = 2; i_6 < 12; i_6 += 2) 
        {
            {
                arr_24 [i_5] [i_6] = ((/* implicit */unsigned long long int) ((short) ((unsigned int) 131071)));
                var_18 = ((/* implicit */short) var_1);
                arr_25 [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) (-(((var_10) & (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_5] [18U] [i_5]))))))))));
                var_19 = ((/* implicit */unsigned char) (~(((arr_23 [i_5] [(unsigned char)0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_5] [i_6] [i_6])))))));
            }
        } 
    } 
}
