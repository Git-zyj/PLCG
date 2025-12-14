/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82925
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((min((arr_0 [8LL]), (((/* implicit */unsigned long long int) arr_1 [i_0])))) >> (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_7)) : (arr_0 [i_0]))) - (4181009686ULL))))) % (((/* implicit */unsigned long long int) (~((-(((/* implicit */int) arr_2 [i_0])))))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) var_4);
    }
    for (int i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        var_20 += ((/* implicit */unsigned short) (-(((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)18608)) ? (((/* implicit */int) arr_7 [i_1] [i_1])) : (((/* implicit */int) var_11))))) ^ (max((3228202687085528482LL), (((/* implicit */long long int) var_3))))))));
        var_21 = ((/* implicit */unsigned short) 4232953528905638068LL);
        var_22 = ((/* implicit */_Bool) arr_7 [i_1] [i_1]);
        var_23 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_7 [i_1] [i_1])) * (((/* implicit */int) arr_7 [i_1] [i_1])))) + (((/* implicit */int) ((signed char) -3228202687085528482LL)))));
        var_24 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-19)) - (((/* implicit */int) (unsigned short)10515))))) ? (((((/* implicit */_Bool) (signed char)121)) ? (9742449203574820407ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19473))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-121))))))))) ? (min((((/* implicit */unsigned long long int) arr_5 [i_1])), (min((((/* implicit */unsigned long long int) (unsigned short)10510)), (var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1])))));
    }
    for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        var_25 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)-26254)) : (((/* implicit */int) arr_5 [i_2]))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_7 [i_2] [i_2]), (((/* implicit */unsigned char) arr_8 [i_2]))))) ? (((/* implicit */int) arr_7 [i_2] [i_2])) : (((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)-95))))))) : ((((_Bool)1) ? (((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_2])) - (((/* implicit */int) arr_8 [i_2]))))) : (((-3228202687085528492LL) / (arr_6 [i_2])))))));
        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) arr_6 [i_2]))));
    }
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        for (short i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            {
                var_27 = ((/* implicit */short) (+(((/* implicit */int) arr_1 [i_3]))));
                var_28 = ((/* implicit */_Bool) ((signed char) min((var_15), (((/* implicit */unsigned long long int) (-(3228202687085528482LL)))))));
            }
        } 
    } 
    var_29 = ((/* implicit */_Bool) var_15);
    var_30 *= ((/* implicit */int) min((-1LL), (max((((/* implicit */long long int) var_12)), (((((/* implicit */_Bool) var_3)) ? (6368419427816939528LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
}
