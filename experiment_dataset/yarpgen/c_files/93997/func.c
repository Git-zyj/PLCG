/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93997
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
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = arr_0 [i_0] [i_0];
                arr_7 [i_0] [i_1] [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) <= (max((((((/* implicit */_Bool) var_3)) ? (var_9) : (var_9))), (((/* implicit */unsigned int) max((((/* implicit */short) var_1)), (var_2)))))));
                var_16 = ((/* implicit */signed char) max((((/* implicit */long long int) ((unsigned char) arr_2 [i_0]))), (max((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0] [i_1])) << (((arr_4 [i_0]) + (545293995)))))), (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_12)))))));
                var_17 &= ((/* implicit */unsigned short) min((((((/* implicit */int) arr_2 [i_1])) + (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_2 [i_1])))))), ((+(((/* implicit */int) var_10))))));
            }
        } 
    } 
    var_18 += ((/* implicit */unsigned int) (+(var_7)));
    var_19 = (unsigned char)25;
    /* LoopNest 2 */
    for (unsigned short i_2 = 2; i_2 < 12; i_2 += 2) 
    {
        for (short i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            {
                arr_13 [i_2] [i_2] = ((unsigned char) 917102832);
                var_20 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((6945503890897873875LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)22)))))) & (((((/* implicit */_Bool) ((arr_9 [i_2] [i_2]) | (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3])))))) ? (((/* implicit */unsigned long long int) arr_9 [i_2 - 1] [i_2 - 1])) : (((unsigned long long int) arr_10 [i_2] [i_2]))))));
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((0U) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_12 [i_2])) : (((/* implicit */int) var_10)))))))) || (min(((!(((/* implicit */_Bool) 0U)))), (((((/* implicit */_Bool) arr_12 [i_2 + 1])) && (((/* implicit */_Bool) arr_8 [i_2]))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) var_6);
}
