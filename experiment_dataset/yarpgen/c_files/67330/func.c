/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67330
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
    var_12 = ((/* implicit */unsigned long long int) min((((((((((/* implicit */int) var_2)) | (var_4))) + (2147483647))) << (((/* implicit */int) var_10)))), (min((((int) (unsigned char)163)), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) != (var_11))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_2 [(unsigned char)13] [i_0] = ((int) arr_0 [i_0] [i_0]);
        var_13 = ((/* implicit */signed char) 9223372036854775807LL);
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
    }
    /* vectorizable */
    for (unsigned int i_1 = 2; i_1 < 20; i_1 += 1) 
    {
        arr_6 [i_1 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_4 [(unsigned char)13]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1))))))) : (var_9)));
        arr_7 [i_1] = ((/* implicit */unsigned short) ((arr_5 [i_1 - 1]) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (var_4) : (((/* implicit */int) (unsigned char)96))))) : (((var_10) ? (arr_4 [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 - 1])))))));
        var_14 = (+(arr_4 [i_1 - 2]));
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            var_15 = ((/* implicit */unsigned int) arr_10 [15LL] [i_2] [i_2]);
            arr_11 [i_1] [i_2] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) arr_5 [i_1]))))));
            arr_12 [i_2] [11] [i_2] = ((/* implicit */long long int) ((arr_5 [i_1 + 1]) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 - 2])))));
        }
        for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            arr_17 [i_1 - 2] [i_3] [i_1] = ((/* implicit */unsigned char) var_7);
            arr_18 [i_1 - 2] = ((/* implicit */signed char) var_0);
            var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_1 - 2] [i_1] [i_1 + 1])) | (((/* implicit */int) arr_10 [i_1 - 2] [i_1 + 1] [i_1]))));
        }
    }
}
