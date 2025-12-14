/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65492
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
    var_15 |= ((/* implicit */unsigned int) var_14);
    var_16 = ((/* implicit */_Bool) var_13);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            var_17 ^= ((_Bool) ((unsigned int) 4294967295U));
            arr_4 [i_0] [i_1] = ((/* implicit */int) ((unsigned int) (!(((/* implicit */_Bool) arr_1 [i_0])))));
            arr_5 [i_0] [(_Bool)0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) < (arr_0 [i_1])));
        }
        for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            arr_10 [i_2] [i_0] &= ((/* implicit */int) (~(min((arr_1 [i_0]), (max((((/* implicit */long long int) 151146379U)), (-7836267693579768622LL)))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_3 = 1; i_3 < 13; i_3 += 3) 
            {
                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (((!(arr_6 [(unsigned short)14] [i_2]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))) : (((/* implicit */int) ((((/* implicit */unsigned int) (-2147483647 - 1))) <= (arr_0 [i_0])))))))));
                var_19 = ((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_3 - 1])) / (((/* implicit */int) var_5))));
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((int) arr_1 [i_2])))));
            }
        }
        /* LoopSeq 1 */
        for (unsigned int i_4 = 1; i_4 < 14; i_4 += 4) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                /* LoopNest 2 */
                for (short i_6 = 1; i_6 < 13; i_6 += 4) 
                {
                    for (long long int i_7 = 1; i_7 < 14; i_7 += 3) 
                    {
                        {
                            arr_27 [i_7 + 2] [i_7 - 1] [i_6] [(_Bool)1] [i_4] [i_4 + 1] [i_0] = ((arr_6 [i_4 + 1] [i_7 + 1]) ? (((/* implicit */int) (short)-1403)) : (((/* implicit */int) arr_22 [9] [i_7] [i_7] [i_7] [(short)4])));
                            arr_28 [(short)15] [(short)15] [i_0] [(short)15] [i_7] [i_7] |= ((((/* implicit */int) arr_6 [i_6 - 1] [i_4 - 1])) - (((/* implicit */int) arr_6 [i_6 + 1] [i_4 - 1])));
                            var_21 = ((/* implicit */_Bool) max((var_21), ((!((!(((/* implicit */_Bool) var_5))))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((arr_26 [i_0] [i_0] [i_0] [i_4 + 1] [i_0] [i_5]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_0] [i_0] [i_5] [i_4 + 1] [i_5] [i_5]))) : (arr_15 [i_5] [i_0] [i_0]))))));
                var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) (!(arr_14 [i_0] [(unsigned short)5] [(unsigned short)5]))))));
            }
            /* vectorizable */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                /* LoopNest 2 */
                for (short i_9 = 0; i_9 < 16; i_9 += 3) 
                {
                    for (long long int i_10 = 0; i_10 < 16; i_10 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [10U] [10U] [2] [i_9] [i_9] [i_9])) ? (arr_25 [i_10] [i_10] [i_8] [i_8] [i_10] [i_8]) : (arr_25 [i_0] [i_0] [9LL] [i_8] [i_9] [i_10])));
                            arr_36 [i_0] [i_4] [i_10] [i_9] [i_10] = ((/* implicit */_Bool) ((arr_29 [i_0]) + (((/* implicit */long long int) arr_25 [i_10] [i_9] [i_4] [i_4 + 2] [i_4] [i_0]))));
                            var_25 = ((/* implicit */short) ((var_4) < (((arr_33 [(short)3] [2] [i_8] [2]) / (7836267693579768623LL)))));
                        }
                    } 
                } 
                arr_37 [i_4] [i_4] [i_0] [i_8] |= ((/* implicit */_Bool) var_9);
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                arr_41 [i_11] [i_11] [i_4] [i_0] = ((((/* implicit */long long int) max((((((/* implicit */int) arr_7 [i_0] [11U] [i_11])) - (((/* implicit */int) arr_35 [i_0] [i_4] [0LL])))), (((/* implicit */int) arr_21 [i_0] [i_4 - 1]))))) >= (((((/* implicit */long long int) arr_15 [i_0] [i_4 - 1] [i_0])) / (arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                var_26 = ((/* implicit */unsigned int) var_8);
            }
            arr_42 [i_0] [i_0] = ((/* implicit */int) ((short) arr_22 [i_4 + 2] [i_4 + 1] [i_4] [i_4 + 1] [i_4]));
            arr_43 [i_4 + 1] [i_4 + 2] = ((/* implicit */unsigned int) max((((/* implicit */long long int) min((arr_3 [i_4 - 1]), (arr_3 [i_4 + 1])))), (var_6)));
            var_27 ^= ((/* implicit */int) (!(((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) != (var_4)))));
            arr_44 [(unsigned short)6] [i_0] [i_0] = ((/* implicit */unsigned short) ((short) ((arr_33 [i_4 + 2] [i_4 + 2] [i_4 - 1] [(_Bool)1]) >= (arr_33 [i_4 + 1] [i_4] [i_4 - 1] [i_4 + 1]))));
        }
        arr_45 [i_0] = ((((arr_40 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_40 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_40 [i_0] [i_0] [i_0] [i_0])))) * (((((/* implicit */int) (unsigned short)49934)) * (((/* implicit */int) arr_40 [i_0] [i_0] [(_Bool)1] [i_0])))));
        var_28 = ((/* implicit */int) -2LL);
    }
    for (unsigned short i_12 = 2; i_12 < 24; i_12 += 4) 
    {
        var_29 = ((_Bool) ((((/* implicit */_Bool) arr_46 [i_12 - 2] [i_12])) ? (arr_48 [i_12 - 1]) : (arr_48 [i_12 - 2])));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_13 = 0; i_13 < 25; i_13 += 4) 
        {
            arr_53 [i_13] [i_12 + 1] = arr_49 [i_12 - 1] [i_12];
            var_30 = ((/* implicit */_Bool) ((((/* implicit */int) var_5)) << (((arr_48 [i_12 - 1]) - (386374128)))));
            var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) var_6))));
        }
        var_32 |= ((/* implicit */_Bool) arr_52 [i_12 + 1]);
    }
    var_33 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)15592)) >= (((/* implicit */int) max((var_10), ((_Bool)0))))))), (min(((-(7836267693579768622LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_12)) : (var_9))))))));
}
