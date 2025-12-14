/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70395
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
    var_20 = ((/* implicit */long long int) (_Bool)0);
    var_21 = ((/* implicit */short) (-(max((((/* implicit */unsigned int) max((var_10), (var_10)))), (min((((/* implicit */unsigned int) (_Bool)1)), (var_12)))))));
    var_22 = ((/* implicit */int) min((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)50105))))), (min(((~(-1LL))), (((/* implicit */long long int) (unsigned short)65280))))));
    var_23 ^= ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((-8648843819333874269LL), (((/* implicit */long long int) (unsigned char)179))))) ? (((/* implicit */int) ((arr_0 [4LL]) <= (((/* implicit */unsigned long long int) -27LL))))) : (var_1)))) ? (((unsigned long long int) arr_0 [2])) : (((/* implicit */unsigned long long int) var_0)))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)59)), (4294967292U)))) ? (((/* implicit */long long int) var_17)) : (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_15))))))));
                    arr_8 [i_0] [i_1] [i_2] [i_1] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) -2131007935))));
                    var_25 = ((/* implicit */unsigned int) max((var_17), ((+((((_Bool)1) ? (var_17) : (((/* implicit */int) (_Bool)0))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            arr_13 [i_0] [i_3] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((signed char) (unsigned short)45051))) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))), (((/* implicit */long long int) min((((/* implicit */int) max(((unsigned char)122), (((/* implicit */unsigned char) (signed char)-91))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_16)))))))));
            arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min((((18446744073709551615ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((_Bool) (+(3383901961531075479LL))))));
        }
    }
    /* vectorizable */
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_4])) ^ (((/* implicit */int) var_13))))) ? (((/* implicit */int) (unsigned short)54381)) : (((/* implicit */int) arr_17 [i_4]))));
        var_27 += ((/* implicit */_Bool) var_4);
    }
}
