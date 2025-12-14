/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64140
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
    var_13 = ((/* implicit */short) 243775410590445249LL);
    var_14 ^= ((/* implicit */int) var_12);
    var_15 = ((/* implicit */long long int) var_7);
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) var_8))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned long long int) ((var_10) + (arr_0 [i_0])));
        arr_2 [i_0] = ((/* implicit */unsigned int) (+(arr_1 [i_0])));
        var_18 = ((/* implicit */unsigned char) ((arr_0 [i_0]) ^ (arr_0 [i_0])));
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_19 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_1)) ? (arr_3 [15ULL] [(unsigned char)9]) : (((/* implicit */unsigned long long int) arr_0 [i_0])))) - (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
            var_20 = ((/* implicit */short) arr_4 [(unsigned short)18] [(unsigned short)18]);
        }
    }
    for (int i_2 = 1; i_2 < 20; i_2 += 1) 
    {
        var_21 = ((/* implicit */unsigned int) arr_6 [i_2 - 1]);
        var_22 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) / (4294967295U)))) : (min((-994836567720270362LL), (((/* implicit */long long int) arr_5 [i_2 - 1]))))));
        var_23 = ((/* implicit */short) ((((((/* implicit */_Bool) ((unsigned char) (unsigned short)28197))) ? (((/* implicit */int) var_8)) : (max((-1), (((/* implicit */int) (unsigned char)14)))))) | (((/* implicit */int) ((min((243775410590445249LL), (((/* implicit */long long int) arr_5 [i_2])))) <= (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2 + 1]))))))));
        var_24 -= ((/* implicit */unsigned int) (unsigned char)255);
    }
}
