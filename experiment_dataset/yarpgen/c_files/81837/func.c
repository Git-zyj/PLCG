/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81837
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
    var_15 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)(-127 - 1)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_0])));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            var_16 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [(short)10])) ? (((/* implicit */int) arr_6 [6LL])) : (((/* implicit */int) arr_6 [(unsigned char)2]))));
            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) arr_7 [i_0] [i_0]))));
        }
        for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            var_18 = ((/* implicit */signed char) ((arr_5 [(signed char)5] [i_2]) < (arr_5 [11U] [i_0])));
            arr_11 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(arr_1 [i_2])));
        }
        for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            var_19 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3523178541U)) ? (((/* implicit */int) arr_0 [i_0])) : (((((/* implicit */int) (short)-19331)) | (((/* implicit */int) (unsigned char)3))))));
            var_20 *= var_4;
        }
        var_21 = ((/* implicit */unsigned char) ((var_13) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_0])) < (((/* implicit */int) arr_7 [i_0] [i_0]))))))));
    }
}
