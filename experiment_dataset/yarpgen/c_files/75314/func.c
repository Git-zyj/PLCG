/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75314
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
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))))), (var_7))))));
    var_16 = ((/* implicit */long long int) var_1);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [i_1 + 1])) : (((/* implicit */int) var_7))));
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_8))) != (arr_2 [i_0] [i_1])));
                        /* LoopSeq 3 */
                        for (long long int i_4 = 1; i_4 < 18; i_4 += 4) /* same iter space */
                        {
                            arr_13 [i_4] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_10 [i_1] [(unsigned short)9] [(unsigned short)9] [i_1 + 1] [i_1]))))));
                            var_19 |= ((((/* implicit */_Bool) ((var_6) + (((/* implicit */long long int) ((/* implicit */int) (signed char)14)))))) ? (var_5) : (arr_10 [i_2] [i_2] [i_1] [i_1 - 1] [i_1]));
                            var_20 += ((/* implicit */long long int) (unsigned short)39449);
                            var_21 |= ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (signed char)121))))));
                        }
                        for (long long int i_5 = 1; i_5 < 18; i_5 += 4) /* same iter space */
                        {
                            arr_18 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_0);
                            arr_19 [i_0] [i_5] &= ((/* implicit */unsigned short) ((long long int) arr_12 [i_0] [i_1] [i_1] [i_1 - 1] [i_2] [i_2 + 2] [i_5 + 1]));
                        }
                        for (long long int i_6 = 1; i_6 < 18; i_6 += 4) /* same iter space */
                        {
                            arr_23 [i_1] [i_1] [i_1] [i_1] = -4837971825873254918LL;
                            arr_24 [i_1] [i_0] [i_0] [i_2 + 1] [i_3] [i_6] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_10)) / (((/* implicit */int) (unsigned short)18958)))) | (((/* implicit */int) arr_4 [i_2 - 2] [i_2 - 2] [i_1]))));
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_1] [(signed char)1] [i_1] [i_0] [i_1] [i_0] [i_0])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65532)))))) ? (((/* implicit */int) ((unsigned short) var_5))) : (((/* implicit */int) var_13)))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned short i_7 = 0; i_7 < 19; i_7 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_8 = 0; i_8 < 19; i_8 += 3) 
                        {
                            var_23 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) 11516093039878219740ULL))));
                            var_24 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) 17372875337747439433ULL)) && (((/* implicit */_Bool) (signed char)1))))));
                        }
                        for (unsigned short i_9 = 1; i_9 < 16; i_9 += 3) 
                        {
                            arr_35 [i_9] [i_9] [i_1] [i_1] [i_1 - 1] [(unsigned short)5] = ((/* implicit */signed char) ((long long int) arr_10 [i_1] [i_7] [i_2] [i_2] [i_9]));
                            var_25 = ((/* implicit */signed char) var_5);
                            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [i_1] [i_1] [i_1] [i_1 - 1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_0] [i_1] [11ULL] [i_1 - 1] [i_9] [i_9]))) : (arr_20 [i_1 + 1] [i_1] [i_1])));
                        }
                        for (unsigned short i_10 = 0; i_10 < 19; i_10 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned short) var_6);
                            arr_40 [i_0] [i_0] [i_1] [i_2] [i_1] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_11))));
                        }
                        var_28 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)26)))))));
                        var_29 = var_7;
                    }
                    var_30 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_0] [i_1] [i_2] [i_1] [i_1] [i_2] [i_2])))))) + (arr_9 [i_1]))));
                }
            } 
        } 
    } 
}
