/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76343
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
    var_19 = ((/* implicit */_Bool) ((var_12) * (((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned int) (unsigned short)25835)), (2337473401U))), (((/* implicit */unsigned int) var_5)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */short) arr_8 [i_0] [i_1] [i_1] [i_2]);
                    var_21 = ((/* implicit */signed char) arr_9 [i_0] [i_0] [i_2]);
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 3) 
    {
        var_22 += ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [1] [i_3])))))));
        var_23 = ((/* implicit */int) (~((+(((((/* implicit */_Bool) 2337473403U)) ? (-8558986513263800898LL) : (((/* implicit */long long int) 1957493896U))))))));
        /* LoopNest 2 */
        for (long long int i_4 = 1; i_4 < 15; i_4 += 3) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_24 = ((/* implicit */short) (-(((((/* implicit */_Bool) max((3849640002U), (((/* implicit */unsigned int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_5]))) : (max((5515578859890014798ULL), (((/* implicit */unsigned long long int) arr_16 [i_4] [i_4] [i_4]))))))));
                    var_25 += ((/* implicit */unsigned long long int) arr_11 [i_4] [i_5]);
                    arr_19 [i_3] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (unsigned short)31892)), (2016519480880883663ULL)));
                    var_26 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)-13705))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        arr_22 [i_3] [i_3] [i_4 + 2] [i_3] [3ULL] = ((/* implicit */unsigned int) (~(var_10)));
                        var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_11 [i_4 + 1] [i_4]))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 17; i_7 += 3) 
                    {
                        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) arr_13 [i_3] [i_7] [i_5]))) ? (arr_6 [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 1]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_11 [(_Bool)1] [(_Bool)1])))))));
                        var_29 = ((/* implicit */unsigned int) max((var_29), (((((/* implicit */_Bool) 1024)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_5 [i_4 + 2])))));
                        var_30 = ((/* implicit */unsigned long long int) arr_0 [i_5]);
                    }
                }
            } 
        } 
    }
    for (long long int i_8 = 1; i_8 < 15; i_8 += 4) 
    {
        /* LoopSeq 4 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) 5515578859890014798ULL))));
            var_32 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (signed char)-59)))) ? (-1025) : (min((arr_31 [i_8 + 2]), (arr_31 [i_8 + 2])))));
            arr_33 [i_8] = arr_9 [i_9] [(short)0] [(short)0];
        }
        for (unsigned int i_10 = 0; i_10 < 17; i_10 += 1) 
        {
            var_33 = (_Bool)0;
            var_34 -= ((/* implicit */int) ((unsigned long long int) (+(((unsigned long long int) arr_25 [i_10])))));
        }
        for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
        {
            var_35 = ((/* implicit */unsigned short) (((-(((var_3) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_1 [i_8] [i_8]))))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_8 + 1])) ? (((/* implicit */int) arr_2 [i_11 + 1] [i_8 + 1] [i_8 + 1])) : (((/* implicit */int) arr_2 [i_11 + 1] [i_8 + 1] [i_11 + 1])))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 3) 
            {
                arr_43 [i_12] [3ULL] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) : (((unsigned long long int) arr_40 [i_11 + 1] [i_11]))));
                var_36 ^= var_9;
            }
            for (int i_13 = 2; i_13 < 13; i_13 += 2) 
            {
                var_37 = ((/* implicit */unsigned short) (_Bool)1);
                var_38 -= ((/* implicit */unsigned int) (~(((/* implicit */int) var_3))));
            }
            var_39 = ((/* implicit */_Bool) (short)-10393);
            var_40 -= ((/* implicit */short) ((((1957493894U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28233))))) ? (((/* implicit */unsigned int) max(((((_Bool)1) ? (((/* implicit */int) (short)11987)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_11])))))))) : (min((((/* implicit */unsigned int) min(((_Bool)1), ((_Bool)1)))), (arr_26 [i_8 + 2])))));
            arr_46 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((arr_26 [i_8]) > (arr_29 [i_11])))), (((unsigned short) arr_16 [i_8] [i_11 + 1] [i_11 + 1]))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_39 [i_8 - 1]))))) : (((((/* implicit */_Bool) 3353761452063407514LL)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_18 [i_8] [(_Bool)1] [(_Bool)0]))))))));
        }
        /* vectorizable */
        for (unsigned long long int i_14 = 1; i_14 < 14; i_14 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_15 = 2; i_15 < 16; i_15 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_16 = 2; i_16 < 15; i_16 += 3) 
                {
                    for (unsigned long long int i_17 = 0; i_17 < 17; i_17 += 2) 
                    {
                        {
                            var_41 = ((/* implicit */unsigned int) min((var_41), (arr_37 [i_8] [i_14])));
                            var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [i_14] [i_15 + 1] [i_14]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_15 + 1] [i_15 + 1] [i_15 - 2]))) : (((((/* implicit */_Bool) 3074368681U)) ? (((/* implicit */unsigned long long int) 5U)) : (11942329394338964350ULL)))));
                        }
                    } 
                } 
                var_43 = ((/* implicit */int) (((-(arr_1 [i_14] [(_Bool)1]))) * (((/* implicit */unsigned int) ((int) arr_52 [8ULL] [8ULL] [i_15 + 1] [i_14] [i_8] [i_15])))));
                arr_55 [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_14 + 3] [i_15 - 2])) ? (((/* implicit */int) (short)-11988)) : (arr_38 [i_14 + 2] [i_15 + 1])));
                arr_56 [i_8] [i_14] [i_14 + 1] [i_15 - 2] |= ((unsigned int) arr_32 [i_8] [i_8]);
            }
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                var_44 *= ((((/* implicit */_Bool) arr_58 [i_8 + 1] [0] [i_8 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_8 - 1] [i_8 + 1] [i_8 + 2]))) : (arr_58 [i_8 + 1] [8LL] [i_8 + 2]));
                arr_61 [6ULL] [i_14] [(_Bool)1] [i_14] |= ((/* implicit */unsigned int) arr_41 [i_14 + 1]);
                var_45 = ((/* implicit */_Bool) (~(arr_28 [i_8 - 1] [i_14 + 1])));
                var_46 = ((/* implicit */short) ((arr_8 [i_14 + 2] [i_8 - 1] [i_18] [i_14 + 2]) + (arr_8 [i_14 + 3] [i_8 + 1] [i_18] [i_18])));
                var_47 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_18 [i_8] [i_8] [i_18]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_8 - 1] [i_14 + 2] [0])))))) ? (((/* implicit */unsigned long long int) arr_26 [i_8 + 1])) : (((((/* implicit */_Bool) var_12)) ? (0ULL) : (((/* implicit */unsigned long long int) -20))))));
            }
            arr_62 [i_8] [i_14 - 1] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) * (var_15));
            var_48 = ((/* implicit */_Bool) arr_10 [i_8]);
        }
        var_49 = ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_28 [i_8] [i_8])) ? (4375462235593769204LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))))) : (min((min((arr_40 [i_8 - 1] [i_8]), (((/* implicit */unsigned long long int) (unsigned short)32767)))), (((/* implicit */unsigned long long int) (-(arr_8 [(_Bool)1] [i_8] [i_8] [i_8])))))));
        var_50 = ((/* implicit */signed char) min((var_50), (((/* implicit */signed char) arr_53 [i_8 + 2] [i_8] [0U] [i_8] [i_8] [i_8]))));
    }
    var_51 = ((/* implicit */_Bool) var_7);
}
