/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82738
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
    var_20 = ((/* implicit */int) var_0);
    var_21 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_3 [i_0] [i_1])))))));
                var_23 = ((/* implicit */long long int) 10103060818586193888ULL);
                var_24 = ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) max((arr_2 [i_0] [i_0] [i_0 - 1]), (arr_2 [i_0] [i_0 + 2] [i_0 + 1])))) : (((/* implicit */int) (unsigned short)5643)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)8))) > (min((((((var_9) + (9223372036854775807LL))) << (((983040LL) - (983040LL))))), (((/* implicit */long long int) arr_5 [i_0 + 1])))))))));
                                arr_12 [i_4] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) (unsigned short)7168);
                                var_26 -= ((/* implicit */signed char) -1633111572);
                                var_27 = ((/* implicit */signed char) 154232137);
                            }
                        } 
                    } 
                } 
                var_28 *= ((/* implicit */_Bool) (signed char)-119);
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 2) 
        {
            {
                var_29 -= ((/* implicit */unsigned long long int) arr_13 [2LL]);
                var_30 = ((/* implicit */unsigned short) ((short) arr_14 [(signed char)7]));
            }
        } 
    } 
    var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) var_19))));
}
