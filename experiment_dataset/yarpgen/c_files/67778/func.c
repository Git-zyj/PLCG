/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67778
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
    var_13 = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))) % (((((/* implicit */_Bool) var_12)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 4; i_0 < 13; i_0 += 2) 
    {
        var_14 += ((/* implicit */long long int) arr_0 [i_0]);
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 16; i_3 += 2) 
                {
                    {
                        arr_10 [i_3] [i_0] [i_0] = ((/* implicit */long long int) arr_9 [i_0] [i_0] [i_2] [i_3]);
                        arr_11 [i_0 + 1] [i_1] [i_2] [i_3] [i_2 - 2] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) * (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_3 [i_2 - 2] [i_2 - 2]) <= (arr_4 [i_2 + 1] [i_0 - 4]))))) : ((-(990418352094817721ULL))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] = ((/* implicit */signed char) max((((/* implicit */int) ((signed char) (+(((/* implicit */int) (_Bool)0)))))), (((((/* implicit */int) arr_8 [i_0] [i_0 - 3] [i_0] [i_0])) | (((/* implicit */int) var_11))))));
        arr_13 [10] [i_0] = ((/* implicit */signed char) (-((~((+(arr_4 [i_0] [i_0])))))));
    }
}
