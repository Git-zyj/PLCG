/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64637
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            arr_8 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */long long int) arr_3 [9LL])) / (4039707496137815283LL)));
            var_19 += ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)51)) % (((/* implicit */int) (_Bool)1))));
            var_20 = (~(((/* implicit */int) (signed char)126)));
        }
        for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 1) 
        {
            var_21 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (((((/* implicit */_Bool) -4148075259576382530LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-4039707496137815266LL))) : (4039707496137815265LL)));
            /* LoopSeq 3 */
            for (int i_3 = 1; i_3 < 21; i_3 += 4) 
            {
                var_22 = ((/* implicit */_Bool) min((var_22), (((_Bool) arr_2 [i_3 - 1] [i_2 + 1]))));
                var_23 = ((/* implicit */unsigned char) var_18);
                var_24 = ((/* implicit */short) arr_14 [i_3] [(unsigned char)18] [i_0]);
            }
            for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) 
            {
                arr_18 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) arr_3 [i_0])) / (4039707496137815277LL)));
                var_25 = ((/* implicit */long long int) ((unsigned char) var_17));
                var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) (unsigned char)255))) * (((/* implicit */int) (!(((/* implicit */_Bool) 2147483630)))))));
                var_27 = ((/* implicit */unsigned int) -2132897453162687720LL);
            }
            for (long long int i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                var_28 -= ((/* implicit */long long int) var_16);
                var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_6 [i_2 + 1] [i_5])) : (((/* implicit */int) (_Bool)1))));
                /* LoopSeq 3 */
                for (unsigned char i_6 = 1; i_6 < 22; i_6 += 4) 
                {
                    var_30 &= 1820010319;
                    var_31 = ((/* implicit */signed char) ((short) arr_13 [i_6 + 1] [i_6] [i_6] [i_6]));
                    var_32 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [i_2 - 1] [i_2 + 1] [i_6 + 1] [i_6 + 1]))));
                }
                for (unsigned int i_7 = 0; i_7 < 23; i_7 += 1) 
                {
                    arr_26 [i_5] [i_5] [i_5] [(unsigned short)15] [i_0] [i_5] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                    var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_19 [i_7] [i_5] [i_5] [i_0]) : (var_13)))) ? (-4039707496137815266LL) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0] [i_2 - 1] [i_5] [i_7])))));
                    arr_27 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) % (var_1)));
                    arr_28 [i_2] [i_5] = ((/* implicit */unsigned char) (_Bool)1);
                }
                for (short i_8 = 0; i_8 < 23; i_8 += 1) 
                {
                    var_34 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0])) ? (var_15) : (((/* implicit */int) (_Bool)0))));
                    arr_31 [i_0] [i_2] [i_2 - 1] [i_5] [17ULL] [i_5] = ((/* implicit */unsigned char) (unsigned short)0);
                }
            }
            var_35 = ((/* implicit */_Bool) (-((~(2LL)))));
        }
        var_36 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)0)) * (((/* implicit */int) (unsigned char)0))));
    }
    for (unsigned char i_9 = 3; i_9 < 14; i_9 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned int i_10 = 0; i_10 < 15; i_10 += 1) 
        {
            for (unsigned short i_11 = 0; i_11 < 15; i_11 += 4) 
            {
                for (unsigned char i_12 = 0; i_12 < 15; i_12 += 4) 
                {
                    {
                        var_37 = ((/* implicit */_Bool) var_12);
                        var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) var_16))));
                        var_39 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)44119)), (((((/* implicit */_Bool) (unsigned char)251)) ? (((/* implicit */int) arr_32 [i_9 - 3])) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)176)) : (((/* implicit */int) (_Bool)1))))))));
                    }
                } 
            } 
        } 
        arr_45 [i_9] = var_9;
    }
    var_40 = ((/* implicit */unsigned short) min((var_3), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_9)) << (((((-4039707496137815266LL) + (4039707496137815293LL))) - (17LL)))))))))));
}
