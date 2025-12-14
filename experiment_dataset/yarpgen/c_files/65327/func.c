/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65327
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
    var_18 = ((/* implicit */long long int) var_16);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] = max((arr_0 [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)48)) && (((/* implicit */_Bool) var_10))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) max(((unsigned short)15469), (((/* implicit */unsigned short) var_4))))))) | (((long long int) 7438533548126273371LL))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            arr_6 [i_0] [i_0 - 3] [i_0 - 3] = ((/* implicit */short) ((unsigned long long int) ((long long int) (unsigned short)23483)));
            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 - 3]))) : (arr_0 [i_0])))));
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                for (unsigned short i_3 = 2; i_3 < 20; i_3 += 1) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((_Bool) var_17)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)48)))) : (((((/* implicit */int) arr_10 [i_0 + 1])) + (((/* implicit */int) (unsigned short)65527)))))))));
                            arr_15 [i_0] = ((/* implicit */unsigned long long int) (signed char)50);
                            var_21 = ((unsigned long long int) ((((/* implicit */int) (signed char)-51)) >= (((/* implicit */int) var_14))));
                        }
                    } 
                } 
            } 
        }
    }
    for (signed char i_5 = 1; i_5 < 16; i_5 += 2) 
    {
        arr_18 [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) -3840122439976169127LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : ((((_Bool)1) ? (((/* implicit */int) (unsigned char)58)) : (((/* implicit */int) var_11))))));
        arr_19 [i_5] = ((((/* implicit */_Bool) 4993449996366709637ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-57))) : (1524416577058536398LL));
        arr_20 [i_5] [i_5] = ((/* implicit */signed char) arr_9 [i_5] [i_5] [i_5 + 2]);
        var_22 = ((/* implicit */_Bool) (unsigned char)58);
    }
    /* vectorizable */
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        arr_23 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_6 - 1])) & (((/* implicit */int) arr_10 [i_6 - 1]))));
        var_23 = 534773760LL;
    }
    var_24 = ((/* implicit */long long int) var_11);
    var_25 = ((/* implicit */signed char) var_0);
}
