/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75552
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
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                arr_8 [i_0 + 2] [i_1] [16LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(max((6ULL), (((/* implicit */unsigned long long int) 2981906714U))))))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)38)), (2267102601684960204LL)))) ? (max((var_5), (((/* implicit */long long int) var_12)))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) var_9)), (2829803582U)))))) : (((/* implicit */long long int) ((((/* implicit */int) var_16)) / (max((((/* implicit */int) (signed char)68)), ((-2147483647 - 1)))))))));
                arr_9 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_2 [i_0 - 1] [i_0 + 2]) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 2])) : (((/* implicit */int) arr_1 [i_0 - 2] [i_0 - 1]))))) ? ((+(((/* implicit */int) arr_2 [i_0 + 2] [i_0 - 1])))) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0 - 2] [i_0 + 2])) != (((/* implicit */int) arr_2 [i_0 - 1] [i_0 + 2])))))));
                arr_10 [14ULL] [i_1] [14ULL] = ((((((((/* implicit */_Bool) 1465163713U)) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_1 + 2])) : (((/* implicit */int) arr_2 [(_Bool)1] [i_1])))) * (((/* implicit */int) ((1055308383U) <= (((/* implicit */unsigned int) var_3))))))) + (((/* implicit */int) ((unsigned char) (-(1465163713U))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_7);
}
