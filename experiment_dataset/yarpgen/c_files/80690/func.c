/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80690
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (((/* implicit */signed char) (-(((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)112))) + (var_11))) / (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)23)) / (((/* implicit */int) arr_2 [i_1])))))))))) : (((/* implicit */signed char) (-(((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)112))) + (var_11))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)23)) / (((/* implicit */int) arr_2 [i_1]))))))))));
                var_18 = (unsigned char)51;
                var_19 = ((/* implicit */unsigned int) min(((+(((((/* implicit */unsigned long long int) 247993429687341648LL)) + (7029628614639859332ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_10))) ? (((/* implicit */int) (unsigned short)23018)) : (((/* implicit */int) arr_0 [i_0])))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)67)))));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (var_11) : (var_13))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_14) > (((/* implicit */int) var_4))))))))) ? (((/* implicit */unsigned long long int) var_16)) : (var_11)));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-6531)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_13 [i_2] [i_3]))))) ^ ((~(min((arr_6 [i_3]), (((/* implicit */long long int) var_1))))))));
                            arr_14 [i_2] [i_2] [i_4] [i_2] [i_2] [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_3]))) : (var_8)))) || (((/* implicit */_Bool) arr_11 [i_2] [i_4 - 1] [i_2])))) ? (5080869166124591754ULL) : (((/* implicit */unsigned long long int) ((((arr_5 [i_2]) + (9223372036854775807LL))) << (((min((((/* implicit */unsigned int) (_Bool)1)), (1799244974U))) - (1U))))))));
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_4 - 1] [i_4 - 1] [i_5]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_12 [i_4 - 1] [i_5] [i_4 - 1] [i_5] [i_2])) <= (((/* implicit */int) arr_8 [i_4 - 1] [i_4 - 1] [i_5]))))) : (((/* implicit */int) ((((/* implicit */int) arr_8 [i_4 - 1] [i_5] [i_5])) > (((/* implicit */int) arr_8 [i_4 - 1] [i_4] [i_5]))))))))));
                            arr_15 [i_5] [i_5] [i_5] [i_2] |= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (+(var_14)))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_2] [i_2])) + (-409615856)))) : (((((/* implicit */_Bool) 2495722334U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-247993429687341648LL))))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)175))) - (arr_5 [i_5])))));
                        }
                    } 
                } 
                arr_16 [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) ((_Bool) 2495722334U))), (var_12)));
            }
        } 
    } 
}
