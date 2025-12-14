/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67130
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
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        arr_4 [i_0] = (+(((/* implicit */int) arr_3 [i_0] [i_0])));
        var_17 = ((/* implicit */_Bool) arr_2 [i_0]);
    }
    var_18 = ((/* implicit */short) var_0);
    /* LoopNest 3 */
    for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        for (short i_2 = 1; i_2 < 9; i_2 += 4) 
        {
            for (int i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                {
                    arr_15 [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_10 [i_2 + 1] [i_2 - 1] [5U])) ? (arr_10 [i_2 - 1] [i_2 - 1] [(unsigned short)6]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) % (((((/* implicit */_Bool) arr_9 [i_2 - 1] [i_2 + 1] [(unsigned char)1])) ? (arr_10 [i_2 + 1] [i_2 - 1] [i_2]) : (arr_10 [i_2 - 1] [i_2 - 1] [i_2])))));
                    arr_16 [i_1] [i_1] [i_3] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_1])) ? (((/* implicit */int) arr_14 [i_1])) : (((/* implicit */int) arr_0 [i_1] [i_2]))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_5 [(unsigned short)1]))) <= ((~(var_6)))))) : (((/* implicit */int) (unsigned short)55305)));
                    arr_17 [i_1] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_3 [i_1] [i_3])), (var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) arr_14 [i_1])) ? (arr_1 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [(_Bool)1] [i_3]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [(short)2] [i_1])) + (((/* implicit */int) arr_6 [i_1] [i_1]))))) || (((/* implicit */_Bool) var_4)))))));
                    arr_18 [i_1] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((arr_5 [(unsigned char)1]) >= (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_1]))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) (((((!(var_12))) && (((/* implicit */_Bool) var_14)))) ? (((/* implicit */int) var_15)) : ((-(((/* implicit */int) var_4))))));
    var_20 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)10238)) % (((/* implicit */int) (_Bool)1))));
}
