/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93423
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
    var_17 = ((/* implicit */long long int) var_8);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 4) /* same iter space */
                {
                    arr_9 [i_1] [i_0] = ((/* implicit */unsigned short) arr_4 [i_0] [i_0]);
                    arr_10 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_1 [i_1 + 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_1 + 3] [i_1 + 2] [i_1 + 1])))))) ? (min((((/* implicit */long long int) arr_8 [i_1 - 1] [i_1 + 1] [i_1 + 3] [i_1 + 4])), (arr_0 [i_1 + 4]))) : (arr_0 [i_1 + 4])));
                    arr_11 [i_0] [i_1 + 2] [i_1 + 2] [i_0] |= ((/* implicit */unsigned long long int) arr_2 [i_0] [i_1] [i_2]);
                }
                for (signed char i_3 = 0; i_3 < 14; i_3 += 4) /* same iter space */
                {
                    var_18 -= ((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_2)), (max((var_1), (((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0] [i_0]))))))) != (min(((+(8775594160907857522ULL))), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1 + 2]))))));
                    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) var_7))));
                    arr_15 [i_3] [i_1] [i_0] = ((/* implicit */unsigned int) arr_6 [i_0] [i_1 + 2] [i_1 + 2]);
                    var_20 = ((/* implicit */unsigned long long int) (-(((arr_0 [i_1 - 1]) - (arr_13 [i_1 + 4] [i_1 - 2])))));
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 3; i_4 < 10; i_4 += 3) 
                {
                    var_21 ^= ((/* implicit */int) min((((/* implicit */long long int) arr_14 [i_0] [i_0] [i_1] [i_4])), (((var_3) ^ (((var_3) | (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0])))))))));
                    arr_20 [i_4] [i_1] = ((/* implicit */short) (+(arr_13 [i_0] [i_4 - 3])));
                }
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) 3158369599629157927ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)111)), ((short)-26908))))) : (9671149912801694104ULL)));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) min((var_12), ((unsigned short)2295)));
    var_24 = ((/* implicit */unsigned short) var_9);
}
