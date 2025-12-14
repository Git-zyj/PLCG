/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9728
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 2; i_2 < 10; i_2 += 1) 
                {
                    arr_8 [i_0] [3] [i_0] = ((unsigned short) (-(var_12)));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) arr_11 [i_0] [i_1] [(unsigned char)8] [i_3]);
                                var_15 = ((/* implicit */unsigned char) ((long long int) arr_14 [i_0] [i_3] [i_2 - 1] [i_3] [3LL]));
                                var_16 = ((/* implicit */unsigned short) min((var_16), (arr_6 [i_0] [i_3] [i_2] [(unsigned char)1])));
                            }
                        } 
                    } 
                }
                /* LoopSeq 1 */
                for (unsigned int i_5 = 1; i_5 < 9; i_5 += 4) 
                {
                    arr_19 [(unsigned short)0] [5LL] [i_5] = ((/* implicit */short) arr_16 [(unsigned char)8] [i_1]);
                    arr_20 [11ULL] [i_0] [i_0] [(unsigned short)11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) (+(((/* implicit */int) arr_10 [(unsigned char)6] [2ULL] [i_5 + 1] [i_5])))))) ? (((/* implicit */long long int) var_10)) : (max((((/* implicit */long long int) max((((/* implicit */int) var_0)), (-1416463308)))), (var_11)))));
                    arr_21 [i_0] [(unsigned char)5] [i_5 + 2] = ((/* implicit */unsigned short) 1416463283);
                }
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_9))));
}
