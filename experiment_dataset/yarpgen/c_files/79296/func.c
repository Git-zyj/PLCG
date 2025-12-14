/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79296
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
    var_10 = ((/* implicit */unsigned short) var_0);
    var_11 = ((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned long long int) 2064640937U))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0 - 2] = ((/* implicit */unsigned char) max((var_6), (((/* implicit */unsigned int) max(((unsigned char)215), (var_3))))));
        var_12 = ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_0 [i_0 + 1] [i_0 - 3])), (((min((arr_1 [i_0]), (((/* implicit */unsigned long long int) var_2)))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_9) : (((/* implicit */int) (unsigned char)100)))))))));
    }
    for (int i_1 = 0; i_1 < 16; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] = ((unsigned short) max((((/* implicit */unsigned long long int) arr_5 [i_1])), (((unsigned long long int) (-2147483647 - 1)))));
        var_13 = ((/* implicit */unsigned char) arr_6 [i_1]);
    }
    for (int i_2 = 0; i_2 < 16; i_2 += 3) /* same iter space */
    {
        arr_12 [i_2] = ((/* implicit */unsigned short) var_0);
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_2])) || (((/* implicit */_Bool) (unsigned char)96))));
    }
    var_15 = ((/* implicit */unsigned short) var_6);
}
