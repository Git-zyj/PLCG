/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84112
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_17 = arr_0 [i_0] [i_0];
                var_18 = ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((long long int) arr_2 [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-98))) : (arr_1 [i_0]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) % (((((/* implicit */unsigned long long int) var_8)) | (arr_1 [i_0]))))));
                var_19 = ((/* implicit */unsigned short) max((var_19), (((unsigned short) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_2 [i_0] [i_1] [i_0])) : (((/* implicit */int) (signed char)98)))), (((/* implicit */int) ((short) arr_1 [i_0]))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 1; i_2 < 10; i_2 += 3) 
    {
        for (int i_3 = 3; i_3 < 10; i_3 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_6 [i_2 - 1] [i_2 + 1] [i_2 - 1]), (arr_6 [i_2] [i_2 + 1] [i_3 - 3])))) * (((((/* implicit */_Bool) arr_6 [i_2] [i_2 - 1] [i_2 - 1])) ? (((/* implicit */int) arr_6 [i_2 + 1] [i_2 + 1] [i_3 - 3])) : (((/* implicit */int) arr_6 [i_2 - 1] [i_2 + 1] [i_2 - 1]))))));
                var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((min((((/* implicit */unsigned short) arr_3 [i_2] [i_2])), (arr_7 [i_3]))), (((/* implicit */unsigned short) arr_0 [i_2 + 1] [i_2 + 1])))))));
                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) max((arr_5 [i_2 + 1] [i_2 + 1]), (((((/* implicit */_Bool) arr_4 [i_2 + 1])) ? (arr_5 [i_3] [i_2 - 1]) : (((/* implicit */int) var_14)))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */int) (+(var_3)));
}
