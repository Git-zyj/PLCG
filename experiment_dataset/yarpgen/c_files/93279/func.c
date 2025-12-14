/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93279
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
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min(((unsigned short)13137), ((unsigned short)39778))))));
        arr_3 [i_0] [i_0 - 1] = var_12;
        var_17 *= ((/* implicit */unsigned long long int) arr_0 [(unsigned char)0]);
    }
    for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) min(((signed char)-6), ((signed char)4)));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            var_19 = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-22)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1 - 1]))) : (arr_5 [i_1] [i_1 + 1])));
            arr_10 [i_2] [i_2] [i_1] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_6)) ? (var_2) : (arr_4 [i_1])))));
        }
        for (long long int i_3 = 2; i_3 < 11; i_3 += 2) 
        {
            var_21 += ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) var_15)), (((((/* implicit */_Bool) var_3)) ? (var_13) : (((/* implicit */unsigned long long int) 4294967293U)))))), (((/* implicit */unsigned long long int) arr_12 [i_3 + 2] [i_3 + 2]))));
            var_22 = ((/* implicit */unsigned short) (-(min((((/* implicit */unsigned long long int) arr_6 [i_1 - 1] [i_3])), (arr_5 [i_1 + 2] [i_3 + 3])))));
            arr_13 [i_1] [i_3 + 2] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_16))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3))))), (-3353731682207226861LL)));
        }
        var_23 = arr_5 [i_1 + 1] [i_1];
        var_24 = ((/* implicit */signed char) max((var_24), (min(((signed char)45), ((signed char)2)))));
    }
    var_25 = ((/* implicit */signed char) var_16);
}
