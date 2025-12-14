/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9607
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 -= ((arr_3 [i_1] [i_0]) ? (((/* implicit */int) min((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0])))) : (((/* implicit */int) (unsigned char)255)));
                var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (-(arr_4 [i_0] [i_1] [i_1])))))) * (min((0ULL), (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */long long int) (_Bool)0))))))))))));
                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (~((-(((/* implicit */int) arr_3 [i_0] [i_0])))))))));
            }
        } 
    } 
    var_20 = ((((/* implicit */_Bool) ((((/* implicit */int) ((var_8) || (((/* implicit */_Bool) var_2))))) >> (((min((((/* implicit */int) (_Bool)0)), (var_0))) + (1326771189)))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) < (max((((/* implicit */long long int) (signed char)-33)), (2495562768189026699LL)))))) : (var_13));
    var_21 = ((/* implicit */int) (unsigned short)53665);
    /* LoopSeq 1 */
    for (long long int i_2 = 2; i_2 < 19; i_2 += 2) 
    {
        var_22 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (((!(arr_5 [i_2]))) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) (_Bool)1))))), (min((arr_6 [i_2 + 1]), (((/* implicit */unsigned int) ((short) (unsigned short)33225)))))));
        var_23 ^= ((/* implicit */long long int) ((var_11) + (((((/* implicit */_Bool) ((((/* implicit */int) var_14)) - (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_8)))) : (((((/* implicit */int) arr_5 [i_2])) & (((/* implicit */int) (unsigned short)46161))))))));
    }
}
