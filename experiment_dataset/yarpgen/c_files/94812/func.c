/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94812
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)157))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_2 + 1] [i_2] [i_1] [i_2 - 1])) ? (var_2) : (arr_8 [i_2 + 2] [i_2 - 1] [i_1] [i_2 + 2])));
                        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (_Bool)1))));
                        var_22 *= ((/* implicit */_Bool) (~(arr_10 [i_3] [i_2] [i_1] [i_0])));
                        arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_0] [i_1]))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_5 = 1; i_5 < 8; i_5 += 3) 
                        {
                            var_23 -= ((/* implicit */signed char) (-(160842294U)));
                            arr_20 [i_0] [i_1] [(unsigned short)4] [i_2] [i_4] [i_4] [(short)4] = ((/* implicit */short) min((((/* implicit */int) var_6)), (((var_0) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)29260))))));
                            var_24 = max((((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_1])) ? (((/* implicit */int) arr_17 [i_4] [i_1] [i_4] [i_4] [i_4])) : (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_15)))))), ((-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)144))) < (arr_19 [i_0] [i_1] [i_2 - 1] [i_4] [i_4] [i_5] [i_5])))))));
                        }
                        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) * (min((((/* implicit */unsigned long long int) arr_16 [i_1] [(unsigned short)1] [i_1] [i_2] [(signed char)3])), (arr_19 [i_0] [i_0] [i_1] [i_2] [i_2] [i_4] [i_4])))))) || ((!(var_18)))));
                    }
                    for (signed char i_6 = 0; i_6 < 11; i_6 += 3) 
                    {
                        arr_23 [i_0] [i_1] [i_2] [i_6] [i_1] = ((/* implicit */_Bool) (+(max((-8387059981032826752LL), (((/* implicit */long long int) (unsigned char)161))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (short i_7 = 0; i_7 < 11; i_7 += 4) 
                        {
                            var_26 += ((/* implicit */long long int) (+((-(((/* implicit */int) var_9))))));
                            var_27 -= ((/* implicit */unsigned int) ((arr_3 [i_2 + 2]) ? (((/* implicit */long long int) ((unsigned int) var_9))) : (8387059981032826751LL)));
                        }
                        for (short i_8 = 0; i_8 < 11; i_8 += 3) 
                        {
                            arr_30 [i_0] [i_1] [i_2 + 1] [i_2] [i_1] [i_8] = ((/* implicit */signed char) max((((((/* implicit */_Bool) 2560334840U)) ? (((/* implicit */int) (unsigned char)164)) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) (short)7680)) ? (((/* implicit */int) (short)-7344)) : (((/* implicit */int) (short)-13022))))));
                            var_28 = ((/* implicit */short) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2 - 1] [i_6] [i_8])))))) * (min((arr_26 [i_0] [i_6] [i_2 - 1] [i_6] [i_1]), (((/* implicit */long long int) arr_22 [i_1] [i_8])))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_9 = 3; i_9 < 10; i_9 += 2) 
                        {
                            var_29 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) || (var_0)));
                            arr_33 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned short) var_4));
                            arr_34 [i_0] [i_1] [i_2] [i_1] [i_0] [i_9] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (6518191949351649736LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_21 [i_0] [i_1] [i_2 + 2] [i_9]))));
                            var_30 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_6 [8U] [8U])) ? (arr_10 [i_9] [i_6] [i_2] [i_1]) : (((/* implicit */int) var_11)))) / (((/* implicit */int) arr_21 [i_2 + 1] [i_2 - 1] [i_9 - 1] [i_9]))));
                            arr_35 [i_1] [i_1] [i_6] = ((/* implicit */long long int) -1259754401);
                        }
                    }
                    var_31 -= ((/* implicit */_Bool) var_15);
                    arr_36 [i_1] [i_1] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)32256))));
                    arr_37 [i_0] [i_1] [i_1] = ((/* implicit */short) var_12);
                }
            } 
        } 
    }
    for (long long int i_10 = 0; i_10 < 11; i_10 += 2) /* same iter space */
    {
        arr_40 [i_10] = min((((/* implicit */long long int) max(((+(((/* implicit */int) (unsigned char)198)))), (((/* implicit */int) arr_9 [i_10] [i_10] [i_10]))))), (arr_11 [i_10] [i_10]));
        var_32 = ((/* implicit */signed char) (-(max((((((/* implicit */int) (signed char)-64)) & (((/* implicit */int) (unsigned char)166)))), (((/* implicit */int) var_0))))));
        var_33 = var_18;
    }
    var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-108)) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)64))))) : ((((_Bool)1) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))) || (((/* implicit */_Bool) var_9))));
}
