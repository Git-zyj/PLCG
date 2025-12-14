/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71766
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_3 [(signed char)6] [(short)6] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)7)) | (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)64))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) + (arr_1 [0ULL])))));
        var_11 *= ((/* implicit */short) min((((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (arr_1 [(unsigned short)4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)4)) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (unsigned short)26645)))))));
        var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(short)4])) ? (var_9) : (arr_1 [(signed char)2]))))));
    }
    var_13 = ((/* implicit */_Bool) var_10);
    /* LoopNest 2 */
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        for (unsigned char i_2 = 4; i_2 < 22; i_2 += 2) 
        {
            {
                arr_9 [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) min((arr_4 [(unsigned char)20] [(unsigned char)20]), (((/* implicit */unsigned long long int) ((arr_7 [i_1] [i_1] [i_1]) ? (-1) : (((/* implicit */int) (signed char)7))))))));
                arr_10 [i_1] [i_2 - 1] [i_1] = arr_8 [i_2] [20LL] [i_2 - 2];
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_8)) >= (var_7))))) | (var_9)))));
}
