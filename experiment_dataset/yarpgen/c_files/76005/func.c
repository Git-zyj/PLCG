/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76005
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
    for (unsigned int i_0 = 3; i_0 < 7; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            arr_5 [i_1] [i_1] &= ((/* implicit */unsigned char) 2300388727U);
            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned char)226)) : (((((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1])) / (arr_0 [i_0])))));
        }
        for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            arr_9 [i_0] [7] = ((/* implicit */int) arr_4 [i_0] [i_2] [i_0]);
            arr_10 [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) arr_0 [i_0]);
            arr_11 [i_2] [i_0] [i_2] = ((/* implicit */int) (unsigned char)227);
            arr_12 [i_0] = ((/* implicit */unsigned char) ((unsigned short) arr_8 [i_0]));
        }
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0]))));
        var_20 = ((/* implicit */unsigned int) var_13);
    }
    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) /* same iter space */
    {
        var_21 = ((unsigned int) ((((/* implicit */_Bool) max((3451317404U), (((/* implicit */unsigned int) var_16))))) ? (((((/* implicit */_Bool) (unsigned char)81)) ? (((/* implicit */int) (unsigned short)43806)) : (((/* implicit */int) var_15)))) : (((/* implicit */int) (signed char)37))));
        arr_16 [i_3] = ((/* implicit */unsigned int) max((arr_13 [i_3]), (((/* implicit */unsigned char) ((signed char) arr_13 [i_3])))));
        arr_17 [i_3] = ((/* implicit */unsigned char) arr_14 [i_3] [i_3]);
    }
    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned int) (unsigned short)43782);
        arr_20 [i_4] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)225)) ? (((/* implicit */int) arr_13 [(signed char)0])) : (((/* implicit */int) arr_13 [12U]))))), (((unsigned long long int) arr_13 [(unsigned char)8]))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned int) (unsigned char)188);
        arr_25 [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)30)) ? (((/* implicit */int) ((signed char) arr_13 [(signed char)2]))) : (((((/* implicit */int) arr_22 [i_5] [i_5])) ^ ((-2147483647 - 1))))));
    }
    var_24 *= 4294967295U;
}
