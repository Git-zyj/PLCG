/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92041
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
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 4) 
                {
                    for (int i_3 = 2; i_3 < 19; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [i_1] [9])) + (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) >= (var_4))))))) ? (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3] [i_3] [10] [i_3 + 2] [i_3] [i_3]))) : (arr_7 [i_0] [i_0]))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) max((var_7), (((/* implicit */unsigned short) var_1))))) : (((/* implicit */int) ((unsigned char) 4632082717145886255LL))))))));
                            var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_0] [7LL] [i_0 - 2] [i_0])) || (((/* implicit */_Bool) var_2))))), (var_7)))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) & (((var_12) >> (((var_0) + (1062141295))))))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) var_5))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    var_17 = ((/* implicit */long long int) arr_4 [i_0] [i_4]);
                    var_18 = ((/* implicit */unsigned char) var_0);
                }
                arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), (arr_1 [(unsigned short)2])))) && (((/* implicit */_Bool) var_5))));
                arr_14 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))) + (var_4)));
            }
        } 
    } 
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_8)))))));
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) && (((/* implicit */_Bool) var_3))));
    var_21 = ((/* implicit */signed char) ((((((((/* implicit */int) var_8)) - (((/* implicit */int) var_5)))) <= ((-(((/* implicit */int) (signed char)64)))))) ? (max((((/* implicit */int) var_11)), (min((var_2), (((/* implicit */int) var_3)))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (unsigned short)50767))))))));
}
