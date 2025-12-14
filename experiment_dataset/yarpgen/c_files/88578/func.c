/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88578
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 4; i_0 < 9; i_0 += 2) 
    {
        var_16 = ((((/* implicit */_Bool) ((unsigned long long int) (+(((/* implicit */int) (signed char)69)))))) ? (var_14) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 3621082565U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-97))) : (673884744U)))))));
        var_17 = ((/* implicit */unsigned short) max((((/* implicit */long long int) var_9)), (((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */long long int) var_6)) : (var_12)))));
    }
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */short) (-(max((arr_2 [i_1]), (arr_2 [i_1])))));
        var_19 = ((/* implicit */unsigned long long int) max((arr_1 [i_1]), (max((arr_1 [i_1]), (arr_1 [i_1])))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 1; i_2 < 8; i_2 += 2) 
        {
            for (int i_3 = 2; i_3 < 8; i_3 += 4) 
            {
                {
                    var_20 ^= ((((/* implicit */_Bool) ((signed char) arr_5 [i_2 + 2]))) ? (((/* implicit */int) ((signed char) arr_5 [i_2 + 2]))) : ((-(((/* implicit */int) var_4)))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        var_21 &= max((((/* implicit */int) (unsigned char)219)), (1651857537));
                        arr_10 [i_1] [i_1] [i_2] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_15))))))), (max((max((arr_2 [i_2]), (((/* implicit */unsigned long long int) var_5)))), (max((((/* implicit */unsigned long long int) var_1)), (arr_0 [i_1])))))));
                    }
                    for (signed char i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 2) /* same iter space */
                        {
                            arr_16 [i_2] [i_2 + 2] [i_2] [i_2] [i_2] [i_6] [i_6] = ((/* implicit */unsigned short) (-(((long long int) (-(arr_4 [i_1] [i_1]))))));
                            var_22 = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (((unsigned long long int) arr_13 [i_2 + 2] [i_6] [i_3 - 1] [i_5] [i_5])));
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_13 [(signed char)5] [(signed char)5] [(signed char)5] [i_5] [i_6])))))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 10; i_7 += 2) /* same iter space */
                        {
                            var_24 |= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))))), (max((((/* implicit */unsigned long long int) arr_5 [i_7])), (arr_6 [i_2 + 2] [i_2 + 2])))));
                            arr_20 [i_1] [i_2] [i_3 + 1] [i_2] [(unsigned char)8] [(unsigned char)3] = ((/* implicit */short) (~(((/* implicit */int) (signed char)116))));
                        }
                        var_25 += ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [(unsigned short)9] [i_5] [i_3] [i_3] [i_2] [i_1] [i_1]))));
                        var_26 = ((/* implicit */unsigned int) max((max((arr_7 [i_5] [i_1]), (((/* implicit */short) arr_8 [i_2 + 1] [i_1])))), (max((arr_7 [i_1] [i_1]), (((/* implicit */short) arr_14 [i_1] [(unsigned short)2] [i_1] [i_1] [i_1]))))));
                    }
                    arr_21 [i_2] [i_2] = var_5;
                }
            } 
        } 
        arr_22 [i_1] [i_1] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_15))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_1] [i_1] [i_1] [i_1] [i_1]))) : (arr_0 [i_1])))));
    }
    for (unsigned short i_8 = 0; i_8 < 10; i_8 += 4) /* same iter space */
    {
        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) (~(3621082565U))))));
        /* LoopSeq 1 */
        for (unsigned char i_9 = 1; i_9 < 9; i_9 += 2) 
        {
            arr_30 [i_8] [i_8] [i_8] = ((/* implicit */signed char) arr_13 [i_9 - 1] [i_9 + 1] [i_9 - 1] [i_9 + 1] [i_9 + 1]);
            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (+(max((((/* implicit */unsigned long long int) (unsigned char)219)), (((unsigned long long int) (signed char)-115)))))))));
            arr_31 [i_8] = ((/* implicit */unsigned char) ((unsigned long long int) max((max((arr_4 [i_8] [i_9 - 1]), (((/* implicit */int) arr_19 [i_9] [i_9] [i_9] [i_8] [i_8])))), (((int) (signed char)127)))));
        }
    }
    for (signed char i_10 = 1; i_10 < 9; i_10 += 4) 
    {
        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) max((((unsigned char) arr_33 [i_10 + 2])), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_33 [i_10 + 3]))))))))));
        var_30 = ((/* implicit */short) max(((-((-(arr_33 [i_10]))))), (((/* implicit */int) var_3))));
        var_31 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) 3621082556U)))))));
    }
    var_32 = var_4;
}
