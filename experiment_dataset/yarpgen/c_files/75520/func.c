/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75520
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
    var_18 = ((/* implicit */unsigned short) var_14);
    var_19 = ((/* implicit */unsigned char) ((min((((/* implicit */int) ((short) var_5))), (((((/* implicit */_Bool) (short)3968)) ? (((/* implicit */int) var_10)) : (-1955755567))))) > (max((((/* implicit */int) var_10)), (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (short)-3969)) : (((/* implicit */int) (unsigned char)255))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 21; i_1 += 4) 
        {
            {
                arr_6 [(short)8] [i_1 - 3] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)240)), (((1495267125U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))))))) ? (((((/* implicit */_Bool) var_6)) ? (arr_3 [i_1 - 4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((var_16) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))));
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) max((min((((/* implicit */unsigned int) arr_0 [i_0])), (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_15))))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_17))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            {
                arr_12 [i_2] [i_3] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)9)), ((short)-3969))))) : (min((var_4), (((/* implicit */unsigned long long int) arr_0 [i_2 + 1]))))));
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_14), (((/* implicit */long long int) var_2))))) ? (((/* implicit */int) arr_1 [i_2 + 1])) : (((/* implicit */int) arr_8 [i_2]))))) / (min((7113975219197641917ULL), (var_12)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 4; i_4 < 20; i_4 += 3) 
    {
        for (unsigned int i_5 = 1; i_5 < 20; i_5 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_6 = 2; i_6 < 18; i_6 += 3) 
                {
                    for (short i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        {
                            var_22 = ((((/* implicit */_Bool) ((unsigned char) 10821041591467296185ULL))) ? (min((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15950))) : (var_4))), (((/* implicit */unsigned long long int) max(((signed char)107), (var_2)))))) : (min((((/* implicit */unsigned long long int) var_14)), (((unsigned long long int) arr_3 [(short)12])))));
                            var_23 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_6 - 1] [i_6 - 1] [i_4] [i_6])) ? (((/* implicit */int) (short)31770)) : (arr_19 [i_6 - 2] [13] [i_4] [i_6])))), (max((((/* implicit */long long int) var_17)), (var_14)))));
                            arr_22 [i_6] [i_4] = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) arr_2 [i_5 - 1] [i_5 + 1] [i_6 + 3])) ? (((/* implicit */int) arr_2 [i_5 + 1] [i_6] [i_6 + 1])) : (((/* implicit */int) arr_2 [i_5 - 1] [i_5 - 1] [i_6 + 2])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_8 = 3; i_8 < 18; i_8 += 4) 
                {
                    for (short i_9 = 3; i_9 < 20; i_9 += 2) 
                    {
                        {
                            arr_31 [i_4] [i_4] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)-107)), (arr_30 [i_9 - 3] [i_5 - 1])))) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (var_4) : (((/* implicit */unsigned long long int) var_17)))) : (((((/* implicit */_Bool) arr_30 [i_9 - 2] [i_5 + 1])) ? (10681999266907953188ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
                            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((-901068728), (((/* implicit */int) (signed char)-119))))), (((((/* implicit */_Bool) (short)-2002)) ? (((/* implicit */long long int) var_15)) : (-7285974231898678363LL))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_10 = 1; i_10 < 20; i_10 += 2) 
                {
                    for (short i_11 = 2; i_11 < 20; i_11 += 2) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                var_25 ^= max((((min((((/* implicit */unsigned long long int) var_0)), (var_16))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((((/* implicit */_Bool) min((var_12), (var_1)))) ? (arr_3 [i_10 - 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_12] [i_12] [i_12] [i_12])) ? (((/* implicit */int) var_5)) : (arr_34 [i_11] [i_11] [20U])))))));
                                var_26 = ((/* implicit */int) min((var_26), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)14)) ? (((/* implicit */int) (signed char)58)) : (((/* implicit */int) ((unsigned short) var_14)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-68)) && (arr_35 [(short)14] [i_5 + 1] [i_5 - 1] [i_5 + 1] [i_5 - 1])))) : (min((((/* implicit */int) ((unsigned char) arr_26 [i_11]))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-31760)) : (((/* implicit */int) (short)21))))))))));
                            }
                        } 
                    } 
                } 
                var_27 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-20)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((((/* implicit */int) (unsigned char)1)) | (((/* implicit */int) var_10)))) : (((/* implicit */int) ((short) arr_18 [8U])))));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 21; i_13 += 4) 
                {
                    for (short i_14 = 0; i_14 < 21; i_14 += 3) 
                    {
                        {
                            arr_46 [i_4] [i_5 + 1] [i_5 - 1] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)244)), (var_15)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_0)))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_13))) % (var_17)))))) ? (((((/* implicit */_Bool) arr_21 [i_4 + 1] [i_5 + 1] [i_5])) ? (((unsigned long long int) (short)-23024)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2))))))) : (min((7764744806801598422ULL), (((/* implicit */unsigned long long int) arr_34 [i_4] [i_5 + 1] [i_5 + 1])))));
                            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_7)) ? (586051003613520095ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))))), (1152920405095219200ULL)))) ? (((/* implicit */int) min((var_5), (((/* implicit */short) arr_21 [i_5 + 1] [i_5 - 1] [i_13]))))) : (((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) var_5)))))));
                            arr_47 [i_4 + 1] [i_4] [i_4] [i_4 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_23 [i_4] [i_5 + 1] [i_14]), (2899367013U)))) ? (min((var_16), (var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_23 [i_4 - 1] [i_4] [i_4 - 4]))))));
                            var_29 = ((/* implicit */unsigned char) min((max((((((/* implicit */_Bool) (short)-27124)) ? (arr_0 [i_4 + 1]) : (((/* implicit */int) (unsigned char)25)))), (((/* implicit */int) var_0)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_0), ((short)30376))))) != (min((arr_16 [i_5] [i_13]), (((/* implicit */unsigned long long int) arr_23 [i_4] [6ULL] [i_14])))))))));
                            arr_48 [i_4 - 1] [i_4 - 1] [i_4] [18U] = ((/* implicit */short) ((((_Bool) arr_26 [i_4])) ? (max((((/* implicit */unsigned long long int) arr_26 [i_4])), (36028797017915392ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)-32748)), ((unsigned short)29833)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
