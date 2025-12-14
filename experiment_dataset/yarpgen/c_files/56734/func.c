/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56734
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
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -7783699244624892579LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (min((var_5), (((/* implicit */long long int) var_11))))));
    var_14 = ((/* implicit */unsigned char) var_10);
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            for (unsigned short i_2 = 4; i_2 < 9; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0 - 2] [i_0] [i_0] [0ULL] = (((!(arr_10 [i_0 - 3] [i_0] [i_0 - 3] [i_0] [i_0 - 1]))) ? ((~(arr_3 [i_1 - 1] [i_0 - 2] [i_0 - 2]))) : (((/* implicit */unsigned long long int) min((-7783699244624892579LL), (((/* implicit */long long int) var_6))))));
                                arr_15 [i_0] [i_1] [i_3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_5 [i_0 - 2] [i_0 - 1] [i_1 - 3] [i_2 + 1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_0 - 3] [i_0 - 3] [i_1 - 3] [i_2 + 1])) < (-4))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) + (15084089743900963299ULL)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            {
                                arr_22 [i_6] [i_5] [i_0] [i_2 + 1] [i_0] [7] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (signed char)-70))) ? (7783699244624892598LL) : (((/* implicit */long long int) 11))))) ? ((~(max((var_7), (((/* implicit */unsigned int) var_0)))))) : (var_12)));
                                arr_23 [i_6] [i_0] [i_0] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_13 [i_1 + 1] [i_2 - 4] [i_0] [i_2] [i_2] [i_2 + 1])) ? (((/* implicit */int) arr_13 [i_1 - 2] [i_1 - 2] [i_0] [i_1 - 2] [i_1 - 2] [i_2 - 2])) : (((/* implicit */int) arr_13 [i_1 - 2] [i_1 - 2] [i_0] [i_1] [i_2] [i_2 + 1]))))));
                            }
                        } 
                    } 
                    arr_24 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((max((arr_17 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 1]), (((/* implicit */long long int) var_12)))) * (((/* implicit */long long int) ((((/* implicit */int) var_8)) / ((+(((/* implicit */int) var_4)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_7 = 1; i_7 < 10; i_7 += 2) 
    {
        for (short i_8 = 0; i_8 < 14; i_8 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_9 = 4; i_9 < 12; i_9 += 2) 
                {
                    for (unsigned char i_10 = 1; i_10 < 11; i_10 += 3) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 1) 
                        {
                            {
                                arr_38 [i_11] [i_11] [i_9] [i_9] [i_8] [i_7 + 3] = ((/* implicit */unsigned char) (!(((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_9]))) >= (var_5)))));
                                arr_39 [i_7] [(signed char)13] [i_7] [i_10] [i_11] = 15084089743900963286ULL;
                                arr_40 [i_7 - 1] [i_10] [i_7] [i_10] [i_11] = ((/* implicit */_Bool) var_0);
                                arr_41 [i_7] = ((/* implicit */unsigned long long int) (_Bool)1);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 14; i_12 += 4) 
                {
                    for (unsigned char i_13 = 4; i_13 < 13; i_13 += 2) 
                    {
                        {
                            arr_48 [(unsigned char)11] [i_8] [(_Bool)1] [i_7] = ((/* implicit */unsigned short) (+((~(((/* implicit */int) arr_31 [i_7] [i_7] [i_12]))))));
                            arr_49 [i_7] [i_8] [i_12] [i_7] [i_8] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (_Bool)1)), (((unsigned long long int) min((arr_47 [i_7] [i_7] [i_12] [i_13]), (((/* implicit */int) var_0)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
