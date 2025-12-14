/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78318
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
    var_20 += ((/* implicit */short) var_10);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0]))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 22; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    {
                        var_22 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_3 [i_0] [i_1] [i_2])), (max((251658240LL), (((/* implicit */long long int) (unsigned short)61979))))));
                        var_23 = ((/* implicit */long long int) max(((((_Bool)1) ? (arr_7 [i_2 + 1]) : (var_16))), ((+(((/* implicit */int) (short)-9836))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (short i_4 = 2; i_4 < 23; i_4 += 3) 
        {
            arr_12 [i_4] = ((/* implicit */unsigned short) (~(var_16)));
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 251658240LL)) ? (1073739776) : (((/* implicit */int) (short)9860))));
            var_25 = ((/* implicit */long long int) (!(((((4161348575U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_4 - 1] [i_4] [i_4 - 2]))))) < (((/* implicit */unsigned int) ((/* implicit */int) (short)9848)))))));
        }
        /* vectorizable */
        for (short i_5 = 0; i_5 < 24; i_5 += 1) 
        {
            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (+(var_2)))) ? (((((/* implicit */_Bool) var_12)) ? (var_19) : (((/* implicit */unsigned long long int) var_14)))) : (((/* implicit */unsigned long long int) 251658240LL))));
            var_27 = ((/* implicit */unsigned int) (-(-251658245LL)));
            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-9856)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3474))) : (2374678703U)));
            arr_15 [i_0] [i_5] [i_5] &= ((/* implicit */unsigned int) ((251658242LL) > (268427264LL)));
        }
    }
}
