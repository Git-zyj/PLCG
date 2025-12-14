/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68636
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
    var_14 = var_1;
    var_15 = ((/* implicit */signed char) ((((((/* implicit */int) var_7)) + (2147483647))) >> ((((~(min((var_5), (((/* implicit */unsigned int) (unsigned char)252)))))) - (4294967043U)))));
    var_16 = var_12;
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */_Bool) var_12);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */int) min((var_17), (max(((~((~(((/* implicit */int) (short)23569)))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7))))))))))));
                                var_18 -= ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) var_5)), (var_10))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2028192788)) ? (((/* implicit */unsigned int) var_2)) : (var_12))))));
                            }
                        } 
                    } 
                    var_19 *= ((/* implicit */unsigned int) ((min((var_11), (var_11))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) * (((/* implicit */int) (short)32767))))) ? (((/* implicit */unsigned long long int) min((var_2), (((/* implicit */int) var_1))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) - (var_8))))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) ((var_2) >= (((/* implicit */int) var_7))))))))));
                    var_20 -= ((/* implicit */int) (((+(((/* implicit */int) var_0)))) <= (((/* implicit */int) var_9))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 4) 
                        {
                            {
                                var_21 &= ((/* implicit */short) max((var_12), (((/* implicit */unsigned int) (~(((/* implicit */int) (short)14037)))))));
                                var_22 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) * ((+((+(var_10)))))));
                                var_23 = ((/* implicit */unsigned char) max((var_1), (((/* implicit */short) (!(((/* implicit */_Bool) var_9)))))));
                                var_24 -= ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)13)) | (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) var_6))));
}
