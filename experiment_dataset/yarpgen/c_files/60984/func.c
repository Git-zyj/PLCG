/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60984
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 72057594037927935ULL)) ? (18374686479671623686ULL) : (((/* implicit */unsigned long long int) 0LL))))) ? (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)135))) : (-1896367103942099104LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 - 1]))))))));
                arr_6 [i_0] = (~((((+(arr_1 [(unsigned char)10]))) - (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)120))))))));
                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((var_13) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1 - 2])) ? ((~(((/* implicit */int) (unsigned char)45)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1 - 1])))))))) : (min((((((/* implicit */_Bool) (unsigned char)139)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)230))) : (12447652867531254468ULL))), (((/* implicit */unsigned long long int) (_Bool)1))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (var_1)));
    var_18 = ((/* implicit */long long int) (_Bool)1);
    var_19 = ((/* implicit */unsigned char) (-(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)41)) : (((/* implicit */int) (_Bool)1))))) ^ (((((/* implicit */_Bool) 4503599627370495LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551609ULL)))))));
}
