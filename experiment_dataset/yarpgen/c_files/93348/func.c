/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93348
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
    var_18 = ((/* implicit */unsigned char) var_5);
    var_19 = var_2;
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */long long int) min((var_20), (max((((/* implicit */long long int) ((_Bool) (+(((/* implicit */int) arr_1 [i_0])))))), (max((-5LL), (13LL)))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 4; i_1 < 22; i_1 += 4) /* same iter space */
        {
            var_21 ^= ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_0 [i_1 - 2] [i_1 - 1]))))));
            var_22 = max((((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_1 [i_1])) < (((/* implicit */int) var_2)))), (((_Bool) arr_4 [i_0]))))), (((((/* implicit */unsigned long long int) max((-5LL), (((/* implicit */long long int) var_16))))) + ((+(var_3))))));
            var_23 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_5 [i_1] [i_1 + 1] [i_1])) ? (((/* implicit */int) arr_5 [i_1] [i_1 - 3] [i_1])) : (((/* implicit */int) arr_5 [i_1] [i_1 + 1] [i_1 + 1]))))));
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1 + 2] [i_1 - 4])) & (((/* implicit */int) arr_2 [i_1 - 3] [i_1 - 4]))))) ? (((/* implicit */int) var_16)) : (max((var_17), (((/* implicit */int) arr_2 [i_1 + 1] [i_1 - 4]))))));
        }
        for (long long int i_2 = 4; i_2 < 22; i_2 += 4) /* same iter space */
        {
            arr_8 [i_0] [i_2] = ((/* implicit */unsigned short) ((long long int) -5LL));
            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((max((((((/* implicit */_Bool) 5LL)) ? (140737488355327LL) : (((/* implicit */long long int) arr_4 [i_0])))), (((/* implicit */long long int) max((arr_1 [i_0]), (((/* implicit */unsigned short) arr_2 [i_2 + 2] [i_0]))))))) < (((((/* implicit */long long int) ((((/* implicit */int) arr_6 [10ULL] [10ULL] [i_2])) % (((/* implicit */int) (signed char)-68))))) & (((((/* implicit */long long int) ((/* implicit */int) var_0))) & (arr_7 [i_0]))))))))));
            var_26 = arr_3 [i_0];
        }
        var_27 = ((/* implicit */unsigned char) min((max((arr_7 [i_0]), (var_8))), (((/* implicit */long long int) max((((/* implicit */int) arr_3 [i_0])), (((((((/* implicit */int) (signed char)-87)) + (2147483647))) >> (((-23LL) + (46LL))))))))));
        arr_9 [i_0] = ((/* implicit */unsigned int) arr_4 [i_0]);
    }
}
