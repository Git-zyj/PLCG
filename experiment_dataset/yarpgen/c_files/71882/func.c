/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71882
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((unsigned short) (unsigned char)131));
        var_18 = ((/* implicit */unsigned short) var_16);
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) 2513943746482182556ULL))));
        var_20 -= ((0ULL) + (((/* implicit */unsigned long long int) 2257726016559680079LL)));
        var_21 = ((15932800327227369075ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1]))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) arr_3 [i_1]))));
        var_23 = ((/* implicit */unsigned int) min((((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)170), (((/* implicit */unsigned char) (_Bool)1)))))) < (31U))), (var_12)));
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (max((((/* implicit */unsigned long long int) max((var_8), (((/* implicit */unsigned int) arr_3 [i_1 + 3]))))), (((((/* implicit */unsigned long long int) 2328835607U)) & (13047581473894116837ULL)))))));
    }
    for (unsigned long long int i_2 = 2; i_2 < 13; i_2 += 2) /* same iter space */
    {
        arr_9 [i_2] [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((((/* implicit */_Bool) arr_7 [i_2])) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) 15932800327227369060ULL)))))))))));
        var_25 = min((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (var_14))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_7 [i_2 + 3]))))));
        arr_10 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) max((839295012U), (((/* implicit */unsigned int) (unsigned char)232))))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_5)))))))) != (((/* implicit */int) ((arr_4 [i_2 + 4] [i_2 + 3]) != (((/* implicit */unsigned long long int) var_4)))))));
    }
    for (unsigned char i_3 = 1; i_3 < 15; i_3 += 3) 
    {
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_11 [i_3 + 2] [i_3 + 1])), (var_15)))) ? (min((arr_3 [i_3]), (((/* implicit */int) arr_0 [i_3 - 1])))) : (((/* implicit */int) min((arr_0 [i_3 + 2]), (arr_0 [i_3 + 1]))))));
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            for (unsigned short i_5 = 0; i_5 < 17; i_5 += 2) 
            {
                {
                    var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (_Bool)1))));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 1; i_6 < 15; i_6 += 1) 
                    {
                        for (short i_7 = 1; i_7 < 14; i_7 += 3) 
                        {
                            {
                                arr_24 [(_Bool)1] [(_Bool)1] [i_5] [i_3] [i_7] = ((/* implicit */unsigned short) ((var_5) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) & (min((((/* implicit */unsigned long long int) 2047LL)), (15932800327227369060ULL))))) : (((((/* implicit */_Bool) ((unsigned int) 4294967253U))) ? (((/* implicit */unsigned long long int) max((arr_15 [15ULL] [i_4] [i_6] [i_6]), (((/* implicit */unsigned int) var_6))))) : (max((var_17), (((/* implicit */unsigned long long int) (unsigned short)17396))))))));
                                arr_25 [i_7] [i_7] [i_7] [i_7] [i_7] [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) min(((unsigned char)20), (((/* implicit */unsigned char) (_Bool)1))))))) + (((/* implicit */int) (unsigned char)15))));
                            }
                        } 
                    } 
                    var_28 = ((((((/* implicit */_Bool) 15932800327227369060ULL)) && (((/* implicit */_Bool) ((2513943746482182556ULL) - (((/* implicit */unsigned long long int) 1343656402U))))))) ? (((((/* implicit */_Bool) (-(-2307136607153420949LL)))) ? (((unsigned int) 10296779779604039424ULL)) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-1))))))) : (((/* implicit */unsigned int) max(((~(((/* implicit */int) var_11)))), (((((/* implicit */int) var_0)) & (((/* implicit */int) arr_7 [i_5]))))))));
                }
            } 
        } 
    }
    var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max(((~(0U))), (((/* implicit */unsigned int) var_12)))))));
    var_30 = ((/* implicit */unsigned int) (unsigned char)249);
}
