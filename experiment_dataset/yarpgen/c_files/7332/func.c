/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7332
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(10937163500082468943ULL)))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) 1252433640U)) * (10145797694756202216ULL))) / (((/* implicit */unsigned long long int) arr_1 [i_0]))))) ? (((((/* implicit */_Bool) ((signed char) arr_0 [i_0]))) ? (6485996786780315104LL) : (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) min(((+(((/* implicit */int) var_2)))), (((/* implicit */int) (unsigned char)34))))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_3 [i_1]))) ? ((+(((((/* implicit */_Bool) 1252433641U)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) -610521155);
    }
    var_14 = ((/* implicit */unsigned short) max((max((((/* implicit */long long int) 0U)), (((long long int) 3684284975U)))), (((/* implicit */long long int) var_3))));
}
