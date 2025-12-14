/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65812
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
    var_15 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_5)), (var_2)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 3; i_2 < 19; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1]))) - (13376113614822494570ULL))), (((/* implicit */unsigned long long int) min((1661435902U), (((/* implicit */unsigned int) arr_1 [i_0])))))));
                                var_17 = ((/* implicit */_Bool) var_6);
                            }
                        } 
                    } 
                } 
                var_18 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0]))))) : (((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_1])) ? (5070630458887057053ULL) : (((/* implicit */unsigned long long int) 2133909016)))))))));
                var_19 = ((/* implicit */unsigned char) arr_11 [i_0] [i_0] [i_0] [0ULL] [i_0] [i_0]);
            }
        } 
    } 
}
