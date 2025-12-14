/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82420
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 7; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 8; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)141)), (4415220989997761740LL))))));
                        arr_11 [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(689670629))))));
                        arr_12 [i_1] [i_1] [9U] = ((((/* implicit */int) (unsigned char)216)) != (-689670622));
                        arr_13 [i_0 + 2] [i_1] [i_2] [i_2] [i_3] [i_1] = ((/* implicit */signed char) arr_10 [i_0 + 3] [i_1]);
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        var_16 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)91)) & (((/* implicit */int) (unsigned char)141))));
                        arr_18 [i_1] [i_1 + 2] [i_1 + 2] [i_4] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)0))));
                    }
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_11)) : (var_6))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [4]))))))))) ? (max((((/* implicit */unsigned long long int) (_Bool)1)), (17592186044415ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8)))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_14))));
}
