/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55994
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_20 = ((long long int) max((arr_10 [i_2 - 1] [i_3 + 1] [i_2] [i_4 + 1]), (arr_10 [i_2 - 1] [i_3 + 1] [i_2] [i_4 + 1])));
                                var_21 = ((/* implicit */unsigned int) max((var_21), (min((((/* implicit */unsigned int) (~((~(arr_8 [14U] [i_3] [i_0] [i_0])))))), (((((/* implicit */_Bool) (~(608481471)))) ? (((/* implicit */unsigned int) (~(arr_5 [i_0] [i_0] [i_0])))) : ((~(var_16)))))))));
                                var_22 += ((/* implicit */long long int) min(((-((+(((/* implicit */int) var_0)))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                            }
                        } 
                    } 
                    arr_14 [13LL] [i_2] [i_2] = ((/* implicit */unsigned int) max((608481478), (608481461)));
                    var_23 &= ((/* implicit */unsigned int) (~(-608481471)));
                    var_24 *= ((/* implicit */long long int) min(((!(((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned int) -608481472))))))), ((_Bool)1)));
                    arr_15 [i_0] [i_2] [i_1] [i_2] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) min((arr_11 [i_0] [i_1] [i_2] [9U] [(_Bool)1]), (((/* implicit */long long int) 3167659606U)))))))));
                }
                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(-1LL)))) ? (min((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0]))))), (max((arr_5 [i_0] [i_1] [i_1]), (((/* implicit */int) arr_12 [8LL] [2LL] [i_0] [i_1] [i_0])))))) : (((/* implicit */int) var_1))));
                var_26 &= ((/* implicit */unsigned int) min((min((((/* implicit */long long int) (+(arr_3 [i_0])))), (min((-7390351632624269283LL), (((/* implicit */long long int) var_16)))))), (((/* implicit */long long int) min((min((((/* implicit */unsigned int) 608481492)), (arr_10 [i_0] [i_1] [i_0] [i_0]))), (max((var_16), (((/* implicit */unsigned int) arr_0 [i_1] [i_1])))))))));
                var_27 += ((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) (-(246102214U)))))));
            }
        } 
    } 
    var_28 = ((/* implicit */int) (~(var_11)));
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 23; i_5 += 4) 
    {
        var_29 = ((/* implicit */long long int) min((var_29), ((-(arr_17 [(_Bool)1])))));
        arr_19 [i_5] = ((/* implicit */_Bool) ((arr_18 [i_5]) ? (arr_16 [i_5]) : (((/* implicit */int) arr_18 [i_5]))));
    }
    for (int i_6 = 1; i_6 < 14; i_6 += 2) 
    {
        var_30 -= ((/* implicit */long long int) ((int) (-(((/* implicit */int) (_Bool)1)))));
        var_31 = arr_0 [i_6] [i_6];
        var_32 -= ((/* implicit */unsigned int) -608481465);
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_33 = ((/* implicit */int) 1864984431U);
        var_34 |= ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) -3LL)) ? (-7390351632624269265LL) : (((/* implicit */long long int) 608481471))))) ? (min((2372534156561199246LL), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((unsigned int) 1100050871U))))), (((/* implicit */long long int) (-(arr_23 [6] [i_7]))))));
        /* LoopNest 2 */
        for (unsigned int i_8 = 0; i_8 < 15; i_8 += 4) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    arr_32 [i_7] [i_8] [i_8] [i_9] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 3194916424U))));
                    var_35 = (_Bool)1;
                    var_36 = max((((/* implicit */long long int) (!(((/* implicit */_Bool) (-(var_6))))))), (min((((/* implicit */long long int) 2147483647)), (-7390351632624269283LL))));
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 2; i_10 < 14; i_10 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (int i_11 = 2; i_11 < 14; i_11 += 1) 
                        {
                            arr_38 [(_Bool)1] [7] [i_8] [i_8] = ((/* implicit */int) min((max((max((var_5), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) arr_10 [i_10 - 2] [i_11 - 1] [i_10] [i_10])))), (((/* implicit */long long int) ((int) arr_35 [i_7] [i_8] [i_9] [i_11 + 1] [i_9] [i_11 + 1] [i_11 - 2])))));
                            var_37 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(arr_8 [i_11 - 2] [i_11 - 2] [(_Bool)1] [i_10 + 1]))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_12 = 0; i_12 < 15; i_12 += 2) 
                        {
                            arr_41 [i_7] [2LL] [i_10 + 1] [i_10] [i_7] [2LL] [i_7] = ((/* implicit */unsigned int) arr_40 [i_7] [i_8] [i_8] [i_8] [i_12] [8U] [i_8]);
                            arr_42 [10U] [10U] [10U] = ((/* implicit */unsigned int) (+(arr_7 [i_12] [i_10])));
                        }
                        arr_43 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_13 [i_7] [i_8] [i_9] [i_8] [i_10 - 2] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))) : (((arr_9 [i_7] [i_7] [i_7] [(_Bool)1] [i_7]) ? (arr_26 [i_10] [i_10]) : (((/* implicit */unsigned int) -608481472))))))));
                    }
                }
            } 
        } 
    }
    for (unsigned int i_13 = 2; i_13 < 22; i_13 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_14 = 0; i_14 < 23; i_14 += 3) 
        {
            arr_50 [i_13] = ((/* implicit */unsigned int) arr_17 [i_14]);
            var_38 = ((/* implicit */_Bool) max((arr_44 [i_13]), (((/* implicit */unsigned int) (~(((int) (_Bool)1)))))));
            var_39 = ((/* implicit */int) max((((/* implicit */unsigned int) -537125906)), (705550998U)));
        }
        var_40 = ((/* implicit */long long int) (((_Bool)1) ? (1100050895U) : (3194916425U)));
        /* LoopNest 2 */
        for (long long int i_15 = 0; i_15 < 23; i_15 += 2) 
        {
            for (long long int i_16 = 3; i_16 < 22; i_16 += 2) 
            {
                {
                    var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
                    arr_57 [i_13] [i_15] [i_13] [i_13] = ((/* implicit */_Bool) arr_53 [i_13 + 1]);
                }
            } 
        } 
    }
    var_42 &= ((/* implicit */int) ((((/* implicit */_Bool) var_14)) ? (max((var_4), (max((var_6), (var_6))))) : (((/* implicit */long long int) (+(((/* implicit */int) (!((_Bool)1)))))))));
    var_43 = min((max((((/* implicit */unsigned int) (!(var_1)))), (max((((/* implicit */unsigned int) var_1)), (var_15))))), (((/* implicit */unsigned int) (!((!((_Bool)1)))))));
}
