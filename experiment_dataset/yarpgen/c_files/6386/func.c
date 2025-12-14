/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6386
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) & (var_6))), (((/* implicit */unsigned long long int) var_11))))) ? ((+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3)))))) : (((/* implicit */int) var_7))));
    var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned int) var_1))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) var_9)))))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */_Bool) (-(min((min((arr_2 [i_1]), (((/* implicit */unsigned int) arr_0 [i_0])))), (arr_4 [i_0])))));
                    var_15 = arr_5 [i_1];
                    var_16 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))) : (arr_2 [i_0])))) ? (max((((/* implicit */unsigned int) min((arr_3 [i_0] [i_0] [i_0]), (arr_6 [i_2] [(signed char)17] [(unsigned char)22] [i_0])))), (max((arr_4 [i_0]), (arr_1 [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [i_1] [i_2] [i_2]))) < (arr_1 [i_2]))))))));
                }
            } 
        } 
    } 
}
