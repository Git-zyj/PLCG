/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56724
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        var_11 = ((/* implicit */_Bool) ((unsigned short) (~((~(((/* implicit */int) (_Bool)1)))))));
        var_12 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)151))) & (arr_2 [i_0 + 1] [i_0 + 1])));
        var_13 = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
        var_14 = ((/* implicit */_Bool) 3148100713U);
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [4LL] = ((/* implicit */unsigned short) (((_Bool)1) ? (max((((/* implicit */unsigned long long int) arr_4 [i_1])), (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_4 [i_1]))))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            arr_10 [i_1] = ((/* implicit */unsigned short) var_5);
            var_15 = ((/* implicit */unsigned long long int) ((unsigned int) max((((unsigned char) arr_0 [i_1] [i_2])), (((/* implicit */unsigned char) (_Bool)1)))));
            var_16 = ((/* implicit */long long int) ((int) (unsigned short)35062));
        }
    }
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-98))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_3 + 1] [i_3 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_6 [i_3])))) ? (var_6) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_13 [7ULL] [7ULL]))))))))))));
        arr_14 [i_3] = ((/* implicit */unsigned short) (unsigned char)174);
    }
    var_18 += ((/* implicit */int) ((((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65530))) > (3555031276U)))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (min((((/* implicit */long long int) var_1)), (6015332331457961510LL))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) var_4)) * (var_9)))))))));
}
