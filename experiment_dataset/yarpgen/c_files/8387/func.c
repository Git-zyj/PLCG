/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8387
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
    for (long long int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned int) max((min((((/* implicit */long long int) (signed char)-91)), (arr_1 [i_0 + 4]))), (((/* implicit */long long int) max((arr_0 [i_0 + 2]), (arr_0 [i_0 + 3]))))));
        arr_3 [i_0] = ((/* implicit */signed char) max((((unsigned char) min((((/* implicit */long long int) var_10)), (31525197391593472LL)))), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 4])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (4198903768035434414LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_0 [i_0])))))))));
        var_16 = ((/* implicit */unsigned int) var_4);
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_0 [i_0 - 1])), ((~(arr_1 [i_0])))))) ? (((((/* implicit */_Bool) -1680019833241830311LL)) ? (549755811840LL) : (((/* implicit */long long int) 2065782794U)))) : (((long long int) min((arr_0 [i_2]), (((/* implicit */unsigned int) arr_6 [i_1] [i_2])))))));
                    arr_10 [i_1] [i_1] [i_2] [i_0] = ((/* implicit */unsigned int) arr_4 [i_0] [i_0 + 4] [i_1]);
                    arr_11 [i_0] [i_1] = -1680019833241830305LL;
                    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) max((((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1680019833241830305LL)) || (((/* implicit */_Bool) 7658568661831605976LL))))), (arr_5 [i_0] [i_1])))), (-886486559537560063LL))))));
                    var_19 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((1139182210093839637LL), (((/* implicit */long long int) arr_2 [i_0] [i_0]))))) || (((/* implicit */_Bool) arr_9 [i_0 + 4] [i_0] [(signed char)6]))))), (((unsigned int) max((((/* implicit */unsigned int) var_4)), (arr_0 [i_0]))))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    for (unsigned int i_6 = 0; i_6 < 18; i_6 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 2938853566U)) ? (-757496025774640595LL) : (((/* implicit */long long int) 2938853566U))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)106))) : (-8444097976510851266LL)))));
                            arr_23 [i_6] [i_3] [i_5] [i_3] [i_3] = ((/* implicit */long long int) ((var_14) <= (max((((((/* implicit */_Bool) arr_8 [i_5])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3] [i_4]))))), (var_14)))));
                            var_21 = max((var_13), (((/* implicit */long long int) arr_16 [i_3] [i_4] [i_3])));
                            var_22 = ((/* implicit */long long int) var_8);
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) min((max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_15 [i_4] [i_4])) : (((/* implicit */int) arr_18 [i_3] [i_4])))), (((/* implicit */int) max(((unsigned char)239), (((/* implicit */unsigned char) arr_15 [i_4] [i_4]))))))), (((/* implicit */int) var_6)))))));
                /* LoopSeq 3 */
                for (long long int i_7 = 0; i_7 < 18; i_7 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 2; i_8 < 16; i_8 += 4) 
                    {
                        for (signed char i_9 = 0; i_9 < 18; i_9 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */long long int) var_11);
                                var_25 -= ((/* implicit */signed char) 3485299871U);
                            }
                        } 
                    } 
                    var_26 = arr_12 [i_3] [i_7];
                }
                /* vectorizable */
                for (unsigned int i_10 = 0; i_10 < 18; i_10 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (long long int i_11 = 1; i_11 < 14; i_11 += 4) 
                    {
                        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (+(((/* implicit */int) var_6)))))));
                        var_28 = ((/* implicit */long long int) var_8);
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_38 [i_3] [i_4] [i_3] [i_4] [i_4] [i_11]) - (var_3)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_19 [(signed char)2])) : (((/* implicit */int) var_6)))) : (((/* implicit */int) var_4))));
                    }
                    var_30 = var_13;
                }
                for (unsigned int i_12 = 0; i_12 < 18; i_12 += 4) /* same iter space */
                {
                    var_31 = ((/* implicit */long long int) min((((unsigned int) arr_30 [i_3] [i_3] [i_3] [i_12])), (((/* implicit */unsigned int) var_5))));
                    arr_42 [3LL] [i_3] [i_4] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_6)), (var_3)))) ? (((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)255))))) - (((((/* implicit */_Bool) arr_35 [i_3])) ? (-6947748524592974763LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))) : (((((/* implicit */_Bool) ((unsigned int) var_0))) ? (((/* implicit */long long int) ((3370798634U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4)))))) : (var_13)))));
                }
            }
        } 
    } 
    var_32 += ((/* implicit */long long int) (unsigned char)45);
    var_33 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) 4294967295U)), (35183298347008LL)))) || (((/* implicit */_Bool) var_2))))) / (((/* implicit */int) var_7))));
}
