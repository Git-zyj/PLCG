/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62967
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
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (int i_1 = 4; i_1 < 9; i_1 += 3) 
        {
            for (short i_2 = 3; i_2 < 8; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        var_10 = ((/* implicit */long long int) var_2);
                        var_11 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (max((arr_7 [i_2 - 3] [i_2] [(unsigned short)0]), (((arr_6 [i_0] [i_1 + 1] [4] [i_3]) << (((/* implicit */int) var_3)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                    }
                    arr_10 [i_0 + 2] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) 5429976902908537429LL)) ? (((/* implicit */int) (short)32535)) : (((/* implicit */int) ((((/* implicit */int) (short)-32551)) >= (((/* implicit */int) (short)32520)))))));
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        for (int i_5 = 0; i_5 < 10; i_5 += 1) 
                        {
                            {
                                var_12 = ((((/* implicit */_Bool) (+(arr_1 [2U])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32527)) ? (7090387308955686821LL) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0 + 1] [3LL] [i_0 + 1] [i_0] [i_0 - 1])))))) ? (((/* implicit */int) ((_Bool) (short)-32521))) : (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0]))))));
                                var_13 = ((/* implicit */int) arr_1 [i_1]);
                                var_14 = ((/* implicit */unsigned int) (short)32551);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_6 = 2; i_6 < 9; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 2; i_7 < 9; i_7 += 1) 
                        {
                            {
                                arr_24 [i_0] [i_1] [i_1] [i_1 - 4] [i_1 - 2] [i_1] = ((/* implicit */_Bool) 100283592U);
                                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_21 [i_7 - 2] [i_6 - 2] [i_7] [i_0 + 2] [i_2 - 3])), (var_6)))) ^ (((long long int) arr_21 [i_7 - 2] [i_6 - 2] [i_2] [i_0 - 1] [i_2 + 2])))))));
                                arr_25 [i_0] [i_0] [i_1 + 1] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (signed char)-12)) ? (((/* implicit */long long int) 418536242U)) : (-9190422826862992216LL)))));
                                arr_26 [i_0] [i_1] [(short)0] [i_7 - 1] &= min((arr_17 [i_6 + 1] [i_6] [i_2 + 1] [i_6 + 1] [i_0 + 1]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_16 [(short)3] [i_6 + 1] [i_2] [i_1] [i_0]), (((/* implicit */unsigned int) var_9))))) ? (((((/* implicit */_Bool) arr_13 [(short)0] [i_6 + 1] [i_6] [i_6 - 2])) ? (((/* implicit */int) (short)32521)) : (1545389019))) : (((/* implicit */int) arr_0 [i_0 + 2]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) max((var_6), (3612011621U)))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) var_9)) ? (var_7) : (var_8)))))))));
    /* LoopNest 2 */
    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
    {
        for (short i_9 = 1; i_9 < 21; i_9 += 4) 
        {
            {
                arr_32 [i_9] [i_9] [i_8] = var_7;
                var_17 ^= ((/* implicit */long long int) arr_30 [i_8] [9U]);
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_31 [i_8 - 1] [i_8 - 1] [i_8 - 1]), (arr_31 [i_8 - 1] [i_8 - 1] [i_8 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_31 [i_8] [i_8] [i_8 - 1]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [(signed char)7] [i_9 + 2] [i_9])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_8] [i_8 - 1] [i_8 - 1])))))))))) : (((((/* implicit */long long int) ((/* implicit */int) ((arr_27 [4LL] [i_9 + 2]) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)-4441))))))) * (var_7)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_10 = 0; i_10 < 14; i_10 += 3) 
    {
        for (unsigned short i_11 = 2; i_11 < 12; i_11 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_12 = 0; i_12 < 14; i_12 += 1) 
                {
                    for (int i_13 = 0; i_13 < 14; i_13 += 1) 
                    {
                        {
                            var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) (+(((/* implicit */int) var_5))))) : (((-9190422826862992227LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28531)))))));
                            var_20 = arr_34 [i_10];
                        }
                    } 
                } 
                var_21 -= ((/* implicit */unsigned short) min((((/* implicit */long long int) arr_29 [i_10] [i_11 + 2])), (((((/* implicit */_Bool) min(((unsigned short)0), (((/* implicit */unsigned short) (short)32517))))) ? (((/* implicit */long long int) -102012305)) : (((((/* implicit */_Bool) (short)32567)) ? (9190422826862992207LL) : (((/* implicit */long long int) -102012300))))))));
            }
        } 
    } 
}
