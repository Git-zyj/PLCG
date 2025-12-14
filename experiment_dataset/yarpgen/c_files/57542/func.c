/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57542
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
    var_17 = ((/* implicit */long long int) var_12);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) var_7);
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])));
    }
    /* vectorizable */
    for (unsigned short i_1 = 2; i_1 < 23; i_1 += 4) 
    {
        arr_9 [i_1 - 1] = ((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_1 - 2] [i_1 - 2])) * (((/* implicit */int) arr_7 [i_1 - 2] [i_1 - 2]))));
        arr_10 [i_1] = ((/* implicit */unsigned short) (((+(arr_5 [i_1] [i_1]))) >= (((/* implicit */int) var_10))));
        var_18 = ((/* implicit */int) ((arr_5 [i_1 + 1] [i_1 + 1]) <= (((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (arr_5 [i_1] [i_1]) : (((/* implicit */int) (signed char)-4))))));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (6876528386642740725LL)))) ? (((unsigned long long int) var_1)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_2]))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_12) < (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_7 [i_2] [i_2])), (var_7))))))))));
        arr_13 [i_2] &= ((/* implicit */unsigned short) (+((((+(arr_5 [i_2] [i_2]))) + ((-(arr_5 [i_2] [i_2])))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        arr_16 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) max((var_0), (arr_14 [i_3])))) >= (((/* implicit */int) var_8)))))) != ((+(arr_15 [i_3] [i_3])))));
        arr_17 [i_3] = ((/* implicit */long long int) max((min((max((((/* implicit */unsigned int) var_13)), (var_4))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_3])) % (((/* implicit */int) arr_6 [i_3] [i_3]))))))), (((/* implicit */unsigned int) (+(arr_5 [i_3] [i_3]))))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_4 = 3; i_4 < 13; i_4 += 3) 
    {
        var_20 = ((/* implicit */unsigned int) arr_1 [i_4]);
        arr_20 [i_4] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_4]))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_8 [i_4 + 1])) : (((/* implicit */int) arr_7 [i_4] [i_4]))))) ? (arr_15 [i_4] [i_4]) : (max((2255194092U), (((/* implicit */unsigned int) arr_14 [i_4])))))));
        var_21 = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) var_11)) && ((!(((/* implicit */_Bool) arr_6 [i_4] [i_4]))))))));
    }
}
