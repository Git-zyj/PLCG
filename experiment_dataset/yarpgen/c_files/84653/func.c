/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84653
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
    var_16 = ((/* implicit */long long int) var_4);
    var_17 = ((/* implicit */unsigned int) var_9);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            var_18 -= ((unsigned short) ((((/* implicit */_Bool) (unsigned char)24)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (signed char)65))));
            /* LoopNest 2 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 3; i_3 < 16; i_3 += 4) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_3] [i_3] = ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2 - 1] [i_3 + 1] [i_0 + 2]))) | (var_10));
                        var_19 &= ((/* implicit */short) (unsigned char)52);
                        var_20 += arr_10 [i_0] [i_0] [i_0] [i_0];
                    }
                } 
            } 
            arr_12 [i_0] [i_0] = ((/* implicit */int) (signed char)79);
            arr_13 [i_0] [i_0] = ((/* implicit */unsigned char) 15751518001155223097ULL);
        }
        /* vectorizable */
        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 3) 
        {
            var_21 ^= ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_15 [i_0] [(unsigned char)10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_1))));
            var_22 = ((/* implicit */_Bool) ((signed char) ((unsigned short) (unsigned short)59996)));
            arr_16 [i_4] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_14))));
            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */long long int) arr_3 [i_0] [i_0])) ^ (652851672140978381LL))) : (((/* implicit */long long int) (-(((/* implicit */int) (signed char)65))))))))));
        }
        var_24 = ((/* implicit */unsigned long long int) (unsigned short)5539);
        arr_17 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_7 [i_0 - 2] [i_0 - 2] [i_0 - 2]), (((/* implicit */int) var_14))))) ? (arr_7 [i_0] [i_0] [i_0]) : (((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])))))));
    }
    /* LoopSeq 1 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_21 [i_5] [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)77))));
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 3) 
        {
            arr_25 [i_5] [i_5] = ((/* implicit */long long int) (~(((/* implicit */int) var_13))));
            /* LoopSeq 1 */
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                arr_30 [i_5] [i_5] [i_5] [i_5] = ((341797307U) >= (((/* implicit */unsigned int) ((/* implicit */int) ((3953169989U) > (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 2695226072554328522ULL)))))))));
                /* LoopSeq 2 */
                for (unsigned short i_8 = 0; i_8 < 18; i_8 += 4) 
                {
                    arr_33 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_18 [i_5] [i_5]))))), ((+((+(arr_20 [i_7])))))));
                    arr_34 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_27 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1])) ^ ((~(((/* implicit */int) (unsigned char)212))))))), (((((/* implicit */_Bool) arr_32 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (341797303U)))));
                }
                /* vectorizable */
                for (unsigned short i_9 = 0; i_9 < 18; i_9 += 4) 
                {
                    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((unsigned short) (-(var_3)))))));
                    var_26 -= ((/* implicit */unsigned long long int) arr_19 [i_5] [i_5]);
                    var_27 = ((/* implicit */long long int) ((var_1) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_7 + 1])))));
                    /* LoopSeq 1 */
                    for (signed char i_10 = 1; i_10 < 15; i_10 += 1) 
                    {
                        arr_41 [i_5] [i_5] [i_5] [i_5] = ((((/* implicit */_Bool) arr_29 [i_10 - 1] [i_9] [i_6])) ? (((/* implicit */int) arr_29 [i_10] [i_10] [i_10])) : (((/* implicit */int) arr_29 [i_6] [i_6] [i_9])));
                        var_28 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 341797297U))));
                        arr_42 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) 3953169989U);
                    }
                    var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((((/* implicit */_Bool) 3942648741U)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_5] [i_6] [i_7 + 1] [i_5] [i_7 + 1]))))))));
                }
            }
            var_30 -= ((/* implicit */unsigned short) ((int) min((var_5), (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) > (3953169988U))))));
        }
    }
    var_31 = ((/* implicit */unsigned short) var_1);
}
