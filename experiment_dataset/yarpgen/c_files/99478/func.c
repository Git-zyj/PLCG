/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99478
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
    var_14 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_6))) ? (((/* implicit */long long int) var_13)) : (((long long int) var_11))))) ? (((((/* implicit */_Bool) ((var_8) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (((unsigned int) var_2)) : (((/* implicit */unsigned int) ((var_13) + (var_10)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0 + 1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) arr_0 [i_0 + 2]))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_0 - 1]))) : (var_3)));
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_7 [i_1 + 1] [i_2] = ((/* implicit */unsigned int) var_9);
                    arr_8 [i_2] [i_1] [i_0 + 1] = min((((((/* implicit */_Bool) max((var_0), (arr_1 [i_2] [i_1])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) var_7)), (var_6)))) : (((unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_5 [i_0 + 1] [i_0 - 1] [i_0 - 1])), ((+(var_9)))))));
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_8)), (var_9)))) ? (var_11) : (max((678062979U), (3616904316U)))))) ? ((((+(((/* implicit */int) var_5)))) | (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_6 [i_0 - 1] [i_1 + 1] [i_2] [i_2])))))) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_2]))));
                }
            } 
        } 
    }
    var_16 += ((/* implicit */long long int) max((((((/* implicit */_Bool) ((int) var_6))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((short) var_6))))), (((((/* implicit */_Bool) ((var_1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_11)))) ? (((int) var_11)) : (max((var_9), (((/* implicit */int) var_4))))))));
}
