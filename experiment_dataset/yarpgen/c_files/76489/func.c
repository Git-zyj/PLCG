/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76489
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) ((((/* implicit */_Bool) -3666583664203714086LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)215))) : (var_8))))));
                    var_12 *= ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned int) arr_8 [i_1]))))) ? (((/* implicit */unsigned long long int) (~(-1LL)))) : (((((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_0] [(signed char)5] [i_2]))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)67)), (arr_3 [i_0] [i_1] [11LL])))) : (((((/* implicit */unsigned long long int) -3578979281393853016LL)) ^ (18446744073709551615ULL)))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_3)) : (min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_1)) : (4924353681683820694ULL))), (((/* implicit */unsigned long long int) var_4)))))))));
}
