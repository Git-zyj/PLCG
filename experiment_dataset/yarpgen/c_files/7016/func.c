/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7016
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
    var_10 = (short)0;
    /* LoopSeq 4 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        var_11 = ((/* implicit */int) (((((((_Bool)1) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (((/* implicit */int) var_0)))) > (((((/* implicit */_Bool) 13524460455610528179ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [i_0] [i_0])))))) ? (((((/* implicit */_Bool) (~(7LL)))) ? (13524460455610528179ULL) : (min((1457007103880435995ULL), (((/* implicit */unsigned long long int) 1765642875)))))) : (((/* implicit */unsigned long long int) ((int) (unsigned char)109)))));
        var_12 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 7LL)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2546139806U)) ? (214613934163081367LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)44682)))))) ? (((var_8) % (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 2])))))));
        var_13 = ((/* implicit */unsigned char) 2257188376U);
        var_14 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0 + 1])) ? (((/* implicit */unsigned int) 511)) : (14169565U)))) ? (((((/* implicit */_Bool) 4922283618099023417ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_8))) : (var_8))) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2546139806U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 16; i_1 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (unsigned int i_3 = 1; i_3 < 15; i_3 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) ((var_1) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)101))) <= (2546139794U)))) : (((((/* implicit */int) var_1)) ^ (((/* implicit */int) (signed char)-102))))));
                    var_16 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47857))) < (4294967276U))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2 - 1] [i_1 + 1]))) : (arr_7 [i_2 - 1])));
                }
            } 
        } 
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-1LL)));
    }
    /* vectorizable */
    for (signed char i_4 = 1; i_4 < 16; i_4 += 3) /* same iter space */
    {
        arr_11 [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 6091355332448795214LL))));
        /* LoopNest 2 */
        for (long long int i_5 = 2; i_5 < 13; i_5 += 2) 
        {
            for (short i_6 = 0; i_6 < 17; i_6 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) (~(-6015476429663039792LL)));
                    var_19 = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */int) arr_2 [(_Bool)1])) : (((/* implicit */int) arr_2 [4ULL]))));
    }
    for (signed char i_7 = 1; i_7 < 16; i_7 += 3) /* same iter space */
    {
        var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_1) ? (((/* implicit */long long int) var_5)) : (24576LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_4)))) : (arr_18 [i_7 + 1])))) ? (((/* implicit */long long int) ((((((/* implicit */int) var_2)) != (((/* implicit */int) (_Bool)0)))) ? (((/* implicit */int) ((short) -7899047472783509579LL))) : ((+(((/* implicit */int) (_Bool)1))))))) : (max((((/* implicit */long long int) arr_2 [i_7])), (((((/* implicit */_Bool) 2546139806U)) ? (((/* implicit */long long int) 2546139806U)) : (-24576LL))))));
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((-1959815855), (((/* implicit */int) arr_14 [i_7] [i_7] [i_7] [i_7]))))) ? (((((/* implicit */_Bool) (unsigned short)4095)) ? (2423103635U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) (unsigned short)38044)) : (((/* implicit */int) var_0))));
        var_23 = ((/* implicit */unsigned char) max(((-(1871863641U))), (((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) var_9))))), (max(((-2147483647 - 1)), (((/* implicit */int) (unsigned short)48821)))))))));
    }
    var_24 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3)))) << (((((long long int) (short)-5090)) + (5091LL))))) != (((/* implicit */int) var_1))));
    var_25 = (_Bool)1;
}
