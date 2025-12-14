/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71464
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            arr_5 [i_1 + 1] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))))) % (((var_4) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3)))))));
            arr_6 [2ULL] [i_0] [i_0] = ((/* implicit */long long int) var_11);
            arr_7 [i_0] [i_0] [i_1] = -1LL;
        }
        var_13 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (+(1LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))) : (((arr_0 [i_0]) - (((/* implicit */unsigned long long int) -1LL))))))));
        var_14 = ((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0]);
        var_15 = ((int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (((long long int) (_Bool)1))));
        arr_8 [i_0] [i_0] = ((/* implicit */int) (-(((unsigned long long int) var_6))));
    }
    for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        var_16 = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) ((unsigned short) var_7)))))));
        var_17 = (-((-(arr_11 [i_2] [i_2]))));
        var_18 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) < (arr_9 [i_2] [i_2]));
        var_19 = ((/* implicit */long long int) ((unsigned long long int) min((((/* implicit */unsigned int) arr_11 [i_2] [i_2])), (0U))));
    }
    var_20 = ((/* implicit */_Bool) (-(max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10))))))));
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) - (((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))))))))));
}
