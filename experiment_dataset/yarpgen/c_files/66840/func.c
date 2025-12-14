/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66840
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
    var_20 = ((/* implicit */long long int) var_19);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */unsigned int) (~(max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)31757)) * (((/* implicit */int) arr_3 [i_0] [i_1] [i_1 - 2]))))), (-8813887496971000456LL)))));
                var_21 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) 8813887496971000455LL)) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [0ULL] [i_0] [i_0])) ? (arr_1 [(short)6] [(short)6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))) ? (((((/* implicit */_Bool) 8813887496971000456LL)) ? (arr_1 [i_0] [(_Bool)1]) : (arr_1 [(_Bool)1] [i_1]))) : (((/* implicit */unsigned long long int) 65536U))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    arr_7 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) -8813887496971000458LL)) ? ((~(arr_1 [i_0] [i_1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_2])) ? (var_7) : (((/* implicit */int) var_5)))))));
                    arr_8 [i_0] [i_1] = ((/* implicit */short) (~(((/* implicit */int) arr_3 [i_1 - 1] [i_1] [i_1 + 1]))));
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_0] [i_0]) < (arr_1 [i_0] [i_1]))))) != ((((_Bool)1) ? (var_16) : (var_18)))));
                    arr_9 [i_1] [3ULL] [3ULL] [3ULL] = ((/* implicit */short) arr_6 [i_0] [i_1] [i_2] [i_1]);
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) arr_6 [i_1] [i_1] [i_0] [i_1]);
                }
                arr_11 [i_1] [(unsigned short)17] [i_1] = ((/* implicit */unsigned char) ((max(((-(((/* implicit */int) var_5)))), (((/* implicit */int) var_5)))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1 - 2] [i_1 - 2])))))));
                arr_12 [i_0] [i_0] [i_0] |= ((/* implicit */short) var_6);
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) var_13);
    var_24 = ((/* implicit */int) (~(-322366564455705359LL)));
}
