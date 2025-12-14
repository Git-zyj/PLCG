/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76982
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
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_20 &= ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [(unsigned short)2]))) % (((long long int) arr_3 [i_0] [i_0] [i_0])));
                arr_4 [9ULL] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) -705234834)) < (3617448133U)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 4; i_2 < 15; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            {
                arr_11 [i_3] [i_3] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_9 [i_2] [i_2] [i_2 + 2]), (((/* implicit */unsigned long long int) var_8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_2 - 1])))))) : (arr_9 [i_2] [i_2 - 1] [i_2 + 1])));
                arr_12 [i_2] [i_2] &= ((/* implicit */int) max((((min((((/* implicit */unsigned long long int) arr_0 [i_2] [i_2])), (arr_9 [i_3] [i_2] [i_2]))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 253756803)) ? (622498544526593231LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25008)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63368))) : (622498544526593231LL)))) ? (((/* implicit */int) (unsigned short)858)) : (1795928538))))));
                arr_13 [i_2] [i_2] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) var_9)) ? (max((((/* implicit */unsigned int) (unsigned short)63368)), (335485704U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) var_9);
}
