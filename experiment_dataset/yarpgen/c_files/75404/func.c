/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75404
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
    var_16 = ((/* implicit */long long int) min((((((((((/* implicit */int) var_7)) / (((/* implicit */int) var_8)))) + (2147483647))) >> (((/* implicit */int) var_10)))), (((/* implicit */int) var_13))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_17 += ((/* implicit */short) min((((int) arr_0 [i_0] [i_0])), (((((/* implicit */int) arr_0 [i_0] [i_0])) * (((((/* implicit */int) arr_1 [i_0] [i_0])) << (((13758707608719850166ULL) - (13758707608719850153ULL)))))))));
        var_18 = ((/* implicit */short) ((3732796553U) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        var_19 = ((/* implicit */unsigned short) max((((/* implicit */long long int) min(((short)1520), (((/* implicit */short) (signed char)117))))), (((long long int) (_Bool)0))));
        var_20 = (!(((((/* implicit */_Bool) (unsigned char)163)) && (((/* implicit */_Bool) 2305842940494217216LL)))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)3)) || (((/* implicit */_Bool) (short)-1504))));
        var_22 = ((/* implicit */long long int) ((((((/* implicit */int) var_15)) / (((/* implicit */int) var_13)))) < (((((/* implicit */_Bool) (short)1519)) ? ((-2147483647 - 1)) : (arr_4 [i_1] [16])))));
        var_23 = ((/* implicit */_Bool) ((unsigned short) (unsigned short)11));
    }
    for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        var_24 = ((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) ? ((((+(((/* implicit */int) arr_7 [2LL])))) << (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)42771))))))) : (max((arr_3 [i_2]), (((/* implicit */int) arr_2 [10LL])))));
        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_5 [i_2] [i_2]), (arr_5 [i_2] [i_2])))) || (((/* implicit */_Bool) arr_5 [i_2] [i_2])))))));
    }
    for (short i_3 = 4; i_3 < 18; i_3 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_4 = 3; i_4 < 15; i_4 += 1) 
        {
            var_26 -= ((/* implicit */unsigned long long int) ((unsigned int) var_8));
            /* LoopNest 3 */
            for (short i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                for (unsigned int i_6 = 0; i_6 < 19; i_6 += 4) 
                {
                    for (unsigned short i_7 = 0; i_7 < 19; i_7 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */signed char) ((unsigned long long int) (unsigned short)53760));
                            var_28 = ((/* implicit */long long int) (~(((/* implicit */int) var_10))));
                        }
                    } 
                } 
            } 
        }
        arr_21 [i_3 - 4] [i_3] = ((/* implicit */signed char) ((long long int) ((long long int) arr_8 [i_3] [i_3])));
    }
    var_29 = ((/* implicit */unsigned char) max((((/* implicit */int) var_2)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)3901)) ? (((/* implicit */int) (unsigned short)42759)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) min(((unsigned short)22745), (((/* implicit */unsigned short) var_6))))) : (((/* implicit */int) max((var_0), (var_6))))))));
}
