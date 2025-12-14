/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99665
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
    var_18 = ((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (var_12) : (((/* implicit */int) var_9))))), (max((((/* implicit */unsigned long long int) var_12)), (var_14)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_19 = max((((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0]))) >= (arr_6 [i_2] [i_1] [i_2])))), (((((/* implicit */int) arr_2 [i_0] [i_1] [i_2])) >> (((var_13) - (3535247063U)))))))), ((+(var_17))));
                    arr_7 [i_2] = ((/* implicit */unsigned long long int) min(((((-(((/* implicit */int) arr_5 [6LL] [i_1] [i_1])))) | (((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_0])), (arr_5 [i_0] [(signed char)4] [i_2])))))), (max(((~(((/* implicit */int) arr_1 [i_0])))), (max((((/* implicit */int) arr_3 [i_2] [i_2] [i_2])), (var_12)))))));
                    arr_8 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) (+(((var_15) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))));
                }
            } 
        } 
    } 
}
