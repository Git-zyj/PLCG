/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94632
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
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */short) arr_3 [i_0 + 1]);
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4040226186U)) ? (((/* implicit */int) (signed char)18)) : (((/* implicit */int) (signed char)18))))) ? (((/* implicit */int) ((min((((/* implicit */unsigned int) var_5)), (var_9))) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))) : ((~(((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (arr_3 [i_0]))))))));
        var_17 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) min((1022033895269524030ULL), (1022033895269524030ULL)))) ? (((/* implicit */int) ((17424710178440027586ULL) == (((/* implicit */unsigned long long int) 193871691))))) : (((/* implicit */int) min((((/* implicit */short) arr_1 [i_0])), (var_10))))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        var_18 = ((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_1]))));
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            arr_11 [i_1] = arr_7 [i_2];
            arr_12 [i_2] [i_2] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (10176406262572238910ULL)));
            var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)18)) ? (9223372036854775807LL) : (9223372036854775807LL))) % (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) arr_9 [i_2])) : (4242349506U))))));
        }
        for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            var_20 -= (+(((/* implicit */int) arr_5 [i_1])));
            arr_15 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)2569)) ? (arr_6 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
        }
        var_21 += ((/* implicit */unsigned char) (~((-9223372036854775807LL - 1LL))));
        var_22 = ((/* implicit */int) ((var_13) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_20 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((signed char)-29), (((/* implicit */signed char) ((((/* implicit */_Bool) 17424710178440027585ULL)) && (((/* implicit */_Bool) var_8)))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [i_4]))))) ? (min((17424710178440027586ULL), (((/* implicit */unsigned long long int) (signed char)(-127 - 1))))) : (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((unsigned int) 10176406262572238918ULL)))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            for (unsigned long long int i_6 = 4; i_6 < 7; i_6 += 2) 
            {
                {
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((((/* implicit */_Bool) ((4026649168812193930ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32761)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : ((~(8290099845108750405ULL))))) % (17424710178440027557ULL))))));
                    var_24 = ((/* implicit */long long int) max((((8270337811137312705ULL) + (arr_24 [i_6 - 4] [i_4] [i_6 - 2]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
                    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_0 [7U])))) ? (9223372036854775807LL) : (((/* implicit */long long int) ((2891047495U) << (((-941559460) + (941559477))))))))) ? (((/* implicit */unsigned long long int) -1688116765)) : (438915932145498317ULL)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_7 = 0; i_7 < 10; i_7 += 2) 
        {
            for (int i_8 = 4; i_8 < 9; i_8 += 2) 
            {
                {
                    var_26 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((arr_8 [i_4] [i_4]) << (((((((/* implicit */int) var_2)) + (22219))) - (20)))))), (9698179720602024760ULL)));
                    arr_30 [i_4] = ((/* implicit */unsigned int) -9223372036854775807LL);
                    var_27 |= ((/* implicit */unsigned short) (+(((arr_24 [i_4] [i_7] [i_8 + 1]) - (arr_24 [i_7] [i_7] [i_8 - 2])))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_9 = 2; i_9 < 7; i_9 += 4) 
        {
            for (int i_10 = 0; i_10 < 10; i_10 += 2) 
            {
                {
                    var_28 = ((/* implicit */int) arr_7 [i_4]);
                    arr_38 [i_4] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3983925450U)) ? (8270337811137312706ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-57)))));
                    /* LoopSeq 2 */
                    for (unsigned int i_11 = 0; i_11 < 10; i_11 += 1) 
                    {
                        var_29 = ((/* implicit */int) ((long long int) (~(834007238))));
                        arr_41 [i_4] = ((/* implicit */unsigned int) max((((/* implicit */int) arr_18 [i_4])), (((((/* implicit */_Bool) arr_32 [i_4] [i_4] [i_10])) ? (((/* implicit */int) arr_37 [i_9 + 1] [i_9])) : (((/* implicit */int) arr_25 [i_10]))))));
                        arr_42 [i_9] [(signed char)8] [i_9] [i_9] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_9 + 3] [i_9] [i_9 + 1])) ? (var_9) : (((/* implicit */unsigned int) var_8))))) ? (((unsigned long long int) arr_27 [i_9 + 2] [i_9] [i_9 + 3])) : (((/* implicit */unsigned long long int) (-(arr_27 [i_9 + 1] [i_10] [i_9 - 1]))))));
                        var_30 = ((/* implicit */int) ((unsigned char) 3920149447U));
                        var_31 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1403919801U)) ? (((/* implicit */long long int) 3983925450U)) : (-9223372036854775807LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)-24727)) != (((/* implicit */int) arr_29 [i_9] [i_9] [i_10])))))) : (min((((/* implicit */unsigned int) 0)), (max((((/* implicit */unsigned int) 1688116765)), (1403919802U))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_12 = 0; i_12 < 10; i_12 += 1) 
                    {
                        arr_45 [i_4] [i_9] [i_4] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_9 + 3])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_5 [i_9 + 3]))));
                        var_32 = ((/* implicit */int) ((((/* implicit */_Bool) -983372705)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) 10176406262572238905ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)16))) : (2891047494U)))));
                    }
                    var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) arr_6 [(_Bool)1]))));
                }
            } 
        } 
    }
    var_34 = ((/* implicit */unsigned long long int) var_10);
}
