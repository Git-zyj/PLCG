/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9377
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
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_12 ^= ((/* implicit */short) max((((/* implicit */int) var_10)), (((((/* implicit */_Bool) arr_3 [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
                    arr_6 [i_2] [i_1] [i_2] = ((/* implicit */long long int) max((max(((~(((/* implicit */int) (unsigned short)4096)))), (((/* implicit */int) max((arr_2 [i_2] [i_1] [16U]), ((unsigned short)61440)))))), (max((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (unsigned char)207)) : (((/* implicit */int) (short)-20123))))))));
                    arr_7 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */short) max((arr_4 [i_2] [i_1] [i_1] [i_2]), (max((((/* implicit */long long int) (unsigned char)250)), (arr_4 [i_2] [i_1] [i_1] [i_1])))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */long long int) max(((((+(var_11))) + (((/* implicit */unsigned int) (+(((/* implicit */int) var_9))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2216405458807348902LL)) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) (unsigned short)61449))))))))));
    var_14 = ((/* implicit */signed char) (unsigned short)61440);
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)86)) ? (max((((/* implicit */int) var_10)), (var_0))) : (((/* implicit */int) var_10))));
}
