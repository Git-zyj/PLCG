/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68322
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
    var_15 = ((/* implicit */signed char) var_10);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) 4294967291U))) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)20)))));
        var_17 -= max((var_7), (min((((/* implicit */long long int) arr_2 [i_0])), (-9223372036854775795LL))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_18 *= ((/* implicit */unsigned int) ((signed char) min((((/* implicit */unsigned int) (+(((/* implicit */int) var_1))))), (arr_5 [(unsigned short)3] [i_1] [i_1]))));
                    var_19 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)43307)) ^ (((/* implicit */int) arr_3 [i_1]))));
                }
            } 
        } 
    }
    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        var_20 = ((16777215LL) << (((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) arr_10 [i_3]))))) > ((+(var_7)))))));
        var_21 = ((/* implicit */short) (-(min((min((((/* implicit */long long int) (unsigned char)126)), (7725950683102648407LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3]))) : (3747277337U))))))));
    }
    var_22 -= ((/* implicit */unsigned int) var_3);
}
