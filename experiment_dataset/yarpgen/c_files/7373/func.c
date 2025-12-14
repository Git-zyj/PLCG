/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7373
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
    var_17 ^= ((/* implicit */unsigned short) var_6);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_18 &= ((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_1 + 2] [8LL]);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((unsigned long long int) ((arr_1 [i_4]) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)124)))))) / (((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */unsigned short) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (arr_9 [i_0] [i_0] [i_4]))))))))));
                                var_20 ^= ((/* implicit */signed char) (+(min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_3])) : (((/* implicit */int) arr_0 [i_1]))))), ((~(3513748076763325212LL)))))));
                            }
                        } 
                    } 
                    var_21 ^= ((/* implicit */short) ((max((((/* implicit */long long int) arr_3 [i_2])), (((((/* implicit */_Bool) 3758096384U)) ? (((/* implicit */long long int) 3758096384U)) : (arr_5 [(short)14] [i_1] [i_1] [i_0]))))) > ((~((-(arr_1 [i_1])))))));
                    arr_13 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_12 [13LL] [19LL] [20LL] [i_2] [i_1] [i_0]), (arr_12 [i_0] [i_1 + 1] [i_1 - 2] [i_2] [i_2] [i_2])))) ? (((/* implicit */int) ((_Bool) arr_11 [4U] [i_1] [2U] [i_0] [i_0]))) : (((/* implicit */int) arr_0 [i_0]))))) ? (min((((arr_8 [i_0] [i_1] [i_1]) ? (var_1) : (arr_7 [(short)5] [i_0] [(short)3] [(short)14] [24LL] [(signed char)20]))), (arr_5 [i_1 - 2] [i_0] [i_0] [i_1 + 2]))) : (((/* implicit */long long int) (+(max((arr_6 [i_0] [i_0] [i_1] [i_2]), (((/* implicit */unsigned int) arr_2 [(short)9] [i_1])))))))));
                }
            } 
        } 
    } 
}
