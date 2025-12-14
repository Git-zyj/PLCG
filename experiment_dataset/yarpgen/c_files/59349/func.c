/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59349
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
    var_20 = ((/* implicit */long long int) var_16);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_7 [4ULL] |= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1])))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_0 + 1] [i_0 - 1])), (arr_2 [i_0 - 1] [i_0 - 1]))))));
                arr_8 [i_0] [(signed char)4] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_6 [13LL] [13LL])) ? (arr_0 [(signed char)12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))) ? (((/* implicit */long long int) min((((((/* implicit */_Bool) 105413875513618189LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)3)))), (((/* implicit */int) (unsigned short)18))))) : (arr_1 [9] [i_0])));
                arr_9 [(_Bool)1] [(short)6] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)14)) * (((/* implicit */int) (unsigned short)18))))) * (arr_0 [14ULL])));
                arr_10 [0ULL] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0 + 2]))) : (arr_0 [8ULL]))), (((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)12)))));
            }
        } 
    } 
}
