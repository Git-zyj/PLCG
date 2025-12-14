/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90786
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
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (min((((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0]))))), (((long long int) arr_1 [i_0] [i_0]))))));
        arr_2 [i_0] = ((short) max((((/* implicit */short) ((((/* implicit */int) (unsigned char)135)) <= (((/* implicit */int) arr_1 [i_0] [(short)8]))))), (arr_1 [i_0] [i_0])));
        var_19 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        var_20 = ((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_1]))));
        /* LoopSeq 1 */
        for (short i_2 = 3; i_2 < 20; i_2 += 1) 
        {
            var_21 = ((unsigned char) (+(((/* implicit */int) arr_7 [i_1] [i_2]))));
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)90)) && (((/* implicit */_Bool) (unsigned char)177))));
            var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) arr_9 [1] [1] [i_1]))));
            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((arr_10 [i_2] [19] [i_1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(_Bool)1]))))) ? (((/* implicit */int) ((_Bool) arr_10 [i_2 + 2] [i_1] [i_1]))) : (((/* implicit */int) ((short) arr_4 [i_1]))))))));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
    {
        var_25 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_5 [i_3]))));
        arr_13 [i_3] = ((/* implicit */short) arr_11 [i_3] [i_3]);
        var_26 = ((/* implicit */unsigned int) ((short) arr_10 [i_3] [i_3] [i_3]));
    }
    /* vectorizable */
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) -6666958751819108906LL)) ? (arr_14 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_4 - 1]))))))));
        arr_16 [i_4] = ((/* implicit */unsigned int) ((arr_3 [i_4 - 1] [i_4 - 1]) * (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)231))) : (arr_14 [i_4])))));
        var_28 |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_8 [i_4 - 1] [i_4 - 1] [i_4 - 1]))));
        arr_17 [i_4] = ((/* implicit */_Bool) ((unsigned char) var_3));
    }
    var_29 |= ((/* implicit */short) min((min(((+(((/* implicit */int) var_15)))), (((/* implicit */int) ((((/* implicit */int) var_16)) <= (((/* implicit */int) var_2))))))), (((/* implicit */int) ((short) (!(((/* implicit */_Bool) var_8))))))));
}
