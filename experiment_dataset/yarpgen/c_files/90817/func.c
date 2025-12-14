/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90817
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
    var_17 = ((/* implicit */signed char) (-(max((((/* implicit */int) (_Bool)0)), (var_12)))));
    var_18 = ((/* implicit */signed char) var_15);
    var_19 = ((((/* implicit */int) var_9)) * ((+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (-1400176090876737555LL)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 1400176090876737554LL)) ? (((/* implicit */int) (_Bool)0)) : (var_4))) << (((/* implicit */int) ((var_12) == (((/* implicit */int) var_11)))))))) ? (((((/* implicit */_Bool) (unsigned char)171)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (12ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 7479905678233053086ULL)))))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */signed char) var_7);
                    arr_9 [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (((arr_6 [i_1 - 1] [i_0 - 1] [i_0]) ? (arr_1 [i_1 + 3] [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1 + 1] [i_0 + 1] [i_0 + 1])))))));
                    arr_10 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1317193004)) ? (1317193004) : (((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 20; i_3 += 3) /* same iter space */
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned long long int) arr_12 [i_0] [i_1 - 1] [i_2] [i_3] [i_2]);
                        arr_14 [i_3] [i_2] [i_1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0 - 2] [i_1 + 2] [i_1 - 1] [i_1])) ? (-1) : (arr_12 [i_0 - 2] [i_0 - 2] [i_1 + 1] [i_1 + 2] [i_2]))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 20; i_4 += 3) /* same iter space */
                    {
                        arr_18 [i_0] [i_0] [i_0] [i_4] = ((arr_12 [i_4] [i_2] [i_2] [i_1] [i_0]) <= (-1317193025));
                        arr_19 [i_2] [i_2] [i_2] [i_4] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_4] [i_2] [i_1]))));
                    }
                }
            } 
        } 
    }
}
