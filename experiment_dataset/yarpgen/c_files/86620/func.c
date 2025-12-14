/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86620
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) & (max((((/* implicit */unsigned int) var_0)), (arr_0 [i_0] [i_0])))))), ((~(max((arr_1 [i_0]), (((/* implicit */unsigned long long int) var_2))))))));
        arr_4 [(unsigned short)20] [i_0] = ((/* implicit */unsigned long long int) max((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))), (((/* implicit */unsigned int) ((arr_0 [i_0] [i_0]) == (arr_0 [i_0] [i_0]))))));
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) % (70368744169472LL)));
    }
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned long long int) var_4)) : (arr_1 [i_1]))) | (arr_1 [i_1])))))))));
        var_15 -= ((/* implicit */unsigned int) (-(arr_1 [i_1])));
        var_16 = ((((/* implicit */long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_7 [i_1]))))), (((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_0 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))) + (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) | (arr_1 [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (max((((/* implicit */long long int) (short)-15847)), (var_4))))));
    }
    for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        arr_11 [i_2] = ((/* implicit */unsigned char) arr_9 [i_2]);
        var_17 *= ((/* implicit */unsigned char) min((arr_9 [i_2]), (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_2] [i_2])) / (((/* implicit */int) arr_8 [i_2] [i_2])))))));
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                {
                    var_18 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) + (((/* implicit */int) (unsigned short)24074))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_0 [i_3] [i_2])) > (arr_10 [i_3]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)41461)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41457))) : (arr_1 [i_2])))) ? (((((/* implicit */_Bool) 648983518)) ? (((/* implicit */long long int) -1103273471)) : (arr_10 [i_4]))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_8 [i_4] [(short)20])))))))));
                    var_19 = ((/* implicit */signed char) arr_10 [i_4]);
                    var_20 -= ((/* implicit */unsigned char) ((((((/* implicit */long long int) arr_0 [i_2] [i_3])) ^ (1169914364667048674LL))) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (-2210415551703069995LL))))))))));
                }
            } 
        } 
    }
    var_21 = ((/* implicit */unsigned int) var_9);
    var_22 -= ((/* implicit */signed char) var_13);
    var_23 *= ((/* implicit */unsigned long long int) var_4);
}
