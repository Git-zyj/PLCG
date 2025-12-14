/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81494
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
    var_17 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2))))) ? (max((var_0), (var_10))) : (((((/* implicit */_Bool) 18446744073709551609ULL)) ? (var_4) : (((/* implicit */unsigned long long int) var_8)))))) + ((~(min((3480177771442246599ULL), (((/* implicit */unsigned long long int) (unsigned short)32792))))))));
    var_18 = ((/* implicit */unsigned short) max((max((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned char)234)))), (((/* implicit */unsigned long long int) var_15)))), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)234))) - (0LL)))))));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (unsigned char)46);
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            arr_6 [i_0] [i_1] [i_1] = 0ULL;
            arr_7 [i_1] [i_1] [i_1] = ((min((((/* implicit */unsigned long long int) (short)-15409)), (max((0ULL), (18446744073709551609ULL))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_1 [i_0 + 3]), (var_13))))));
            var_19 = ((/* implicit */short) arr_4 [i_0] [(unsigned char)17]);
            var_20 *= ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_6)), (4221819869U)))) : (17800328654979698807ULL)));
            var_21 = ((/* implicit */unsigned short) min((((/* implicit */int) arr_1 [i_0])), (((int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)22)) : (((/* implicit */int) arr_1 [19ULL])))))));
        }
    }
    var_22 = ((/* implicit */unsigned char) max((var_0), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)37659)) - (((/* implicit */int) (unsigned char)73))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_12)))));
}
