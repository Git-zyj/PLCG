/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68835
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
    var_20 = ((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */unsigned int) var_17)), (4209142934U))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) arr_0 [i_0])))));
                arr_6 [3U] [i_1] = ((/* implicit */signed char) arr_4 [(_Bool)1] [i_1] [i_1]);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            arr_13 [i_1] = ((unsigned short) arr_0 [i_0]);
                            arr_14 [i_1] [15LL] [i_1] = ((/* implicit */_Bool) (~(((((((/* implicit */int) (unsigned char)0)) < (((/* implicit */int) var_10)))) ? (((/* implicit */int) (short)19871)) : (((/* implicit */int) (unsigned short)15997))))));
                            arr_15 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 4063223288U)) ? (min((var_1), (((/* implicit */int) (unsigned short)40097)))) : (((/* implicit */int) max(((unsigned short)2), (((/* implicit */unsigned short) (signed char)-1))))))), (((/* implicit */int) (unsigned short)0))));
                            arr_16 [(unsigned short)10] [(unsigned short)10] [i_2 + 1] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 85824361U))));
                            arr_17 [i_0] [i_3] [i_0] [i_3] [i_1] = ((((/* implicit */_Bool) var_19)) ? (max((((/* implicit */unsigned long long int) var_0)), (min((((/* implicit */unsigned long long int) (_Bool)1)), (288230376151710720ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 &= ((_Bool) 9223372036854775807ULL);
    var_22 = min((((_Bool) ((_Bool) (_Bool)1))), ((!(((/* implicit */_Bool) (-(((/* implicit */int) (short)23628))))))));
    var_23 = ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned short)0)), ((~(((/* implicit */int) (signed char)29))))));
}
