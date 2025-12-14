/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55792
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */_Bool) (+(((/* implicit */int) min((var_1), (arr_5 [i_1 + 2] [0U] [(unsigned short)2]))))));
                    arr_9 [i_0] [i_0] = ((/* implicit */_Bool) arr_2 [i_0]);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 20; i_3 += 1) 
                    {
                        for (long long int i_4 = 2; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned short)63386)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)0))))));
                                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (+(((/* implicit */int) (((+(arr_4 [i_0] [i_2] [i_4]))) < (((((/* implicit */int) arr_7 [2])) << (((arr_13 [(_Bool)1] [i_1] [0U] [i_1]) - (3030082181U)))))))))))));
                                var_21 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) var_6))))) == (((/* implicit */int) var_12)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) 8040575317621479618LL);
    var_23 = ((((/* implicit */long long int) ((/* implicit */int) var_14))) >= (((var_11) ? (max((((/* implicit */long long int) var_7)), (var_9))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) var_2)))))))));
}
