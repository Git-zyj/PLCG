/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72296
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
    for (short i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_3 [i_0 - 2] [i_1] [i_1]);
                var_16 = ((/* implicit */_Bool) (+(min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_1]))))), (max((((/* implicit */long long int) arr_2 [i_0 + 1])), (arr_4 [i_0] [i_0] [i_0])))))));
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) min((((/* implicit */long long int) max((((/* implicit */unsigned short) (signed char)-108)), ((unsigned short)31325)))), (((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_1])), (arr_2 [i_0]))))) & (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_4 [i_0] [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 3; i_2 < 23; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            {
                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */int) arr_11 [i_3] [i_2])) : (((/* implicit */int) arr_7 [i_3] [i_2]))))))) ? (((((/* implicit */int) max((arr_11 [i_2 + 2] [i_3]), (((/* implicit */unsigned short) arr_7 [i_2 - 2] [i_2 - 2]))))) - (((/* implicit */int) max((arr_11 [i_2 - 3] [15LL]), (((/* implicit */unsigned short) arr_7 [i_2 - 1] [(short)13]))))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((arr_11 [i_2] [i_3]), (arr_11 [i_2 - 2] [i_3]))))) < (((arr_10 [i_2]) - (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2] [i_2]))))))))));
                arr_12 [i_3] [i_2] = ((/* implicit */unsigned long long int) ((max((((((/* implicit */int) arr_7 [(unsigned short)2] [(unsigned short)2])) << (((((/* implicit */int) arr_8 [i_2] [i_3])) + (33))))), ((+(((/* implicit */int) arr_7 [i_2] [i_2])))))) == (max((((((/* implicit */int) arr_8 [i_2] [i_3])) ^ (((/* implicit */int) arr_7 [(signed char)0] [(signed char)0])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_3] [i_2])) && (((/* implicit */_Bool) arr_8 [i_3] [i_2])))))))));
                var_19 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2 - 1] [i_2 - 1]))) : (arr_10 [i_3]))) / (min((((/* implicit */long long int) arr_7 [i_2 + 1] [i_3])), (arr_10 [i_2])))))) ? (max(((-(arr_9 [i_2]))), (((arr_10 [i_2]) / (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2] [i_2]))))))) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)9359), ((unsigned short)31325))))));
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) max(((~(((/* implicit */int) arr_8 [i_2] [i_3])))), (((/* implicit */int) arr_7 [6LL] [i_2]))))), (((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [13LL] [i_3])) ? (((/* implicit */int) arr_11 [i_2] [i_3])) : (((/* implicit */int) arr_11 [i_2] [i_2]))))) : (arr_9 [i_2 - 2]))))))));
                var_21 |= ((/* implicit */short) min((((/* implicit */long long int) (+((~(((/* implicit */int) arr_7 [i_3] [i_3]))))))), (((((/* implicit */long long int) (~(((/* implicit */int) arr_8 [i_2] [i_3]))))) ^ ((~(arr_10 [i_2])))))));
            }
        } 
    } 
    var_22 = var_6;
    var_23 = ((/* implicit */unsigned short) (~(((/* implicit */int) max((((/* implicit */unsigned short) (short)16913)), ((unsigned short)34230))))));
}
