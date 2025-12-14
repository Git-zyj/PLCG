/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68215
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
    var_18 = ((/* implicit */unsigned int) max((var_9), (((/* implicit */long long int) var_13))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((arr_6 [i_0] [i_1] [i_1]), (arr_6 [i_0 - 2] [i_1] [i_2 + 1]))))));
                            arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_2 [i_3] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_9 [i_0] [(_Bool)1] [i_0])))) : (((var_13) ? (((/* implicit */unsigned long long int) var_17)) : (var_4)))))) ? ((-(arr_2 [i_2 + 1] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_7 [i_3] [(short)15] [i_0] [i_0]))))))))));
                            arr_12 [i_0] [i_0 - 2] [18U] [i_0 - 2] [i_0] [i_0 + 2] = ((/* implicit */short) ((signed char) (+(((var_12) - (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
                        }
                    } 
                } 
                arr_13 [i_0] = min(((~(((/* implicit */int) max((var_16), (var_16)))))), (((((/* implicit */_Bool) (+(arr_8 [(_Bool)1] [i_1] [i_0 - 2] [i_0] [i_0 - 2])))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_6 [i_0 + 2] [i_0 + 2] [i_0 + 2])))) : ((+(var_17))))));
                arr_14 [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) min((arr_0 [i_0 + 2] [i_1]), (arr_0 [i_0 + 2] [i_0]))))));
                arr_15 [(signed char)4] [(signed char)4] = ((/* implicit */int) max(((-(arr_4 [i_0 - 3] [i_0 - 3] [i_0 - 2] [i_1]))), (((/* implicit */long long int) max((var_11), (var_11))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_16))) > (((((/* implicit */_Bool) var_16)) ? (var_9) : (((/* implicit */long long int) var_2)))))))));
    var_20 = ((/* implicit */short) (~(((/* implicit */int) ((unsigned char) (-(var_7)))))));
}
