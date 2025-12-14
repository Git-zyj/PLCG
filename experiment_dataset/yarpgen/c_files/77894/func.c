/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77894
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
    var_16 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 3; i_2 < 22; i_2 += 4) 
                {
                    for (long long int i_3 = 2; i_3 < 21; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */long long int) ((unsigned int) arr_7 [i_1 + 2] [i_2 + 1] [i_3 - 2]))) ^ (((((/* implicit */_Bool) (~(var_11)))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_0] [i_0] [i_2 - 3]))))) : (arr_6 [i_3] [i_3 - 2] [i_3] [i_3 - 1]))))))));
                            /* LoopSeq 1 */
                            for (unsigned long long int i_4 = 3; i_4 < 21; i_4 += 4) 
                            {
                                var_18 = ((/* implicit */_Bool) (~(arr_10 [i_2] [i_2 - 2] [i_2 - 2] [i_3] [i_4 + 1] [i_4 - 1])));
                                var_19 = ((/* implicit */long long int) (signed char)-87);
                            }
                            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_3] [i_1 + 4])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-87)))))), (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2 + 1])) ? (((/* implicit */long long int) 4294967295U)) : (arr_6 [i_0] [15LL] [i_2] [i_3 + 1]))))) : (((/* implicit */long long int) ((int) (+(((/* implicit */int) (unsigned short)12097)))))))))));
                            arr_12 [i_3] [i_1 + 3] [i_2 - 3] [i_2 - 3] [i_2 + 1] |= ((/* implicit */int) var_3);
                        }
                    } 
                } 
                arr_13 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((unsigned char) ((_Bool) max(((short)1022), (((/* implicit */short) (signed char)86))))));
            }
        } 
    } 
}
