/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96797
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
    var_19 = ((/* implicit */short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)231))))), (-3969214560499018249LL)));
    var_20 = ((/* implicit */long long int) 2860101605U);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0] [i_0]))));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    var_21 = ((/* implicit */_Bool) ((((long long int) ((((/* implicit */_Bool) arr_7 [14ULL] [i_1] [i_2])) ? (((/* implicit */int) (signed char)-95)) : (((/* implicit */int) var_12))))) - (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_1 [i_0])), (var_4)))))));
                    arr_8 [i_0] [i_1] [9ULL] [i_0] = ((/* implicit */unsigned short) ((571394485U) * (((/* implicit */unsigned int) min((arr_4 [i_0]), (((/* implicit */int) arr_0 [i_0] [i_0])))))));
                    var_22 = (i_0 % 2 == zero) ? (((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0] [i_0])) << (((((/* implicit */int) arr_6 [i_0] [i_2] [i_2] [i_2])) - (36059)))))) : (((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0] [i_0])) << (((((((/* implicit */int) arr_6 [i_0] [i_2] [i_2] [i_2])) - (36059))) + (12924))))));
                    arr_9 [i_0] [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)19950))) >= (-3969214560499018249LL)))) | (((((/* implicit */int) var_9)) / (arr_7 [0] [i_1] [i_2])))))) ? (max((((/* implicit */unsigned long long int) max((arr_6 [i_0] [i_1] [i_1] [(unsigned short)16]), (((/* implicit */unsigned short) var_3))))), (((unsigned long long int) arr_1 [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_4))))))));
                }
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) var_13);
}
