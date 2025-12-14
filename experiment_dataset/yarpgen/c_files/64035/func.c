/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64035
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
    var_19 = ((/* implicit */signed char) (+(((((((/* implicit */int) (short)-8976)) + (2147483647))) >> (((((/* implicit */int) (short)11215)) - (11207)))))));
    var_20 = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) min((((/* implicit */signed char) var_14)), (var_13)))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (35993612646875136ULL))))), (var_4)));
    var_21 = ((/* implicit */signed char) var_12);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)-2012)) ? (max((var_16), (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (arr_2 [3ULL])));
                arr_5 [i_1] [i_1] [(_Bool)1] = ((/* implicit */signed char) ((((((/* implicit */int) max((var_15), (var_1)))) >= ((-(((/* implicit */int) var_1)))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_1 [i_0] [i_1]))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */_Bool) arr_6 [i_2] [i_2]);
        /* LoopNest 3 */
        for (short i_3 = 2; i_3 < 13; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 2; i_4 < 11; i_4 += 4) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (short i_6 = 0; i_6 < 14; i_6 += 2) 
                        {
                            arr_19 [i_4] [i_4] [i_4 + 1] [i_5] [i_6] |= arr_7 [i_3];
                            arr_20 [i_2] [i_3] [i_4] [i_5] [i_6] = ((/* implicit */signed char) ((unsigned long long int) (short)12889));
                        }
                        /* vectorizable */
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            arr_24 [i_2] [i_2] [i_2] [i_5] [i_4] |= ((/* implicit */unsigned long long int) ((arr_12 [i_3 + 1] [i_4 - 1] [i_4 - 2]) ? (((/* implicit */int) arr_12 [i_3 + 1] [i_4 - 1] [i_4 - 2])) : (((/* implicit */int) arr_12 [i_3 + 1] [i_4 - 1] [i_4 - 2]))));
                            arr_25 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_4] [i_4] = ((((/* implicit */_Bool) (~(var_4)))) ? (898469305973723039ULL) : (14001396440701580726ULL));
                            arr_26 [i_2] [i_4] [i_3] = ((/* implicit */unsigned long long int) (short)25844);
                            arr_27 [i_2] [i_2] [i_3] [i_3] [i_3] [i_5] [i_7] = ((((/* implicit */_Bool) (signed char)44)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29521))) : (arr_21 [i_3] [i_4] [i_4] [i_4] [i_4]));
                        }
                        for (unsigned long long int i_8 = 4; i_8 < 12; i_8 += 4) 
                        {
                            arr_32 [i_3] [i_3 - 1] [i_4 + 2] [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_17 [i_2] [(short)9] [i_3 - 2] [i_4] [(short)9] [i_3] [(short)9]), (((/* implicit */unsigned long long int) var_15)))))));
                            arr_33 [i_2] [i_3] [i_4] [i_3] [i_3] = (-(((((/* implicit */_Bool) var_9)) ? (arr_21 [i_2] [i_2] [i_2] [i_3 - 2] [i_4 - 1]) : (var_2))));
                            arr_34 [i_3] = ((/* implicit */signed char) ((unsigned long long int) arr_14 [i_2] [i_8] [i_8] [i_8]));
                            arr_35 [i_2] [(signed char)1] [i_2] [i_5] [i_8] [i_3] = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) max((var_0), (((/* implicit */short) var_14))))))), (((/* implicit */int) ((((/* implicit */int) (short)26955)) > (((/* implicit */int) (_Bool)1)))))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 2) 
                        {
                            arr_39 [i_3] [i_3] [i_4] [i_4 - 1] [(_Bool)1] [i_9] [i_4 - 1] = (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_16 [i_3 - 1] [i_3])), (var_3)))));
                            arr_40 [i_3] [i_3] [i_3] [i_3] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)12889)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_37 [(_Bool)1] [i_3] [i_4] [i_5] [i_9]), (((short) var_4)))))) : (((((/* implicit */_Bool) arr_8 [i_4] [i_9])) ? (max((arr_8 [i_2] [(short)4]), (arr_17 [i_9] [i_3] [3ULL] [i_5] [i_4 - 2] [i_3] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_17))))))));
                        }
                        for (signed char i_10 = 0; i_10 < 14; i_10 += 4) 
                        {
                            arr_44 [i_3] = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) ((_Bool) (_Bool)0))), (((((/* implicit */_Bool) (signed char)-67)) ? (arr_18 [i_3] [i_3]) : (3627116245806011861ULL))))) | ((~(max((((/* implicit */unsigned long long int) (short)11989)), (12941145195835887788ULL)))))));
                            arr_45 [i_2] [i_3] [8ULL] [i_4 + 2] [i_3] [i_5] [i_10] = ((/* implicit */signed char) (short)-17741);
                        }
                        arr_46 [i_3] = ((/* implicit */short) var_16);
                    }
                } 
            } 
        } 
        arr_47 [i_2] = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) 13255631566084022808ULL)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) >= (arr_18 [(signed char)12] [(signed char)12])))) : ((+(((/* implicit */int) arr_29 [i_2] [2ULL] [i_2])))))));
    }
}
