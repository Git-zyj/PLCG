/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86920
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
    var_13 = ((/* implicit */long long int) var_1);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            {
                var_14 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1 + 1])) ^ (((/* implicit */int) arr_2 [i_0])))))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) /* same iter space */
                {
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned short)18)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1))))))) : ((-(var_8)))))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((arr_1 [(unsigned short)11]) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_5 [i_0] [15U] [i_2])))) : (((/* implicit */int) arr_1 [i_1 + 4])))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) var_3)) <= (arr_4 [10ULL] [10ULL] [i_2] [i_0])))) == (((/* implicit */int) min((((/* implicit */unsigned char) arr_5 [i_0] [i_1] [i_2])), (arr_2 [i_1])))))))));
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_1 + 1])) <= (((/* implicit */int) ((((/* implicit */int) arr_2 [i_1 - 1])) >= (((/* implicit */int) arr_2 [i_1 - 1])))))));
                }
                for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                        {
                            var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_9 [i_1 + 3] [i_1 + 4] [i_1 + 3] [8ULL]))));
                            var_18 &= ((/* implicit */unsigned int) (-(arr_6 [i_1 - 3] [i_1 + 3] [i_1 + 3] [i_1 - 3])));
                            var_19 = ((/* implicit */unsigned int) ((arr_11 [i_1 - 3]) >= (((/* implicit */unsigned int) (-(((/* implicit */int) arr_14 [i_5] [i_4] [i_3] [i_3] [i_0] [i_0])))))));
                        }
                        var_20 -= ((/* implicit */_Bool) ((arr_7 [i_3] [i_1 + 4] [i_0] [i_0]) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_0])) ? (((/* implicit */int) arr_12 [i_4] [i_1] [i_3] [i_4] [i_4] [i_1 + 1])) : (((/* implicit */int) arr_9 [i_4] [i_3] [i_1] [i_0]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3])) ? (arr_4 [i_0] [i_1 + 4] [i_1 + 4] [i_1 + 4]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-117)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_3] [i_3])))))) : (max((((/* implicit */unsigned int) arr_15 [i_0] [i_0])), (var_3)))))));
                    }
                    var_21 = ((/* implicit */unsigned char) ((short) ((((/* implicit */int) arr_12 [i_1 - 3] [i_1 + 1] [i_1 - 3] [i_3] [(short)2] [i_1 - 3])) / (((/* implicit */int) arr_12 [i_1 - 3] [i_1 - 1] [i_1 - 3] [i_3] [i_3] [i_3])))));
                    var_22 = ((/* implicit */unsigned int) (((_Bool)0) ? (((arr_8 [i_1 + 2] [i_1 + 2]) % (arr_8 [i_1 + 1] [i_1 - 1]))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 3] [i_1 - 3] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (-8860661962408408607LL))))))));
                }
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) ((signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_11)))), (max((11277294156998101562ULL), (((/* implicit */unsigned long long int) var_5)))))));
}
