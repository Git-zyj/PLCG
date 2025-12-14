/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64268
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
    for (int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        var_17 ^= ((/* implicit */signed char) min((((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */long long int) arr_0 [i_0 - 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [9]))) : (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (arr_1 [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 1]))))))), (max((arr_1 [i_0]), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)32)) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) (unsigned char)78)))))))));
        var_18 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_0 [(signed char)18])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [14LL]))))))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [10])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [3LL]))))), (arr_1 [18]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [17LL]))))) : (((long long int) arr_1 [i_0 - 1]))))));
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [6LL])) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_3 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))))) : (((((/* implicit */_Bool) arr_3 [10])) ? (arr_1 [(signed char)19]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1])))))))) ? (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) : (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) : (arr_3 [i_1]))))) : (arr_1 [i_1])));
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            for (signed char i_3 = 1; i_3 < 13; i_3 += 3) 
            {
                for (int i_4 = 1; i_4 < 13; i_4 += 2) 
                {
                    {
                        var_20 = ((/* implicit */long long int) ((unsigned char) arr_10 [i_1] [i_1] [13]));
                        arr_11 [i_1] [i_2] [i_2] [i_4] [i_2] = ((unsigned char) arr_3 [i_1]);
                    }
                } 
            } 
        } 
    }
    var_21 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_12)))))));
    var_22 = ((/* implicit */signed char) var_16);
}
