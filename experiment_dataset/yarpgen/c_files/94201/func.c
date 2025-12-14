/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94201
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
    var_19 *= ((/* implicit */unsigned char) var_2);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2 + 1])) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_6 [i_0 + 2] [i_1] [i_0 + 2]))))), (((((/* implicit */_Bool) arr_3 [i_2] [i_2 + 1] [i_2])) ? (arr_5 [i_2] [i_2 - 1] [i_2 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_2 - 1] [i_2])))))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1438291094)) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) arr_1 [i_2]))))) : (var_15)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_0] [i_0] [i_2 + 1]))))) : (max(((~(arr_5 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (unsigned char)222)) : (((/* implicit */int) (short)-17248)))))))));
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 + 2]))) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_2 + 1] [i_2 + 1])) ? (((/* implicit */int) arr_3 [i_0 - 1] [i_2 + 1] [i_0 - 1])) : (((/* implicit */int) arr_3 [i_0 + 1] [i_2 + 1] [i_2 + 1]))))))))));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_5 [i_2 + 1] [i_0 - 2] [i_0 + 1]);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) var_1);
    var_22 |= ((/* implicit */int) var_2);
}
