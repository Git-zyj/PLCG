/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55262
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
    var_20 = ((/* implicit */int) var_15);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_21 ^= arr_0 [i_0];
        var_22 = ((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0] [i_0]))));
        arr_2 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) max((((/* implicit */short) arr_1 [i_0] [i_0])), (var_14)))), ((+(((/* implicit */int) arr_0 [i_0]))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 1; i_1 < 8; i_1 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */signed char) (+(((/* implicit */int) arr_1 [i_1 - 1] [i_1]))));
        /* LoopNest 2 */
        for (signed char i_2 = 1; i_2 < 7; i_2 += 4) 
        {
            for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                {
                    arr_9 [i_2] [i_2] [i_2] = ((/* implicit */int) arr_8 [i_2] [i_1] [i_2]);
                    var_24 |= ((/* implicit */unsigned short) (-(((((/* implicit */int) (signed char)57)) | (((/* implicit */int) arr_1 [i_1] [i_1]))))));
                    var_25 = ((/* implicit */long long int) (-(((/* implicit */int) arr_0 [3LL]))));
                }
            } 
        } 
        var_26 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)37)) != (((/* implicit */int) arr_0 [i_1 + 1]))));
    }
    /* vectorizable */
    for (unsigned short i_4 = 1; i_4 < 8; i_4 += 1) /* same iter space */
    {
        arr_12 [i_4] [i_4 - 1] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_11 [i_4] [i_4 + 2])) ? (arr_4 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))));
        arr_13 [i_4 - 1] = ((/* implicit */unsigned int) ((arr_5 [6U] [i_4 - 1] [i_4 + 1]) < (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)37))) / (-4634889835076125249LL)))));
    }
    var_27 = ((/* implicit */_Bool) ((((/* implicit */int) var_13)) & (min((((((/* implicit */int) var_19)) << (((((/* implicit */int) (short)6343)) - (6320))))), (((/* implicit */int) var_2))))));
}
