/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80420
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
    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((((/* implicit */int) var_6)) & (((/* implicit */int) (unsigned char)165)))) - ((-(((/* implicit */int) var_5)))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_0]))));
        arr_5 [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (var_7) : (((/* implicit */long long int) 33554431)))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) || (((/* implicit */_Bool) arr_2 [i_0] [i_0])))))));
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        var_16 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_1 [i_1]) : (arr_1 [i_1])))), ((+(var_12)))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                {
                    var_17 = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) var_3)) : (4170952834U))), (((/* implicit */unsigned int) (signed char)121))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [i_1] [i_2] [i_3]))))) : (((((/* implicit */unsigned long long int) ((int) var_12))) % ((+(var_11))))));
                    arr_14 [i_1] = ((/* implicit */_Bool) ((int) ((unsigned long long int) arr_8 [i_3])));
                    var_18 += ((/* implicit */int) ((unsigned short) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [4] [i_2] [i_3]))) ^ (arr_12 [i_1] [i_2] [i_3])))));
                }
            } 
        } 
    }
}
