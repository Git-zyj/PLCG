/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96764
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */signed char) min(((~(((/* implicit */int) var_8)))), ((~(((/* implicit */int) (unsigned short)42988))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (long long int i_3 = 1; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) var_1))));
                            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) var_7)), (var_3))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) < (((/* implicit */int) var_11))))))))));
                            var_18 *= ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_15)) <= (((/* implicit */int) (unsigned short)42988)))))) <= (((((/* implicit */_Bool) (unsigned short)22549)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42970))) : (var_5))))))));
                            arr_12 [i_3] [i_0] [i_2] [i_3] [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((unsigned short)22566), ((unsigned short)42969)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_11), (((/* implicit */signed char) var_15))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_0)))))) : (var_10)));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)22566)) > (((/* implicit */int) (unsigned short)42970))));
            }
        } 
    } 
    var_20 += ((/* implicit */long long int) (unsigned short)22544);
    var_21 -= ((/* implicit */unsigned long long int) max((((var_10) >> (((((var_1) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) - (4188317210U))))), (((/* implicit */long long int) var_8))));
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                arr_18 [i_4] [i_4] [i_5] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */int) var_14)) | (((/* implicit */int) var_7))))), (max((var_0), (((/* implicit */unsigned int) var_12))))));
                /* LoopNest 3 */
                for (long long int i_6 = 4; i_6 < 10; i_6 += 4) 
                {
                    for (unsigned short i_7 = 1; i_7 < 10; i_7 += 3) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 11; i_8 += 3) 
                        {
                            {
                                arr_27 [6U] [(unsigned short)8] [i_5] [i_6 - 4] [i_5] [i_5] = ((/* implicit */int) ((_Bool) ((((/* implicit */int) var_11)) + (((/* implicit */int) var_4)))));
                                var_22 = ((/* implicit */unsigned short) var_2);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) var_0);
}
