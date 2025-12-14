/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58457
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
    var_15 = ((/* implicit */short) -1521504993);
    var_16 += ((/* implicit */int) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)3322)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45100))) : (8069524930164535079LL)))), (((((/* implicit */_Bool) 2552865318084591558LL)) ? (var_11) : (((/* implicit */unsigned long long int) -2552865318084591559LL)))))), (((/* implicit */unsigned long long int) (~(var_4))))));
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4684209034621811481LL)) ? (((/* implicit */int) var_3)) : (var_10)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 10; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_0 [1U]))) != (((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_2 - 1] [i_1] [i_0])) ? (2552865318084591558LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-8409))))))) ? (min((2552865318084591559LL), (-7862422212307912691LL))) : (((long long int) arr_6 [8LL] [i_0] [(signed char)3] [(_Bool)0]))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 3; i_3 < 8; i_3 += 2) 
                    {
                        var_19 = (i_2 % 2 == zero) ? (((((((((/* implicit */_Bool) var_7)) ? (arr_9 [i_2 - 3] [i_3 + 1] [i_3 + 3] [i_2]) : (arr_9 [i_2 - 1] [i_3 + 1] [i_3 + 3] [i_2]))) + (9223372036854775807LL))) << (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_2 - 3] [i_3 - 3] [i_3 - 1] [i_2])) && (((/* implicit */_Bool) arr_9 [i_2 - 3] [i_3 - 3] [i_3 + 1] [i_2]))))))) : (((((((((((/* implicit */_Bool) var_7)) ? (arr_9 [i_2 - 3] [i_3 + 1] [i_3 + 3] [i_2]) : (arr_9 [i_2 - 1] [i_3 + 1] [i_3 + 3] [i_2]))) - (9223372036854775807LL))) + (9223372036854775807LL))) << (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_2 - 3] [i_3 - 3] [i_3 - 1] [i_2])) && (((/* implicit */_Bool) arr_9 [i_2 - 3] [i_3 - 3] [i_3 + 1] [i_2])))))));
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 3651514750195702665ULL)))) % (((((((/* implicit */_Bool) arr_4 [i_0] [(unsigned short)4])) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_0] [i_2]))))) >> (((var_10) - (1492312782)))))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_4 = 2; i_4 < 9; i_4 += 1) 
                    {
                        for (unsigned long long int i_5 = 1; i_5 < 8; i_5 += 2) 
                        {
                            {
                                arr_16 [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) 1605780110)))));
                                arr_17 [i_2] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))));
                                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) max((((var_2) ? (arr_14 [i_2 + 1] [i_4 - 2] [i_4 + 1] [i_4 - 2] [i_5 + 1] [i_5 + 1]) : (4970281654985287075LL))), (((((/* implicit */_Bool) (+(arr_14 [i_1] [(short)6] [i_2] [i_1] [i_0] [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3))))) : (-2552865318084591559LL))))))));
                                arr_18 [i_2] [i_1] [i_2 - 2] [i_4] [i_2] [i_2 - 2] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) var_0)) ? (arr_9 [i_2 + 1] [i_4 - 1] [i_4 - 1] [i_2]) : (arr_9 [i_2 + 1] [i_4 - 1] [i_5 - 1] [i_2]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) var_2))));
}
