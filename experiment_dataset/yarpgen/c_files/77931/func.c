/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77931
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
    var_18 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) var_3)) + (var_7))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (min((((/* implicit */unsigned long long int) var_14)), ((+(var_13))))) : (((min((var_7), (((/* implicit */unsigned long long int) var_1)))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) >> (((var_4) - (3775980317344335220ULL))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_6 [14ULL] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((max((arr_3 [i_0 + 2] [i_0] [i_0]), (((/* implicit */long long int) arr_0 [i_0])))) + (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))))))) % (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)48786)) ? (507793946) : (((/* implicit */int) (unsigned short)5648))))) - (((arr_5 [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_1])))))))));
                arr_7 [i_1] [i_0] [i_0] = max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) || (((/* implicit */_Bool) arr_4 [i_0])))))) != (arr_4 [i_0])))), (((((((/* implicit */unsigned long long int) arr_3 [i_1] [i_0] [i_0])) > (arr_5 [i_1]))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(short)17])))))) : (max((((/* implicit */long long int) arr_1 [i_1] [i_1])), (arr_4 [19ULL]))))));
                var_19 = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) ((13488098543402557290ULL) * (8792912509201947090ULL))))))), (((-57085230) / (-507793946)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 16; i_4 += 1) 
            {
                {
                    arr_16 [14] [5ULL] [i_4] [5ULL] = ((/* implicit */unsigned short) min(((~(((((/* implicit */unsigned long long int) arr_10 [i_2])) + (arr_2 [22LL]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_8 [i_3])) != (arr_5 [i_4])))) < ((~(1205636641))))))));
                    var_20 = min((max((((/* implicit */unsigned long long int) min((arr_0 [i_4]), (arr_0 [i_3])))), (arr_5 [8LL]))), (((/* implicit */unsigned long long int) max((min((arr_10 [i_2]), (((/* implicit */long long int) arr_15 [i_4] [(signed char)13] [i_4])))), (((((/* implicit */_Bool) arr_3 [i_2] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2]))) : (arr_4 [i_2])))))));
                    arr_17 [i_3] [i_4] = ((/* implicit */short) arr_0 [i_2]);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (((((~(var_6))) + (2147483647))) >> (((/* implicit */int) ((var_13) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))))) | (((((/* implicit */_Bool) min((((/* implicit */long long int) var_9)), (var_17)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) % (var_11))) : (((/* implicit */unsigned long long int) (+(var_17))))))));
    var_22 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_16), (((/* implicit */unsigned long long int) var_5))))) ? (min((((/* implicit */long long int) var_12)), (var_2))) : (((/* implicit */long long int) (+(((/* implicit */int) var_0)))))))) ? (max((min((((/* implicit */int) var_12)), (var_14))), ((-(((/* implicit */int) var_1)))))) : ((~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))))))));
}
