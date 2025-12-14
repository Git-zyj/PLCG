/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66115
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
    var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_0)), (var_1)))) ? (var_3) : (((((/* implicit */long long int) ((/* implicit */int) var_0))) + (var_9))))))));
    var_19 = ((/* implicit */unsigned short) var_4);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */short) min((((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))))) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : ((~(arr_0 [i_0] [i_1]))))), (((((/* implicit */_Bool) arr_8 [i_1])) ? ((~(((/* implicit */int) arr_5 [i_0] [i_0] [18LL])))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_8 [i_0])), (arr_5 [23] [23] [23]))))))));
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */long long int) arr_10 [i_2] [i_0])) != (arr_7 [i_0] [i_1])))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1] [(unsigned char)21])))))));
                    var_22 = ((/* implicit */unsigned char) arr_5 [i_0] [i_0] [i_0]);
                    arr_11 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) arr_6 [i_0])), (((((/* implicit */int) (short)7)) >> (((((/* implicit */int) (short)18180)) - (18177)))))))) ? (((/* implicit */int) arr_8 [i_1])) : (((/* implicit */int) max((arr_4 [i_2] [i_1] [i_2]), (arr_2 [i_0] [i_1]))))));
                    arr_12 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_7 [i_0] [i_2]), (((arr_1 [i_0]) ^ (arr_7 [i_0] [i_1])))))) ? (max((((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_2] [i_1] [21])) < (((/* implicit */int) arr_4 [i_2] [1ULL] [1ULL]))))), (arr_7 [i_1] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_10 [i_1] [i_2]) > (arr_10 [i_0] [i_1])))))));
                }
            } 
        } 
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) 3101431751U)) && (((/* implicit */_Bool) 536862720))));
        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)72))) < (18446744073709551602ULL)))) >> (((((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0]))))) ? (((((/* implicit */long long int) arr_0 [i_0] [i_0])) - (arr_1 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_8 [19LL])), (arr_3 [i_0]))))))) - (6368799979592427864LL))))))));
    }
    var_25 = ((/* implicit */unsigned char) min((((/* implicit */long long int) var_15)), ((+(min((var_9), (var_3)))))));
}
