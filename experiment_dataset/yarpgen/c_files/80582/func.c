/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80582
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
    for (int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 11; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_1 + 1] [10] [i_3])) ? (((/* implicit */unsigned long long int) var_4)) : (((((/* implicit */_Bool) arr_14 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 3] [8ULL] [i_4] [i_2 - 2])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (var_6) : (((/* implicit */unsigned long long int) var_9))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)36223)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) : (var_3)))))))) : (2437489623U)));
                                var_12 = ((/* implicit */short) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((var_7) % (((/* implicit */int) var_1))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2]))) % (var_3))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (arr_13 [i_1 - 3] [i_0] [i_0] [i_0 + 2] [i_0]) : (((/* implicit */long long int) 576998661U)))))));
                                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1 + 2] [i_1 - 2] [i_1 + 1])) + (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 + 2] [i_1 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 - 3] [i_1 + 1] [i_1 + 2]))) : (var_10))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) % (((/* implicit */int) arr_5 [i_1 - 2] [i_1 + 2] [i_1 - 1])))))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */unsigned char) var_4);
                arr_15 [i_1] [i_0] = ((/* implicit */signed char) var_1);
                var_15 = ((/* implicit */long long int) min((8750846840940865504ULL), (((((/* implicit */_Bool) ((arr_9 [i_0 - 1] [i_1] [(unsigned short)3] [i_0]) % (((/* implicit */unsigned int) -888610720))))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 1])))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) (unsigned short)56856)) : (((((/* implicit */_Bool) var_10)) ? (var_7) : (var_9)))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) var_9)), (var_4)))) : (((((/* implicit */_Bool) 3357049646740906656LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (5519868784642977653LL)))));
    var_17 = var_4;
    var_18 = ((((/* implicit */int) var_5)) << (((var_3) - (8360610688180815602ULL))));
}
