/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57956
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
    var_15 = ((/* implicit */short) (~((~(((/* implicit */int) var_12))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned short) arr_1 [i_0]);
        var_17 = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) ((unsigned char) arr_0 [i_0])))))));
    }
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((var_14) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1]))) : (var_9)))) ? (var_7) : ((~(((/* implicit */int) (unsigned char)3)))))))))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            arr_10 [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((((/* implicit */int) (unsigned char)0)) * (((/* implicit */int) ((((/* implicit */int) var_13)) < (-352106766))))))));
            /* LoopNest 3 */
            for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    for (signed char i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        {
                            arr_18 [i_1] [i_2] [i_3] [i_2] [i_5] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_12 [i_1] [3] [3]))));
                            arr_19 [i_1] [i_2] [i_1] [7LL] [7LL] [i_5] [i_5] = ((/* implicit */unsigned int) arr_15 [i_5] [i_4] [i_3] [i_3] [i_2] [i_1]);
                            arr_20 [i_4] [i_2] [i_4] &= ((/* implicit */short) min((max((((/* implicit */unsigned short) ((unsigned char) arr_6 [(unsigned short)16]))), (min((((/* implicit */unsigned short) arr_12 [i_1] [i_2] [i_5])), (arr_13 [i_5] [i_5] [i_5] [i_5]))))), (((/* implicit */unsigned short) ((_Bool) min((arr_13 [i_2] [i_3] [i_2] [i_5]), (arr_4 [i_4] [i_4])))))));
                        }
                    } 
                } 
            } 
        }
    }
    for (signed char i_6 = 0; i_6 < 23; i_6 += 4) /* same iter space */
    {
        var_19 = (unsigned char)6;
        var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned int) arr_22 [i_6])) < (3163558450U)));
        arr_23 [(short)14] = ((/* implicit */short) (+(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_22 [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)250))) : (arr_21 [i_6])))))));
    }
    for (signed char i_7 = 0; i_7 < 23; i_7 += 4) /* same iter space */
    {
        arr_26 [i_7] = ((/* implicit */long long int) arr_22 [13U]);
        arr_27 [i_7] = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) (unsigned char)249)) < (-352106766)))));
    }
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_10)))) : (max((((/* implicit */long long int) ((int) var_6))), (var_9)))));
    var_22 = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_0)), (var_9)));
    var_23 |= ((/* implicit */unsigned int) var_6);
}
