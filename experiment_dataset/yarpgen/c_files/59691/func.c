/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59691
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 12; i_2 += 3) 
                {
                    for (long long int i_3 = 2; i_3 < 15; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) (~(((unsigned long long int) arr_11 [i_0] [i_0]))));
                                var_17 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_12 [i_1] [i_1] [i_3 - 2] [i_3] [i_4]), (var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3] [i_3] [i_3 + 1] [i_3] [i_3] [i_3]))) : (((arr_12 [i_1] [i_1] [i_3 + 1] [(signed char)12] [i_3 - 1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                                var_18 ^= ((/* implicit */long long int) (-((-(((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))));
                                var_19 = ((/* implicit */unsigned char) min((((/* implicit */long long int) var_15)), (7241149801566334340LL)));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */int) var_14);
                var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1] [i_1 + 1])))))));
                /* LoopNest 3 */
                for (unsigned int i_5 = 0; i_5 < 16; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 3; i_6 < 15; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 16; i_7 += 1) 
                        {
                            {
                                var_22 = ((unsigned int) 2719171860291586330ULL);
                                var_23 = ((/* implicit */signed char) max((((((((/* implicit */_Bool) arr_14 [i_1] [i_6] [i_1])) ? (arr_4 [i_0] [(unsigned char)14] [i_6 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [7LL]))))) + (((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1))))), (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_6)))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_8 = 0; i_8 < 16; i_8 += 4) 
                {
                    for (long long int i_9 = 0; i_9 < 16; i_9 += 3) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 2) 
                        {
                            {
                                arr_30 [i_9] [i_1 + 2] [i_8] [i_9] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_12))))))) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_11)))) : (((/* implicit */int) min((((/* implicit */short) var_0)), ((short)(-32767 - 1)))))))));
                                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) ((((/* implicit */int) var_3)) == (((/* implicit */int) arr_26 [(_Bool)1] [i_1 - 1] [(_Bool)1] [i_9]))))), (arr_18 [i_0] [i_9] [i_1 + 1] [i_9])))) ? (((/* implicit */unsigned int) min(((~(((/* implicit */int) var_9)))), (((((/* implicit */int) arr_11 [(_Bool)1] [i_1 - 1])) + (((/* implicit */int) arr_23 [i_0] [i_1] [(_Bool)1]))))))) : (((unsigned int) arr_14 [i_0] [i_1] [i_1 + 2]))));
                                var_25 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) ((unsigned int) var_6))) ? (((int) (unsigned char)158)) : (((/* implicit */int) arr_5 [i_1 + 1] [i_1 - 1] [i_1])))));
                                arr_31 [i_1] [i_9] [i_9] = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_10 [i_9] [i_1] [i_8])) : (((/* implicit */int) max((((/* implicit */unsigned short) (short)-32764)), (var_6)))))), (((/* implicit */int) ((signed char) ((_Bool) arr_17 [i_0] [i_0] [i_8] [i_9] [i_9]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) var_9))));
}
