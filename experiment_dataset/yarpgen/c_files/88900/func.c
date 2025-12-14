/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88900
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
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    var_19 -= var_17;
                    arr_9 [i_0] [i_2] |= ((/* implicit */unsigned short) min((min((15847047526710653199ULL), (((/* implicit */unsigned long long int) ((unsigned short) 15847047526710653208ULL))))), (((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)40273)) && (((/* implicit */_Bool) 15847047526710653230ULL))))))));
                }
                for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    var_20 *= ((/* implicit */unsigned short) 15847047526710653194ULL);
                    var_21 -= ((/* implicit */int) ((min((((((/* implicit */_Bool) 9019825932192762335ULL)) ? (8186673312535494689ULL) : (8186673312535494685ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))))))) >> (((/* implicit */int) ((short) ((arr_11 [i_0] [i_1] [i_3]) <= (arr_10 [1ULL] [1ULL] [i_3])))))));
                }
                var_22 = ((/* implicit */unsigned short) (~(max((var_8), (((/* implicit */long long int) arr_11 [i_1 + 1] [i_1] [i_1]))))));
                arr_12 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) 7603334412635043121ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_13))))) ? (((/* implicit */unsigned long long int) max((arr_11 [i_0] [i_1] [i_0]), (arr_6 [i_1] [i_0])))) : (arr_8 [i_0 - 1] [i_0] [1] [i_1 + 1])))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) var_11);
}
