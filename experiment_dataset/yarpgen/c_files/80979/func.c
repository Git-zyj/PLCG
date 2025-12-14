/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80979
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
    var_19 ^= ((/* implicit */unsigned char) (unsigned short)6729);
    var_20 = ((/* implicit */int) (+(min((((/* implicit */long long int) max(((unsigned short)39566), (((/* implicit */unsigned short) (short)3074))))), (max((9223372036854775807LL), (((/* implicit */long long int) 1681562770))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0] [i_1]))))) ? (((/* implicit */int) ((-9223372036854775807LL) == (((/* implicit */long long int) ((/* implicit */int) var_4)))))) : (((/* implicit */int) (unsigned short)32768))))) ? ((+(((/* implicit */int) arr_1 [i_1 - 1] [i_1 + 1])))) : (((/* implicit */int) (unsigned short)32767))));
            arr_4 [i_0] = ((/* implicit */long long int) max((((((/* implicit */_Bool) max((((/* implicit */short) var_0)), (var_1)))) ? (((((/* implicit */int) var_8)) / (((/* implicit */int) var_1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))), (((/* implicit */int) (_Bool)1))));
            arr_5 [i_0] = ((/* implicit */unsigned char) var_6);
        }
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) + ((-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-3074)) : (((/* implicit */int) arr_2 [i_0] [i_0]))))))));
        arr_6 [i_0] = ((((/* implicit */_Bool) (short)3074)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15))) : (3100036065455317054LL));
    }
    for (unsigned char i_2 = 1; i_2 < 15; i_2 += 2) 
    {
        arr_10 [i_2] = ((/* implicit */short) max((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)158))))), (((((/* implicit */long long int) ((/* implicit */int) (short)-26521))) | (-3100036065455317067LL)))));
        var_23 = ((/* implicit */long long int) (unsigned char)57);
    }
    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((long long int) (short)3044)))));
}
