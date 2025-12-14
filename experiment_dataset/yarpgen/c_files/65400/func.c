/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65400
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (~(((/* implicit */int) var_4)))))));
                    arr_8 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned short) arr_3 [i_0] [i_2]))))) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_1 + 1] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))), (((unsigned long long int) var_2))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_15 [0LL] [0LL] [i_0] [0LL] [i_4 - 1] = ((/* implicit */unsigned short) ((unsigned char) (+(var_11))));
                                arr_16 [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) max((var_7), (var_7)))) : (min((((/* implicit */long long int) arr_1 [i_0])), (var_11)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_14 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_0 [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [6U]))) : (max((max((var_3), (arr_12 [4] [i_0]))), (((/* implicit */long long int) min(((unsigned short)60195), (((/* implicit */unsigned short) (unsigned char)4)))))))));
    }
    for (unsigned char i_5 = 2; i_5 < 17; i_5 += 4) 
    {
        var_15 = ((/* implicit */short) (unsigned char)11);
        var_16 = ((/* implicit */short) var_11);
        var_17 ^= ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_6 = 0; i_6 < 10; i_6 += 2) 
    {
        for (unsigned char i_7 = 3; i_7 < 7; i_7 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) ((((long long int) (unsigned short)40962)) << (((min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_2 [i_6])), ((unsigned short)1760)))), (((((/* implicit */_Bool) arr_12 [i_6] [i_6])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_7] [i_7] [i_6] [i_6] [i_6] [i_6] [i_6]))))))) - (168U)))));
                var_19 = max((((((/* implicit */_Bool) arr_19 [i_7 - 1])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_7 + 3]))))), (((/* implicit */long long int) arr_19 [i_6])));
                /* LoopNest 2 */
                for (unsigned char i_8 = 4; i_8 < 9; i_8 += 4) 
                {
                    for (unsigned short i_9 = 0; i_9 < 10; i_9 += 2) 
                    {
                        {
                            var_20 |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) - (var_8)));
                            arr_31 [i_6] [7LL] [i_6] [(unsigned short)8] = var_9;
                            var_21 |= ((/* implicit */int) max((var_6), (((/* implicit */long long int) var_7))));
                            var_22 = ((/* implicit */_Bool) max(((-(((var_11) / (((/* implicit */long long int) ((/* implicit */int) arr_21 [(short)1] [i_6]))))))), (((/* implicit */long long int) arr_6 [i_6] [i_7] [i_6]))));
                            arr_32 [i_6] [i_6] [i_8] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_9)), (var_6)))) ? (((((/* implicit */_Bool) var_3)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) -1)), (var_7)))))))));
                        }
                    } 
                } 
                arr_33 [i_6] [(unsigned short)0] [i_6] = ((/* implicit */unsigned short) max((var_10), (((/* implicit */long long int) var_0))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_10 = 0; i_10 < 22; i_10 += 3) 
    {
        for (short i_11 = 0; i_11 < 22; i_11 += 4) 
        {
            {
                arr_38 [i_10] = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)0))));
                arr_39 [i_10] [i_10] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */short) arr_35 [i_10] [i_11])), (min(((short)32757), (((/* implicit */short) (unsigned char)174))))))) ? (((var_8) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_35 [i_10] [i_10]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) var_0))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))))));
}
