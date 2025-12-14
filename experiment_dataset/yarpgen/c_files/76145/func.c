/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76145
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_0] [7U] [7U] [i_0] = ((/* implicit */int) arr_8 [i_0] [i_1] [(unsigned short)3] [4LL]);
                            var_20 = ((/* implicit */unsigned long long int) ((max((((((/* implicit */int) arr_0 [i_0])) << (((117440512) - (117440509))))), (((/* implicit */int) arr_6 [i_0] [i_0])))) < (((/* implicit */int) (unsigned char)21))));
                            var_21 = ((/* implicit */unsigned char) min((((/* implicit */int) ((_Bool) ((((/* implicit */int) (unsigned short)7168)) > (((/* implicit */int) (unsigned short)52528)))))), ((~(((/* implicit */int) max(((unsigned short)13007), ((unsigned short)65535))))))));
                            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) 2559177857U))));
                            arr_11 [(unsigned short)8] [(unsigned short)8] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned short) (signed char)127)), ((unsigned short)27))), (((/* implicit */unsigned short) arr_5 [i_0] [(unsigned char)2] [4] [i_0]))))) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_3 [4U]))), (((/* implicit */unsigned int) (signed char)56)))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_0] [i_1] [i_1]))))) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_9 [(unsigned short)9] [i_1] [i_1])) : (((/* implicit */int) arr_9 [i_1] [i_0] [i_0])))) : ((~(((/* implicit */int) arr_9 [i_1] [i_1] [i_0]))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((655627148U), (((/* implicit */unsigned int) min((var_3), (((/* implicit */short) var_16)))))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_17))));
    var_25 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) var_3))))));
    var_26 = (+(var_4));
}
