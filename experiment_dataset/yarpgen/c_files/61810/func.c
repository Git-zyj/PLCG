/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61810
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
    var_19 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)31588), (((/* implicit */unsigned short) (!((_Bool)0)))))))) > ((+(((((/* implicit */_Bool) 1747700903U)) ? (1747700903U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))));
    var_20 = ((/* implicit */signed char) max(((-(((/* implicit */int) (short)511)))), (((/* implicit */int) (signed char)-90))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_8 [i_1] [(unsigned short)1] [i_1] [i_1] = ((/* implicit */signed char) ((unsigned char) (unsigned char)0));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_1] [i_3 + 1] [i_1] = ((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned long long int) var_5))));
                                var_21 = ((/* implicit */short) min(((+(2293898391552254520ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)19)))))));
                                var_22 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_9 [(signed char)6] [i_2] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_5 = 2; i_5 < 19; i_5 += 4) 
    {
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            for (unsigned char i_7 = 1; i_7 < 17; i_7 += 1) 
            {
                {
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) max((((/* implicit */int) var_17)), ((+(((/* implicit */int) var_1)))))))));
                    /* LoopNest 2 */
                    for (signed char i_8 = 2; i_8 < 19; i_8 += 1) 
                    {
                        for (signed char i_9 = 0; i_9 < 20; i_9 += 4) 
                        {
                            {
                                arr_29 [i_5 - 2] [i_6] [i_7] [(_Bool)1] [i_7] [(signed char)1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_22 [i_8 - 2] [i_5]))))), (((unsigned long long int) (-(arr_18 [(short)18] [i_6]))))));
                                var_24 = ((/* implicit */_Bool) ((unsigned long long int) (~(((/* implicit */int) var_1)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
