/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94778
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
    var_11 = ((/* implicit */unsigned int) var_10);
    var_12 = ((((/* implicit */_Bool) ((unsigned char) (unsigned char)0))) ? (((/* implicit */unsigned int) (+(var_0)))) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (var_6) : (var_10)))), (max((((/* implicit */unsigned int) var_3)), (var_9))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 0ULL))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned int) min((max((((/* implicit */unsigned long long int) 1248974666U)), (var_8))), (((/* implicit */unsigned long long int) min((4062656060U), (((/* implicit */unsigned int) arr_0 [i_0]))))))));
        arr_5 [i_0] = ((/* implicit */unsigned int) ((max((0ULL), (((/* implicit */unsigned long long int) (short)17204)))) / (((/* implicit */unsigned long long int) min((max((var_1), (((/* implicit */unsigned int) arr_2 [i_0])))), (((((/* implicit */_Bool) 9223372036854775793LL)) ? (((/* implicit */unsigned int) arr_1 [i_0] [i_0])) : (var_9))))))));
        arr_6 [i_0] = ((/* implicit */signed char) arr_2 [i_0]);
    }
}
