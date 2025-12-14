/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98164
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
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] = ((int) arr_0 [i_0 - 2] [i_0 + 2]);
        var_19 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 + 1])) ? (arr_0 [i_0 + 2] [i_0 - 2]) : (arr_0 [i_0 - 1] [i_0 - 1])));
        var_20 |= ((/* implicit */long long int) (((_Bool)1) ? (arr_0 [i_0 - 1] [i_0 - 1]) : (arr_0 [i_0 + 2] [(_Bool)0])));
    }
    for (unsigned int i_1 = 1; i_1 < 10; i_1 += 3) 
    {
        var_21 = min((1178014680U), (3405257110U));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            arr_7 [i_2] = ((/* implicit */unsigned char) ((((_Bool) 11818395528617197963ULL)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [(_Bool)1] [(_Bool)1]) < (((/* implicit */unsigned int) arr_3 [1U] [1U])))))) < (arr_0 [i_1 + 1] [i_1 - 1]))))) : (((((/* implicit */_Bool) ((arr_0 [i_2] [i_1 + 3]) - (arr_6 [i_2] [i_2] [6ULL])))) ? (((/* implicit */long long int) ((var_10) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (arr_1 [i_1 + 3] [8U])))));
            var_22 = ((/* implicit */unsigned int) ((unsigned long long int) ((4294967295U) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
            arr_8 [i_1] [i_2] [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) ((var_3) < (arr_0 [i_2] [i_1 + 4]))))));
            arr_9 [(unsigned char)13] [(unsigned char)13] [i_2] = ((unsigned int) (_Bool)1);
            var_23 &= ((/* implicit */unsigned int) (~(((long long int) 189652883U))));
        }
        arr_10 [i_1] [5] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 0U)) | (arr_4 [i_1] [(unsigned char)13])))) ? (((unsigned int) var_6)) : (arr_6 [4] [i_1 + 2] [4]))) % (max((((/* implicit */unsigned int) arr_3 [i_1] [i_1])), (max((var_7), (3154178142U)))))));
    }
    var_24 += ((/* implicit */unsigned char) var_7);
    var_25 = ((/* implicit */unsigned long long int) var_3);
    var_26 |= ((((/* implicit */_Bool) 323326673U)) || (((/* implicit */_Bool) -126787006)));
}
