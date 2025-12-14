/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6997
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
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (short i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    {
                        arr_13 [i_0] &= ((/* implicit */unsigned short) (~(min((max((var_11), (((/* implicit */unsigned int) var_7)))), (((((/* implicit */_Bool) var_5)) ? (arr_3 [i_2] [1ULL] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))));
                        var_18 = max((arr_2 [i_1 - 2] [i_1 - 1]), (arr_2 [i_1 - 2] [i_1 - 2]));
                        arr_14 [i_0] [i_0] [i_1] [15U] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)7025)) : (arr_7 [(unsigned short)17] [i_1 - 2] [i_0])))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (11206172214279200713ULL))))))));
                    }
                } 
            } 
        } 
        var_19 |= ((/* implicit */unsigned long long int) (_Bool)1);
        var_20 = ((/* implicit */unsigned int) ((unsigned short) min((arr_0 [i_0]), (((/* implicit */unsigned int) (!((_Bool)1)))))));
        arr_15 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) 2556225176497237641LL))));
    }
    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 4) 
    {
        arr_19 [i_4] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_11 [i_4] [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_11 [i_4] [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_11 [7ULL] [i_4] [6] [7ULL] [i_4]))))));
        var_21 = var_1;
    }
    var_22 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((var_8) >= (((/* implicit */long long int) min((((/* implicit */int) var_2)), (var_9)))))))));
}
