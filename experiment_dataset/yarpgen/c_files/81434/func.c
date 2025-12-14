/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81434
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
    var_15 = ((/* implicit */unsigned long long int) var_12);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned char) (-((~(7766553314030334712ULL)))));
                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) == (12298909035638645506ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) var_2)), ((signed char)-122))))) : ((+(var_13))))))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 2; i_2 < 17; i_2 += 3) 
                {
                    arr_8 [i_0] [i_1] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_6 [i_0] [i_2 + 2] [i_2 + 2] [i_1])) ? (max((((/* implicit */unsigned long long int) var_5)), (var_3))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-122)))))))), (max((((((/* implicit */_Bool) (signed char)-82)) ? (var_3) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1 + 1])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) % (((/* implicit */int) (_Bool)1)))))))));
                    var_17 = ((/* implicit */long long int) 3414028167U);
                }
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 20; i_5 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) ((unsigned char) min((var_4), (arr_12 [i_0] [i_1 - 2] [i_1] [i_3] [i_0] [i_5]))))) ? (max(((-(var_11))), (((((/* implicit */_Bool) 15251854)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (var_4))))) : (((/* implicit */unsigned long long int) (+(6144U)))));
                                var_18 = ((/* implicit */_Bool) (-(((var_11) | (((/* implicit */unsigned long long int) arr_0 [i_4]))))));
                            }
                        } 
                    } 
                    arr_16 [i_1] [i_1] [i_3] = ((/* implicit */signed char) (-(((((/* implicit */unsigned int) arr_4 [i_1])) ^ (2488555846U)))));
                }
            }
        } 
    } 
}
