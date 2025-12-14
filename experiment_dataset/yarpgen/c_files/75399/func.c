/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75399
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) (short)4575)))))) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                var_17 = ((/* implicit */signed char) arr_3 [i_1]);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        {
                            arr_8 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min(((short)128), (((/* implicit */short) var_2))))) ? (((/* implicit */int) ((unsigned char) arr_4 [i_1]))) : (min((var_3), (((/* implicit */int) (unsigned short)41719)))))) ^ (((/* implicit */int) var_13))));
                            var_18 = ((/* implicit */unsigned int) max((((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_2])) || (((/* implicit */_Bool) arr_1 [i_0]))))), (arr_5 [i_0] [i_0] [i_0] [i_0])));
                            var_19 = ((/* implicit */signed char) min((((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0] [i_0])), (-5883270873197973791LL)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */int) (signed char)56);
    /* LoopSeq 2 */
    for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
    {
        arr_11 [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -6652716558570012080LL)) | (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) * (var_6)))));
        var_21 = ((/* implicit */unsigned long long int) (+(((long long int) (+(1017634657U))))));
        var_22 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((int) arr_10 [i_4]))), (min((((/* implicit */unsigned long long int) arr_9 [i_4])), (arr_10 [i_4])))));
        arr_12 [i_4] &= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_9 [i_4])), (arr_10 [i_4])));
        /* LoopSeq 1 */
        for (unsigned int i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_6 = 2; i_6 < 14; i_6 += 2) 
            {
                var_23 = ((/* implicit */unsigned int) arr_18 [i_6 + 1] [i_6 - 1] [i_6 - 2] [i_6 - 2]);
                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (-(((/* implicit */int) var_8)))))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (arr_16 [i_4] [i_5] [i_5] [i_6 - 1]) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) arr_16 [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */long long int) arr_15 [i_4] [i_6 - 2])) : (var_7))))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-9))) % (((((/* implicit */_Bool) (unsigned short)5926)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-59))) : (arr_13 [i_4])))))))))));
            }
            for (unsigned char i_7 = 0; i_7 < 15; i_7 += 4) 
            {
                var_25 = ((/* implicit */_Bool) max((max((max((arr_13 [i_4]), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) ((short) 960900093509415456ULL))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2147483647)))))));
                var_26 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((short) ((((/* implicit */int) arr_14 [i_4] [i_4] [i_4])) | (arr_19 [i_7] [i_5] [i_5] [i_4]))))) + (2147483647))) << (((14249258857678829823ULL) - (14249258857678829823ULL)))));
                var_27 = ((/* implicit */unsigned short) var_0);
            }
            for (int i_8 = 0; i_8 < 15; i_8 += 2) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_9 = 0; i_9 < 15; i_9 += 4) 
                {
                    var_28 -= ((((/* implicit */long long int) ((/* implicit */int) (short)29350))) / (((((/* implicit */_Bool) var_9)) ? (1139738911753304198LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_4]))))));
                    var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((arr_13 [i_8]) & (arr_25 [i_4] [i_4] [i_8] [i_8] [i_9]))))));
                    var_30 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (-7428329478305445024LL) : (((/* implicit */long long int) -877992359))))) ? (arr_18 [i_9] [i_8] [i_5] [i_4]) : (((/* implicit */long long int) arr_13 [i_8])));
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_31 |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) 6415022824989015345LL)))))) + (arr_10 [i_4])));
                    var_32 = ((/* implicit */unsigned long long int) arr_18 [i_4] [i_4] [i_4] [i_4]);
                    var_33 = ((/* implicit */signed char) arr_18 [i_8] [i_8] [i_8] [i_8]);
                    /* LoopSeq 2 */
                    for (signed char i_11 = 3; i_11 < 12; i_11 += 1) 
                    {
                        var_34 = ((/* implicit */unsigned long long int) var_1);
                        var_35 = ((/* implicit */unsigned int) arr_23 [i_10] [i_11 + 2] [i_11 + 2]);
                        arr_33 [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_31 [i_4] [i_4] [i_8] [i_4] [i_4] [i_4]))));
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 2) 
                    {
                        var_36 = ((/* implicit */int) var_7);
                        var_37 = ((/* implicit */short) arr_18 [i_4] [i_4] [i_10] [i_12]);
                        var_38 = ((/* implicit */unsigned int) (_Bool)1);
                        var_39 = ((/* implicit */long long int) var_15);
                    }
                }
                var_40 = ((/* implicit */int) arr_13 [i_4]);
            }
            var_41 = ((/* implicit */unsigned int) 17897323858761342131ULL);
        }
    }
    /* vectorizable */
    for (long long int i_13 = 0; i_13 < 21; i_13 += 1) 
    {
        var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13379226163071624340ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128))) : (2976924609U)))) ? (459662062U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-15678)))));
        var_43 = ((/* implicit */unsigned int) max((var_43), (((unsigned int) var_13))));
    }
    var_44 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_5))))) : (((((/* implicit */int) (signed char)-102)) % (((/* implicit */int) var_13)))))), (((int) ((((/* implicit */_Bool) var_1)) ? (2491311076U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
}
