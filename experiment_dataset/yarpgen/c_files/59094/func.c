/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59094
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
    var_13 |= ((/* implicit */int) ((signed char) (unsigned char)196));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_14 += ((/* implicit */int) (unsigned char)196);
            var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) min((((/* implicit */unsigned int) var_3)), (((4294967295U) + (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            arr_9 [i_0] [i_0] [(signed char)2] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((280216045) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0])))))))), (3U)));
            arr_10 [i_0] [i_2] = ((/* implicit */int) arr_2 [i_0] [i_0]);
            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) min((((((/* implicit */_Bool) arr_0 [i_2] [i_0 + 2])) ? (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 2])) : (((/* implicit */int) arr_0 [i_0 + 2] [i_0 + 2])))), (((((/* implicit */int) max((((/* implicit */unsigned char) arr_2 [i_0] [i_0])), (var_11)))) + (((/* implicit */int) min(((short)32767), (arr_5 [i_2] [i_2] [i_2])))))))))));
        }
        var_17 = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
        arr_11 [i_0] = ((/* implicit */unsigned char) (((~(((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) > (((/* implicit */int) arr_0 [i_0] [i_0]))))))) % ((+(((((/* implicit */int) arr_5 [i_0] [i_0 + 1] [i_0 + 1])) | (((/* implicit */int) arr_5 [i_0] [(_Bool)1] [i_0]))))))));
    }
}
