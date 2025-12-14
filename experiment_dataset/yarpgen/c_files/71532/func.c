/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71532
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
    var_12 = ((/* implicit */unsigned long long int) var_11);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (signed char i_4 = 3; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_13 += ((/* implicit */unsigned int) max(((+(((/* implicit */int) ((_Bool) var_9))))), (((/* implicit */int) ((signed char) arr_2 [i_0])))));
                                var_14 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_0]))));
                                arr_15 [i_2] [i_1] [i_1] [i_3] [i_3] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_0))));
                                var_15 = ((/* implicit */int) arr_8 [i_3] [i_3]);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned long long int) arr_17 [i_2 - 1] [i_1] [i_2] [i_2] [i_0]);
                        arr_18 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_9 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_0] [i_0]))) < (18014398509481983ULL))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_5), (((/* implicit */short) min((arr_0 [i_0]), (arr_0 [i_0])))))))) : ((+(max((((/* implicit */unsigned int) arr_8 [i_1] [i_1])), (13U)))))));
                        var_17 |= ((/* implicit */unsigned long long int) arr_10 [i_5] [i_2] [i_5] [i_0] [i_0]);
                        arr_19 [i_5] [i_2] [i_2] [i_0] = ((/* implicit */signed char) (((+(arr_9 [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1]))) << (((((long long int) arr_0 [i_2 + 1])) + (68LL)))));
                    }
                    arr_20 [i_1] [i_2] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) ((int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]))) ? (((/* implicit */int) ((((/* implicit */_Bool) 20ULL)) && (((/* implicit */_Bool) arr_8 [i_1] [i_1]))))) : (((/* implicit */int) arr_7 [i_1] [i_1])))) | (max((((((/* implicit */int) arr_17 [i_0] [i_1] [i_0] [i_2] [i_2])) + (((/* implicit */int) var_10)))), (((/* implicit */int) var_0))))));
                }
            } 
        } 
    } 
}
