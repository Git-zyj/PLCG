/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6574
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
    var_17 = ((/* implicit */unsigned int) (+(((unsigned long long int) (-(1363344447U))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        arr_3 [i_0 + 1] = ((/* implicit */short) (-(arr_0 [i_0 + 1])));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (unsigned short)52476);
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            arr_11 [i_1] [i_1] [i_1] = ((/* implicit */long long int) (+(arr_6 [i_1])));
            /* LoopSeq 2 */
            for (short i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_2])) ? (arr_6 [i_1]) : (arr_6 [i_1])));
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((arr_6 [(unsigned char)12]) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13059))))))));
                var_20 = ((/* implicit */int) max((var_20), (((((/* implicit */int) (unsigned char)156)) / (((((/* implicit */int) var_15)) & (var_12)))))));
                var_21 = (~(var_3));
            }
            for (long long int i_4 = 1; i_4 < 20; i_4 += 4) 
            {
                var_22 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_5 [i_4 - 1]))));
                arr_19 [i_4] [i_4] = (-(((/* implicit */int) var_8)));
            }
        }
        for (short i_5 = 1; i_5 < 18; i_5 += 1) 
        {
            var_23 = var_7;
            /* LoopNest 2 */
            for (unsigned char i_6 = 0; i_6 < 21; i_6 += 2) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 2) 
                {
                    {
                        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_1]))))) ? (arr_18 [i_5] [i_5]) : ((-(arr_26 [i_1]))))))));
                        var_25 ^= (+(var_1));
                        var_26 = ((/* implicit */signed char) arr_8 [i_5 + 3]);
                    }
                } 
            } 
        }
        arr_28 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 8403676442243517968LL))));
    }
    var_27 = ((/* implicit */unsigned short) (-(18446744073709551615ULL)));
    var_28 = max((((/* implicit */long long int) var_12)), (max(((+(6489534653417800562LL))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)240))))))));
    /* LoopSeq 1 */
    for (unsigned short i_8 = 1; i_8 < 12; i_8 += 3) 
    {
        /* LoopNest 2 */
        for (short i_9 = 1; i_9 < 10; i_9 += 2) 
        {
            for (unsigned char i_10 = 0; i_10 < 13; i_10 += 1) 
            {
                {
                    var_29 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_12 [i_8 + 1]))));
                    var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) min(((~(((((/* implicit */_Bool) var_4)) ? (var_5) : (571556241878159896LL))))), (min((((long long int) (signed char)-127)), (min((((/* implicit */long long int) (unsigned char)125)), (var_5))))))))));
                }
            } 
        } 
        arr_37 [i_8 + 1] = (-(((unsigned long long int) min((1576341039366281670ULL), (((/* implicit */unsigned long long int) arr_34 [i_8 + 1] [i_8] [i_8 + 1] [i_8]))))));
    }
}
