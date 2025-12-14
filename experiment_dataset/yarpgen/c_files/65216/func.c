/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65216
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (short i_2 = 3; i_2 < 9; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */long long int) (signed char)-40);
                    arr_10 [9] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) ((unsigned short) ((int) (~(((/* implicit */int) var_1))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) ((signed char) (~(((unsigned int) (unsigned short)28672)))));
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */int) min((((signed char) arr_14 [i_2 + 2] [i_4 - 2])), (((/* implicit */signed char) (!(((/* implicit */_Bool) -961132330)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) ((var_7) + (var_7)))))));
    var_20 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_6) : (var_3)))) * ((-(var_15))))));
}
