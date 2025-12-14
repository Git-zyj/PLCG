/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86150
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)26190)), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) << (((/* implicit */int) (short)14))))) ? (((((/* implicit */_Bool) (unsigned short)16380)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_1)))) : (((((/* implicit */int) (signed char)16)) >> (((/* implicit */int) (short)27))))))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            arr_6 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0]))))) ? ((~(((((/* implicit */_Bool) (signed char)47)) ? (((/* implicit */int) (signed char)9)) : (((/* implicit */int) (unsigned short)3340)))))) : (-893839144)));
            var_21 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-86)) + (((/* implicit */int) (unsigned short)63))))), (((((/* implicit */_Bool) (signed char)50)) ? (17046265767225528157ULL) : (17046265767225528182ULL))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_16) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (signed char)68)))))) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_1])) : (((((/* implicit */_Bool) (short)-32757)) ? (893839139) : (((/* implicit */int) arr_5 [i_0])))))))));
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((2122304073U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))))) > (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) & (arr_2 [(short)1] [i_0])))) ? ((~(arr_0 [i_1]))) : (1400478306484023474ULL)))));
        }
    }
    var_23 -= ((/* implicit */int) var_5);
    var_24 *= ((/* implicit */unsigned long long int) (unsigned char)120);
}
