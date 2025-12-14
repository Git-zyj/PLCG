/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80419
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
    var_10 = ((/* implicit */int) ((unsigned int) ((((((/* implicit */int) var_6)) / (2147483647))) < (((/* implicit */int) (_Bool)1)))));
    var_11 = ((((/* implicit */int) (unsigned char)10)) <= (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)10)))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned char) ((short) ((arr_0 [i_0]) ^ (((/* implicit */int) (short)-6934)))));
        arr_3 [i_0] [i_0] = ((((/* implicit */unsigned int) var_8)) < (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_0 [i_0])) <= (var_2))))) % (3262279916U))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_0] = ((/* implicit */_Bool) max((max((((/* implicit */int) (_Bool)1)), (arr_1 [i_1] [i_0]))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)236)) < (var_8))))));
            var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(-1097260809)))) ? (min((18446744073709551611ULL), (((/* implicit */unsigned long long int) (short)32756)))) : (((/* implicit */unsigned long long int) ((1743669488) ^ (1097260812))))));
            arr_7 [i_0] [i_1] [i_1] = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((2147483640) / (var_8)))), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (3236727851U)))))), (((((((/* implicit */_Bool) 2626064333U)) ? (14ULL) : (5ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) var_6))))))))));
        }
        arr_8 [i_0] = (-(((/* implicit */int) (!(((/* implicit */_Bool) min((-2147483641), (((/* implicit */int) (short)31098)))))))));
    }
    var_14 = ((/* implicit */short) ((int) ((var_2) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32415))))));
}
