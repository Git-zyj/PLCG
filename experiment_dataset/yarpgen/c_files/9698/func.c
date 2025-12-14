/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9698
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
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) max(((+(((/* implicit */int) (unsigned short)63945)))), (((/* implicit */int) var_16))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~(((((/* implicit */int) var_6)) & (((/* implicit */int) (_Bool)1))))))) ^ (((((/* implicit */_Bool) ((unsigned long long int) var_10))) ? (max((arr_1 [i_0 - 1] [i_0]), (((/* implicit */unsigned int) var_16)))) : (arr_1 [i_0] [(unsigned short)4])))));
        arr_5 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (short)6291)), (-6234099446804588310LL)))) ? ((-(min((((/* implicit */long long int) (-2147483647 - 1))), (var_13))))) : (((/* implicit */long long int) (~((-(((/* implicit */int) (short)-6275)))))))));
        arr_6 [14ULL] &= ((/* implicit */signed char) min((((/* implicit */int) var_6)), ((~(((/* implicit */int) (_Bool)1))))));
    }
    for (long long int i_1 = 3; i_1 < 9; i_1 += 3) /* same iter space */
    {
        arr_11 [i_1] = ((/* implicit */unsigned char) var_13);
        arr_12 [i_1] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) -2038784668)), ((-9223372036854775807LL - 1LL))))), (arr_8 [i_1])));
        var_18 -= ((/* implicit */_Bool) ((((_Bool) -6234099446804588283LL)) ? (((/* implicit */int) ((_Bool) 6234099446804588255LL))) : ((+(((/* implicit */int) (_Bool)1))))));
    }
    for (long long int i_2 = 3; i_2 < 9; i_2 += 3) /* same iter space */
    {
        arr_17 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (short)1)) : (((/* implicit */int) (unsigned char)47))));
        arr_18 [i_2 + 1] = ((/* implicit */signed char) (+(-6234099446804588310LL)));
        arr_19 [i_2] [(short)9] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 15275130562743957861ULL))));
    }
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((var_16) ? (((/* implicit */int) var_0)) : (159930577)))) & (((((/* implicit */_Bool) var_3)) ? (var_1) : (3311901353594416504LL)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-5804)) ? (((/* implicit */int) (unsigned char)106)) : (((/* implicit */int) (unsigned char)0))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (short)6291)))) : (((/* implicit */int) min((var_3), (var_10))))))) : (((((((((((/* implicit */_Bool) var_1)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) + (9223372036854775807LL))) + (9223372036854775807LL))) >> ((+(((/* implicit */int) var_3))))))));
    var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_2)), (min((var_7), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */int) (signed char)-69)) : (((/* implicit */int) (unsigned char)9)))))))));
    /* LoopNest 3 */
    for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        for (long long int i_4 = 1; i_4 < 20; i_4 += 3) 
        {
            for (long long int i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_33 [i_7] [i_4] [i_5] [i_4] [11ULL] = ((/* implicit */unsigned short) ((unsigned char) (+(((/* implicit */int) max((var_0), (((/* implicit */signed char) (_Bool)1))))))));
                                arr_34 [i_7] [i_4] [i_4] [(unsigned short)5] = ((/* implicit */_Bool) max((min((((/* implicit */unsigned int) min((var_6), (((/* implicit */signed char) (_Bool)0))))), (((2792311378U) | (((/* implicit */unsigned int) 2038784667)))))), (((/* implicit */unsigned int) var_16))));
                            }
                        } 
                    } 
                    arr_35 [20] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_5])) ? ((~(((arr_30 [i_5] [i_4] [i_4] [i_4] [i_4] [i_3]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)206)))))) : (min((-2038784668), (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    } 
}
