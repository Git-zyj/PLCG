/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65164
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
    for (long long int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) arr_3 [2LL]);
        var_12 = ((/* implicit */signed char) 613168828);
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (-6241079118777771979LL) : (-11553573856803575LL)));
        arr_6 [i_0 - 1] = ((/* implicit */short) (((~(arr_1 [i_0 - 1]))) & (((((/* implicit */_Bool) -8633252624456057280LL)) ? (-8633252624456057299LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        var_13 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)10935))))) >= (arr_8 [i_1])));
        arr_9 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_7 [i_1]))));
        var_14 += ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_1]))));
        arr_10 [i_1] = ((/* implicit */int) var_3);
        arr_11 [i_1] [i_1] = ((/* implicit */long long int) arr_8 [i_1]);
    }
    var_15 = min((((/* implicit */unsigned long long int) 4472495883323166486LL)), (((unsigned long long int) max((((/* implicit */long long int) -1015017731)), (3452263465797596466LL)))));
}
