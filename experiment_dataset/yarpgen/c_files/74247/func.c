/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74247
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) var_9);
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2] [i_2] [i_2] [i_1])))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((unsigned long long int) arr_5 [i_0] [i_0] [i_0] [i_0])))));
    }
    for (int i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_2 [i_3])))) / ((~(((/* implicit */int) (short)-18005))))));
        arr_10 [i_3] = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)31))));
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)18005)) ? (arr_9 [i_3]) : (arr_9 [i_3])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)25954)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_3]))) : (var_10)))) : (max((arr_0 [i_3]), (arr_0 [i_3]))))))));
    }
    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) max((var_13), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned char)31)))) : (var_13))))))));
    var_23 = ((/* implicit */unsigned int) var_2);
}
