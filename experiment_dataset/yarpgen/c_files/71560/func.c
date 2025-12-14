/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71560
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
    for (short i_0 = 0; i_0 < 19; i_0 += 2) /* same iter space */
    {
        var_11 ^= var_2;
        arr_2 [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) max((var_5), (((/* implicit */long long int) arr_0 [i_0] [(signed char)6]))))) ? (((((/* implicit */_Bool) ((short) (unsigned char)75))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)3)), (arr_0 [i_0] [i_0]))))) : (max((var_5), (((/* implicit */long long int) (short)-23029)))))) : (((/* implicit */long long int) ((/* implicit */int) max((min(((short)-23022), (((/* implicit */short) (signed char)-47)))), (max(((short)-23016), (((/* implicit */short) (signed char)-27))))))))));
    }
    for (short i_1 = 0; i_1 < 19; i_1 += 2) /* same iter space */
    {
        var_12 = ((/* implicit */short) min((((((/* implicit */int) var_7)) | (((/* implicit */int) (short)-20663)))), (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) min((var_3), (arr_3 [i_1] [i_1])))) : (((/* implicit */int) max((arr_3 [i_1] [i_1]), ((short)-1313))))))));
        var_13 |= ((/* implicit */int) min((min((((short) var_5)), (((short) arr_6 [(short)10])))), (arr_4 [i_1])));
        var_14 -= ((/* implicit */unsigned char) ((short) (short)23051));
    }
    var_15 = ((/* implicit */short) 7160552916778288648LL);
}
