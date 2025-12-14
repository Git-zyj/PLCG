/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85722
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) max((var_18), (((/* implicit */long long int) arr_5 [(short)0] [i_1])))))));
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((arr_5 [i_1] [i_1]) ? (((/* implicit */int) ((((((/* implicit */int) (unsigned short)52405)) == (((/* implicit */int) (short)(-32767 - 1))))) && (((/* implicit */_Bool) max((6129390773727437626LL), (((/* implicit */long long int) var_16)))))))) : (max((((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_8)))), (((/* implicit */int) ((((/* implicit */int) var_12)) > (((/* implicit */int) arr_2 [i_0])))))))));
            var_21 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1] [i_1 - 1])) ? (((/* implicit */int) arr_1 [i_1] [i_1 + 1])) : (arr_4 [i_1] [i_1 - 2])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (14419204224491237731ULL) : (((/* implicit */unsigned long long int) arr_0 [i_1]))))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 - 3] [i_1 - 3])))))));
            arr_7 [i_1] = ((((/* implicit */int) (short)8317)) / (((arr_3 [i_1] [i_1]) / (arr_3 [i_1 + 1] [i_1]))));
        }
        arr_8 [i_0] [i_0] = ((/* implicit */long long int) arr_3 [i_0] [(unsigned char)8]);
        arr_9 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_10) % (((/* implicit */long long int) arr_3 [i_0] [4LL]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56487))) : (((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_1 [i_0] [i_0]))))) : (((unsigned int) (unsigned char)74))))));
    }
    var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-2147483647 - 1)))));
}
