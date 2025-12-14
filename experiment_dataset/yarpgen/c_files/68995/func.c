/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68995
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
    var_15 = ((/* implicit */short) min((((((/* implicit */unsigned long long int) var_9)) - (max((((/* implicit */unsigned long long int) var_9)), (var_8))))), (((/* implicit */unsigned long long int) var_2))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) arr_5 [i_0 + 3] [i_1] [i_1]))));
                    var_17 = ((/* implicit */long long int) min((((/* implicit */int) arr_4 [i_2])), (((((/* implicit */_Bool) (short)-21699)) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) arr_4 [i_2]))))));
                    var_18 = var_3;
                    arr_6 [i_0] [14ULL] [0ULL] &= ((/* implicit */long long int) ((((/* implicit */long long int) max(((-(((/* implicit */int) arr_3 [i_0])))), (((((/* implicit */_Bool) arr_0 [(unsigned short)13])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_12))))))) >= (((((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_0 + 3])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [(short)15] [(unsigned char)15])))))));
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)(-127 - 1)))) ? (((var_5) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) == (var_1)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)157))) : (1321695351469058292ULL)))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) var_8);
    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) 1321695351469058267ULL))))), ((((!(((/* implicit */_Bool) var_8)))) ? (max((((/* implicit */long long int) var_6)), (var_13))) : (((/* implicit */long long int) ((/* implicit */int) ((var_1) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))))))))));
}
