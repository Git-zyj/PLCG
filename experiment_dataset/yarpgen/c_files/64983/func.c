/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64983
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) min((var_10), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_16) > (((/* implicit */long long int) var_5)))))) ^ (var_10)))));
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (max((((long long int) arr_7 [i_0])), (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_6)))) ? (min((((/* implicit */unsigned int) arr_9 [i_0])), (arr_5 [i_0] [i_1] [i_2]))) : (((unsigned int) var_4)))))));
                    var_18 ^= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (_Bool)1)), ((~(arr_5 [i_2 - 1] [i_2 + 2] [i_2 + 2])))));
                    arr_11 [i_0] [i_0] [i_2 + 2] = ((/* implicit */_Bool) arr_6 [i_0] [(short)1] [20]);
                    arr_12 [i_0] [i_1] [i_2 + 2] = ((/* implicit */int) ((unsigned short) min((((var_16) ^ (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1]))))), (((/* implicit */long long int) var_11)))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
    {
        var_19 = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59542))) < (arr_5 [i_3] [i_3] [i_3]));
        var_20 = ((/* implicit */unsigned short) ((arr_2 [i_3]) | (((/* implicit */int) ((_Bool) (signed char)88)))));
    }
    for (long long int i_4 = 2; i_4 < 17; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 18; i_5 += 2) 
        {
            for (unsigned short i_6 = 1; i_6 < 17; i_6 += 3) 
            {
                {
                    arr_25 [i_5] [i_5] [i_4] = ((/* implicit */unsigned short) ((var_1) < (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) var_6))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (signed char)-104))))) : (((/* implicit */int) ((unsigned short) var_13))))))));
                    arr_26 [i_4 - 2] [i_5] [i_6 - 1] [i_6 - 1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_15))))) ? (((/* implicit */long long int) 2590307821U)) : (max((arr_21 [i_4 - 2] [i_4]), (var_16)))))) ^ (((((/* implicit */_Bool) max((var_16), (arr_24 [i_4] [i_4] [i_4] [i_4])))) ? (((var_6) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) : (((/* implicit */unsigned long long int) (~(var_1))))))));
                    arr_27 [i_6 + 1] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_5])) / (var_13)))) ? (((/* implicit */unsigned long long int) arr_23 [i_4 - 1])) : (var_9))) == (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)20)) ^ (-1521430817))))));
                    arr_28 [i_4] = ((/* implicit */int) arr_0 [i_4]);
                    arr_29 [i_4] [i_4] [i_4] [i_4] = 468554774;
                }
            } 
        } 
        arr_30 [(_Bool)1] &= ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_9 [i_4])) + (2147483647))) >> (((((/* implicit */int) (unsigned short)62398)) - (62398)))))) : (((unsigned long long int) (unsigned short)0))))));
        arr_31 [i_4] = ((/* implicit */long long int) max((arr_0 [i_4]), (((/* implicit */unsigned int) var_15))));
        arr_32 [i_4] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((unsigned int) (~(1704659497U))))), (max((var_9), (((/* implicit */unsigned long long int) (!((_Bool)0))))))));
    }
}
