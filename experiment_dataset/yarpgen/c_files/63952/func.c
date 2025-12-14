/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63952
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
    var_17 = ((/* implicit */unsigned int) 0);
    var_18 = var_10;
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_7 [i_2] [i_1 + 1] [i_0] [(short)10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_4 [6LL] [i_1 + 1])), (5761708328498246336ULL)))) ? (((/* implicit */int) arr_4 [i_2] [2ULL])) : (min((((((/* implicit */_Bool) 5761708328498246312ULL)) ? (((/* implicit */int) (unsigned short)53811)) : (2147483646))), (((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) % (((/* implicit */int) arr_5 [i_0] [6LL] [i_2]))))))));
                    arr_8 [i_2] [(unsigned char)22] [(signed char)0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_6 [i_1 + 1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (((5761708328498246312ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2] [i_1 + 1])))))))) ? (12685035745211305280ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_3 [i_1 + 1] [i_1 - 1] [i_1 + 1])), ((unsigned char)142)))))));
                    arr_9 [i_0] [i_0] [12] [i_2] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_0]))))), (35184372088831ULL)));
                }
            } 
        } 
    } 
}
