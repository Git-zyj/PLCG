/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82039
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
    var_19 -= ((/* implicit */_Bool) ((unsigned short) var_12));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_20 = ((((/* implicit */_Bool) 4050846566U)) || (((/* implicit */_Bool) 244120732U)));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 1) 
                {
                    var_21 *= ((/* implicit */_Bool) arr_5 [i_1]);
                    arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) ((arr_4 [i_0] [i_1] [i_2 - 2]) ? (((/* implicit */int) min((arr_4 [i_2] [i_1] [i_2 - 2]), (arr_4 [i_1] [i_1] [i_2 - 2])))) : (((/* implicit */int) min((arr_4 [i_1] [i_1] [i_2 - 2]), (arr_4 [i_0] [i_1] [i_2 - 2]))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_9 [i_0] [i_0] [i_2] [i_2] [i_4] [i_1])) != (min((((/* implicit */long long int) ((var_10) % (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_4 + 2]))))), ((~(var_15)))))));
                                var_22 += ((/* implicit */unsigned short) (+(min((arr_9 [i_2] [i_2] [i_2] [i_2] [i_2 + 1] [(unsigned short)2]), (var_6)))));
                                arr_14 [i_1] [i_1] [i_2 + 1] [i_1] [i_1] [(unsigned short)0] = ((/* implicit */_Bool) (-(((/* implicit */int) ((short) (+(arr_9 [2ULL] [i_1] [i_1] [i_1] [i_1] [i_1])))))));
                                arr_15 [i_3] [i_1] [13ULL] [i_3] [i_1] [(short)2] = ((/* implicit */short) arr_7 [i_0] [i_2] [i_1] [i_0]);
                            }
                        } 
                    } 
                    var_23 *= ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) arr_7 [i_0] [i_1] [i_1] [0ULL]))) % (((/* implicit */int) max((arr_7 [i_0] [i_0] [i_0] [i_2]), (arr_7 [i_0] [14LL] [i_2] [16ULL]))))));
                }
                arr_16 [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)65535))));
            }
        } 
    } 
}
