/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92137
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 21; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)(-32767 - 1))) || (((/* implicit */_Bool) (-(arr_2 [i_2]))))));
                            var_21 = ((/* implicit */unsigned long long int) 1561206320U);
                            /* LoopSeq 2 */
                            for (short i_4 = 0; i_4 < 22; i_4 += 4) 
                            {
                                arr_11 [i_0] [(short)4] [i_1 - 2] [i_2 + 1] [i_3] [i_3] [i_3] = var_5;
                                var_22 *= ((/* implicit */long long int) (+(((arr_10 [i_2] [i_2 - 2] [i_1] [i_2] [(short)10]) % (arr_10 [i_2 - 2] [i_2] [i_1] [i_2] [i_2 - 1])))));
                                var_23 *= ((/* implicit */short) (~(max((((/* implicit */unsigned long long int) (short)(-32767 - 1))), (min((((/* implicit */unsigned long long int) -3830695650668958423LL)), (arr_3 [i_0] [i_0] [i_0])))))));
                            }
                            for (short i_5 = 0; i_5 < 22; i_5 += 4) 
                            {
                                var_24 = ((/* implicit */unsigned int) ((3830695650668958413LL) & (((/* implicit */long long int) 0U))));
                                var_25 = ((/* implicit */signed char) ((arr_1 [i_3] [i_5]) ^ ((+(((((/* implicit */_Bool) arr_4 [i_2] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [(short)1] [i_3] [i_0]))) : (arr_10 [i_0] [i_1] [i_3] [i_3] [i_5])))))));
                                var_26 = ((/* implicit */unsigned int) (-(-3830695650668958419LL)));
                            }
                            /* LoopSeq 4 */
                            for (unsigned long long int i_6 = 1; i_6 < 20; i_6 += 2) 
                            {
                                var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) var_7))));
                                var_28 = 0U;
                                var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) var_18))));
                                var_30 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_12 [i_2 - 1] [(short)13] [i_2 - 1] [i_1 + 1] [i_1] [(short)13])) && (((/* implicit */_Bool) var_0)))) && (((/* implicit */_Bool) max((0U), (arr_15 [i_3] [i_3] [i_3] [i_3] [i_6]))))))), (arr_3 [i_6 + 1] [i_3] [i_0])));
                                var_31 *= ((((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_0] [i_1 - 2] [i_0] [i_1]))))) >= ((-(14094616840564826465ULL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)96))) : ((+(max((arr_7 [i_0] [i_1] [i_2] [i_3]), (3528891014U))))));
                            }
                            for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 4) 
                            {
                                arr_19 [i_3] [i_1] [i_1 - 1] [i_1 + 1] [i_1 + 2] [i_1 + 2] [i_1] = max((((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_7] [i_3] [i_2 - 2] [i_1] [i_0])))))))), (min((1186706093U), (((/* implicit */unsigned int) arr_16 [i_1] [6U] [i_1 - 2] [i_1 + 1] [i_1 + 2] [i_1] [i_1])))));
                                arr_20 [i_3] [i_7] = ((/* implicit */int) ((unsigned long long int) 187198374U));
                                var_32 ^= ((/* implicit */long long int) 4294967289U);
                            }
                            for (int i_8 = 2; i_8 < 18; i_8 += 2) 
                            {
                                var_33 = ((unsigned int) (((~(6U))) - (((/* implicit */unsigned int) ((/* implicit */int) max((arr_6 [i_3] [i_1 - 1] [i_2 - 1] [i_3]), ((short)-16777)))))));
                                var_34 = ((/* implicit */unsigned long long int) -1902163325);
                            }
                            /* vectorizable */
                            for (unsigned int i_9 = 0; i_9 < 22; i_9 += 4) 
                            {
                                arr_28 [i_3] [i_3] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [12U] [i_0] [i_1 - 2] [i_2] [i_3] [i_9]))) & (4294967285U)));
                                arr_29 [i_3] [i_1 - 2] [i_2 + 1] [i_3] [i_9] = ((/* implicit */short) ((arr_5 [i_1 + 2] [i_2 - 1]) != (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))));
                                arr_30 [i_3] [i_2 - 2] [i_3] = (~(2733760985U));
                            }
                            var_35 = ((/* implicit */unsigned int) arr_13 [i_0] [i_0] [i_0] [i_0] [(short)10]);
                        }
                    } 
                } 
                var_36 = ((/* implicit */short) ((((/* implicit */long long int) min((((/* implicit */unsigned int) (short)-8013)), (0U)))) < (((((/* implicit */_Bool) arr_17 [i_0] [i_1 + 2] [i_0] [i_0] [i_0] [i_1 - 2] [i_0])) ? (((long long int) arr_7 [i_0] [i_1 - 1] [i_0] [i_0])) : (((/* implicit */long long int) ((/* implicit */int) ((-1625354569) > (((/* implicit */int) (short)-8013))))))))));
            }
        } 
    } 
    var_37 |= ((/* implicit */unsigned long long int) 3793984727U);
    var_38 = (~(max((((1561206320U) / (3U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_7))))))));
    var_39 = ((/* implicit */short) var_6);
}
