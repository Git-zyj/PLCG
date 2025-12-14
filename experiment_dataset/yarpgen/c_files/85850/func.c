/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85850
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((476711437) <= (((/* implicit */int) (unsigned char)130)))))));
                var_21 = ((/* implicit */unsigned long long int) ((((((arr_5 [i_1] [i_1]) ? (1472280689U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))) * (((/* implicit */unsigned int) ((arr_1 [i_1]) >> (((((var_13) ? (var_14) : (((/* implicit */int) arr_2 [i_1])))) - (162))))))));
                var_22 = ((/* implicit */unsigned int) ((short) ((unsigned char) arr_0 [i_0])));
                var_23 ^= ((/* implicit */unsigned char) var_8);
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -835157101)) ? (max((((((/* implicit */int) var_7)) & (((/* implicit */int) (unsigned char)109)))), (((/* implicit */int) var_19)))) : (((/* implicit */int) (short)16384))));
    var_25 |= ((/* implicit */short) var_13);
    var_26 = ((/* implicit */_Bool) (-(2147483647)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_27 &= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_6 [i_2]))))));
        var_28 += ((/* implicit */unsigned short) var_12);
        var_29 = ((/* implicit */int) var_13);
    }
    for (int i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        arr_10 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [(signed char)6] [(signed char)6])) ? (((unsigned int) ((_Bool) arr_9 [i_3] [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((max((arr_8 [i_3]), (arr_8 [(_Bool)1]))) != (((/* implicit */unsigned int) ((/* implicit */int) ((arr_9 [i_3] [i_3]) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))))))));
        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-16406)) ? (arr_8 [i_3]) : (arr_8 [(short)15])))) ? (arr_8 [i_3]) : (max((((/* implicit */unsigned int) (unsigned char)188)), (arr_8 [(unsigned char)8])))))) ? (((arr_9 [i_3] [i_3]) & (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_9 [i_3] [i_3])))))) : (((/* implicit */unsigned int) -1823785605))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 21; i_4 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_5 = 0; i_5 < 21; i_5 += 4) 
        {
            for (int i_6 = 0; i_6 < 21; i_6 += 1) 
            {
                for (unsigned int i_7 = 1; i_7 < 20; i_7 += 2) 
                {
                    {
                        var_31 = ((/* implicit */unsigned char) arr_17 [i_4] [i_5]);
                        var_32 = (i_4 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_4] [18U])) >> (((/* implicit */int) arr_15 [i_7] [i_7] [i_7 + 1]))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_12 [i_4] [18U])) + (2147483647))) >> (((/* implicit */int) arr_15 [i_7] [i_7] [i_7 + 1])))));
                        var_33 += ((_Bool) var_18);
                        var_34 -= ((/* implicit */unsigned short) ((arr_17 [i_5] [i_7 - 1]) - (arr_17 [i_5] [i_7 - 1])));
                    }
                } 
            } 
        } 
        var_35 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(((/* implicit */int) (short)-16380))))) ^ (((((/* implicit */_Bool) var_9)) ? (arr_8 [1U]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-16380)))))));
        arr_21 [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_18 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])) < (((/* implicit */int) arr_12 [i_4] [i_4]))));
    }
}
