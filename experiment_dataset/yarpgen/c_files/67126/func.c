/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67126
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
    var_14 = ((/* implicit */short) var_4);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_0 [i_0 + 2]), (((/* implicit */unsigned long long int) var_2))))) ? ((~(0LL))) : (((/* implicit */long long int) ((arr_1 [i_0]) ^ (((/* implicit */int) var_12)))))));
        var_16 -= ((/* implicit */_Bool) (signed char)68);
        arr_2 [i_0] = ((/* implicit */short) arr_0 [i_0 + 1]);
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        var_17 = ((/* implicit */signed char) ((var_7) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(signed char)0] [i_1])))));
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (arr_3 [i_1]) : (((/* implicit */long long int) var_4))));
        arr_5 [(short)16] = ((/* implicit */int) (!(((var_9) != (((/* implicit */unsigned long long int) arr_3 [i_1]))))));
    }
    for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        arr_9 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) * (((/* implicit */int) arr_6 [i_2]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_8 [i_2])) < (((/* implicit */int) arr_6 [i_2]))))) : (((((/* implicit */int) var_10)) >> (((((/* implicit */int) arr_8 [i_2])) + (20155)))))));
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) var_8))) ? (((((((/* implicit */int) arr_8 [i_2])) < (((/* implicit */int) arr_6 [i_2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2]))))) : (((/* implicit */int) ((arr_7 [i_2]) != (((/* implicit */unsigned long long int) 2847601130225256409LL))))))) : (((/* implicit */int) (unsigned short)17999))));
        var_20 += ((/* implicit */unsigned int) (~(((unsigned long long int) arr_8 [i_2]))));
    }
    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_13)))))));
    var_22 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) var_4))) && (((((/* implicit */long long int) var_6)) < (var_2))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
    {
        arr_12 [i_3] [i_3] = ((/* implicit */signed char) var_4);
        arr_13 [i_3] = ((/* implicit */_Bool) ((long long int) (-(((/* implicit */int) arr_6 [4U])))));
        var_23 = ((/* implicit */int) (+(var_2)));
    }
}
