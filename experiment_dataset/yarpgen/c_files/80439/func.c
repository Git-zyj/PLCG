/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80439
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0 - 1])) > (((/* implicit */int) arr_1 [i_0 - 1]))));
        var_21 += ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0 - 1])) >= (((/* implicit */int) arr_0 [(signed char)6]))));
        arr_2 [8ULL] |= (~(((/* implicit */int) arr_1 [i_0 - 1])));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned int) (~(((/* implicit */int) arr_0 [i_0])))));
    }
    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */int) ((unsigned char) ((461192155U) < (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))) | (((/* implicit */int) var_14)))))));
    /* LoopSeq 1 */
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */long long int) ((arr_6 [i_1] [i_1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) - (9223372036854775807LL))))))));
        var_23 = (~(((/* implicit */int) ((((/* implicit */unsigned int) ((int) arr_4 [i_1] [i_1]))) > ((~(arr_5 [i_1])))))));
        var_24 = ((/* implicit */signed char) (((~(arr_6 [i_1] [i_1]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_4 [i_1] [i_1]), (arr_4 [i_1] [i_1])))))));
        arr_9 [i_1] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)60))))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [i_1]))))) : (1150455898U)));
    }
}
