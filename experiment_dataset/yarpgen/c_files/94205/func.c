/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94205
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
    var_12 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (int i_2 = 4; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */_Bool) min((max((var_0), (((/* implicit */unsigned int) arr_4 [i_1 + 1] [i_2 - 3] [i_2 + 1])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_2 - 4] [i_2 - 4])) ? (arr_4 [i_1 - 1] [i_2 - 3] [i_2 - 2]) : (arr_4 [i_1 + 2] [i_2 - 3] [i_2 - 2]))))));
                        arr_10 [i_0] [i_1] [i_2 - 4] [i_2] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (arr_5 [i_2]) : (var_10)))) ? (min((((/* implicit */unsigned int) var_10)), (arr_9 [i_0] [i_1 - 1] [i_2] [i_1 - 1] [i_3] [i_3]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_3])) : (((/* implicit */int) arr_2 [i_3] [i_2] [i_0])))))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [i_1])), (var_1))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? ((-(arr_9 [i_0] [i_0] [i_2] [i_2] [i_2] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (var_1)))))))));
                        arr_11 [i_2] = ((signed char) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2 - 3] [i_3])) ? (((((/* implicit */_Bool) var_5)) ? (arr_9 [i_0] [i_1 + 2] [i_2] [i_1 + 2] [i_1 + 2] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))))) : (((/* implicit */unsigned int) ((int) arr_9 [i_2] [i_2] [i_2] [i_2] [i_0] [i_0])))));
                    }
                    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_8 [i_1] [i_1] [i_1] [i_1] [i_1 - 1])))) && (((/* implicit */_Bool) ((var_10) / (arr_4 [i_1 + 2] [i_1] [i_1]))))));
                    arr_12 [i_2] = ((/* implicit */int) max((((((var_3) & (((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0])))) & (max((((/* implicit */long long int) (signed char)8)), (-3677421947335814642LL))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (var_0) : (((/* implicit */unsigned int) arr_5 [i_2]))))) ? (((/* implicit */long long int) max((arr_9 [i_2 - 2] [i_1 + 1] [i_2] [i_0] [i_1] [i_0]), (((/* implicit */unsigned int) arr_3 [i_1]))))) : ((~(-3677421947335814634LL)))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) var_7)))));
}
