/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85760
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            arr_7 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) ? (1042213298U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) << (((((((/* implicit */_Bool) arr_0 [i_0])) ? (var_0) : (arr_5 [i_0]))) - (3814927030U))))))));
            var_13 = ((/* implicit */long long int) max((3252753997U), (((/* implicit */unsigned int) var_1))));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                for (int i_3 = 2; i_3 < 13; i_3 += 2) 
                {
                    {
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_0] [i_3] = ((/* implicit */signed char) 1116892707587883008ULL);
                        var_14 = ((/* implicit */int) min((((/* implicit */unsigned int) (short)1020)), (((((/* implicit */_Bool) ((int) var_10))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_9)))) : (((((/* implicit */_Bool) var_1)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) var_12))))))));
                        arr_15 [i_3] [i_3] &= ((((/* implicit */unsigned long long int) max((((3252753990U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)73))))), (((/* implicit */unsigned int) min((var_8), (var_8))))))) < (((((/* implicit */_Bool) var_5)) ? (((var_4) | (3450682187080271939ULL))) : (((/* implicit */unsigned long long int) (-(var_9)))))));
                        arr_16 [i_0] [i_0] = arr_0 [i_0];
                    }
                } 
            } 
            arr_17 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_6 [i_1] [i_1 - 1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((-1274578328591244962LL) != (((/* implicit */long long int) ((/* implicit */int) (signed char)0))))))) : (var_0))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_1 - 1] [i_1] [i_1 - 1] [i_1])) || ((_Bool)1)))))));
        }
        var_15 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)26))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */short) ((signed char) 16591565712770710902ULL));
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3450682187080271922ULL)) ? (((/* implicit */int) (unsigned char)60)) : (((/* implicit */int) (signed char)3))));
    }
    var_18 &= ((/* implicit */unsigned int) var_1);
}
