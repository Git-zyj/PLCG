/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83607
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_19 = ((((/* implicit */long long int) max((var_12), (((/* implicit */int) (short)-32762))))) / ((+(arr_0 [i_0] [i_0]))));
                var_20 = ((/* implicit */_Bool) (short)32766);
                var_21 -= ((/* implicit */unsigned int) ((unsigned short) min((1065353216U), (((/* implicit */unsigned int) arr_1 [i_1])))));
                /* LoopNest 3 */
                for (signed char i_2 = 2; i_2 < 12; i_2 += 4) 
                {
                    for (int i_3 = 2; i_3 < 11; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] = ((int) ((((/* implicit */_Bool) (signed char)10)) ? (((((/* implicit */_Bool) -531994052)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)32761)))) : (((/* implicit */int) var_17))));
                                arr_15 [i_0] [2] [0U] [(unsigned short)8] [i_0] [2] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) var_10)), (((((/* implicit */_Bool) min((var_13), (((/* implicit */long long int) var_0))))) ? (((1514958039) / (((/* implicit */int) arr_1 [i_0])))) : ((~(((/* implicit */int) arr_9 [i_0] [(_Bool)1] [i_1] [i_0]))))))));
                                arr_16 [i_4] [i_0] [3] [i_2 - 1] [i_1] [i_0] [i_0] = ((/* implicit */short) min((min((((/* implicit */unsigned int) var_10)), (arr_8 [i_2] [i_0] [i_0] [i_2 - 2]))), (((/* implicit */unsigned int) (+(var_12))))));
                                arr_17 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max(((~(var_12))), (((/* implicit */int) (short)-17531))))) && (((/* implicit */_Bool) (-(((/* implicit */int) max(((short)4), (((/* implicit */short) var_1))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((signed char) (((!(((/* implicit */_Bool) (signed char)16)))) && (((/* implicit */_Bool) var_7))))))));
    /* LoopSeq 2 */
    for (int i_5 = 0; i_5 < 17; i_5 += 4) 
    {
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 17; i_6 += 4) 
        {
            for (unsigned int i_7 = 0; i_7 < 17; i_7 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_8 = 0; i_8 < 17; i_8 += 4) 
                    {
                        var_23 = (((!(((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_16)))))) || (((/* implicit */_Bool) min((arr_23 [4LL] [i_7] [8] [i_5]), (((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_28 [i_7] [i_6])))))))));
                        var_24 = ((/* implicit */unsigned int) (short)-17531);
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_9 = 0; i_9 < 17; i_9 += 3) 
                    {
                        arr_33 [i_9] [i_7] [i_6] [i_5] &= ((/* implicit */signed char) (-(arr_22 [i_7])));
                        arr_34 [i_9] [i_7] [i_6] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_5] [i_5] [i_5])) ? (var_4) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11)))))));
                    }
                    arr_35 [(_Bool)1] [i_6] [i_5] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (min((((/* implicit */unsigned long long int) var_11)), (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) 1LL)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((((/* implicit */int) var_10)), (var_12)))) / (arr_22 [i_6]))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (short i_10 = 0; i_10 < 17; i_10 += 4) 
        {
            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) < (7984351189260463226ULL))))))) ? (min((((arr_26 [i_5]) + (((/* implicit */long long int) ((/* implicit */int) var_17))))), (((((var_13) + (9223372036854775807LL))) << (((arr_38 [i_5]) - (2590371184U))))))) : (((/* implicit */long long int) (~(((/* implicit */int) max((((/* implicit */short) arr_27 [i_10] [i_10] [i_5])), ((short)-32764)))))))));
            arr_39 [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) -1683098539)) * (7984351189260463226ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) * (-11LL))))))) && (((/* implicit */_Bool) (+((-(var_15))))))));
        }
    }
    /* vectorizable */
    for (unsigned int i_11 = 0; i_11 < 12; i_11 += 1) 
    {
        var_26 &= ((/* implicit */unsigned char) arr_21 [i_11]);
        arr_42 [i_11] [i_11] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (short)-17250)) ? (((/* implicit */int) (signed char)-106)) : (((/* implicit */int) (short)-17531))))));
        var_27 &= ((/* implicit */_Bool) ((((/* implicit */int) arr_40 [(unsigned char)2] [(unsigned char)2])) * (((/* implicit */int) (unsigned char)185))));
    }
}
