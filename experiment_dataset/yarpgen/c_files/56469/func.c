/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56469
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]);
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (unsigned char i_3 = 2; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                arr_12 [i_2] [(signed char)8] [i_2] [(signed char)8] [i_0] |= ((/* implicit */unsigned char) (-(min(((~(15985981038428842996ULL))), (2337370932365800467ULL)))));
                                arr_13 [i_0] [i_0] [i_0] [i_3] [i_4] = ((/* implicit */int) (signed char)105);
                                arr_14 [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */long long int) ((696012670U) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_3] [i_2] [i_0]))))))))), (var_10)));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10))));
                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (-(((/* implicit */int) ((((var_18) > (-6225205708595968090LL))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -6225205708595968090LL)) ? (((/* implicit */int) (signed char)60)) : (((/* implicit */int) (signed char)-105)))))))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) var_1)) / (var_17)))))));
    var_22 = ((/* implicit */int) var_9);
    var_23 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((unsigned int) var_18))), (((long long int) ((((/* implicit */_Bool) (signed char)38)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15808))) : (16109373141343751154ULL))))));
}
