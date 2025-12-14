/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92481
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_7 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (unsigned short)3692);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        var_18 |= ((/* implicit */unsigned char) (!(((arr_10 [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3686)))))));
                        var_19 = ((/* implicit */short) (-(((arr_10 [i_0]) << (((/* implicit */int) (_Bool)1))))));
                        arr_11 [i_0] [i_1] [i_0] = (-(((/* implicit */int) arr_4 [i_3] [i_1])));
                        var_20 = ((/* implicit */signed char) ((_Bool) arr_0 [i_0] [i_1]));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        arr_14 [i_4] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((4) * (((/* implicit */int) arr_1 [i_4] [i_4]))))) ? (((int) (_Bool)0)) : (arr_2 [i_4]))), ((-(((/* implicit */int) (unsigned short)3671))))));
        var_21 = ((/* implicit */short) (+(((arr_10 [i_4]) >> (((arr_10 [i_4]) - (10551542690819430063ULL)))))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_22 *= ((/* implicit */_Bool) (-(((/* implicit */int) var_14))));
        var_23 = ((int) max((((/* implicit */unsigned long long int) ((-1996073333) + (((/* implicit */int) var_6))))), (14945929364377383432ULL)));
        var_24 = ((/* implicit */long long int) ((((((/* implicit */unsigned int) max((2097151), (((/* implicit */int) (_Bool)1))))) | (((4294967280U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8184))))))) > (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_11))))));
        var_25 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_4 [i_5] [i_5])) != (arr_0 [18U] [i_5]))) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : ((-(((long long int) arr_12 [i_5]))))));
    }
    var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) max((var_17), (((/* implicit */unsigned short) (_Bool)1))))))))));
    var_27 = ((/* implicit */int) var_2);
}
