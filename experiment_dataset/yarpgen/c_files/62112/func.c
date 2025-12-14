/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62112
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned char) arr_0 [i_0] [7ULL]);
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) arr_1 [i_0] [i_0]))));
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) arr_1 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        arr_4 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((arr_2 [i_1] [i_1]) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (((/* implicit */int) arr_2 [i_1] [i_1]))))));
        var_19 = ((/* implicit */int) ((arr_2 [i_1] [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_1]))) : (var_4)));
        arr_5 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((arr_2 [i_1] [i_1]) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) arr_2 [i_1] [i_1])))) : (((/* implicit */int) var_13))));
        arr_6 [i_1] [i_1] |= ((/* implicit */int) arr_2 [i_1] [i_1]);
    }
    var_20 &= ((/* implicit */unsigned char) var_5);
    /* LoopNest 3 */
    for (short i_2 = 3; i_2 < 15; i_2 += 3) 
    {
        for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_14 [i_2 - 3] [i_3] [i_4] = ((/* implicit */unsigned long long int) arr_1 [i_3] [i_3]);
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) -2004026819)), (2921157109687840731LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2 + 1]))) : (((arr_2 [i_2] [i_2]) ? (((/* implicit */unsigned long long int) min((arr_1 [i_2 - 3] [(_Bool)1]), (((/* implicit */long long int) arr_11 [i_4] [i_2] [i_2]))))) : (arr_9 [i_2])))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned char) var_14))))) ? (((/* implicit */long long int) var_1)) : (((var_9) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_4))))), (((/* implicit */long long int) var_6))));
    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) var_8))));
}
