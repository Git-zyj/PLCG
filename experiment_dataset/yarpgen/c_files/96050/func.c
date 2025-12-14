/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96050
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
    for (unsigned int i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) - (((((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [i_0]))) / ((-9223372036854775807LL - 1LL)))) + (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1] [i_0 + 1])))))));
                arr_6 [i_0] [i_1] = ((/* implicit */long long int) (((~(4227858432U))) / (((/* implicit */unsigned int) ((/* implicit */int) ((-6595572827517353065LL) != (((/* implicit */long long int) ((/* implicit */int) (short)4589)))))))));
                var_16 = ((/* implicit */signed char) (short)-12419);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        for (short i_3 = 2; i_3 < 20; i_3 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    for (int i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        {
                            var_17 = ((((((/* implicit */int) arr_14 [i_3 - 1])) + (2147483647))) << ((((-(((/* implicit */int) arr_14 [i_3 - 1])))) - (58))));
                            var_18 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_2] [i_3 + 1]))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_6 = 0; i_6 < 21; i_6 += 3) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        for (unsigned int i_8 = 1; i_8 < 19; i_8 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) arr_7 [17U]))));
                                var_20 = ((((2140997725) ^ ((+(arr_21 [i_3]))))) | ((-(((/* implicit */int) arr_13 [i_2] [i_8 + 2])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_9 = 2; i_9 < 11; i_9 += 2) /* same iter space */
    {
        arr_26 [i_9] = ((/* implicit */signed char) 268369920);
        arr_27 [i_9] = ((/* implicit */unsigned long long int) 143552238122434560LL);
    }
    for (int i_10 = 2; i_10 < 11; i_10 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */short) 862204051U);
        var_22 = ((/* implicit */unsigned char) (-(((int) (short)-12419))));
    }
    /* LoopNest 2 */
    for (long long int i_11 = 0; i_11 < 24; i_11 += 3) 
    {
        for (unsigned int i_12 = 0; i_12 < 24; i_12 += 2) 
        {
            {
                arr_37 [i_12] [i_11] &= ((/* implicit */int) ((((((/* implicit */unsigned long long int) 3094866642969471577LL)) + (14528481820372643797ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)12419), (arr_36 [i_11] [i_12])))))));
                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) var_14))));
            }
        } 
    } 
}
