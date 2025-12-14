/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70526
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    var_12 ^= min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 1]))))), (max((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_8))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 8; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) (~(((/* implicit */int) (!((!(((/* implicit */_Bool) arr_9 [i_1])))))))));
                                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_10)) ? (859058477) : (var_7))), ((-(((/* implicit */int) arr_4 [i_4] [i_0] [i_0]))))))) && (((/* implicit */_Bool) var_10))));
                                arr_12 [(signed char)6] [i_1] [(signed char)6] [i_3] [i_0] |= ((/* implicit */long long int) 18446744073709551606ULL);
                            }
                        } 
                    } 
                }
                for (short i_5 = 0; i_5 < 10; i_5 += 2) 
                {
                    arr_16 [i_1] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)23610)) ? (5387245608140918702ULL) : (((/* implicit */unsigned long long int) -859058460))))) ? (((/* implicit */int) ((arr_3 [i_1 + 1] [0U]) < (arr_3 [i_1 + 1] [i_1 - 1])))) : (max((((/* implicit */int) (unsigned char)97)), (((((/* implicit */_Bool) (signed char)123)) ? (859058483) : (((/* implicit */int) arr_0 [i_1 + 1] [i_0])))))));
                    var_15 = ((/* implicit */unsigned long long int) var_6);
                    /* LoopSeq 1 */
                    for (long long int i_6 = 0; i_6 < 10; i_6 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((unsigned long long int) ((max((((/* implicit */unsigned long long int) arr_17 [i_6] [i_1 + 1] [i_1 + 1])), (arr_8 [i_0]))) >> ((((~(((/* implicit */int) (short)-10672)))) - (10630)))))))));
                        arr_20 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) var_7);
                    }
                    var_17 |= ((/* implicit */long long int) (-(min((arr_15 [i_0] [i_0]), (((/* implicit */unsigned long long int) (unsigned char)96))))));
                }
                for (long long int i_7 = 1; i_7 < 7; i_7 += 4) 
                {
                    var_18 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1679460456U)) ? (arr_8 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)179)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_1] [i_1] [i_7 - 1] [i_1 - 1])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1])) ? (arr_22 [i_0] [i_0] [i_7] [i_7 - 1]) : (((/* implicit */unsigned long long int) 1525006442U))))) ? (max((((/* implicit */unsigned long long int) arr_10 [i_1] [i_1] [i_7] [i_7 + 3] [i_7 + 3] [i_1 - 1] [i_1])), (var_8))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)154)))))))));
                    var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) var_3))));
                    arr_23 [i_1] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)159)) ? ((-(((/* implicit */int) arr_6 [i_0])))) : (var_7)));
                    arr_24 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)93))));
                }
                var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) (-((+(var_9)))));
    var_22 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(var_8)))))))));
}
