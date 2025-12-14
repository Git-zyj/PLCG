/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70560
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
    for (short i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2983544840488058206ULL)) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (2983544840488058205ULL)))) ? (((/* implicit */unsigned long long int) 1223295721)) : (2983544840488058206ULL)))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */_Bool) var_4);
                        var_13 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_5 [i_2] [i_0 - 1] [i_0 + 3] [i_0 + 1])) && (((/* implicit */_Bool) arr_8 [i_0] [i_1] [4])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2]))) : ((~(max((18446744073709551605ULL), (((/* implicit */unsigned long long int) arr_9 [i_3] [i_2] [i_1] [i_0]))))))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0]);
    }
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1223295721)) ? (((((/* implicit */_Bool) -8541783475062472838LL)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) >= (8541783475062472837LL))))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) -1223295721))))))));
}
