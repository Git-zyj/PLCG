/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98328
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_17 ^= ((/* implicit */short) (~(((/* implicit */int) (short)-30260))));
        /* LoopSeq 1 */
        for (short i_1 = 4; i_1 < 19; i_1 += 2) 
        {
            arr_5 [i_0] = ((/* implicit */_Bool) ((8676772990236489940ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30260)))));
            var_18 = ((/* implicit */signed char) (_Bool)1);
            var_19 = ((/* implicit */int) (short)-30268);
            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (-((~(((/* implicit */int) ((unsigned char) -1))))))))));
            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */_Bool) (-(var_11)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15714467201801345770ULL)) ? (((/* implicit */int) (short)30260)) : (((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */int) (short)30260)) : (-1)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (var_14) : (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_1])) ? (2732276871908205846ULL) : (var_11))))))))));
        }
        var_22 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_1 [i_0])) ? (3129566599U) : (((/* implicit */unsigned int) var_14))))))), (((((/* implicit */_Bool) 15714467201801345770ULL)) ? (((((/* implicit */_Bool) 10LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (arr_1 [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)130)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) (unsigned short)63006)))))))));
    }
    var_23 = ((/* implicit */unsigned int) var_8);
}
