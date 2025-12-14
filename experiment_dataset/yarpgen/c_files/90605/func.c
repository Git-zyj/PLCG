/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90605
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
    var_20 = ((/* implicit */int) ((((/* implicit */long long int) var_1)) >= (var_7)));
    var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (~(var_18)))) ? (var_7) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65520))) : (var_13)))))) >= (((/* implicit */long long int) ((/* implicit */int) var_19)))));
    var_22 = ((/* implicit */short) (+(6618261160023451599LL)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) ((long long int) max((arr_1 [i_0] [i_1]), (arr_1 [i_1] [i_1]))));
                /* LoopSeq 1 */
                for (long long int i_2 = 1; i_2 < 13; i_2 += 2) 
                {
                    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */short) ((((/* implicit */int) var_4)) != (((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))))), (var_8)))) ? (max((6618261160023451610LL), (((/* implicit */long long int) ((unsigned short) var_5))))) : (((/* implicit */long long int) var_17)))))));
                    var_24 = ((/* implicit */int) ((_Bool) arr_3 [i_2 - 1] [i_2 + 1] [i_2 + 2]));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)50962))));
                                var_26 = ((/* implicit */signed char) (~(215219163U)));
                                var_27 = 6618261160023451599LL;
                                var_28 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((unsigned short) var_0))))) ? ((~(((/* implicit */int) (short)-26714)))) : (((/* implicit */int) min((arr_0 [i_4]), (arr_0 [i_1]))))));
                                var_29 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((1346409141) - (((/* implicit */int) arr_10 [i_1]))))) ? (max((((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_0] [i_0])), (arr_2 [i_0]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)67))))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6618261160023451610LL)) ? ((-(6618261160023451599LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 6618261160023451592LL)) ? (((/* implicit */int) arr_3 [i_0] [i_2] [i_3])) : (4194303)))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
