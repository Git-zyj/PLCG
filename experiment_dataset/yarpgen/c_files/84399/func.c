/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84399
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
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) var_5))));
                                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */int) arr_6 [i_0] [(unsigned char)6] [i_2] [i_3])) == (((/* implicit */int) arr_11 [(signed char)12] [i_3])))))))) != (((((/* implicit */_Bool) max((((/* implicit */int) var_1)), (arr_5 [i_4] [i_3])))) ? (((/* implicit */long long int) ((var_2) - (((/* implicit */int) var_4))))) : (((((/* implicit */long long int) ((/* implicit */int) var_18))) - (var_10))))))))));
                                var_21 &= ((((/* implicit */_Bool) var_4)) ? ((~((~(((/* implicit */int) var_15)))))) : (((/* implicit */int) ((((/* implicit */int) arr_3 [i_1] [i_2] [(signed char)8])) > (((/* implicit */int) var_12))))));
                                var_22 = ((/* implicit */unsigned int) (-((((+(arr_5 [(_Bool)1] [i_1]))) & (((/* implicit */int) arr_6 [(unsigned char)1] [i_1] [i_1] [i_1]))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_5 = 0; i_5 < 13; i_5 += 4) 
                {
                    for (unsigned int i_6 = 0; i_6 < 13; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 13; i_7 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */int) var_11)) >= (((/* implicit */int) var_17)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned short) arr_15 [i_0] [i_1]))))) ? (((((/* implicit */int) var_4)) << (((/* implicit */int) var_1)))) : (((int) arr_19 [i_7] [i_6] [i_5] [i_1] [i_0]))))) : (((((/* implicit */_Bool) (+(var_16)))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (min((((/* implicit */long long int) arr_21 [i_0] [i_6] [i_5] [i_5] [i_7] [i_5] [i_0])), (var_10)))))));
                                arr_22 [i_0] [4ULL] [i_6] [i_5] [i_6] [i_7] = ((/* implicit */long long int) max((((/* implicit */int) var_0)), (((((arr_14 [i_0] [i_6] [i_5]) | (((/* implicit */int) arr_13 [i_0] [i_0] [i_5] [i_6] [(_Bool)1])))) | (((/* implicit */int) ((var_2) < (((/* implicit */int) arr_16 [i_6] [i_5] [i_1] [i_0])))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_8 = 1; i_8 < 8; i_8 += 2) 
    {
        for (int i_9 = 0; i_9 < 11; i_9 += 4) 
        {
            {
                var_24 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((signed char) ((arr_26 [i_8] [i_8]) * (((/* implicit */unsigned long long int) arr_24 [i_8]))))))));
                /* LoopNest 3 */
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                {
                    for (unsigned short i_11 = 0; i_11 < 11; i_11 += 3) 
                    {
                        for (unsigned short i_12 = 1; i_12 < 10; i_12 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned char) (((-(((/* implicit */int) var_5)))) * (((/* implicit */int) var_11))));
                                var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) var_18)))), ((!(((/* implicit */_Bool) var_10)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
