/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7052
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
    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : ((+(var_4))))) : (((((/* implicit */int) var_10)) | (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_1))))))))))));
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) | (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) var_6))))));
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2777738944U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-53))) : (4294967295U)));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 8; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 9; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_1] [(signed char)5] [(signed char)5] [8ULL] [i_1] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)54351)) * (((/* implicit */int) (short)-1))))) ? (((arr_6 [i_0 + 1] [i_0 + 2] [i_0 - 1] [i_1 + 2]) << (((arr_6 [(_Bool)1] [i_0] [i_0 + 2] [i_1 + 2]) - (3168464409U))))) : ((~(arr_6 [i_0] [i_0] [i_0 + 2] [i_1 + 1])))));
                                var_20 = ((/* implicit */short) (!(((((/* implicit */_Bool) arr_0 [i_1 + 2])) || (((/* implicit */_Bool) arr_0 [i_1 + 2]))))));
                                arr_16 [i_3] [i_3] [(short)9] [i_1] [i_3] [i_3] = ((/* implicit */signed char) ((((arr_0 [i_0 + 1]) << (((((/* implicit */int) var_0)) + (121))))) ^ (((/* implicit */unsigned int) ((arr_8 [i_1]) ^ (arr_8 [i_1]))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_5 = 1; i_5 < 9; i_5 += 2) 
                {
                    var_21 = ((/* implicit */long long int) var_5);
                    var_22 = ((/* implicit */signed char) arr_5 [i_1] [i_0]);
                    arr_21 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) | (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_16)) : (min((((/* implicit */int) (short)-24345)), (var_15)))))));
                }
                var_23 = ((/* implicit */short) var_11);
            }
        } 
    } 
    var_24 &= ((/* implicit */unsigned short) max((((4294967295U) ^ (1127435120U))), (((/* implicit */unsigned int) var_9))));
}
