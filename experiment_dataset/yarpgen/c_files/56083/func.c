/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56083
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
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned char) var_3);
                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */long long int) (+(((/* implicit */int) min(((unsigned char)192), (((/* implicit */unsigned char) (_Bool)1)))))))) + (-7398426233858112639LL))))));
                var_22 = ((/* implicit */long long int) ((unsigned long long int) min((var_17), (((/* implicit */long long int) var_8)))));
                var_23 -= ((/* implicit */unsigned int) -7398426233858112639LL);
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (short i_3 = 3; i_3 < 20; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                {
                    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) var_2))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (signed char i_6 = 3; i_6 < 20; i_6 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_15 [i_4 + 1] [i_4] [i_5 - 1] [i_6] [i_4 + 1] [(signed char)4]))))))))));
                                var_26 *= ((/* implicit */unsigned long long int) (-(((7398426233858112639LL) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)58980)) && (((/* implicit */_Bool) 1099478073344ULL))))))))));
                                var_27 |= ((/* implicit */int) (unsigned short)41611);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 4; i_7 < 20; i_7 += 2) 
                    {
                        for (unsigned short i_8 = 1; i_8 < 20; i_8 += 2) 
                        {
                            {
                                var_28 |= ((/* implicit */unsigned long long int) var_4);
                                arr_23 [i_8] [i_3] [i_4] [i_3] [i_3] [i_2] = max((min((var_14), (((/* implicit */long long int) arr_14 [i_8 + 1] [i_7] [i_7] [i_7 - 2])))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_14 [i_8 + 1] [9ULL] [9ULL] [i_7 - 2]))))));
                                var_29 |= ((/* implicit */long long int) -1837873607);
                                arr_24 [i_2] [i_3] [i_3] [i_8] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)6556)) ^ (((/* implicit */int) arr_1 [i_3 + 1]))));
                            }
                        } 
                    } 
                    arr_25 [i_3] [i_3] [i_3] = (_Bool)1;
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)60)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_17))) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))))));
}
