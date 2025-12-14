/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80948
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
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), ((-(18446744073709551615ULL)))))) ? (((((/* implicit */int) (signed char)-31)) | (((/* implicit */int) var_5)))) : (((/* implicit */int) (unsigned char)251))));
    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_3)), (var_5)))) || (((/* implicit */_Bool) var_3))))) <= (((/* implicit */int) (!(var_2)))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) ((unsigned char) arr_0 [i_0]))))) & (((/* implicit */int) (short)-24032))));
        var_15 |= ((unsigned long long int) var_0);
    }
    for (unsigned char i_1 = 1; i_1 < 22; i_1 += 2) 
    {
        var_16 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((2528458853U), (((/* implicit */unsigned int) (signed char)-31))))))))));
        /* LoopSeq 4 */
        for (unsigned char i_2 = 2; i_2 < 21; i_2 += 2) 
        {
            var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_2) ? (((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (arr_5 [i_1] [i_2] [i_2 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) (+(((/* implicit */int) var_10)))))))) ? ((-(((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-31)))))) : (((/* implicit */int) ((signed char) min(((signed char)22), (((/* implicit */signed char) var_2)))))))))));
            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_2 + 2] [i_2] [i_1])) >= (((/* implicit */int) var_1))));
            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (_Bool)1))));
            arr_9 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)(-127 - 1)))))) <= (max((arr_3 [i_2]), (var_6))))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)4)) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)23)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0))))) : (var_12)))));
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_2] [i_1]))) & (arr_6 [i_1]))) <= (((/* implicit */long long int) ((unsigned int) var_0)))))) + (((/* implicit */int) (short)-24612))));
        }
        for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            arr_13 [i_1 + 1] [i_3] |= ((/* implicit */short) ((((/* implicit */_Bool) ((1663176688) | (((/* implicit */int) var_8))))) ? ((-(arr_11 [i_1 - 1]))) : (((((/* implicit */_Bool) arr_8 [i_3] [i_1 + 1] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3] [i_1 - 1] [i_3]))) : (arr_11 [i_1 - 1])))));
            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((signed char) ((var_6) / (arr_3 [i_1])))))));
            var_22 = ((/* implicit */short) arr_4 [i_1]);
        }
        for (unsigned long long int i_4 = 1; i_4 < 22; i_4 += 1) 
        {
            arr_17 [i_1] [i_1 + 1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) + (((((/* implicit */_Bool) ((short) (signed char)99))) ? (((/* implicit */int) (signed char)-115)) : (((/* implicit */int) (signed char)30))))));
            arr_18 [i_1] [i_1] [i_4] = (unsigned char)251;
        }
        /* vectorizable */
        for (int i_5 = 1; i_5 < 19; i_5 += 2) 
        {
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_1 + 1] [i_1 + 1] [i_1 - 1])) >= (((/* implicit */int) arr_15 [i_1] [i_1]))));
            arr_22 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)68)) > (((/* implicit */int) var_9))));
        }
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 4) 
    {
        var_24 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)232))));
        var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_6] [i_6] [i_6]))));
    }
}
