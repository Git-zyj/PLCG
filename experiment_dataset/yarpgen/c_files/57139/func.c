/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57139
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
    /* vectorizable */
    for (unsigned long long int i_0 = 4; i_0 < 8; i_0 += 3) 
    {
        var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_3 [(short)6] [i_0]) : (((/* implicit */long long int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) -1648727140)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-105))) : (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_0))))));
        var_13 = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_0 - 2])) / (-1648727140)));
        var_14 += (~(((/* implicit */int) arr_1 [i_0] [(unsigned char)2])));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    {
                        var_15 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))));
                        arr_14 [i_0] [i_0] [(_Bool)1] [i_2] [i_3] = ((/* implicit */unsigned char) 27123255);
                        arr_15 [(unsigned char)0] [i_3] [i_0] [(signed char)6] [i_0] &= ((((((/* implicit */int) (signed char)-105)) <= (1648727139))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0 - 3] [i_1 + 1]))) : (((unsigned long long int) arr_3 [i_0 + 1] [i_3])));
                    }
                } 
            } 
        } 
    }
    var_16 = ((/* implicit */_Bool) ((unsigned short) (signed char)52));
    var_17 = (((+(((/* implicit */int) (signed char)-92)))) % ((+(((/* implicit */int) var_6)))));
}
