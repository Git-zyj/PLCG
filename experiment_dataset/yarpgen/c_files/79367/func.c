/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79367
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
    var_10 += ((/* implicit */unsigned char) ((((_Bool) ((var_4) & (var_2)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-15382)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)20))) : (16719704570831069896ULL))))));
    var_11 = ((/* implicit */signed char) var_8);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned int) min((((/* implicit */int) arr_1 [i_0])), (((((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) (short)-8977)) : (((/* implicit */int) var_9))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */short) arr_0 [i_0]);
            var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)24551)) * (((/* implicit */int) (unsigned short)0))))) && (((/* implicit */_Bool) arr_1 [i_0]))));
        }
        for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 4) 
        {
            arr_10 [i_0] [13] [i_0] = ((/* implicit */unsigned char) var_4);
            arr_11 [i_0] = arr_4 [i_0] [i_2 + 1] [i_2 - 1];
            var_14 = ((/* implicit */short) ((unsigned long long int) arr_4 [i_0] [i_2 + 3] [i_0]));
        }
        arr_12 [i_0] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */int) arr_9 [i_0] [i_0] [i_0])) & (((/* implicit */int) var_5)))), (min((((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) arr_0 [16])))), (((/* implicit */int) arr_2 [i_0]))))));
    }
    var_15 = ((/* implicit */unsigned char) (~(((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_5)))) + (var_4)))));
}
