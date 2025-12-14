/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87028
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
    for (unsigned char i_0 = 4; i_0 < 23; i_0 += 2) 
    {
        arr_2 [i_0 - 2] [i_0] &= ((((((/* implicit */_Bool) arr_1 [16U])) ? (arr_0 [(signed char)17]) : (arr_0 [i_0 - 2]))) / (((/* implicit */int) arr_1 [i_0 + 1])));
        var_20 -= ((/* implicit */unsigned char) (((((-(arr_0 [i_0]))) + (2147483647))) << ((((((-(var_9))) + (944811792))) - (26)))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_3 [i_1] [i_1]) : (((/* implicit */int) arr_1 [i_1]))))));
        var_22 -= ((/* implicit */unsigned char) ((unsigned int) arr_4 [i_1]));
    }
    var_23 = ((/* implicit */unsigned char) (signed char)104);
    var_24 += ((/* implicit */unsigned long long int) var_15);
    var_25 = var_4;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            {
                arr_9 [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */long long int) (+(min((arr_6 [i_2]), (((/* implicit */unsigned int) arr_8 [i_2] [i_2]))))))) & (arr_5 [i_3])));
                arr_10 [i_2] = ((/* implicit */short) ((int) max((((/* implicit */unsigned int) (signed char)107)), (arr_7 [i_2]))));
            }
        } 
    } 
}
