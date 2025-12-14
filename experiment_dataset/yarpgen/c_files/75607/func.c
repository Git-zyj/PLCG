/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75607
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
    var_12 = ((/* implicit */signed char) ((((_Bool) var_4)) ? (max(((-(((/* implicit */int) var_9)))), ((~(((/* implicit */int) var_9)))))) : (((/* implicit */int) var_8))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                var_13 &= var_0;
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 4; i_2 < 12; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_14 = var_1;
                                var_15 = ((/* implicit */unsigned char) min(((-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_3 [i_0])))))), (((((/* implicit */int) min((arr_7 [(signed char)0] [i_3]), (((/* implicit */unsigned short) (_Bool)1))))) - (((var_6) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))))));
                                var_16 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) max((arr_7 [i_3] [i_3]), (((/* implicit */unsigned short) var_1))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)27))))) : (((((/* implicit */_Bool) var_11)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_1 - 1]))))))));
                                var_17 += ((/* implicit */_Bool) ((arr_5 [2] [2] [2]) >> (((/* implicit */int) ((((4221104197U) << (((73863098U) - (73863071U))))) <= (((/* implicit */unsigned int) (-(((/* implicit */int) var_6))))))))));
                                var_18 += ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) - (min((4221104197U), (832524705U)))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned int i_5 = 1; i_5 < 11; i_5 += 1) 
                {
                    var_19 = ((((/* implicit */int) max((arr_3 [i_0]), (((/* implicit */unsigned short) max((((/* implicit */unsigned char) var_6)), (var_9))))))) > (((((/* implicit */int) var_1)) | (((/* implicit */int) arr_2 [i_0] [i_1 + 2] [i_5 + 3])))));
                    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1 + 1] [i_0])))))) ? (((var_7) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1 + 1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1 + 2] [i_0]))) : (var_3))))));
                }
                for (unsigned short i_6 = 0; i_6 < 14; i_6 += 2) 
                {
                    var_21 = ((/* implicit */_Bool) ((unsigned long long int) (-(((/* implicit */int) var_4)))));
                    var_22 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned int) arr_10 [i_0] [(signed char)10] [i_0])))))));
                }
                var_23 = (-(2133668254U));
                var_24 = min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))), (var_7));
            }
        } 
    } 
    var_25 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) != (min((((/* implicit */long long int) (!(var_8)))), (((var_11) - (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_2)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_10))))), (((/* implicit */long long int) var_10))))))))));
    var_27 = ((/* implicit */signed char) var_10);
}
