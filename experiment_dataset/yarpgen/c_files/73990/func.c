/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73990
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */int) var_5)) << (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)25377)))) - (17092))))) : (var_2)));
    var_16 = ((/* implicit */signed char) var_2);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_3 [i_2])), ((unsigned short)48933)))) || (((/* implicit */_Bool) (unsigned short)48933))));
                                var_18 -= arr_6 [i_2] [i_1] [i_1] [i_0];
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */signed char) ((int) ((int) 3595470044U)));
                arr_14 [i_0] [i_0] = max((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */unsigned long long int) ((1087068241) * (((/* implicit */int) arr_0 [(signed char)4] [i_1]))))) / (arr_6 [i_0] [i_0] [i_0] [i_0]))));
            }
        } 
    } 
}
