/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56173
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        var_16 *= ((/* implicit */_Bool) var_3);
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (min((((/* implicit */int) arr_1 [i_0])), (arr_0 [i_0] [i_0]))) : (arr_0 [i_0] [i_0])));
        arr_4 [i_0] [i_0] = ((((/* implicit */_Bool) var_2)) ? (((((((/* implicit */_Bool) 18446744073709551606ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 2147483647)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_1 [i_0])))))) : (max((((/* implicit */unsigned long long int) max((arr_0 [i_0] [i_0 - 2]), (((/* implicit */int) var_7))))), (arr_2 [i_0]))));
        arr_5 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), (max((((/* implicit */unsigned short) arr_1 [i_0])), (var_8))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        var_17 = arr_1 [i_1];
        var_18 &= ((/* implicit */unsigned long long int) arr_7 [i_1]);
    }
    for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        arr_11 [1ULL] [i_2] = ((/* implicit */unsigned short) ((18014398509465600ULL) < (18446744073709551599ULL)));
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 4) 
        {
            arr_14 [i_2] = ((/* implicit */_Bool) arr_9 [i_3]);
            var_19 = ((/* implicit */_Bool) arr_6 [i_3] [i_2]);
            arr_15 [i_2] = ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((((/* implicit */_Bool) 4611686018427387903ULL)) ? (((/* implicit */int) arr_6 [i_3 + 1] [i_3 - 2])) : (((/* implicit */int) arr_6 [i_3 + 1] [4ULL]))))));
        }
        /* vectorizable */
        for (signed char i_4 = 3; i_4 < 8; i_4 += 4) 
        {
            /* LoopSeq 1 */
            for (short i_5 = 3; i_5 < 6; i_5 += 4) 
            {
                arr_22 [i_2] [i_2] [i_4] [i_5 + 3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)255))) : (var_11)));
                arr_23 [i_2] [i_4 + 2] [i_2] [7ULL] = ((/* implicit */unsigned long long int) (_Bool)1);
            }
            arr_24 [i_2] = ((/* implicit */unsigned int) ((_Bool) ((short) var_11)));
            var_20 = ((((/* implicit */_Bool) (+(13638718733166916497ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_2] [i_4 + 1]))) : (((unsigned long long int) var_15)));
        }
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) var_11))));
        arr_25 [i_2] = ((max((max((var_15), (357661802764610ULL))), (((/* implicit */unsigned long long int) (!((_Bool)1)))))) * (arr_16 [i_2] [i_2]));
    }
    var_22 = ((/* implicit */int) var_7);
    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) max(((_Bool)1), ((_Bool)0))))));
}
