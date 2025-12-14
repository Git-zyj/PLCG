/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97521
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
    var_14 = ((/* implicit */long long int) ((unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (var_1)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_15 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) var_2)))))) ? (((((/* implicit */int) ((_Bool) var_13))) ^ (((/* implicit */int) ((((/* implicit */int) (signed char)-14)) == (((/* implicit */int) (signed char)13))))))) : (((/* implicit */int) ((unsigned short) arr_5 [22U] [i_1 + 1] [i_0 - 1] [22U])))));
                    var_16 = (!(((/* implicit */_Bool) max(((-(((/* implicit */int) var_6)))), (((/* implicit */int) var_13))))));
                    /* LoopSeq 2 */
                    for (short i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        arr_9 [(short)0] [i_1] [(short)0] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(unsigned char)6])) ? (arr_2 [(short)20]) : (((/* implicit */long long int) var_3))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_2 [(unsigned char)20]), (((/* implicit */long long int) var_5))))) ? (((/* implicit */int) ((short) arr_3 [i_0] [i_2] [22U]))) : (((((/* implicit */int) var_10)) + (((/* implicit */int) var_9))))))) : (((arr_1 [i_1 - 2] [i_1 + 3]) + (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_6 [i_0] [5U] [5U]))))))));
                        var_17 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) ((unsigned short) arr_6 [i_0] [i_1] [i_2]))) : ((+(((/* implicit */int) var_6))))))) - (((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))) : (arr_0 [i_0]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_4 [3] [i_2] [i_3]))))))));
                        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((arr_0 [i_0]) <= (((/* implicit */unsigned long long int) arr_8 [i_0] [i_2] [i_0] [i_0] [i_1] [13U]))))), (((arr_8 [i_0] [i_1] [i_0] [i_1] [i_2] [i_0]) * (arr_1 [i_0] [i_3])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_4 [i_0 - 1] [i_1 + 1] [i_3 - 1])))) : ((+(arr_8 [i_3] [i_3 + 1] [i_0] [i_0] [i_0 - 1] [i_0 - 1])))));
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 1; i_4 < 23; i_4 += 3) 
                    {
                        var_19 |= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1 - 1] [i_1 - 1] [i_0 - 1] [i_4] [i_0] [i_4 - 1]))) + (var_3)));
                        arr_12 [i_0] [i_0] [i_0] [i_2] [22] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_0 - 1] [i_1 - 1] [i_4 - 1])) != (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0 - 1])) : (((/* implicit */int) arr_7 [i_0] [i_2]))))));
                        var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1]))));
                    }
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) var_7);
}
