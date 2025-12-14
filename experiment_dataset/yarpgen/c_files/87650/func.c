/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87650
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
    var_10 = min((((/* implicit */unsigned long long int) min((((/* implicit */short) ((0ULL) != (var_9)))), (var_7)))), (max((min((((/* implicit */unsigned long long int) var_4)), (10931787901596330493ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) | (((/* implicit */int) var_4))))))));
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        arr_4 [i_0] [i_0 + 2] = min((max((max((arr_3 [(unsigned short)1]), (0ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) << (((18446744073709551605ULL) - (18446744073709551598ULL)))))))), (((/* implicit */unsigned long long int) ((long long int) arr_2 [i_0 - 3] [i_0 - 2]))));
        var_11 = ((/* implicit */long long int) ((18446744073709551607ULL) >> (((((/* implicit */int) (short)10162)) - (10150)))));
        var_12 = ((/* implicit */unsigned short) ((((unsigned long long int) var_0)) << (((17179869183ULL) - (17179869153ULL)))));
    }
    for (signed char i_1 = 2; i_1 < 16; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) var_3);
        arr_8 [i_1] = min((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)107))) - (max((10931787901596330493ULL), (((/* implicit */unsigned long long int) (unsigned char)90)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)1920))) - (max((var_6), (((/* implicit */unsigned long long int) (unsigned char)22)))))));
        arr_9 [i_1] = ((((15863335997564860844ULL) >> (((18446744073709551615ULL) - (18446744073709551579ULL))))) % (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 - 2] [(unsigned short)12]))) : (var_6))));
    }
}
