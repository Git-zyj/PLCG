/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87287
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
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) max((var_9), (((/* implicit */int) var_13)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (int i_4 = 4; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_5 [i_1] [i_2] [i_1] [(_Bool)1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_3]))) : (4661254978656521741ULL)));
                                arr_11 [i_2] [(_Bool)1] [i_2] [i_2] [i_4 - 3] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_7 [i_4 - 1] [i_4 + 4] [i_4 + 4] [i_4 - 1] [i_4 - 1])))) || (((/* implicit */_Bool) 33554431))));
                            }
                        } 
                    } 
                } 
                arr_12 [i_1] [i_1] = (~(((((arr_1 [i_0] [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [(_Bool)1] [i_1] [(signed char)9] [i_0] [i_1] [(_Bool)1]))))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)241))) - (var_11))))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) var_8);
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(var_16)))), (((((/* implicit */_Bool) 693184882U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_6)))))) ? (var_11) : (((/* implicit */unsigned long long int) (~(2147483647))))));
}
