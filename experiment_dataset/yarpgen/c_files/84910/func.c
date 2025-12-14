/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84910
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
    var_13 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) var_1)), (var_6)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) ((max((arr_3 [i_0]), (((/* implicit */unsigned int) arr_1 [i_0])))) < (((/* implicit */unsigned int) ((/* implicit */int) (((!(((/* implicit */_Bool) var_2)))) || (((/* implicit */_Bool) max((218653705), (218653705))))))))));
                var_14 |= ((/* implicit */short) min((arr_4 [i_0] [i_0]), (max((10256752284206843875ULL), (((unsigned long long int) arr_3 [i_0]))))));
                arr_6 [i_0] [i_1] = ((/* implicit */int) arr_1 [i_1]);
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */unsigned long long int) var_2)) < (10256752284206843875ULL)))), (arr_2 [7])))) || (((/* implicit */_Bool) min((-1), (((/* implicit */int) arr_1 [i_1])))))));
                arr_7 [i_0] [(signed char)8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) * (((unsigned long long int) arr_2 [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_4 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)1683))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */unsigned int) 5)) : (var_8)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) -1)) : (min((((/* implicit */unsigned long long int) var_5)), (10256752284206843879ULL)))))))));
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_16 [i_2] [i_3] [i_4] = ((/* implicit */_Bool) min((min((((/* implicit */long long int) ((unsigned short) arr_14 [i_3]))), (((((/* implicit */_Bool) var_3)) ? (arr_10 [i_3] [15] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [(_Bool)1] [i_3] [(unsigned char)1]))))))), (((/* implicit */long long int) (!(var_12))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(8250699951279638269LL)))) ? (min((((/* implicit */long long int) var_6)), (var_9))) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))))) >= (9480510258407184928ULL)));
                                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (~((+(arr_11 [i_3] [i_6]))))))));
                                var_19 -= ((/* implicit */_Bool) var_5);
                                var_20 = ((/* implicit */long long int) ((((arr_14 [i_6]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_2]))) : (var_11))) >> (((/* implicit */int) arr_14 [i_2]))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned short) ((((long long int) 8189991789502707738ULL)) <= (((long long int) arr_14 [i_2]))));
                    arr_21 [i_2] [i_2] [i_4] = ((/* implicit */signed char) (_Bool)1);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
    {
        for (unsigned int i_8 = 0; i_8 < 24; i_8 += 4) 
        {
            {
                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((unsigned char) (~(((((/* implicit */_Bool) (short)-30575)) ? (((/* implicit */unsigned long long int) var_9)) : (var_11)))))))));
                var_23 = ((((_Bool) ((((/* implicit */_Bool) (unsigned short)20518)) ? (arr_27 [i_7 - 1]) : (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (min((((unsigned long long int) arr_26 [(_Bool)1] [i_7])), (arr_27 [i_7 - 1]))));
                var_24 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (10256752284206843875ULL) : (((/* implicit */unsigned long long int) var_5))))))))) + (((((/* implicit */long long int) min((var_6), (((/* implicit */unsigned int) (_Bool)1))))) & (min((var_0), (var_9)))))));
                var_25 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)30574)) ? (arr_27 [i_7 - 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_7 - 1] [i_7 - 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)7)) ? (arr_26 [i_7 - 1] [(signed char)6]) : (((/* implicit */int) (unsigned char)255))))) : ((+(arr_23 [i_7 - 1] [i_8]))))))));
            }
        } 
    } 
}
