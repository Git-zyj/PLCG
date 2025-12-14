/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59835
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
    var_12 = ((/* implicit */long long int) (~(var_9)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned int) max((arr_3 [(short)10]), (((/* implicit */long long int) ((arr_2 [i_1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
                /* LoopNest 3 */
                for (long long int i_2 = 3; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [(short)7] [i_0] [i_3] [i_0] = ((/* implicit */int) min(((unsigned short)10747), (((/* implicit */unsigned short) (!(((((/* implicit */_Bool) arr_2 [i_3])) && (((/* implicit */_Bool) var_10)))))))));
                                arr_14 [i_4] [i_3] [i_3] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [(short)9] [i_3] [i_0] [i_3] [i_0])))))));
                                var_14 -= ((/* implicit */unsigned int) (~(((11330661428110879681ULL) ^ (((/* implicit */unsigned long long int) arr_12 [i_0] [i_2 + 4] [i_2] [i_2 + 4] [i_2 - 1]))))));
                                var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (+(((/* implicit */int) max((var_7), (((/* implicit */unsigned short) arr_11 [i_2] [i_2] [i_2 - 3] [i_0] [i_2 - 2]))))))))));
                            }
                        } 
                    } 
                } 
                var_16 += ((/* implicit */short) ((11139516929621759595ULL) > (((/* implicit */unsigned long long int) (~(arr_3 [i_1]))))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) (+(max((((((/* implicit */unsigned long long int) var_10)) & (7307227144087792006ULL))), ((~(7307227144087791996ULL)))))));
}
