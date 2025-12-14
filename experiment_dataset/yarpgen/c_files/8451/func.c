/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8451
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
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) min((min((var_6), (var_3))), (((/* implicit */unsigned long long int) var_12))))) || (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_6)))))) <= (var_7)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((2541684471155852802ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [5ULL]))))))) * (15487398747059750928ULL))) * (max((394928402094746562ULL), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (arr_2 [9ULL] [i_0])))))));
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-25237)) != (((/* implicit */int) var_11)))) ? ((~(var_0))) : (((/* implicit */long long int) var_15))))) & (min((((/* implicit */unsigned long long int) arr_0 [i_0])), (((var_4) ? (var_6) : (var_1)))))));
        arr_4 [i_0] = (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) / (var_2))));
    }
    for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) ((unsigned long long int) (-(((/* implicit */int) arr_6 [i_1])))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_2 = 1; i_2 < 16; i_2 += 4) 
        {
            var_19 ^= ((/* implicit */unsigned int) ((((var_7) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_16))))) != (((((/* implicit */unsigned int) ((/* implicit */int) var_12))) % (var_14)))));
            var_20 = ((/* implicit */unsigned long long int) var_9);
            var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_12))));
        }
        for (unsigned long long int i_3 = 2; i_3 < 14; i_3 += 1) 
        {
            arr_14 [i_3] [i_3] = ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((var_14) ^ (((/* implicit */unsigned int) var_9))))) - (var_3))), (((((/* implicit */unsigned long long int) var_15)) - (min((((/* implicit */unsigned long long int) var_13)), (var_3)))))));
            var_22 = ((min((((/* implicit */unsigned long long int) arr_9 [i_1])), (var_2))) << (((max((arr_12 [i_1] [10] [(unsigned char)6]), (((/* implicit */unsigned long long int) 1580411907)))) - (549624969315766010ULL))));
            arr_15 [i_3] = (!(((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_3 - 2] [i_3 + 3] [i_3 + 3])) * (var_9)))));
            var_23 *= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_14)) : (var_2)))) ? (var_0) : (((/* implicit */long long int) ((((/* implicit */unsigned int) 67108863)) / (arr_10 [10ULL] [i_3])))))) * (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_9 [i_1])))))))));
        }
    }
    var_24 = var_11;
    var_25 = ((((((var_11) || (var_10))) ? (((2549581162907009903ULL) + (((/* implicit */unsigned long long int) 446698468834505892LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_4) || (((/* implicit */_Bool) var_3)))))))) ^ (var_1));
}
