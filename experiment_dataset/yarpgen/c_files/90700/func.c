/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90700
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
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-1))))) && (((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 1]))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)96))) : (var_9))))))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_4 [i_1] [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_3)) : (var_1))))))), (((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned int) var_11))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) var_4)), (var_6)))) : (min((var_1), (((/* implicit */unsigned long long int) -1354738488507957552LL))))))));
            arr_5 [i_1] [i_1] = ((/* implicit */int) (_Bool)1);
        }
        for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_3 = 0; i_3 < 25; i_3 += 1) 
            {
                for (long long int i_4 = 4; i_4 < 24; i_4 += 4) 
                {
                    {
                        arr_14 [i_4] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */signed char) max((min((arr_2 [i_4 - 3] [i_0 + 2]), (((/* implicit */long long int) (short)-17907)))), (max((((/* implicit */long long int) var_5)), (arr_2 [i_4 + 1] [i_0 + 2])))));
                        arr_15 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) var_5);
                    }
                } 
            } 
            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (_Bool)1))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_19 [i_0 - 1] = ((/* implicit */unsigned int) (+(((((/* implicit */int) ((((/* implicit */int) (signed char)-57)) == (((/* implicit */int) (_Bool)1))))) - (((/* implicit */int) ((var_10) >= (((/* implicit */long long int) ((/* implicit */int) (short)-5175))))))))));
            var_16 = ((/* implicit */int) ((((/* implicit */_Bool) -1087663263653824477LL)) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (2147483632) : (((/* implicit */int) arr_18 [i_0 + 2]))))), (6265652719982507318ULL))) : (((((((/* implicit */_Bool) (signed char)23)) ? (((/* implicit */unsigned long long int) 1012510997)) : (var_13))) | (((/* implicit */unsigned long long int) var_0))))));
            var_17 = ((/* implicit */int) (+(min((1723313268U), (((/* implicit */unsigned int) (signed char)31))))));
            /* LoopSeq 4 */
            for (int i_6 = 0; i_6 < 25; i_6 += 4) 
            {
                arr_22 [i_0] [i_0 + 1] [i_0] [i_0 + 1] = ((/* implicit */int) (~(((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (arr_3 [i_0 + 2] [i_0]) : (var_12)))) : (((((/* implicit */_Bool) (short)9456)) ? (((/* implicit */unsigned long long int) var_10)) : (var_1)))))));
                arr_23 [i_0 + 2] [i_0] [i_0 - 1] [i_0 - 1] = ((/* implicit */long long int) (~(2147483626)));
                arr_24 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */short) var_12);
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_8 = 1; i_8 < 23; i_8 += 4) 
                {
                    for (signed char i_9 = 1; i_9 < 24; i_9 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) (+((+(((/* implicit */int) (_Bool)1))))));
                            arr_33 [i_0 + 2] [i_0 + 2] [i_8] [i_8 + 2] [i_9 - 1] [i_8 + 2] = ((/* implicit */signed char) max((((/* implicit */int) var_7)), ((-((-(arr_25 [i_0] [i_7] [i_0])))))));
                        }
                    } 
                } 
                arr_34 [i_0] [i_0] [i_5] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (signed char)31)) ? (6265652719982507313ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0])))))));
                /* LoopSeq 1 */
                for (unsigned int i_10 = 1; i_10 < 22; i_10 += 4) 
                {
                    arr_37 [i_10] [i_5] [i_7] [i_5] [i_5] [i_10] = (_Bool)1;
                    arr_38 [i_10] [i_10] [i_10] = ((/* implicit */_Bool) ((short) (signed char)-91));
                    arr_39 [i_0] [i_0] [i_10] [i_0] = ((/* implicit */_Bool) max((min((var_1), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_6)), (var_3)))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) var_13))))))));
                }
                var_19 = ((long long int) min((((/* implicit */unsigned long long int) (_Bool)1)), (8734519869049632963ULL)));
                arr_40 [i_7] [i_0] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (var_13) : (max((arr_13 [i_0 + 1] [12] [12] [i_0 + 3]), (((/* implicit */unsigned long long int) (_Bool)1))))));
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
            {
                arr_45 [i_0 - 1] [i_0] [i_0] [i_0] = ((/* implicit */int) var_9);
                var_20 = ((/* implicit */signed char) ((long long int) min((((/* implicit */unsigned long long int) (~(var_10)))), (6265652719982507318ULL))));
                arr_46 [i_0 + 3] [i_0 + 3] [i_11] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */int) (signed char)-89))))))) ? (((((((((/* implicit */_Bool) -1)) ? (-1) : (((/* implicit */int) (signed char)-103)))) + (2147483647))) << (((/* implicit */int) ((((/* implicit */int) arr_17 [i_0] [i_0 + 2] [i_0 + 2])) > (((/* implicit */int) (_Bool)1))))))) : ((-(((((/* implicit */_Bool) 1012510991)) ? (((/* implicit */int) (short)3648)) : (((/* implicit */int) (_Bool)1))))))));
                arr_47 [i_0] [i_0 + 1] [i_0 + 2] [i_0 + 2] = min((max((var_2), (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-89)) : (var_12)))))), (((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), (arr_35 [i_11] [i_0] [i_0])))));
            }
            for (int i_12 = 0; i_12 < 25; i_12 += 2) 
            {
                arr_51 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (~(max((2514358815U), (((/* implicit */unsigned int) (_Bool)1))))));
                /* LoopNest 2 */
                for (unsigned int i_13 = 4; i_13 < 24; i_13 += 1) 
                {
                    for (int i_14 = 1; i_14 < 23; i_14 += 1) 
                    {
                        {
                            arr_59 [i_13] = ((/* implicit */int) max((2199023255551ULL), (((/* implicit */unsigned long long int) 1735668138))));
                            arr_60 [i_13] [i_14 + 1] = ((/* implicit */signed char) var_1);
                            arr_61 [i_13] [i_0] [i_12] [i_0] [i_0] [i_0 - 1] [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_11)) : (var_6)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 1963097027)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_11))))))))) : ((+(min((878975041U), (var_0)))))));
                            arr_62 [i_12] [i_12] [i_12] [i_13] [i_12] = ((/* implicit */signed char) min((-1LL), (((/* implicit */long long int) (signed char)-5))));
                            arr_63 [i_14 + 1] [i_13] [i_13] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) -679603248126789213LL)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483631)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_18 [i_12]))))) ? (max((((/* implicit */int) (_Bool)1)), (-15))) : (max((((/* implicit */int) (signed char)-82)), (-1268257052))))))));
                        }
                    } 
                } 
                arr_64 [i_0 + 2] [i_5] [i_0 + 2] = ((/* implicit */short) 1735668144);
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0LL)) ? (min((((((-679603248126789213LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (signed char)99)) - (52))))), (((/* implicit */long long int) arr_41 [i_12] [i_5] [i_0 + 2])))) : (((/* implicit */long long int) (+(((((-1282043433) + (2147483647))) >> (((((/* implicit */int) arr_41 [i_0] [i_0] [i_0])) - (96))))))))));
            }
        }
    }
    var_22 |= ((/* implicit */unsigned long long int) max((min((max((var_3), (var_10))), (((/* implicit */long long int) var_12)))), (((/* implicit */long long int) var_6))));
}
