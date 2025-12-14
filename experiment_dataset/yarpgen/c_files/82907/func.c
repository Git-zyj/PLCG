/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82907
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
    var_17 = var_5;
    var_18 = ((/* implicit */unsigned char) max((((unsigned int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) 9223372036854775807LL))))), (((/* implicit */unsigned int) var_13))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) ((var_4) ? ((-(max((((/* implicit */long long int) 2248587450U)), (-1901363350585494131LL))))) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)127)) - (((/* implicit */int) (signed char)-127)))))));
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((unsigned char) -53544048)))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) arr_6 [i_1] [i_1]);
        var_21 = ((/* implicit */unsigned int) (-((~(((/* implicit */int) (unsigned short)65535))))));
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
            {
                for (int i_4 = 4; i_4 < 7; i_4 += 3) 
                {
                    {
                        arr_14 [0] [0] [0] &= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-103)) || (((/* implicit */_Bool) arr_5 [i_4])))))) : (arr_8 [i_1])))));
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */unsigned long long int) arr_2 [i_4 - 2])) : (arr_7 [i_2] [i_4 - 2] [i_2])));
                    }
                } 
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned short) ((int) (unsigned char)24));
    /* LoopNest 2 */
    for (signed char i_5 = 2; i_5 < 12; i_5 += 2) 
    {
        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 2) 
        {
            {
                var_24 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (unsigned char)201)), (((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_6]))) >= (arr_15 [i_5 + 2] [i_5 + 2]))))));
                var_25 &= ((/* implicit */long long int) max((((/* implicit */unsigned int) max((arr_16 [i_5 - 1]), (arr_16 [i_5 + 2])))), (((((/* implicit */_Bool) arr_18 [i_5 - 1])) ? (4294967271U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16113)))))));
            }
        } 
    } 
}
