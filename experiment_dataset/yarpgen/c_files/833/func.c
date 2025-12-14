/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/833
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
    var_18 = ((/* implicit */unsigned int) var_10);
    var_19 = ((/* implicit */_Bool) var_12);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_10 [i_0 + 1] [i_1] = ((/* implicit */int) min((((((((/* implicit */int) (unsigned short)21)) >= (((/* implicit */int) arr_9 [i_0] [i_1] [(signed char)11] [i_1] [i_1] [i_3])))) ? (((/* implicit */long long int) var_5)) : (min((((/* implicit */long long int) arr_6 [i_0 - 1] [i_1] [i_2])), (-5340100963480307086LL))))), (((/* implicit */long long int) 1555104688))));
                        arr_11 [i_3] [i_2] [i_0] [i_1] [i_0] [i_0 - 1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((14421158197816442714ULL), (131071ULL)))) ? (min((((/* implicit */long long int) var_4)), (var_12))) : (arr_3 [i_0 + 1] [i_0 - 1])))), (((((/* implicit */unsigned long long int) var_6)) & (min((((/* implicit */unsigned long long int) arr_4 [i_3] [i_1] [i_0])), (arr_1 [(unsigned short)11] [i_2])))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        arr_14 [i_4] [(signed char)7] [i_2] [(_Bool)0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [(unsigned char)7] [i_0])) ? (((/* implicit */int) arr_8 [(unsigned short)3] [i_0 - 1] [i_0 + 1] [12] [i_0])) : (-346977795)))), (((arr_5 [i_0 - 1] [i_0]) / (16517711078623157622ULL)))));
                        arr_15 [i_0 + 1] [i_1] [i_2] [i_4] [i_4] [i_4] = ((/* implicit */short) 22ULL);
                    }
                    arr_16 [(_Bool)1] [i_1] [i_1] [i_1] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_12 [i_2] [(_Bool)1])) ? (((/* implicit */unsigned long long int) arr_6 [i_0 - 1] [i_1] [i_2])) : (14421158197816442717ULL))), (((/* implicit */unsigned long long int) max((628213871), (arr_6 [i_0] [i_1 - 1] [i_2]))))));
                }
            } 
        } 
    } 
}
