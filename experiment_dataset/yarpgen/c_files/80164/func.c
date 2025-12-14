/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80164
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
    var_11 = ((/* implicit */_Bool) ((unsigned short) ((signed char) (~(((/* implicit */int) (unsigned short)40305))))));
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        var_12 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)96)) ? (min((((/* implicit */unsigned long long int) var_0)), (((((/* implicit */_Bool) (signed char)6)) ? (12902291748171532085ULL) : (3196156664836384808ULL))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)73)) >> (((((/* implicit */int) arr_1 [i_0 + 1])) - (64387)))))), (((((/* implicit */_Bool) (unsigned char)164)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) : (var_4)))))));
        var_13 *= ((/* implicit */unsigned long long int) arr_1 [i_0 + 1]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) (~(((((((/* implicit */_Bool) 843892519961733645LL)) ? (((/* implicit */int) (unsigned char)90)) : (((/* implicit */int) (unsigned short)32764)))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1]))))))))))));
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 15; i_2 += 3) 
        {
            for (short i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)2816)) ? (-1355175423) : (((/* implicit */int) (signed char)-7))));
                    arr_9 [i_1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned int) var_8)) : (var_2)))))) + (max(((~(var_1))), (((/* implicit */unsigned long long int) ((arr_3 [i_1] [i_2]) > (((/* implicit */unsigned long long int) -1)))))))));
                    var_15 *= ((/* implicit */unsigned int) (((+(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) -1221515727))))))) != (((((/* implicit */_Bool) min((arr_1 [i_1]), (((/* implicit */unsigned short) (short)-16529))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-31502))) != (9223372036854775807LL)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-19)))))))));
                    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (-(((long long int) arr_3 [i_2 + 1] [i_2 + 1])))))));
                }
            } 
        } 
    }
    for (signed char i_4 = 3; i_4 < 17; i_4 += 3) 
    {
        arr_12 [i_4 + 2] = ((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)55)), ((unsigned char)182)));
        var_17 *= ((/* implicit */_Bool) ((((_Bool) arr_11 [i_4 + 1])) ? (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)(-127 - 1))))))) : (max((((unsigned long long int) var_10)), ((+(13946012328264390286ULL)))))));
        var_18 &= ((/* implicit */unsigned int) ((2840073268320694270LL) - (((((/* implicit */_Bool) var_6)) ? (-859301298737185915LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)68)) : (1844131941))))))));
        arr_13 [i_4] = ((/* implicit */_Bool) arr_0 [i_4] [i_4 + 1]);
    }
    var_19 = ((((/* implicit */_Bool) max((((2008053289U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14398))))), (((/* implicit */unsigned int) var_10))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned short) var_6))))) ? (((/* implicit */unsigned long long int) var_8)) : (max((var_1), (((/* implicit */unsigned long long int) var_9))))))));
}
