/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93676
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) min((var_0), (((/* implicit */unsigned short) var_2))))), (var_10)))) || (((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_4)))) > (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_7)))))))));
    var_17 &= ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_15)) ? (4294967295U) : (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) * (4266457323U))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_18 *= ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0])) / (var_10)));
        var_19 = ((/* implicit */unsigned long long int) min((((unsigned int) ((4294967290U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))), (((/* implicit */unsigned int) (signed char)89))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            var_20 ^= ((/* implicit */unsigned long long int) ((unsigned int) var_3));
            var_21 = ((/* implicit */unsigned short) (+(arr_4 [i_0])));
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (max((((/* implicit */int) var_0)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)182)) : (var_13))))) : (((/* implicit */int) min((arr_1 [i_1 - 2]), (arr_1 [i_1 + 1]))))));
            arr_6 [12LL] [i_1] = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_3 [i_1 - 2])))) - (((/* implicit */int) max((var_3), (arr_3 [i_1 - 1]))))));
        }
        for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            arr_10 [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) var_1);
            arr_11 [(signed char)5] [(short)5] = ((/* implicit */signed char) (unsigned short)23);
            arr_12 [i_0] [i_0] [i_2] &= var_11;
            var_23 = min((((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0])))))))), ((short)13264));
        }
        arr_13 [i_0] = ((/* implicit */unsigned char) ((long long int) (unsigned char)101));
        var_24 += ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [(signed char)7] [i_0] [i_0])) ? (min((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (0U))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_2 [1]) : (((/* implicit */unsigned int) var_1)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(4294967289U)))) ? (((/* implicit */int) ((unsigned short) 4294967295U))) : (((/* implicit */int) (_Bool)1)))))));
    }
    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
    {
        var_25 = ((/* implicit */unsigned short) 7U);
        var_26 += ((/* implicit */unsigned char) ((unsigned long long int) arr_14 [i_3]));
    }
}
