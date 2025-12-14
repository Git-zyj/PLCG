/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61078
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
    var_10 = ((/* implicit */signed char) var_7);
    var_11 = ((/* implicit */long long int) (short)28379);
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        var_12 *= (-(((((/* implicit */_Bool) arr_1 [i_0] [2])) ? (((/* implicit */int) ((((/* implicit */int) (signed char)1)) != (2081340416)))) : (((/* implicit */int) (signed char)103)))));
        arr_3 [i_0] = ((/* implicit */long long int) arr_2 [(signed char)6] [i_0]);
        var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) (signed char)-109))));
    }
    for (unsigned char i_1 = 1; i_1 < 12; i_1 += 3) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) ((unsigned int) max((arr_0 [i_1] [i_1 - 1]), (arr_0 [i_1] [i_1 + 3]))));
        var_14 = ((/* implicit */unsigned char) max((min((var_0), (arr_2 [i_1] [i_1 + 2]))), (((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)115)))))));
        arr_7 [i_1] [i_1] |= ((/* implicit */unsigned int) var_8);
        /* LoopSeq 2 */
        for (unsigned short i_2 = 1; i_2 < 14; i_2 += 1) 
        {
            var_15 += ((/* implicit */signed char) (-(arr_5 [i_1] [i_2])));
            var_16 = ((/* implicit */int) max((var_16), (max(((~(((/* implicit */int) var_0)))), ((~((~(-1357376155)))))))));
            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (~(((/* implicit */int) ((unsigned char) (signed char)5))))))));
        }
        /* vectorizable */
        for (signed char i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_4 = 1; i_4 < 13; i_4 += 1) 
            {
                arr_17 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_4])) ? (((((/* implicit */_Bool) 184265329)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [i_3]))) : (3621770504U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1])))));
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)28555)) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) (signed char)-17))));
                /* LoopSeq 1 */
                for (int i_5 = 2; i_5 < 14; i_5 += 1) 
                {
                    arr_20 [i_3] [i_3] [(signed char)1] [i_5] = ((/* implicit */int) arr_19 [i_1] [i_3] [i_4] [i_5] [(unsigned char)7] [(unsigned short)14]);
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_1] [i_3] [12LL] [i_1 + 1])) ? (arr_10 [i_5 - 1] [i_4 + 1]) : (arr_10 [i_5 - 1] [i_4 + 2])));
                    arr_21 [i_3] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)65504)) ^ (((/* implicit */int) (signed char)96))));
                    arr_22 [i_1] [i_3] [i_4] [i_5] = (signed char)-31;
                }
                var_20 -= ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) (short)-10686))) & (-7283254319161040923LL))) | (((/* implicit */long long int) ((/* implicit */int) var_6)))));
            }
            arr_23 [i_3] [9] [9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_1 - 1] [i_1 + 1] [(unsigned short)0] [i_1])) && (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-42)))))));
            var_21 &= ((/* implicit */unsigned char) var_5);
        }
        var_22 = ((/* implicit */short) var_1);
    }
    for (long long int i_6 = 2; i_6 < 9; i_6 += 3) 
    {
        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */int) arr_19 [i_6] [i_6] [i_6 - 1] [i_6] [i_6 - 1] [i_6])) / (((((((/* implicit */int) arr_19 [i_6] [(signed char)10] [i_6 - 1] [8] [i_6] [i_6])) + (2147483647))) << (((((/* implicit */int) arr_0 [(signed char)3] [(signed char)3])) - (2642))))))))));
        var_24 ^= ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_1 [i_6 + 1] [i_6 - 1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_1 [i_6 - 2] [i_6 - 2])))));
    }
    var_25 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_8))));
}
