/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70266
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
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_3 [i_0] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_0]))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) ((unsigned int) -1889432051))))));
        var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) -357498901)) ? (16306214174822420193ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_0]))))))))));
        var_19 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */_Bool) (signed char)2)) ? (17ULL) : (((/* implicit */unsigned long long int) (-2147483647 - 1))))) : (((/* implicit */unsigned long long int) arr_1 [5]))));
    }
    var_20 = min((((((/* implicit */_Bool) (-(var_2)))) ? (((var_2) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1479753392U)) || (((/* implicit */_Bool) var_7))))));
}
