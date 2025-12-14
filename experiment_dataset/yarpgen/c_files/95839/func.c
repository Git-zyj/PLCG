/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95839
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) 0))));
        var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((~(-1134768430))), (((/* implicit */int) ((((/* implicit */int) (signed char)15)) < (((/* implicit */int) (short)-13402)))))))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_12 = (i_0 % 2 == 0) ? (((/* implicit */_Bool) ((((1134768417) / (((/* implicit */int) (_Bool)1)))) << (((((/* implicit */int) ((unsigned char) arr_1 [i_0] [i_0]))) - (1)))))) : (((/* implicit */_Bool) ((((1134768417) / (((/* implicit */int) (_Bool)1)))) << (((((((/* implicit */int) ((unsigned char) arr_1 [i_0] [i_0]))) - (1))) - (241))))));
        arr_2 [i_0] = ((/* implicit */short) ((signed char) arr_1 [i_0] [i_0]));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_5 [1U] &= ((short) ((((/* implicit */_Bool) arr_1 [10U] [10U])) ? (((/* implicit */int) (unsigned char)183)) : (((/* implicit */int) arr_1 [i_1] [0]))));
        arr_6 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) 806710277))) ? (((((/* implicit */_Bool) -2052339534)) ? (5879338630121956083ULL) : (12567405443587595532ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [(_Bool)1])))));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) (!((_Bool)0))))));
            arr_9 [i_1] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) arr_7 [i_1])) : (((((/* implicit */_Bool) ((long long int) -14537461))) ? ((~(((/* implicit */int) arr_1 [i_1] [i_2])))) : (((var_5) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_0 [8]))))))));
            /* LoopNest 2 */
            for (long long int i_3 = 1; i_3 < 7; i_3 += 2) 
            {
                for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    {
                        var_14 = (~(((/* implicit */int) arr_0 [i_1])));
                        var_15 = ((/* implicit */long long int) min((max(((~(((/* implicit */int) var_3)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))), (((/* implicit */int) ((unsigned char) 8216659325970196323ULL)))));
                        arr_15 [i_3] [i_3] [0] [i_3] = ((/* implicit */unsigned int) arr_14 [3] [i_2] [i_3 - 1] [i_3]);
                    }
                } 
            } 
        }
    }
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (min((((/* implicit */unsigned long long int) (!(var_5)))), (max((((/* implicit */unsigned long long int) (short)10342)), (5879338630121956077ULL))))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) var_3)), (((((/* implicit */_Bool) 8965146670907570647LL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)193)))))))));
    var_17 = ((/* implicit */unsigned int) min((-2105031500618921563LL), (((/* implicit */long long int) var_1))));
}
