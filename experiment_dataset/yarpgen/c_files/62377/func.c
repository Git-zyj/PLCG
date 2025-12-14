/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62377
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
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_1 [i_0]))) ^ (max((arr_1 [i_0]), (arr_1 [i_0]))))));
                    arr_9 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) var_5))) - (((/* implicit */int) ((unsigned char) 2329712850U)))));
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 - 1]))) : (arr_6 [i_0 - 1] [i_0 - 2] [i_0 - 2])))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))) : ((-(((/* implicit */int) var_10)))))), (((((/* implicit */_Bool) var_2)) ? (-355157925) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_3)))))))));
}
