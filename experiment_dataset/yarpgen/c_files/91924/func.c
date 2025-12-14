/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91924
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
    var_20 = ((/* implicit */unsigned char) (unsigned short)52201);
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        arr_3 [i_0 - 1] = max((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) -1878227282)) : (14033059117390827320ULL))), (((/* implicit */unsigned long long int) ((unsigned char) (unsigned short)57787))));
        var_21 = ((/* implicit */unsigned char) (-(var_14)));
        arr_4 [i_0] = ((/* implicit */signed char) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) == (18446744073709551615ULL))) ? (max((((/* implicit */unsigned long long int) arr_1 [i_0 - 2])), (14033059117390827320ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 2]))))) > (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_0 [i_0]))))), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 1]))) : (arr_1 [i_0]))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) 4413684956318724303ULL)))));
        arr_8 [i_1] = ((/* implicit */int) max((((unsigned long long int) (_Bool)1)), (((/* implicit */unsigned long long int) arr_5 [i_1]))));
        arr_9 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((long long int) arr_6 [i_1]))) ^ (((4413684956318724296ULL) / (((/* implicit */unsigned long long int) 979554001))))));
    }
}
