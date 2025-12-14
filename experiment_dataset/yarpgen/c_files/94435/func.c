/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94435
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
    var_12 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (((_Bool)0) || (var_1)))) * ((~(((/* implicit */int) (_Bool)1)))))) * (((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) <= (var_11))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((unsigned long long int) (-2147483647 - 1));
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_1 [i_0])) + (arr_0 [i_0])));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] = arr_4 [i_1] [i_0];
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                arr_8 [i_2] = ((/* implicit */unsigned int) (unsigned short)32950);
                arr_9 [i_2] [i_2 + 1] [i_1] [i_0] = arr_4 [i_2] [i_1];
            }
        }
    }
    var_14 = ((/* implicit */signed char) (-(((/* implicit */int) var_1))));
}
