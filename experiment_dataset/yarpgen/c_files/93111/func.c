/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93111
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
    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) var_2))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (+(var_7)));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((4294967295U) | (917504U)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            arr_8 [i_0] [i_0] = ((/* implicit */signed char) 4294967295U);
            var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? ((~(var_12))) : (((/* implicit */int) arr_4 [i_0 - 1] [i_1 - 2]))));
            arr_9 [(signed char)0] [i_1] [i_0] = ((/* implicit */_Bool) ((917504U) * (((/* implicit */unsigned int) 2147467264))));
            var_15 = ((/* implicit */unsigned int) arr_1 [i_0]);
        }
        arr_10 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) < (((18446744073709551615ULL) + (((/* implicit */unsigned long long int) 0U))))));
    }
    var_16 = ((/* implicit */signed char) ((((((/* implicit */long long int) var_9)) % (1048575LL))) < (((/* implicit */long long int) ((/* implicit */int) var_3)))));
    var_17 = max((4294967271U), (((/* implicit */unsigned int) ((_Bool) var_0))));
}
