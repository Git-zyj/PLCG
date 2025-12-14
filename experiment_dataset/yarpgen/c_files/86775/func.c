/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86775
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) -7484184900153727863LL);
        arr_5 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) ((arr_2 [i_0]) >= (arr_2 [i_0]))))));
    }
    var_15 = ((/* implicit */unsigned short) (((~(var_9))) > (((/* implicit */int) var_4))));
    /* LoopSeq 2 */
    for (short i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        var_16 -= ((/* implicit */short) arr_0 [i_1] [i_1]);
        var_17 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((arr_0 [i_1] [i_1]) <= (((/* implicit */int) (short)-32752))))), (((unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-75)))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (((!((!(((/* implicit */_Bool) (unsigned short)35726)))))) || (((/* implicit */_Bool) 945549982636527677ULL)))))));
        arr_10 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)59944)))) / (7484184900153727878LL)));
        arr_11 [i_2] = ((/* implicit */short) ((arr_1 [i_2] [15ULL]) * (((((/* implicit */_Bool) (unsigned char)235)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-42))))) : (arr_3 [i_2])))));
    }
    /* LoopSeq 3 */
    for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) min(((signed char)17), (((/* implicit */signed char) ((((/* implicit */int) (short)-8203)) < (((/* implicit */int) arr_14 [i_3])))))));
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((arr_13 [i_3]) * (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)35236)) / (2147483647)))))))));
    }
    /* vectorizable */
    for (unsigned short i_4 = 1; i_4 < 12; i_4 += 4) 
    {
        arr_18 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1251485924U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14302))) : (arr_17 [i_4 + 1] [i_4 + 1])));
        var_21 = ((/* implicit */signed char) arr_16 [i_4]);
        arr_19 [i_4] [i_4] = ((/* implicit */unsigned int) ((unsigned long long int) (signed char)30));
        var_22 -= ((/* implicit */short) var_10);
    }
    for (unsigned int i_5 = 2; i_5 < 14; i_5 += 1) 
    {
        arr_23 [(short)6] = ((/* implicit */short) ((max((arr_13 [i_5 - 2]), (arr_13 [i_5 + 1]))) > (max((((/* implicit */unsigned int) var_5)), (arr_13 [i_5 - 2])))));
        var_23 = ((/* implicit */short) ((((/* implicit */unsigned int) (~(2147483647)))) | ((~(((((/* implicit */_Bool) -2147483647)) ? (0U) : (((/* implicit */unsigned int) var_5))))))));
        var_24 = ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) var_11)), (arr_21 [i_5 + 1] [i_5 - 2]))) << (((((/* implicit */int) ((signed char) (unsigned char)254))) + (28)))));
        var_25 = ((/* implicit */_Bool) arr_13 [i_5]);
    }
}
