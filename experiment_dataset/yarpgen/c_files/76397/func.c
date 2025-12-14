/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76397
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_0 - 1] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (((+(((/* implicit */int) arr_4 [i_0])))) | (((/* implicit */int) ((((/* implicit */int) arr_4 [i_1])) <= (-852913360))))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)5580))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1] [(unsigned short)9]))) : (arr_0 [i_1])))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 23; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_4 [9LL])), (arr_6 [i_0] [(unsigned char)22] [23U])))), (((var_1) | (((/* implicit */long long int) arr_0 [i_0])))))) % (((/* implicit */long long int) ((unsigned int) arr_2 [i_0] [i_1])))));
                            arr_10 [(unsigned char)1] [i_1] [i_1] [15ULL] &= var_2;
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (int i_4 = 1; i_4 < 22; i_4 += 3) 
                            {
                                var_19 = ((/* implicit */unsigned char) (_Bool)1);
                                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (-(arr_7 [i_1] [i_2 + 2] [i_3]))))));
                            }
                            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                            {
                                var_21 *= (-(var_5));
                                var_22 = ((/* implicit */_Bool) max((var_22), ((!(((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_0] [i_0 - 1] [i_0] [i_5 - 1])))))))));
                            }
                        }
                    } 
                } 
                var_23 |= ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)5580)) * (((/* implicit */int) (unsigned short)65522))))) ? ((+(arr_1 [i_0 - 1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65522)) ? (((/* implicit */int) arr_11 [i_0 - 1] [i_1] [i_0 - 1] [i_1] [i_1])) : (((/* implicit */int) (short)32767))))))));
            }
        } 
    } 
    var_24 = var_17;
    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((unsigned long long int) -852913360)), (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (((unsigned short) var_13))))) : (((/* implicit */int) var_9)))))));
    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */int) (unsigned short)19895)) >> (((/* implicit */int) (short)0)))), (((/* implicit */int) var_15))))) ? (422655196U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
}
