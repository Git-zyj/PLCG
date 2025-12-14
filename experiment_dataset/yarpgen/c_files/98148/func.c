/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98148
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
    var_13 = ((/* implicit */unsigned char) var_6);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (signed char i_4 = 2; i_4 < 8; i_4 += 4) 
                        {
                            {
                                var_14 |= ((/* implicit */signed char) arr_11 [i_2]);
                                var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_0]))));
                                arr_12 [i_0] [(unsigned char)8] [i_2] [i_3] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)23033))));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (unsigned char)88))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_0 - 1] [i_1] [i_1] [i_1] [i_1] [i_0] [i_1])))))));
                var_17 *= ((/* implicit */unsigned char) (signed char)-14);
                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (~(((/* implicit */int) arr_11 [i_1])))))));
                var_19 = ((/* implicit */signed char) (unsigned short)32768);
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) var_2);
}
