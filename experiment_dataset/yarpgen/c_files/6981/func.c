/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6981
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
    var_19 = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)24))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 13; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) arr_3 [i_0] [i_2 + 2]);
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        var_21 = ((/* implicit */int) ((arr_6 [i_2 + 1] [i_2] [i_2]) / (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_1] [i_1]))))) ? ((+(((/* implicit */int) (signed char)-24)))) : (((/* implicit */int) arr_0 [i_1])))))));
                        var_22 = ((/* implicit */int) ((unsigned long long int) arr_4 [i_1] [i_1]));
                    }
                    for (unsigned int i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        arr_12 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)27))));
                        var_23 = ((/* implicit */long long int) arr_3 [i_1] [i_1]);
                    }
                    var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) arr_2 [i_1] [i_1]))));
                }
            } 
        } 
    } 
}
