/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75410
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_8 [4U] [i_0] [i_1] [(unsigned short)4] |= (unsigned short)27750;
                    arr_9 [i_0] [i_0] [i_2] &= ((/* implicit */unsigned short) arr_3 [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 8; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 7; i_4 += 3) 
                        {
                            {
                                arr_15 [i_1] [i_1] [i_1] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(3240956301U)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_13 [i_0] [i_0] [6LL] [i_0] [(unsigned char)7] [5LL] [i_0])), ((unsigned short)2947)))) : (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)0)), (arr_4 [(short)8] [(short)8] [i_3]))))))) ? ((((-(((/* implicit */int) arr_13 [(unsigned short)1] [i_1] [i_1] [(unsigned short)5] [(unsigned short)1] [(unsigned short)1] [i_4 - 1])))) - (((/* implicit */int) arr_2 [i_1] [i_3 - 3] [i_3 + 1])))) : (((/* implicit */int) ((unsigned short) 1054011003U)))));
                                var_10 = ((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_1] [i_1]))));
                                var_11 = min((((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_3 - 3] [i_3] [i_4] [i_4 + 3] [(unsigned short)7])) ? (-1086466079161900199LL) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2] [(unsigned char)2] [i_3 - 3] [i_3] [7LL] [i_4 + 3] [i_4]))))), (((/* implicit */long long int) (unsigned short)39311)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned int) 5544448576252362306LL);
}
