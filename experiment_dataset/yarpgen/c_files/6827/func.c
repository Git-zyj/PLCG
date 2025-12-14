/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6827
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
    var_19 = ((/* implicit */long long int) var_15);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned int) (unsigned short)224);
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-67)) ? (1143630182418146576LL) : (((/* implicit */long long int) -2024035748))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0]))))) ? ((-(((/* implicit */int) (signed char)-35)))) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        var_21 = ((/* implicit */unsigned char) min((min((var_3), (var_6))), (((((/* implicit */int) arr_0 [i_0] [i_0])) != (((/* implicit */int) arr_0 [i_0] [i_0]))))));
    }
    for (short i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        var_22 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_2 [i_1])))) ? (((/* implicit */long long int) ((var_3) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_2 [i_1]))))) : (min((-3279917338809126603LL), (((/* implicit */long long int) (unsigned short)0))))));
        var_23 = ((/* implicit */signed char) 11ULL);
        arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 6386084417212398786LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)235)))) / (((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) arr_5 [i_1]))))))) / (min((((/* implicit */unsigned long long int) var_12)), (arr_1 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        var_24 *= ((/* implicit */unsigned short) 0LL);
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned int) var_8);
        var_25 = ((/* implicit */signed char) min((((/* implicit */int) (unsigned char)0)), (var_7)));
    }
    /* LoopNest 3 */
    for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
    {
        for (int i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            for (unsigned char i_5 = 0; i_5 < 22; i_5 += 2) 
            {
                {
                    var_26 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)24229)) + (((/* implicit */int) (unsigned char)98))))), (((((/* implicit */_Bool) (unsigned short)0)) ? (arr_1 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
                    arr_18 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_14 [i_3])) : ((-(min((((/* implicit */unsigned long long int) 3366307356111109033LL)), (arr_1 [i_3])))))));
                    arr_19 [i_3] [i_5] [i_5] = ((/* implicit */unsigned char) (-(min(((~(var_15))), (((/* implicit */int) (signed char)35))))));
                    arr_20 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) (unsigned short)65521);
                    arr_21 [i_3] [i_4] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((0ULL), (((/* implicit */unsigned long long int) ((signed char) 1994902306)))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_4] [i_5])) >> (((1873393134) - (1873393134)))))), (arr_11 [i_3] [i_4])))) : (-254555354311513867LL)));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (6927553634701477077ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)14)) : (((/* implicit */int) (signed char)-82))))) : (min((6927553634701477077ULL), (((/* implicit */unsigned long long int) (signed char)126)))))) ^ (((/* implicit */unsigned long long int) max((3530431517U), (((/* implicit */unsigned int) var_4)))))));
}
