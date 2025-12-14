/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77056
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
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    {
                        var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((var_7), (var_7))), (((/* implicit */long long int) ((int) arr_3 [i_0] [i_1 + 1] [i_3])))))) || (((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (signed char)-68)) ? (((/* implicit */long long int) 2881713008U)) : (var_7)))))));
                        var_12 = ((/* implicit */int) var_7);
                    }
                } 
            } 
        } 
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((long long int) var_8)) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)-68))))))) % ((+(((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */unsigned int) var_2))))))));
        var_14 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-89)) ? (1718355399) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) 2881713015U)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (signed char)0)))) : ((+(arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
    }
    for (int i_4 = 0; i_4 < 16; i_4 += 2) 
    {
        var_15 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) 519432777388180945LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_4] [i_4]))) : (var_4))));
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((long long int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))) | (min((((/* implicit */unsigned long long int) 1413254287U)), (576460752236314624ULL)))))))));
    }
    for (int i_5 = 0; i_5 < 17; i_5 += 2) 
    {
        var_17 ^= ((/* implicit */int) (-(min((max((((/* implicit */unsigned long long int) arr_0 [i_5])), (70368475742208ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1)))))))));
        var_18 |= ((/* implicit */int) (((~((~(var_7))))) / (max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_5] [i_5] [i_5] [i_5]))) : (var_7))), (((/* implicit */long long int) arr_2 [i_5]))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_6 = 0; i_6 < 25; i_6 += 2) 
    {
        for (long long int i_7 = 2; i_7 < 22; i_7 += 2) 
        {
            {
                var_19 = ((/* implicit */signed char) (-((~(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
                /* LoopNest 2 */
                for (signed char i_8 = 2; i_8 < 23; i_8 += 1) 
                {
                    for (unsigned short i_9 = 0; i_9 < 25; i_9 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_24 [i_9] [i_8] [i_7 + 1] [i_6])))) & (((((/* implicit */_Bool) -8218004001339992708LL)) ? (((/* implicit */unsigned int) var_5)) : (2881713021U))))), (((arr_24 [i_8 - 2] [i_7 + 1] [i_8 - 2] [i_7]) * (((/* implicit */unsigned int) var_5))))));
                            var_21 = ((/* implicit */long long int) var_5);
                            /* LoopSeq 1 */
                            for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 2) 
                            {
                                var_22 = ((/* implicit */signed char) ((long long int) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_10)), (var_4)))), (min((((/* implicit */unsigned long long int) arr_24 [i_6] [i_6] [i_8] [i_9])), (arr_26 [i_6] [i_6] [i_6] [15U] [i_6]))))));
                                var_23 |= ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) > (arr_28 [i_8 - 2] [i_8 - 2] [i_7 + 2] [i_8 - 2] [i_7 + 2] [i_8 + 2] [i_7 + 2]))));
                                var_24 -= ((/* implicit */long long int) min((var_0), (((/* implicit */unsigned long long int) ((long long int) var_5)))));
                                var_25 = ((/* implicit */unsigned long long int) arr_19 [i_8 - 2]);
                                var_26 |= ((/* implicit */signed char) ((((/* implicit */_Bool) max((min((((/* implicit */long long int) (signed char)0)), (var_7))), (((/* implicit */long long int) ((int) arr_27 [i_9] [i_7])))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8218004001339992683LL)) ? (8218004001339992690LL) : (((/* implicit */long long int) 2881713009U))))) ? (16826834217011409931ULL) : (((/* implicit */unsigned long long int) 0U)))))));
                            }
                            var_27 = ((/* implicit */unsigned long long int) ((int) (-(((((/* implicit */_Bool) -1687539319)) ? (var_7) : (((/* implicit */long long int) arr_20 [i_6] [i_6])))))));
                            /* LoopSeq 1 */
                            for (unsigned long long int i_11 = 2; i_11 < 23; i_11 += 3) 
                            {
                                var_28 = ((/* implicit */long long int) min((1684790886U), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_27 [i_11] [i_9])) ? (((/* implicit */unsigned long long int) arr_18 [i_6] [i_9])) : (var_6))) >= (((/* implicit */unsigned long long int) max((407169904796853579LL), (((/* implicit */long long int) var_8))))))))));
                                var_29 = ((max((-6269178144168346488LL), (((/* implicit */long long int) arr_30 [i_7 - 1] [i_7 - 1] [i_7] [i_7 - 2])))) + (((/* implicit */long long int) (+(arr_30 [i_7] [i_7] [i_7] [i_7 + 1])))));
                            }
                        }
                    } 
                } 
                var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(var_9)))) ? (min((7073742749004868468ULL), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((arr_30 [i_7] [i_7 - 2] [i_7 + 2] [i_7]) * (arr_30 [i_7 + 1] [i_7 - 2] [i_7 + 3] [i_7 + 2]))))));
                var_31 += ((/* implicit */_Bool) var_7);
                var_32 = max((((arr_33 [i_7] [i_7 - 1] [i_7] [i_7 - 2] [i_7] [i_7 - 1] [i_7 + 1]) - (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), (max((arr_33 [i_7] [i_7] [i_7 - 2] [i_7] [i_7 + 3] [i_7 + 1] [i_7]), (arr_30 [i_7] [i_7] [i_7] [i_7]))));
            }
        } 
    } 
    var_33 = ((/* implicit */signed char) (+(min((min((((/* implicit */unsigned long long int) var_8)), (var_0))), (((/* implicit */unsigned long long int) ((long long int) var_6)))))));
    /* LoopNest 2 */
    for (signed char i_12 = 0; i_12 < 15; i_12 += 2) 
    {
        for (int i_13 = 4; i_13 < 13; i_13 += 2) 
        {
            {
                var_34 = ((/* implicit */long long int) (+(((unsigned long long int) arr_5 [i_13 - 3] [i_13 - 3]))));
                var_35 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) ((unsigned int) arr_5 [1U] [(signed char)17]))) ? (((((/* implicit */_Bool) (signed char)-89)) ? (var_9) : (((/* implicit */unsigned long long int) 2476041389U)))) : (((/* implicit */unsigned long long int) max((4896108085537371674LL), (((/* implicit */long long int) 2881713031U))))))));
            }
        } 
    } 
}
