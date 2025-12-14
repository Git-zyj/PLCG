/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61853
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
    var_16 += ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) > (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (var_6))))));
    var_17 *= ((/* implicit */long long int) var_6);
    var_18 = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)16384)) == (((/* implicit */int) var_10))))), (var_11))), (((/* implicit */unsigned long long int) var_3))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */signed char) arr_3 [i_0]);
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 3; i_2 < 20; i_2 += 3) 
                {
                    arr_8 [i_1] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) 0ULL))) ? (6694016821456541876ULL) : (18446744073709551615ULL)));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 22; i_3 += 1) 
                    {
                        for (int i_4 = 2; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [(signed char)6] [i_2 + 1] [i_0] [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_1] [0LL] [i_4 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_6 [i_0] [(short)14])));
                                var_20 *= ((/* implicit */unsigned int) ((((/* implicit */int) var_8)) - (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1)))))));
                }
                arr_16 [(unsigned short)6] [i_1] &= ((/* implicit */_Bool) max((((/* implicit */int) (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) < ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))), ((((!((_Bool)1))) ? (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) : (((/* implicit */int) (_Bool)1))))));
                arr_17 [i_1] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_1 + 1] [i_1 + 1] [i_1] [(unsigned char)13] [i_1 - 1] [i_1 + 1])) ? (((/* implicit */int) arr_5 [i_1 - 1])) : ((-(((/* implicit */int) var_8))))))), (var_11));
                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((min((var_3), (arr_9 [i_1]))), (((/* implicit */short) (!(((/* implicit */_Bool) arr_11 [(short)4] [i_1 - 1] [i_0])))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
}
