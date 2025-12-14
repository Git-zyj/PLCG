/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61458
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
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((var_0) < (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)0))))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 |= ((/* implicit */long long int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) max((var_3), (((/* implicit */long long int) (_Bool)0)))))))), (((signed char) (((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)0)), (var_7)))) / (arr_0 [i_0])))));
        var_16 *= ((/* implicit */unsigned short) (_Bool)1);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_17 = ((((/* implicit */_Bool) ((unsigned int) arr_6 [i_1]))) ? (((max((((/* implicit */long long int) (signed char)-2)), (7930043831392073447LL))) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40996))))) : (((/* implicit */long long int) ((/* implicit */int) min((((-4876566720058621509LL) >= (((/* implicit */long long int) arr_5 [i_1])))), ((!(((/* implicit */_Bool) arr_5 [i_1])))))))));
        var_18 &= ((/* implicit */_Bool) ((((((/* implicit */int) var_4)) <= (((/* implicit */int) arr_6 [i_1])))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_4 [i_1]))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_19 ^= 0U;
        var_20 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)116))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2]))) < (33554431LL))))));
    }
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_2))) ? ((+(var_3))) : (((/* implicit */long long int) ((var_0) * (var_7))))));
    /* LoopSeq 1 */
    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_4 = 2; i_4 < 16; i_4 += 2) 
        {
            /* LoopNest 3 */
            for (long long int i_5 = 3; i_5 < 15; i_5 += 1) 
            {
                for (unsigned int i_6 = 0; i_6 < 17; i_6 += 1) 
                {
                    for (unsigned int i_7 = 0; i_7 < 17; i_7 += 2) 
                    {
                        {
                            arr_23 [i_7] [i_6] [i_6] [i_5] [i_4] [i_3] = ((/* implicit */unsigned int) (_Bool)1);
                            arr_24 [i_7] [i_6] [i_5 + 1] [i_4] [i_3] [i_3] = ((/* implicit */long long int) ((((_Bool) (+(((/* implicit */int) (unsigned short)65535))))) ? (min((2831439337U), (((/* implicit */unsigned int) (unsigned short)21365)))) : (min((((((/* implicit */_Bool) 4876566720058621512LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63488))) : (arr_21 [(_Bool)0] [i_6] [i_6] [i_5] [i_4] [i_4] [i_3]))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4] [i_4 - 1] [i_4] [i_4]))) : (arr_5 [i_4])))))));
                        }
                    } 
                } 
            } 
            var_22 = max((((signed char) -2606392024642346374LL)), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_6 [i_4 + 1]))))));
            var_23 = ((/* implicit */long long int) (_Bool)1);
        }
        arr_25 [i_3] |= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)36)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3]))) : (-4876566720058621516LL)))));
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4876566720058621507LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))), (var_1))))));
        var_25 = ((/* implicit */unsigned short) (signed char)0);
    }
}
