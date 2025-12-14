/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55593
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
    var_17 = max((((((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (var_3))) - (((-4125584461792830342LL) + (((/* implicit */long long int) var_5)))))), (var_3));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_18 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */int) (unsigned char)45))))))) ? (arr_3 [(unsigned short)2] [(unsigned short)2]) : (var_8)));
                    var_19 = ((/* implicit */int) var_7);
                    var_20 = ((/* implicit */short) var_14);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_21 = (-(var_3));
                                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) arr_3 [i_0] [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_11 [8] [i_1 - 3] [i_1 - 3] [0U] [i_1 + 1] [0U] [i_3])))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49532))) : (5003413688288793854LL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 2) 
    {
        for (short i_6 = 3; i_6 < 11; i_6 += 1) 
        {
            {
                var_23 &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_19 [i_6 - 2] [11LL] [i_6])) : (((/* implicit */int) (unsigned char)45)))) / (((((/* implicit */_Bool) arr_19 [i_6 - 3] [i_6] [i_6 - 3])) ? (var_6) : (((/* implicit */int) arr_19 [i_6 - 3] [i_6] [i_6 - 3]))))));
                var_24 = arr_17 [3U] [i_5] [i_6];
                var_25 = ((/* implicit */unsigned char) -4918560104917840015LL);
                var_26 += var_2;
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned long long int) (unsigned short)16);
}
