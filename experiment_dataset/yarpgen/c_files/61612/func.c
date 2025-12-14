/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61612
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
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 9; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_19 &= ((/* implicit */short) max((((1412565930928754133ULL) / (17034178142780797482ULL))), (((12912260467338428378ULL) | (((/* implicit */unsigned long long int) ((unsigned int) 1412565930928754121ULL)))))));
                                var_20 ^= ((max((((/* implicit */long long int) arr_10 [i_2 - 2] [i_2 + 1] [i_2] [5U] [i_2] [i_2 - 1])), (var_9))) | (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 17034178142780797478ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-23))) : (676454871U)))))));
                            }
                        } 
                    } 
                    arr_12 [(_Bool)1] [i_1] [(_Bool)1] |= ((/* implicit */int) max((arr_2 [i_2 - 2]), (max((var_11), (arr_11 [6] [i_2] [(_Bool)1] [(_Bool)1] [i_2 - 2] [i_1])))));
                    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) -645354441780342311LL))) || (((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) arr_6 [i_0] [i_1] [i_2] [i_2]))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (short i_5 = 0; i_5 < 15; i_5 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_6 = 3; i_6 < 13; i_6 += 2) 
        {
            for (signed char i_7 = 4; i_7 < 14; i_7 += 3) 
            {
                {
                    var_22 *= ((((/* implicit */_Bool) ((short) (~(arr_17 [9ULL]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_20 [i_7] [i_5] [i_5]) % (var_9)))) ? (((/* implicit */int) ((arr_21 [i_5] [i_5] [i_6 - 3] [i_6]) == (1412565930928754130ULL)))) : (arr_18 [i_6 + 1] [i_7 + 1])))) : (((long long int) arr_13 [i_5] [i_6])));
                    arr_22 [i_5] [i_7] [i_5] [i_7 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_21 [i_5] [i_5] [i_5] [i_5]), (((/* implicit */unsigned long long int) (unsigned short)25752))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_15 [i_6])))) : (arr_21 [i_6] [i_7 - 3] [i_6 + 2] [i_6])))) ? (((unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (arr_19 [i_5] [i_6 - 3] [i_5] [11]) : (((/* implicit */unsigned long long int) 4294967295U))))) : (((/* implicit */unsigned long long int) (-(arr_14 [i_7]))))));
                    var_23 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) - (1412565930928754132ULL)))) ? (((/* implicit */int) ((short) arr_21 [i_5] [i_6] [i_7] [i_7 - 2]))) : (((/* implicit */int) ((short) var_16)))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_5] [i_7 - 3]))) % (arr_19 [i_6 - 3] [i_6] [(signed char)7] [i_7 - 3])))));
                }
            } 
        } 
        arr_23 [i_5] [i_5] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_20 [i_5] [i_5] [i_5])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned char)184)))), (arr_18 [i_5] [(short)2])));
        arr_24 [i_5] = ((/* implicit */_Bool) (-(((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_16)), (6054630155665077207ULL))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (1994358644) : (arr_14 [i_5])))))))));
    }
    var_24 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31304))) > (max((1412565930928754112ULL), (((/* implicit */unsigned long long int) var_1)))));
}
