/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90429
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)29)) ? (((/* implicit */int) (signed char)-30)) : (((/* implicit */int) (signed char)9)))), (((/* implicit */int) var_9))))) ? (((long long int) var_2)) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_9)) * (((/* implicit */int) (_Bool)1)))))))));
                                var_15 = ((/* implicit */long long int) max((((arr_6 [i_0] [i_1] [i_2] [i_3]) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_3] [(unsigned short)12])) : (((/* implicit */int) arr_6 [i_4] [i_3] [i_2] [i_1])))), (((/* implicit */int) var_9))));
                            }
                        } 
                    } 
                    arr_11 [i_0] [i_1] [i_0] = ((/* implicit */short) var_5);
                }
            } 
        } 
    } 
    var_16 = min((((/* implicit */unsigned int) var_5)), ((~(((((/* implicit */_Bool) (short)4152)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (1245763963U))))));
}
