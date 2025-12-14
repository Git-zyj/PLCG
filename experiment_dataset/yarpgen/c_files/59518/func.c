/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59518
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
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            var_15 = ((/* implicit */unsigned char) (((+(arr_3 [i_1] [i_0 + 1] [i_1]))) / (min((arr_3 [i_1] [i_0 - 1] [i_1]), (arr_0 [i_0 + 2])))));
            /* LoopSeq 1 */
            for (long long int i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                var_16 = ((/* implicit */unsigned short) arr_3 [i_0 - 2] [i_1] [i_1]);
                /* LoopSeq 4 */
                for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 1; i_4 < 21; i_4 += 4) 
                    {
                        arr_12 [i_0 - 1] [4ULL] [i_2] [i_1] = var_2;
                        arr_13 [i_1] [0U] = min((arr_2 [i_1] [i_1] [i_1]), (((/* implicit */long long int) var_12)));
                    }
                    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) min((min(((~(arr_0 [i_0]))), (((/* implicit */long long int) arr_8 [i_0 + 1] [i_3])))), ((~(var_2))))))));
                    arr_14 [i_1] = ((/* implicit */long long int) arr_7 [i_2 + 1] [i_1] [i_2 + 1] [i_0] [i_3] [i_3]);
                    arr_15 [i_1] [i_1] [i_2] [i_3] [i_1] [i_1] = ((/* implicit */unsigned char) min((((arr_3 [i_0 - 2] [i_0] [i_1]) % (((/* implicit */long long int) ((/* implicit */int) var_8))))), (min((arr_3 [i_0 + 2] [i_0 + 2] [i_1]), (arr_3 [i_0 + 2] [20] [i_1])))));
                    var_18 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((arr_9 [i_0 + 2] [i_1] [i_2 + 1] [16ULL]), (arr_9 [i_0 - 2] [i_1] [i_2 - 1] [i_3])))), (min((arr_7 [1] [i_2 - 2] [i_2 - 1] [i_0 - 1] [i_0] [i_0]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_3] [i_1] [i_1] [i_0 + 1])))))))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 4) 
                {
                    var_19 = ((/* implicit */long long int) min((var_19), ((~(((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0 + 1] [i_1] [i_5]))) / (arr_2 [i_0 - 2] [i_0 + 1] [i_0 + 2])))))));
                    arr_19 [i_0] [19ULL] [i_1] = ((/* implicit */unsigned long long int) ((min((((/* implicit */int) (short)32742)), ((~(((/* implicit */int) var_5)))))) ^ (((/* implicit */int) (unsigned char)128))));
                }
                for (long long int i_6 = 0; i_6 < 23; i_6 += 4) 
                {
                    arr_22 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */short) (((((~(0ULL))) | (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1])))) ^ (((/* implicit */unsigned long long int) min((((/* implicit */long long int) 3908085281U)), (2861333022758752860LL))))));
                    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */long long int) min((-1538586955), (-1538586927)))) / ((+(arr_3 [4LL] [i_0 + 2] [i_0]))))))));
                    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) arr_10 [i_0 + 2] [i_0] [i_0 + 2] [i_0 + 2]))));
                }
                for (unsigned int i_7 = 0; i_7 < 23; i_7 += 2) 
                {
                    var_22 = ((/* implicit */unsigned int) (signed char)-52);
                    var_23 ^= ((((((/* implicit */_Bool) 1125350151028736LL)) ? (((/* implicit */unsigned long long int) 140737488355312LL)) : (8388607ULL))) ^ (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_21 [i_0 + 1] [i_0]))))));
                }
                var_24 ^= ((/* implicit */long long int) var_5);
                arr_25 [i_1] [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 1152921504606715904LL))));
            }
            arr_26 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_1])) / ((-(((/* implicit */int) arr_5 [i_1]))))));
        }
        for (signed char i_8 = 0; i_8 < 23; i_8 += 3) 
        {
            /* LoopSeq 1 */
            for (long long int i_9 = 0; i_9 < 23; i_9 += 4) 
            {
                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_27 [i_0 + 1]), (((/* implicit */int) arr_30 [i_0 - 1] [i_0 - 1] [i_0 - 1]))))) ? (min((min((arr_3 [i_0] [i_8] [i_9]), (((/* implicit */long long int) 4294967273U)))), (arr_2 [i_0] [i_8] [i_9]))) : (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_0 - 2] [9U] [i_9])))));
                var_26 = (-(min((min((2290841176U), (2004126117U))), (((/* implicit */unsigned int) min((2146911877), (arr_17 [i_0 - 2] [i_8])))))));
            }
            var_27 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
            var_28 = min((((/* implicit */long long int) (~(1862670567U)))), (min((((/* implicit */long long int) -1538586948)), (arr_29 [i_0 - 1] [i_0] [i_0 - 1]))));
        }
        arr_32 [i_0] [i_0] = ((/* implicit */long long int) var_13);
    }
    for (int i_10 = 0; i_10 < 20; i_10 += 4) 
    {
        var_29 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((arr_33 [i_10]) >= (((/* implicit */unsigned long long int) min((arr_8 [i_10] [i_10]), (((/* implicit */unsigned int) (short)-6299)))))))), (((((/* implicit */_Bool) (unsigned char)197)) ? (((/* implicit */long long int) (-2147483647 - 1))) : (0LL)))));
        arr_35 [i_10] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(arr_24 [i_10] [i_10] [i_10] [i_10]))))));
        var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 0))))))))));
    }
    var_31 = ((/* implicit */long long int) max((var_31), (min((((/* implicit */long long int) var_3)), (var_2)))));
    var_32 = ((/* implicit */unsigned long long int) var_10);
}
