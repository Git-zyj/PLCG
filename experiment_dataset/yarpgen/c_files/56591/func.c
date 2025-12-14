/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56591
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 6; i_2 += 2) 
            {
                for (signed char i_3 = 1; i_3 < 9; i_3 += 3) 
                {
                    {
                        var_17 = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_6 [i_3 + 1] [i_1] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)23953)) ? (var_10) : (((/* implicit */int) (unsigned short)41582))))))))) : (((unsigned long long int) arr_5 [i_0] [i_0] [(_Bool)1]))));
                        arr_12 [i_0] [i_1] [6ULL] = ((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2 + 3] [i_3 - 1]);
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) arr_11 [i_0]))));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_19 ^= ((/* implicit */unsigned short) ((unsigned int) arr_14 [i_4] [i_4]));
        var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_13 [i_4] [i_4]))));
    }
    /* LoopNest 3 */
    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 3) 
    {
        for (unsigned int i_6 = 1; i_6 < 22; i_6 += 3) 
        {
            for (unsigned long long int i_7 = 1; i_7 < 22; i_7 += 3) 
            {
                {
                    arr_25 [i_5] [i_6 - 1] [i_7 + 1] [i_7] = arr_16 [i_6 + 1];
                    var_21 = (~(((((/* implicit */_Bool) ((unsigned long long int) 18446744073709551607ULL))) ? (((/* implicit */int) arr_23 [i_6 - 1] [i_6] [i_6] [i_7])) : (((/* implicit */int) arr_23 [i_5] [i_6] [(unsigned short)4] [i_6 - 1])))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(11659263921483748114ULL)))) ? (var_10) : (((/* implicit */int) max((var_1), (((/* implicit */unsigned short) (_Bool)1))))))))));
}
