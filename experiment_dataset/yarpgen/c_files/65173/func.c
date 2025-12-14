/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65173
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
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)121))) : (2548908678U)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)50631)) >> (((2814199183U) - (2814199163U)))))) : (2729727507U)));
        var_19 = var_15;
        var_20 += ((/* implicit */short) (_Bool)1);
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        var_21 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (536854528)));
        /* LoopSeq 3 */
        for (short i_2 = 2; i_2 < 12; i_2 += 4) 
        {
            arr_8 [i_1] [i_2 - 1] = ((((/* implicit */_Bool) arr_7 [i_2 + 3])) ? (((/* implicit */int) arr_4 [i_2 + 2])) : (536854523));
            var_22 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_2 + 3])) ? (536854536) : (((/* implicit */int) ((536854554) > (((/* implicit */int) var_10)))))));
        }
        for (unsigned int i_3 = 4; i_3 < 14; i_3 += 2) /* same iter space */
        {
            arr_12 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(-536854552)))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) < (var_12))))));
            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_1) & (var_6)))) ? ((~(((/* implicit */int) arr_10 [i_3 - 1])))) : ((~(((/* implicit */int) (_Bool)1)))))))));
        }
        for (unsigned int i_4 = 4; i_4 < 14; i_4 += 2) /* same iter space */
        {
            var_24 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-104))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 536854554))))) : (((/* implicit */int) (short)-1))));
            arr_17 [i_1] [i_1] [i_4 - 4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_1] [i_4] [i_4 - 1])) || (((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_4 - 3]))));
        }
        arr_18 [i_1] [i_1] = ((/* implicit */_Bool) var_9);
        var_25 = ((/* implicit */unsigned short) ((short) (!(((/* implicit */_Bool) -536854568)))));
        arr_19 [i_1] = (-(((/* implicit */int) arr_9 [i_1] [i_1] [i_1])));
    }
    for (unsigned char i_5 = 2; i_5 < 19; i_5 += 2) 
    {
        var_26 = ((arr_20 [i_5]) || ((!(((/* implicit */_Bool) arr_21 [i_5])))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_6 = 2; i_6 < 18; i_6 += 2) 
        {
            arr_27 [i_5 - 2] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_3)))) ^ (arr_25 [i_6 + 2] [i_5 + 2] [i_6 + 3])));
            var_27 &= ((/* implicit */int) ((arr_22 [i_5 + 2] [i_5 + 2]) < (arr_23 [i_5 + 2])));
            var_28 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_26 [i_5 - 2] [i_5] [i_5 + 2]))));
        }
        var_29 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_22 [i_5 - 1] [i_5 + 2])))) ? (((/* implicit */long long int) ((arr_20 [i_5]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_23 [i_5 - 2])))) : ((-(-1547552243853475951LL)))));
    }
    for (unsigned short i_7 = 1; i_7 < 13; i_7 += 1) 
    {
        var_30 = min(((~(((((/* implicit */_Bool) 15U)) ? (-1547552243853475930LL) : (((/* implicit */long long int) ((/* implicit */int) (short)4095))))))), (((/* implicit */long long int) ((-536854550) > (((/* implicit */int) (signed char)104))))));
        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((596875988U), (((/* implicit */unsigned int) (signed char)113))))) ? (arr_22 [i_7] [i_7]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_7] [i_7 + 1] [i_7 - 1])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_21 [i_7]))))) ? (((((/* implicit */int) var_0)) / (var_13))) : (((/* implicit */int) arr_6 [i_7 - 1] [i_7] [i_7])))))));
    }
    var_32 = ((/* implicit */unsigned int) ((var_15) ? (((/* implicit */unsigned long long int) ((var_15) ? (((((/* implicit */unsigned int) -536854564)) - (var_1))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))))) : (max((((/* implicit */unsigned long long int) var_13)), (11349752039111738691ULL)))));
    var_33 = ((/* implicit */unsigned long long int) var_0);
}
