/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89415
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
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_4 [i_1] [i_1] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_0 [i_0]))))) >= (arr_1 [i_0] [i_1]))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned char) var_11)))));
                            var_20 = ((/* implicit */unsigned int) (+(((long long int) ((unsigned char) (unsigned char)184)))));
                            var_21 = ((/* implicit */unsigned int) (+((-(((/* implicit */int) var_5))))));
                            arr_11 [i_1] [i_2] = ((/* implicit */_Bool) (((+(arr_5 [i_2]))) << (((min((arr_5 [i_0]), (arr_5 [i_3]))) - (351508103U)))));
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) min((arr_7 [i_0] [i_1] [i_2] [i_3]), (arr_7 [i_2] [i_1] [i_2] [i_3])))) >= (((/* implicit */int) arr_0 [i_0]))))) * (((/* implicit */int) max((arr_3 [i_1] [i_2] [i_3]), (arr_3 [i_0] [i_1] [i_2]))))));
                        }
                    } 
                } 
                arr_12 [i_0] [i_1] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_7 [i_1] [i_1] [i_1] [i_1])))), (((/* implicit */int) var_16))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) var_11);
}
