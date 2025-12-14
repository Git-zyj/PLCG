/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6140
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
    var_10 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)34)))))) ? (((unsigned long long int) var_3)) : (((/* implicit */unsigned long long int) min((4466652634146533783LL), (((/* implicit */long long int) var_5)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 20; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_13 [i_3] [i_3] [i_3] = ((/* implicit */long long int) max((((/* implicit */int) arr_9 [i_2] [i_2] [i_2] [i_2] [i_2 + 2] [i_2])), ((-(((/* implicit */int) (unsigned char)43))))));
                                var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)201)) ? (((/* implicit */int) (signed char)26)) : (-577214677)));
                                var_12 = ((/* implicit */int) var_2);
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned char)54)) ? (6152502227757827811LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)23))))), (((/* implicit */long long int) (signed char)64))));
                    var_14 += (+(((/* implicit */int) ((unsigned char) arr_4 [i_0] [i_2]))));
                }
            } 
        } 
    } 
    var_15 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(-8723520902508946089LL)))))))) : (((min((((/* implicit */unsigned long long int) var_4)), (18446744073709551615ULL))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1697878926)) ? (var_0) : (58726075U))))))));
}
