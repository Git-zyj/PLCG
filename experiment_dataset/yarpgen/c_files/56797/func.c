/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56797
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
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_10 ^= ((/* implicit */unsigned short) ((min((((/* implicit */int) (short)-1)), (var_2))) & (((((/* implicit */_Bool) (short)-9)) ? (((/* implicit */int) var_0)) : (-2147483640)))));
                var_11 = ((short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128))) * (1795023479U)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 16; i_6 += 4) 
                        {
                            {
                                arr_20 [i_4] [3] [i_6] [i_5] [i_3] [i_3] = ((/* implicit */short) (+((-(((/* implicit */int) (short)8))))));
                                arr_21 [i_2] [i_3] [i_4] [(unsigned char)2] [i_5] [14U] [i_3] = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) & (((/* implicit */int) (unsigned char)128))))) >= ((~(1795023479U)))));
                                var_12 ^= ((/* implicit */unsigned char) ((((((-7094400156217604123LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_4))))) + (9223372036854775807LL))) << (((((var_1) & (((/* implicit */long long int) 4112073865U)))) - (1695630464LL)))));
                            }
                        } 
                    } 
                } 
                arr_22 [i_3] = ((/* implicit */int) ((unsigned char) min((536862720), (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))));
                var_13 = ((/* implicit */unsigned int) min((((short) 1795023479U)), (((/* implicit */short) ((((/* implicit */int) (short)3399)) != (((/* implicit */int) var_3)))))));
                arr_23 [i_3] [i_3] = ((/* implicit */short) ((unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)58312))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_7 = 1; i_7 < 11; i_7 += 4) 
    {
        for (int i_8 = 0; i_8 < 13; i_8 += 3) 
        {
            for (unsigned int i_9 = 0; i_9 < 13; i_9 += 4) 
            {
                {
                    arr_33 [i_7 + 1] [i_7] [i_7 + 1] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */int) (short)-15489)) + (var_2)))) : (((((/* implicit */long long int) ((/* implicit */int) var_0))) + (-7094400156217604123LL)))));
                    var_14 = ((/* implicit */int) var_1);
                    var_15 = ((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) var_9)))));
                    var_16 += ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? ((-(((/* implicit */int) ((unsigned char) var_6))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-9)) ^ (((/* implicit */int) var_9))))) || (((/* implicit */_Bool) var_7)))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) var_8);
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((min((((/* implicit */short) var_0)), (var_3))), (var_5)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (var_8))))));
}
