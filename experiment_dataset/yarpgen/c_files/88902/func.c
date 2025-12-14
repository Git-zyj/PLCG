/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88902
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_19 = 15395427209436564822ULL;
        arr_2 [i_0] [i_0] = (~(((((/* implicit */_Bool) var_6)) ? (arr_1 [i_0]) : (arr_0 [i_0]))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_1]))));
                    var_21 = 7219725699803807843ULL;
                    var_22 = ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((((/* implicit */_Bool) 11227018373905743774ULL)) ? (var_14) : (var_8))) : (arr_4 [i_0] [i_1]));
                    var_23 = ((((/* implicit */_Bool) 9836943718909724676ULL)) ? (7219725699803807842ULL) : (7219725699803807850ULL));
                }
            } 
        } 
        var_24 = (~(arr_7 [i_0] [i_0] [i_0]));
    }
    var_25 = ((/* implicit */unsigned long long int) ((var_15) != (var_5)));
}
