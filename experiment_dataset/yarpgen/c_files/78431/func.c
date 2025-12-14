/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78431
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
    var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) var_1))));
    var_13 = ((/* implicit */long long int) min((var_13), (((((/* implicit */_Bool) var_11)) ? (max((var_9), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (var_3)))))) : (var_10)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */long long int) ((short) arr_1 [i_0 + 3] [i_0 + 3]));
                    var_15 = ((/* implicit */short) ((((min((1461274327), (-1461274303))) + (2147483647))) >> (((max((((((/* implicit */int) arr_7 [i_2] [i_1] [i_0])) | (((/* implicit */int) arr_0 [i_0] [i_1])))), (min((var_3), (1461274339))))) - (1461274317)))));
                    var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) 4U)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65522)) ? (((/* implicit */int) (unsigned short)0)) : (1461274303))))));
                    arr_8 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) min(((-(((/* implicit */int) arr_3 [i_0 + 2])))), (((/* implicit */int) min((arr_3 [i_0 + 2]), (arr_3 [i_0 + 1]))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))));
}
