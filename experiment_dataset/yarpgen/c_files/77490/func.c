/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77490
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
    var_13 = ((/* implicit */_Bool) var_10);
    var_14 = min((((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned char) var_11)), (var_6)))) < (((/* implicit */int) min((((/* implicit */unsigned short) var_10)), (var_3))))))), (min((((/* implicit */long long int) (+(((/* implicit */int) var_10))))), (((((var_1) + (9223372036854775807LL))) << (((/* implicit */int) var_4)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        arr_2 [i_0] [(unsigned char)8] = ((/* implicit */unsigned int) arr_1 [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((unsigned char) arr_0 [i_0]))), (min((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_12))))));
    }
    /* LoopNest 2 */
    for (long long int i_1 = 4; i_1 < 12; i_1 += 1) 
    {
        for (unsigned int i_2 = 1; i_2 < 12; i_2 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned int) min((var_2), (((((/* implicit */_Bool) arr_7 [i_1 + 1] [i_1])) && (((/* implicit */_Bool) arr_7 [i_1 + 1] [i_1 + 1]))))));
                arr_10 [i_1] [1LL] [i_1] = ((/* implicit */unsigned long long int) var_1);
                arr_11 [i_1] [i_1 + 1] [i_1] = ((long long int) min((((/* implicit */long long int) arr_8 [i_2])), (min((((/* implicit */long long int) arr_7 [i_1] [i_2 - 1])), (arr_5 [9LL])))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) min((((unsigned short) ((unsigned char) var_2))), (((/* implicit */unsigned short) var_4)))))));
}
