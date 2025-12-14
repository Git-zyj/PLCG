/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97060
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
    var_10 = ((/* implicit */long long int) var_7);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_11 += ((/* implicit */signed char) ((((/* implicit */long long int) min((-722975597), (((/* implicit */int) (unsigned short)8273))))) >= (arr_4 [(short)2])));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned int i_3 = 3; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) + (arr_9 [i_0] [i_0] [i_4] [i_0] [i_4])))) >= (arr_12 [i_0] [i_2] [i_3 - 2] [i_3] [i_4] [i_4]))))));
                                var_13 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_13 [i_4] [i_1] [i_2] [i_1] [i_0] [i_0])))) : ((~(-7627963527964550268LL))))));
                                var_14 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (+(arr_4 [i_0])))))) ? (min(((+(arr_5 [i_0]))), (((/* implicit */long long int) ((((/* implicit */long long int) var_7)) >= (arr_3 [i_0])))))) : (((/* implicit */long long int) arr_0 [i_0]))));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */_Bool) max((7627963527964550268LL), (7627963527964550279LL)));
                /* LoopNest 3 */
                for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 2) 
                {
                    for (short i_6 = 4; i_6 < 13; i_6 += 3) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 14; i_7 += 1) 
                        {
                            {
                                arr_24 [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned short) min((((((/* implicit */_Bool) (-(((/* implicit */int) arr_20 [i_0] [i_1] [i_0] [i_5] [i_7]))))) ? ((-(arr_22 [i_7] [i_6 - 4] [i_1] [i_1] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_11 [8] [i_7] [i_6] [i_5] [i_1] [i_0]), (arr_16 [i_0]))))))), (((/* implicit */unsigned int) ((((/* implicit */int) max((arr_2 [i_0] [i_0]), (arr_16 [i_0])))) << (((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) >> (((arr_17 [i_0]) - (4130357551U))))))))))) : (((/* implicit */unsigned short) min((((((/* implicit */_Bool) (-(((/* implicit */int) arr_20 [i_0] [i_1] [i_0] [i_5] [i_7]))))) ? ((-(arr_22 [i_7] [i_6 - 4] [i_1] [i_1] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_11 [8] [i_7] [i_6] [i_5] [i_1] [i_0]), (arr_16 [i_0]))))))), (((/* implicit */unsigned int) ((((/* implicit */int) max((arr_2 [i_0] [i_0]), (arr_16 [i_0])))) << (((((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) >> (((((arr_17 [i_0]) - (4130357551U))) - (3623044276U))))) - (2852)))))))));
                                arr_25 [i_0] [i_1] = ((unsigned long long int) ((((/* implicit */_Bool) ((4586086269787679807LL) % (-7627963527964550268LL)))) ? (((((((/* implicit */int) arr_15 [i_1])) + (2147483647))) >> (((((/* implicit */int) arr_15 [i_5])) + (69))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_23 [i_0] [i_1] [i_0] [i_1] [i_7]))))));
                                var_16 = ((/* implicit */_Bool) (-(7627963527964550252LL)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */short) max((var_7), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5)))) | (((/* implicit */int) max((var_5), (var_6)))))))));
}
