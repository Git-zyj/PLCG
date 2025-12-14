/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9517
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
    var_11 = ((/* implicit */unsigned char) ((short) (+(min((var_2), (((/* implicit */long long int) var_10)))))));
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (var_0)));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((4504924032155576838LL) != (((/* implicit */long long int) 1200063419U)))))));
        var_13 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) | (66584576U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 4228382718U)) || (((/* implicit */_Bool) (signed char)-62))))))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) & (arr_0 [i_0])))) | (max((((/* implicit */unsigned long long int) var_7)), (var_9))))) : (((var_3) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30621)))))));
    }
    for (signed char i_1 = 2; i_1 < 13; i_1 += 2) 
    {
        arr_7 [3] = ((/* implicit */long long int) ((unsigned char) (unsigned short)51988));
        var_14 = ((/* implicit */long long int) 3366313017U);
    }
    for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        arr_10 [i_2] = ((/* implicit */int) ((unsigned char) ((int) (unsigned char)118)));
        var_15 -= ((/* implicit */long long int) var_1);
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_3 = 1; i_3 < 22; i_3 += 4) 
        {
            arr_13 [i_3 + 1] [i_3] = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_11 [i_3 + 2] [i_3 + 1] [i_3 + 2])) + (arr_8 [i_3 + 1])));
            var_16 = arr_12 [i_2] [4ULL];
            var_17 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_2])) && (((/* implicit */_Bool) var_10))))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-48)) && (((/* implicit */_Bool) -969197330)))))));
            var_18 = ((/* implicit */int) min((var_18), ((-(arr_11 [i_3 + 2] [i_3] [i_3 + 2])))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            arr_17 [20] [20] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (signed char)-117)), (((((unsigned long long int) var_5)) & (((/* implicit */unsigned long long int) 9223372036854775792LL))))));
            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_12 [i_4] [i_2])), (min((var_0), (((/* implicit */unsigned long long int) var_5))))))) ? ((+(5795885220106900002ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)13520)) - (((/* implicit */int) var_5))))) ? (((/* implicit */int) (signed char)116)) : (((/* implicit */int) min((var_1), (arr_9 [(unsigned short)20])))))))));
            var_20 *= max((((unsigned char) (-(((/* implicit */int) var_1))))), (var_1));
        }
        for (long long int i_5 = 2; i_5 < 22; i_5 += 2) 
        {
            var_21 += ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((unsigned int) (-(var_6))))), (((12650858853602651641ULL) - (((/* implicit */unsigned long long int) 969197315))))));
            var_22 ^= ((/* implicit */int) (signed char)42);
        }
    }
}
