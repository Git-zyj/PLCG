/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81909
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [(signed char)4]))) : (var_5))) << (((var_6) + (8699368374441732970LL))));
                var_10 = ((/* implicit */long long int) min((var_10), (((/* implicit */long long int) min(((((!(((/* implicit */_Bool) (signed char)-122)))) ? (((/* implicit */int) max((var_0), (arr_1 [i_0] [i_1])))) : (((/* implicit */int) max((var_2), (arr_3 [i_0] [i_0] [i_1])))))), (((/* implicit */int) max((arr_1 [11LL] [i_1]), (arr_1 [i_1] [i_0])))))))));
                var_11 = min((max((((/* implicit */long long int) arr_4 [i_1])), (arr_2 [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) | (var_4)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) min((var_0), (var_8))))))));
                var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((long long int) var_1)))));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) min((var_13), (((long long int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) / (((var_4) << (((((var_5) + (4486186220152106153LL))) - (58LL))))))))));
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        for (long long int i_3 = 2; i_3 < 15; i_3 += 2) 
        {
            {
                arr_11 [i_2] [i_3] = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_1)) ? (arr_7 [i_3 + 1]) : (arr_7 [i_3 - 1]))), (((long long int) arr_7 [i_3 - 1]))));
                var_14 = ((/* implicit */signed char) ((((/* implicit */int) min((var_1), (((/* implicit */signed char) ((((/* implicit */int) (signed char)34)) == (((/* implicit */int) var_1)))))))) << (((((((/* implicit */_Bool) min((var_0), (var_9)))) ? (((((/* implicit */_Bool) var_4)) ? (arr_6 [i_2]) : (arr_6 [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_6 [i_3]) >= (var_7))))))) - (4168797317945627469LL)))));
                arr_12 [i_2] [i_3] [i_2] = ((/* implicit */long long int) arr_10 [i_2] [i_3]);
            }
        } 
    } 
    var_15 += ((/* implicit */signed char) var_3);
}
