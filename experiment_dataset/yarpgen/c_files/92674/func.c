/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92674
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 3; i_1 < 7; i_1 += 4) 
        {
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) + (var_11)))) && (((((/* implicit */_Bool) (unsigned short)17359)) && (arr_1 [i_0] [i_0])))));
            var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */int) arr_1 [i_1 - 2] [6LL])) : (((/* implicit */int) arr_4 [i_1 + 2] [i_1 + 2])))))));
            arr_7 [i_0] [i_1] [i_0] = ((/* implicit */short) var_2);
        }
        arr_8 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4567792656095806356LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (12335790973652675066ULL)));
    }
    for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        arr_11 [i_2] |= ((/* implicit */long long int) min((((9398934563491444589ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) ((signed char) var_5))), (arr_9 [i_2]))))));
        arr_12 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_11)) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min((var_1), (((/* implicit */short) var_8))))))) <= (max((((((/* implicit */int) var_8)) + (((/* implicit */int) (unsigned short)17348)))), (((/* implicit */int) ((((/* implicit */int) arr_9 [i_2])) > (var_10))))))));
    }
    var_13 = ((/* implicit */int) max((var_13), (max((max((((((/* implicit */_Bool) var_9)) ? (var_10) : (var_10))), (var_10))), (((/* implicit */int) ((signed char) min((((/* implicit */int) var_0)), (var_3)))))))));
}
