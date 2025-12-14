/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81389
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
    var_20 = ((/* implicit */unsigned short) var_10);
    var_21 = ((/* implicit */int) var_3);
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_3 = 1; i_3 < 14; i_3 += 1) 
                    {
                        arr_9 [i_0 - 1] [i_2] [i_0] = ((/* implicit */int) (-((+(arr_5 [6U] [i_1] [i_0 - 1])))));
                        var_22 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_3]))))));
                        var_23 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)44243))));
                    }
                    for (unsigned char i_4 = 3; i_4 < 16; i_4 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((arr_1 [(signed char)12]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_2 - 1] [i_4 - 2])))))), ((~(max((((/* implicit */unsigned long long int) arr_4 [i_1 - 1] [i_0])), (arr_5 [i_0] [i_1] [i_4 - 3])))))));
                        arr_12 [i_0 - 1] [i_0] [i_2] [9LL] = (i_0 % 2 == 0) ? (((/* implicit */unsigned short) min((max((max((var_11), (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) arr_6 [i_0 - 1] [i_2] [i_0 - 1] [i_0 - 1])))), (((/* implicit */long long int) (-(((((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0 - 1])) << (((arr_4 [i_1 - 1] [i_0]) - (103524247))))))))))) : (((/* implicit */unsigned short) min((max((max((var_11), (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) arr_6 [i_0 - 1] [i_2] [i_0 - 1] [i_0 - 1])))), (((/* implicit */long long int) (-(((((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0 - 1])) << (((((arr_4 [i_1 - 1] [i_0]) - (103524247))) - (574589241)))))))))));
                        arr_13 [i_0] [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned char) min((max((arr_11 [i_0] [i_1] [i_1] [i_1 - 2] [i_1] [i_0]), (min((arr_0 [i_0] [i_0]), (arr_1 [i_0]))))), (arr_2 [i_0] [i_2] [i_0])));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 17; i_6 += 2) 
                        {
                            {
                                arr_21 [i_0] [i_0] = ((/* implicit */int) max(((((-(arr_5 [i_0] [i_0] [i_6]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_6] [i_5] [i_2 + 1] [i_1] [i_0]))))), ((+((+(arr_5 [i_0] [i_0] [i_0])))))));
                                var_25 = (-(((/* implicit */int) arr_7 [7U] [i_0] [i_2] [i_0])));
                                var_26 = ((((/* implicit */_Bool) max(((-(arr_18 [i_0 - 1] [i_0 - 1] [i_2 + 1] [i_5]))), ((+(arr_14 [i_0] [i_0] [i_0] [i_0])))))) ? (min((((((/* implicit */_Bool) arr_4 [i_2] [i_0])) ? (arr_5 [i_6] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_6] [(unsigned short)14] [i_2 - 1] [i_0])) <= (((/* implicit */int) arr_17 [i_2 + 1] [i_0] [i_2 + 1]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (arr_16 [i_1] [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1 - 1] [i_1 - 1] [i_5] [i_6] [i_1 - 2])))))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)44254)) ? (6034562100158579727ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44243)))));
                }
            } 
        } 
    } 
}
