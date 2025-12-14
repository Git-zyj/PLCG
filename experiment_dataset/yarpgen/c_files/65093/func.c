/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65093
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
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) -1579362337)), (((unsigned int) 66584576U))));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    arr_7 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_1 [i_0])), (8909262713269933662LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_6 [i_0] [i_1] [i_1] [i_2]), (arr_2 [i_1] [i_1] [i_2]))))) : (((unsigned long long int) arr_0 [i_0] [i_1]))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_18 *= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((unsigned short) 3960180296U))), (((unsigned long long int) arr_9 [i_3 + 1] [4ULL] [i_2] [i_2] [4ULL] [i_2]))));
                                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_6 [i_3 + 1] [i_3 - 1] [i_3 - 2] [i_3 + 1]))) ? (((((/* implicit */_Bool) arr_6 [i_3 + 1] [i_3 - 1] [i_3 - 2] [i_3 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3 + 1] [i_3 - 1] [i_3 - 2] [i_3 + 1]))) : (12ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_3 + 1] [i_3 - 1] [i_3 - 2] [i_3 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3 + 1] [i_3 - 1] [i_3 - 2] [i_3 + 1]))) : (var_12)))))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */int) 3960180310U);
                    var_21 = ((unsigned short) ((1665761455U) ^ (((/* implicit */unsigned int) 1579362337))));
                }
                for (short i_5 = 3; i_5 < 8; i_5 += 1) 
                {
                    var_22 = ((/* implicit */unsigned short) ((unsigned char) ((signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (arr_5 [i_1] [(signed char)2] [i_1] [i_5])))));
                    var_23 = ((/* implicit */short) 0U);
                    arr_18 [i_0] [i_1] [i_1] [i_5] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min((arr_17 [i_5 + 1] [i_5 - 3] [i_5 - 2]), (arr_2 [i_1] [i_5] [i_5 - 1]))))) % (-2497045623542679517LL)));
                    var_24 = ((/* implicit */short) min((((((/* implicit */_Bool) 3601782782U)) ? (arr_12 [i_5 - 2] [i_5 + 2] [i_5 - 1]) : (((/* implicit */long long int) 1579362337)))), (((/* implicit */long long int) ((((/* implicit */int) var_2)) - (((/* implicit */int) arr_13 [i_5 - 1] [i_5 + 3] [i_5])))))));
                }
                var_25 ^= ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_1 [i_0])), (max((2629205841U), (2629205841U)))))) ? (((unsigned long long int) ((3849015207U) ^ (((/* implicit */unsigned int) -1579362339))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2)))))));
            }
        } 
    } 
    var_26 = ((/* implicit */long long int) ((short) var_17));
}
