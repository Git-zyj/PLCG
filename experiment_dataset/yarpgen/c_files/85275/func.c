/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85275
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
    var_14 = ((/* implicit */short) ((int) var_1));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_15 [(unsigned short)7] [i_1] [i_1] [(unsigned short)7] [(signed char)13] = ((/* implicit */signed char) ((((arr_8 [i_3 - 1] [i_3 - 1] [i_3 - 1] [(signed char)8]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17252))))) ? (max((((/* implicit */int) max((var_8), (((/* implicit */short) arr_9 [i_2]))))), ((~(((/* implicit */int) (unsigned short)37592)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)50)))))));
                                var_15 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) arr_1 [i_3 + 1]))) - (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)112)) : (((/* implicit */int) var_9))))));
                            }
                        } 
                    } 
                    var_16 -= ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)50)) >= (((/* implicit */int) (signed char)54))));
                }
            } 
        } 
    } 
}
