/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55029
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
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            {
                var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned short)26445))))) ? (((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 + 1] [i_0 - 2])) ? (arr_5 [i_0 - 2]) : (arr_5 [i_0 - 2]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1 + 2])) ? (((/* implicit */int) arr_1 [i_1 + 2])) : (((/* implicit */int) (_Bool)1)))))));
                var_20 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 1]))))) << (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (3143691482U))))) > (min((((/* implicit */unsigned long long int) 963670946562582030LL)), (17179869184ULL))))))));
            }
        } 
    } 
    var_21 |= ((/* implicit */short) (!(((/* implicit */_Bool) 178735216173652850LL))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_2 = 3; i_2 < 8; i_2 += 2) /* same iter space */
    {
        arr_8 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_2 + 3] [i_2 + 3] [i_2])) ? (8508888445970430670LL) : (((/* implicit */long long int) arr_4 [i_2 + 2] [i_2 + 2] [(short)21]))));
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned int) ((long long int) (_Bool)1));
    }
    for (short i_3 = 3; i_3 < 8; i_3 += 2) /* same iter space */
    {
        arr_12 [i_3] [i_3] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(-1147707076)))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))) : (((long long int) arr_3 [i_3 - 1] [i_3 - 1] [i_3 + 2]))));
        arr_13 [i_3 + 2] [i_3 - 2] = min((((unsigned short) -178735216173652877LL)), (((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_3] [i_3] [i_3 - 3])) <= (((/* implicit */int) arr_3 [i_3] [i_3] [i_3 - 1]))))));
    }
}
