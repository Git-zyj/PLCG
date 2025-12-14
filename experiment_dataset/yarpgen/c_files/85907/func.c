/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85907
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) max((1007264013), (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) >= (((/* implicit */int) arr_1 [i_0] [i_0])))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
    }
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) / (max((12382460023696385510ULL), (((/* implicit */unsigned long long int) (unsigned char)14))))));
        var_18 = ((/* implicit */_Bool) var_16);
        var_19 = ((/* implicit */short) ((((((/* implicit */int) var_8)) + (2147483647))) >> (((((arr_0 [i_1]) - (((var_7) + (((/* implicit */unsigned long long int) var_11)))))) - (2589902967382521473ULL)))));
    }
    for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) min((min((((/* implicit */unsigned int) ((((/* implicit */int) var_5)) + (((/* implicit */int) var_16))))), (2750386058U))), (((/* implicit */unsigned int) (_Bool)1)))))));
        /* LoopSeq 2 */
        for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [(signed char)8] [i_3] [i_2])) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_8 [i_2])) + (arr_11 [i_2] [i_2] [i_2]))))));
            arr_13 [i_2] [i_2] = ((/* implicit */short) (+(var_9)));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 20; i_4 += 3) 
        {
            var_22 = ((/* implicit */int) var_5);
            var_23 = ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_8)) : (arr_6 [i_2] [i_4]));
            /* LoopNest 2 */
            for (long long int i_5 = 0; i_5 < 20; i_5 += 3) 
            {
                for (unsigned char i_6 = 1; i_6 < 16; i_6 += 1) 
                {
                    {
                        var_24 = ((/* implicit */long long int) var_6);
                        arr_22 [(signed char)14] [i_4] [i_5] [(unsigned char)8] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-15249)) || (arr_20 [i_6 + 4])));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (short i_7 = 0; i_7 < 20; i_7 += 1) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 3) 
            {
                {
                    arr_28 [18] [i_2] [i_8] [i_8] = ((/* implicit */int) (unsigned char)31);
                    var_25 ^= ((((((/* implicit */unsigned long long int) var_15)) ^ (13ULL))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */long long int) var_2)) ^ (var_15))) : (((/* implicit */long long int) (~(arr_19 [i_2] [8U]))))))));
                    var_26 = ((/* implicit */unsigned char) var_10);
                }
            } 
        } 
        var_27 |= ((/* implicit */_Bool) var_1);
    }
    var_28 -= ((/* implicit */short) ((var_7) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_7) < (((/* implicit */unsigned long long int) var_0))))))));
}
