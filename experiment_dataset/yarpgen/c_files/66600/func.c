/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66600
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
    var_17 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) var_0)))));
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_11) : (var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((unsigned int) var_11)) <= (((/* implicit */unsigned int) ((int) var_5))))))) : (((((/* implicit */_Bool) (signed char)-118)) ? (min((var_7), (var_2))) : (var_7)))));
    var_19 = ((/* implicit */signed char) (+(((((/* implicit */int) (signed char)-67)) - (((/* implicit */int) (signed char)-118))))));
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(var_16)))) | (max((((/* implicit */long long int) ((unsigned int) var_15))), (((var_2) / (var_3)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    var_21 = ((/* implicit */unsigned char) arr_3 [i_2] [i_0] [i_0]);
                    arr_7 [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) -228964045));
                }
                /* LoopNest 3 */
                for (long long int i_3 = 4; i_3 < 9; i_3 += 4) 
                {
                    for (int i_4 = 1; i_4 < 9; i_4 += 2) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 10; i_5 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) min(((((!(((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_4] [i_5])))) ? (min((((/* implicit */long long int) (short)30496)), (-1575660511779294370LL))) : (((/* implicit */long long int) (+(((/* implicit */int) (short)-30515))))))), (min((min((-8052481319992396944LL), (-3968920269501306086LL))), (((/* implicit */long long int) ((unsigned short) (short)-30525)))))));
                                arr_16 [i_0] [i_0] = ((/* implicit */unsigned char) min((var_1), (((/* implicit */short) (!(((/* implicit */_Bool) min((var_10), (((/* implicit */long long int) arr_10 [i_0] [i_4 - 1] [i_0] [i_0]))))))))));
                                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) 8052481319992396931LL)) ? (((/* implicit */int) min((arr_3 [i_3 - 4] [i_0] [i_0]), (arr_3 [i_3 + 1] [i_0] [i_3 - 1])))) : (((/* implicit */int) (short)-30496))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
