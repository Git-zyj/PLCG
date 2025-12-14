/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96256
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
    for (short i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)15799)) - (((/* implicit */int) arr_1 [i_0]))));
        var_16 = ((/* implicit */signed char) ((((/* implicit */int) var_6)) >= (((/* implicit */int) (short)-17112))));
        var_17 = ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (((/* implicit */int) arr_1 [i_0 + 1]))))) >= (((((/* implicit */long long int) ((/* implicit */int) (short)-17113))) ^ (((((/* implicit */_Bool) (unsigned short)17625)) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (short)-32767)))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 14; i_1 += 1) 
    {
        arr_4 [i_1] = ((/* implicit */_Bool) var_7);
        var_18 = ((/* implicit */int) ((((/* implicit */int) arr_1 [i_1 + 1])) < (((/* implicit */int) var_2))));
        var_19 = ((/* implicit */short) ((arr_0 [i_1 - 1]) ^ (((/* implicit */long long int) 2409223169U))));
    }
    var_20 |= var_8;
    /* LoopSeq 1 */
    for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
    {
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) + (((((/* implicit */_Bool) arr_6 [i_2] [(unsigned short)1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [4])) ? (arr_5 [i_2]) : (((/* implicit */unsigned long long int) arr_6 [i_2] [(unsigned char)16])))) >= (((/* implicit */unsigned long long int) ((arr_6 [i_2] [i_2]) + (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))))) : (((((/* implicit */_Bool) arr_6 [i_2] [(signed char)8])) ? (((/* implicit */long long int) arr_6 [i_2] [i_2])) : (((72057559678189568LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6))))))))))));
        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -197047482)) ? (arr_5 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))))) ? (((arr_5 [i_2]) & (arr_5 [i_2]))) : (((arr_5 [i_2]) - (arr_5 [i_2]))))))));
    }
}
