/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82107
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
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (+(min((((/* implicit */unsigned long long int) ((var_4) | (((/* implicit */unsigned int) var_3))))), (var_6))))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_16 = ((/* implicit */short) var_5);
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
        var_18 += ((((/* implicit */_Bool) ((short) var_14))) ? (var_6) : (((((/* implicit */_Bool) (signed char)-85)) ? (((/* implicit */unsigned long long int) 4555815432768316812LL)) : (9ULL))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                for (int i_3 = 2; i_3 < 15; i_3 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned char) arr_1 [i_1]);
                        var_20 = ((/* implicit */signed char) max((((/* implicit */long long int) min(((~(((/* implicit */int) arr_4 [i_1] [i_3 - 1])))), (((/* implicit */int) arr_4 [i_0] [i_3 - 1]))))), (max((((var_5) / (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) ((((/* implicit */int) var_10)) / (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3])))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_4 = 1; i_4 < 10; i_4 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -4555815432768316813LL)) ^ (arr_0 [i_4])))) ? (((/* implicit */int) arr_12 [i_4 + 1])) : (((/* implicit */int) min((arr_12 [i_4]), (((/* implicit */unsigned char) arr_4 [i_4] [i_4])))))))));
        arr_13 [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_4 + 1]))))) ? (((/* implicit */int) arr_12 [i_4 + 3])) : (((((/* implicit */int) arr_12 [i_4 + 2])) >> (((((/* implicit */int) arr_12 [i_4 + 3])) - (46)))))));
    }
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((5974571725554609889ULL) <= (6322845704003599030ULL)))) << (((/* implicit */int) ((((/* implicit */unsigned long long int) min((var_9), (((/* implicit */int) (short)26373))))) >= (18446744073709551615ULL))))));
}
