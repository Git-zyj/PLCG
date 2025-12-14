/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62666
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_14 = ((/* implicit */_Bool) var_2);
        var_15 += ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)44791))))) == (((arr_1 [i_0]) ^ (arr_1 [i_0]))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 2; i_1 < 10; i_1 += 1) 
    {
        var_16 += ((/* implicit */unsigned int) ((arr_3 [7LL]) / ((+(arr_3 [(signed char)8])))));
        arr_5 [i_1] [(_Bool)1] = ((/* implicit */long long int) arr_2 [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 10; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                {
                    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) var_2))));
                    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (((+(((/* implicit */int) var_0)))) >> (((4294967295U) / (4294967291U))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 1) 
        {
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1 + 2] [i_1])) ? (arr_4 [i_1 + 2] [i_1]) : (arr_4 [i_1 + 1] [i_1])));
            var_20 = ((/* implicit */unsigned short) arr_11 [(unsigned short)4] [6LL]);
            arr_16 [i_1] = ((/* implicit */unsigned short) (+(var_2)));
            var_21 += ((/* implicit */_Bool) arr_13 [(signed char)10] [(_Bool)0] [(unsigned char)4]);
        }
    }
    for (int i_5 = 0; i_5 < 19; i_5 += 4) 
    {
        arr_20 [(unsigned short)13] = ((/* implicit */unsigned long long int) max((max((arr_17 [i_5] [i_5]), (arr_17 [i_5] [i_5]))), (((/* implicit */long long int) ((unsigned short) 4294967293U)))));
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 3) 
        {
            for (unsigned char i_7 = 3; i_7 < 17; i_7 += 2) 
            {
                {
                    arr_28 [i_7] [0U] [i_5] = ((/* implicit */unsigned int) min((var_9), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) < (((((/* implicit */_Bool) var_6)) ? (arr_26 [i_5] [i_5]) : (((/* implicit */unsigned long long int) var_9)))))))));
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 19; i_8 += 3) 
                    {
                        for (unsigned short i_9 = 2; i_9 < 17; i_9 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [(_Bool)1]))));
                                var_23 = ((/* implicit */unsigned short) var_11);
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */signed char) min((((/* implicit */long long int) (unsigned char)7)), (var_9)));
                }
            } 
        } 
    }
    for (long long int i_10 = 1; i_10 < 8; i_10 += 4) 
    {
        arr_35 [i_10] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (arr_15 [(unsigned short)11] [i_10 + 2]) : (((/* implicit */long long int) min((min((9U), (((/* implicit */unsigned int) arr_22 [2U] [i_10])))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10))))))))));
        var_25 = (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_10 + 1] [i_10]))) + (var_2))));
    }
    var_26 -= ((/* implicit */unsigned short) var_4);
}
