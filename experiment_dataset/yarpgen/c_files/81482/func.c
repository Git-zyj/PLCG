/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81482
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
    for (unsigned int i_0 = 1; i_0 < 24; i_0 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (-((-(((/* implicit */int) (!(((/* implicit */_Bool) (short)-23612))))))))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_1))))));
        arr_3 [i_0] = ((/* implicit */signed char) min(((!(((((/* implicit */unsigned int) var_3)) <= (var_0))))), (((((arr_0 [i_0 + 1] [i_0 - 1]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29386))))) <= (((/* implicit */long long int) 2088597308))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 1; i_1 < 24; i_1 += 2) /* same iter space */
    {
        arr_8 [(unsigned short)12] [i_1 - 1] |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_7 [(unsigned short)0])) ? (((/* implicit */int) arr_7 [(unsigned char)24])) : (((/* implicit */int) (unsigned char)252)))) * (((/* implicit */int) var_13))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            arr_11 [i_1] = ((/* implicit */int) (((!(((/* implicit */_Bool) var_7)))) || ((!(((/* implicit */_Bool) var_3))))));
            arr_12 [i_1] [i_2] [i_1] = (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29386))) & (var_12))));
        }
    }
    var_16 = ((/* implicit */long long int) var_3);
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) == (0ULL)));
        var_18 = ((((/* implicit */int) arr_4 [i_3])) <= (var_7));
    }
    /* vectorizable */
    for (short i_4 = 0; i_4 < 19; i_4 += 2) /* same iter space */
    {
        var_19 = (((((-(((/* implicit */int) (unsigned short)14891)))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) (unsigned short)36160))))));
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) 2233785415175766016ULL))));
    }
    for (short i_5 = 0; i_5 < 19; i_5 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_5]))))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_5]))))))));
        var_22 = ((/* implicit */unsigned char) (-(((((/* implicit */unsigned long long int) (~(0U)))) | (min((((/* implicit */unsigned long long int) var_6)), (var_12)))))));
    }
}
