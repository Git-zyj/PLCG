/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76548
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_10 -= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -63247706086013282LL)) - (22ULL)))) ? (min((18446744073709551593ULL), (22ULL))) : (max((1610612736ULL), (((/* implicit */unsigned long long int) var_3))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) ((((((var_6) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)108))))) == (var_2))) ? (min((min((arr_11 [i_2] [i_1 - 1] [i_2] [i_0] [i_2] [i_0] [i_2]), (var_4))), (((/* implicit */unsigned long long int) ((arr_2 [i_0] [8ULL]) >> (((1744761129U) - (1744761067U)))))))) : (((((/* implicit */_Bool) (-(1610612752ULL)))) ? (((((/* implicit */_Bool) 8118129141802115392ULL)) ? (var_0) : (((/* implicit */unsigned long long int) arr_3 [i_4])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-70))))))))));
                                var_12 = var_5;
                                var_13 &= 18434850576269850377ULL;
                                var_14 *= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 13U)))))) == (arr_3 [i_2])));
                                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((((((((/* implicit */_Bool) 5123542692415898530LL)) ? (((/* implicit */unsigned long long int) 0U)) : (1610612736ULL))) * (((/* implicit */unsigned long long int) arr_5 [i_1 + 4] [i_1 + 3] [i_1 + 3])))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) var_6))));
                    var_17 ^= ((/* implicit */signed char) max((((((/* implicit */_Bool) min((18446744072098938877ULL), (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((18446744073709551615ULL) * (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : ((+(var_0))))), (arr_7 [i_2] [i_0] [i_0] [i_0])));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((var_4) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_1)))))) == (((var_0) + (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_6)), (4194272LL)))))))))));
    var_19 *= ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) 1837489749U)), (11614436727962044172ULL))) + (((/* implicit */unsigned long long int) var_3))));
    var_20 -= ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) ((var_4) / (var_0))))) == ((-(((/* implicit */int) var_9))))));
    var_21 *= ((/* implicit */unsigned int) var_9);
}
