/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71374
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
    var_11 = ((int) var_4);
    var_12 -= ((/* implicit */int) var_10);
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) (+(var_0))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 19; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */short) 13894202792599711501ULL);
                var_14 += ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)99)) : (arr_0 [i_0])))) + (((((/* implicit */_Bool) arr_2 [i_0] [i_1 - 1])) ? (var_7) : (((/* implicit */unsigned long long int) var_3)))))) + (((/* implicit */unsigned long long int) var_3)));
                var_15 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)12))) & (10761023758677231842ULL)));
                arr_5 [(unsigned char)2] [(short)15] = ((((/* implicit */_Bool) (-((~(arr_0 [11])))))) ? (((/* implicit */unsigned long long int) min((((var_8) - (((/* implicit */int) arr_2 [i_0] [i_1 + 2])))), (((int) (unsigned char)8))))) : (min((min((((/* implicit */unsigned long long int) arr_0 [i_1 - 2])), (arr_3 [i_0] [i_1]))), (max((((/* implicit */unsigned long long int) var_3)), (var_7))))));
                var_16 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_3 [i_1 - 3] [i_1 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 - 3] [i_1 - 4]))) : (15530652569426315964ULL))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 + 2] [i_1 - 4]))) ^ (arr_3 [i_1 + 1] [i_1 - 3])))));
            }
        } 
    } 
}
