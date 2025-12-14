/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7779
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
    for (long long int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 12; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_12 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_5 [i_1] [i_2])) ? (arr_13 [i_0 + 2] [i_0] [i_0 + 4] [i_0] [i_0 + 2] [i_0 + 4] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) >> (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) arr_6 [i_4] [i_2] [i_1])) : (arr_1 [i_0] [i_3]))) - (273330862LL)))))) ? (((/* implicit */int) arr_4 [(short)5] [i_2 - 1])) : (((/* implicit */int) (!(((_Bool) (_Bool)1)))))));
                            arr_15 [i_4] [i_4] [6] [i_2 + 1] [i_1] [i_1] [i_0 + 1] = ((/* implicit */unsigned short) ((unsigned long long int) (-((+(((/* implicit */int) (_Bool)0)))))));
                            var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) -3852949517572344698LL))));
                            var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_5 [i_0] [i_0])))) : (((long long int) arr_13 [i_0 - 1] [i_0 + 2] [i_0] [i_0] [i_0] [i_0 + 2] [i_0 + 1]))));
                        }
                        arr_16 [i_0] [i_1] [i_1] [i_3] [i_3] = ((/* implicit */unsigned int) ((_Bool) arr_8 [i_3] [i_2] [11U] [i_0]));
                        arr_17 [i_3] [i_2 + 1] [i_1] [i_0] = ((/* implicit */unsigned int) (~((~((~((-2147483647 - 1))))))));
                    }
                } 
            } 
        } 
        var_15 -= ((/* implicit */short) (((!(((/* implicit */_Bool) max((3852949517572344714LL), (((/* implicit */long long int) (_Bool)1))))))) ? (arr_13 [(short)6] [i_0 + 1] [i_0 + 2] [i_0 + 1] [i_0 + 3] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])))));
        arr_18 [i_0 - 1] [i_0] |= ((/* implicit */long long int) arr_3 [i_0] [i_0]);
        var_16 -= ((/* implicit */int) ((((/* implicit */_Bool) ((max((3852949517572344695LL), (7798896651962828637LL))) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)18896))) : (3852949517572344703LL)));
    }
    for (signed char i_5 = 3; i_5 < 19; i_5 += 1) 
    {
        arr_21 [i_5] = ((/* implicit */int) (!((!(((/* implicit */_Bool) ((short) arr_19 [i_5])))))));
        /* LoopSeq 3 */
        for (signed char i_6 = 0; i_6 < 22; i_6 += 1) 
        {
            var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_11))));
            arr_24 [i_5] = arr_19 [i_6];
            /* LoopNest 2 */
            for (unsigned int i_7 = 2; i_7 < 21; i_7 += 1) 
            {
                for (long long int i_8 = 0; i_8 < 22; i_8 += 2) 
                {
                    {
                        arr_29 [i_5] [i_5] [i_5 - 3] [12LL] [15ULL] [i_5] = ((/* implicit */short) (~(var_4)));
                        var_18 ^= ((/* implicit */_Bool) var_8);
                        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (-((((_Bool)1) ? (-7798896651962828638LL) : (((/* implicit */long long int) 595940828)))))))));
                        arr_30 [i_5] = min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) arr_26 [i_5])) & (var_10)))) ^ (arr_19 [i_5 + 1])))), (((arr_23 [i_5] [i_5] [i_5 - 1]) / (((/* implicit */unsigned long long int) arr_26 [i_5])))));
                    }
                } 
            } 
            arr_31 [i_5] [i_5 - 1] [i_5 + 1] = ((((/* implicit */unsigned long long int) (~(arr_19 [i_6])))) != (((min((var_4), (((/* implicit */unsigned long long int) var_2)))) & (arr_28 [i_6] [i_6] [i_5 - 1] [i_5]))));
        }
        for (short i_9 = 4; i_9 < 20; i_9 += 1) 
        {
            var_20 = ((/* implicit */signed char) (+(((arr_22 [i_9 - 2] [i_9] [i_5]) ? (arr_26 [i_5]) : (((/* implicit */int) arr_22 [i_5] [i_9 - 1] [i_5]))))));
            var_21 += ((/* implicit */_Bool) min((arr_28 [i_9 + 1] [i_9 - 1] [i_9 - 2] [i_9 - 2]), (((/* implicit */unsigned long long int) ((814293782U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
            var_22 = ((_Bool) (+(((/* implicit */int) arr_25 [i_5] [i_5]))));
        }
        for (long long int i_10 = 0; i_10 < 22; i_10 += 1) 
        {
            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(max((402653184U), (((/* implicit */unsigned int) (_Bool)1))))))) ? (((/* implicit */long long int) (-(max((((/* implicit */int) arr_32 [6U] [i_5])), (arr_26 [10])))))) : (arr_19 [i_5]))))));
            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((unsigned long long int) 2147483647)))));
            /* LoopNest 3 */
            for (unsigned int i_11 = 0; i_11 < 22; i_11 += 2) 
            {
                for (int i_12 = 4; i_12 < 19; i_12 += 1) 
                {
                    for (short i_13 = 3; i_13 < 19; i_13 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */long long int) (_Bool)1);
                            var_26 += ((/* implicit */short) ((((/* implicit */_Bool) min((((int) 0ULL)), (min((var_0), (((/* implicit */int) (_Bool)1))))))) ? (max((2516471350U), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((max((arr_41 [i_5]), (((/* implicit */unsigned long long int) arr_42 [i_11] [i_10])))) >= (arr_41 [i_13])))))));
                            arr_45 [i_5] [i_10] [i_11] [i_5] [i_13] = ((/* implicit */unsigned int) var_9);
                        }
                    } 
                } 
            } 
            var_27 *= ((/* implicit */_Bool) (+(((unsigned int) arr_22 [i_5] [i_5 - 3] [4LL]))));
        }
        arr_46 [i_5] = ((/* implicit */signed char) arr_25 [i_5] [i_5]);
        var_28 = ((/* implicit */_Bool) (+(((unsigned int) ((_Bool) arr_40 [i_5])))));
    }
    /* LoopNest 2 */
    for (long long int i_14 = 2; i_14 < 15; i_14 += 2) 
    {
        for (unsigned int i_15 = 0; i_15 < 16; i_15 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_16 = 0; i_16 < 16; i_16 += 2) 
                {
                    var_29 = ((/* implicit */short) min((arr_35 [i_15]), (((/* implicit */unsigned int) arr_44 [i_14] [i_15] [i_16] [i_16] [i_14] [i_14]))));
                    var_30 = ((/* implicit */short) ((((/* implicit */_Bool) 3892314111U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (9444759516574476435ULL)));
                    arr_54 [i_16] [i_14] [i_14] [i_14] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (max((arr_20 [i_14 - 2] [i_14 + 1]), (((/* implicit */long long int) (+(((/* implicit */int) arr_34 [i_16] [i_15]))))))) : (((/* implicit */long long int) min((min((((/* implicit */unsigned int) var_2)), (3892314111U))), ((+(4294967285U))))))));
                }
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) arr_44 [i_15] [i_14] [i_15] [12ULL] [i_14] [i_14 + 1]))));
                    arr_58 [i_14] [i_14] [i_15] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) ((var_6) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (min((arr_23 [i_14] [i_14] [(short)13]), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1)))))))));
                    var_32 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_14])) ? (((/* implicit */unsigned long long int) 4294967293U)) : (arr_41 [i_14])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_15])))))) : (min((arr_41 [i_14 + 1]), (((/* implicit */unsigned long long int) arr_26 [i_15]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_18 = 3; i_18 < 14; i_18 += 1) 
                    {
                        for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                        {
                            {
                                arr_64 [i_14] [i_14] [i_14] [i_15] [(_Bool)1] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_47 [i_14 + 1] [i_15])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (max((min((var_4), (((/* implicit */unsigned long long int) arr_43 [i_15] [i_15] [i_15] [i_15] [i_15])))), (((/* implicit */unsigned long long int) ((_Bool) arr_32 [i_15] [i_19])))))));
                                arr_65 [i_15] [i_15] [i_15] [i_15] [i_15] = ((/* implicit */int) min((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */long long int) 402653184U)) & (var_7)))));
                            }
                        } 
                    } 
                }
                var_33 -= ((/* implicit */_Bool) var_5);
                var_34 = ((/* implicit */short) ((var_7) != (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_15] [i_15])))));
            }
        } 
    } 
    var_35 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (short)32763))))) | (var_8)));
    var_36 = ((/* implicit */short) var_1);
}
