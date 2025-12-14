/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67067
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
    for (short i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 4; i_2 < 22; i_2 += 1) 
                {
                    var_19 = ((/* implicit */unsigned int) var_7);
                    var_20 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [i_0 + 1] [i_1 + 1] [i_1 - 1] [i_2 + 2])) < (((/* implicit */int) arr_6 [i_0 + 1] [i_1 + 1] [i_1 - 1] [i_2 + 1]))));
                    arr_7 [i_1] = ((/* implicit */int) ((arr_3 [i_0 + 1]) ? (((((/* implicit */unsigned long long int) var_15)) * (var_0))) : (((/* implicit */unsigned long long int) var_14))));
                    var_21 = ((/* implicit */unsigned long long int) var_18);
                }
                for (unsigned long long int i_3 = 3; i_3 < 21; i_3 += 1) 
                {
                    var_22 = max(((unsigned char)114), (((/* implicit */unsigned char) (_Bool)0)));
                    var_23 = ((/* implicit */long long int) (unsigned char)58);
                }
                var_24 = ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)32)) << (((((-856870164222440979LL) + (856870164222441007LL))) - (22LL)))))), (((unsigned long long int) arr_0 [i_0] [i_0])))), (var_5)));
                var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) ((short) var_16))) - (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)192)), ((unsigned short)29978))))) > ((~(arr_2 [i_0] [(unsigned short)20])))))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 4) 
    {
        var_26 = ((/* implicit */_Bool) ((unsigned short) 17799616404020712178ULL));
        var_27 -= ((/* implicit */unsigned char) (~(795995277U)));
    }
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        var_28 = ((/* implicit */unsigned long long int) 500008760);
        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_5] [10ULL] [i_5 - 1])) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)59085))))) : (min((-5597477299504212796LL), (((/* implicit */long long int) 0U))))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 3) 
    {
        arr_17 [i_6] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) var_9)) - (((/* implicit */int) var_1))))) + (arr_0 [i_6] [i_6])))) ? (((/* implicit */int) max(((short)-28015), (((/* implicit */short) (unsigned char)238))))) : (((/* implicit */int) ((_Bool) ((unsigned char) 1435644447U))))));
        arr_18 [i_6] = ((/* implicit */unsigned int) ((unsigned short) arr_6 [i_6] [i_6] [i_6] [i_6]));
    }
    var_30 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (unsigned char)252)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)17))) : (var_4)))));
    /* LoopNest 2 */
    for (signed char i_7 = 4; i_7 < 7; i_7 += 4) 
    {
        for (long long int i_8 = 3; i_8 < 9; i_8 += 3) 
        {
            {
                var_31 -= ((/* implicit */short) 6662404561209350446ULL);
                /* LoopSeq 4 */
                for (int i_9 = 0; i_9 < 10; i_9 += 3) 
                {
                    arr_28 [i_7] [i_7] [i_8] [i_9] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 4) 
                    {
                        var_32 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) var_11)), ((unsigned short)6452))))));
                        var_33 = ((/* implicit */long long int) min((var_33), (min(((+(arr_30 [i_7 - 1] [i_7 + 1] [i_8 - 3] [i_8 - 1]))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)16670)) >= (((/* implicit */int) (_Bool)1)))))))));
                        var_34 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((int) 18446744073709551615ULL)))));
                    }
                    var_35 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((5419942286431761490ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)42)))))), (((long long int) (unsigned short)20989))));
                    arr_33 [i_9] = ((/* implicit */unsigned char) 0ULL);
                }
                for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 4) /* same iter space */
                {
                    var_36 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 3588786150562270170LL))));
                    var_37 = ((/* implicit */unsigned char) (unsigned short)8809);
                    arr_37 [i_8] [i_8] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)100))));
                    var_38 += ((/* implicit */unsigned long long int) (+(arr_26 [i_11] [i_7] [i_7] [i_7])));
                }
                for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_13 = 1; i_13 < 7; i_13 += 3) 
                    {
                        for (int i_14 = 2; i_14 < 8; i_14 += 2) 
                        {
                            {
                                var_39 = ((/* implicit */int) var_2);
                                arr_46 [i_7] [i_7] [i_13] [i_7] [i_7] = ((/* implicit */signed char) (unsigned char)184);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_15 = 2; i_15 < 7; i_15 += 2) 
                    {
                        for (int i_16 = 0; i_16 < 10; i_16 += 2) 
                        {
                            {
                                var_40 = ((/* implicit */unsigned short) arr_27 [i_16] [i_8] [i_8] [i_8]);
                                arr_51 [i_12] [i_12] [i_16] = ((/* implicit */unsigned long long int) (unsigned short)59068);
                            }
                        } 
                    } 
                    var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) ((unsigned char) min((((unsigned long long int) arr_39 [i_12] [i_7] [i_7])), (6853510866975530652ULL)))))));
                    /* LoopSeq 1 */
                    for (int i_17 = 1; i_17 < 9; i_17 += 1) 
                    {
                        var_42 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) var_13))) ? (((((/* implicit */int) (unsigned short)37295)) >> (((arr_31 [i_7 - 2] [i_8] [i_8 - 3] [i_7 - 2]) + (1263615570))))) : (((/* implicit */int) ((18446744073709551615ULL) >= (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_17)), (arr_34 [i_7] [i_7] [i_7])))))))));
                        var_43 -= ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_7] [i_7] [i_7]))) ^ (max((17284420794692630807ULL), (((/* implicit */unsigned long long int) (unsigned short)39570)))))), (min((((/* implicit */unsigned long long int) var_17)), (var_6)))));
                        var_44 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51432))) + (18446744073709551615ULL)));
                    }
                }
                for (unsigned int i_18 = 1; i_18 < 9; i_18 += 1) 
                {
                    var_45 = ((/* implicit */unsigned short) ((unsigned char) min((((/* implicit */int) var_9)), ((+(((/* implicit */int) (_Bool)1)))))));
                    var_46 = ((/* implicit */unsigned long long int) min((var_46), ((+(2ULL)))));
                    var_47 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-22)))))));
                }
            }
        } 
    } 
}
