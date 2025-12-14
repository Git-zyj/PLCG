/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73652
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
    var_15 ^= ((/* implicit */unsigned short) min((((min((((/* implicit */long long int) var_14)), (7158236199116493100LL))) & (((-8695554377849456951LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64834))))))), (((/* implicit */long long int) (((((~(((/* implicit */int) var_7)))) + (2147483647))) >> (((var_10) + (1354595161835254721LL))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_16 ^= ((long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((((/* implicit */_Bool) -5176567943294586649LL)) ? (-5176567943294586651LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 3) /* same iter space */
                    {
                        var_17 ^= ((max((((arr_5 [i_1 - 1]) | (var_4))), (9223372036854775807LL))) & (((/* implicit */long long int) (~((~(((/* implicit */int) arr_12 [i_0]))))))));
                        var_18 = (~(max((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)65522)) : (((/* implicit */int) arr_1 [i_0]))))), (((long long int) (unsigned short)39692)))));
                        var_19 = ((/* implicit */unsigned short) min(((((-(-5176567943294586656LL))) / (max((((/* implicit */long long int) var_14)), (9223372036854775807LL))))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)65521)))))));
                    }
                    /* vectorizable */
                    for (long long int i_4 = 0; i_4 < 20; i_4 += 3) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 3) 
                        {
                            var_20 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_0] [i_4] [i_2])))));
                            var_21 = ((long long int) (!(((/* implicit */_Bool) var_0))));
                        }
                        for (unsigned short i_6 = 2; i_6 < 18; i_6 += 3) 
                        {
                            var_22 = (~(5176567943294586648LL));
                            var_23 = ((/* implicit */unsigned short) max((var_23), ((unsigned short)65531)));
                            arr_20 [18LL] = ((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_4])) ^ (((/* implicit */int) arr_13 [i_6 - 2] [i_2 + 2] [i_2 + 1] [i_2] [i_1 - 1]))));
                        }
                        for (long long int i_7 = 0; i_7 < 20; i_7 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0]))) ^ (var_9))));
                            var_25 = ((unsigned short) (+(((/* implicit */int) (unsigned short)17968))));
                            arr_24 [i_0] [i_1] [i_2] [i_4] [i_7] = var_10;
                            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((var_6) >= (((((/* implicit */_Bool) var_6)) ? (arr_15 [i_0] [i_1] [i_2] [i_4] [i_4] [i_7]) : (var_8))))))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 20; i_8 += 3) 
                        {
                            var_27 += ((/* implicit */long long int) arr_13 [15LL] [19LL] [i_2] [i_4] [i_8]);
                            arr_28 [i_0] = ((/* implicit */long long int) ((unsigned short) ((var_0) | (var_11))));
                        }
                        var_28 = ((1753036746834054854LL) % (1446026409718038905LL));
                        var_29 = var_1;
                        var_30 = ((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_0] [i_0])) >> (((((((/* implicit */_Bool) arr_5 [i_0])) ? (5176048397446446772LL) : (var_11))) - (5176048397446446746LL)))));
                    }
                    for (unsigned short i_9 = 0; i_9 < 20; i_9 += 3) 
                    {
                        arr_32 [i_9] [i_0] [15LL] [i_9] [i_0] [i_9] = ((/* implicit */long long int) (unsigned short)65535);
                        arr_33 [(unsigned short)5] [(unsigned short)5] [(unsigned short)5] [i_9] = ((long long int) ((unsigned short) var_1));
                        var_31 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && (((/* implicit */_Bool) -5936073693679786579LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -6373765549001724514LL)) ? (var_1) : (var_6)))))) && (((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_10 [8LL] [i_2] [i_1])) || (((/* implicit */_Bool) var_7))))))));
                    }
                    for (long long int i_10 = 1; i_10 < 18; i_10 += 3) 
                    {
                        arr_36 [i_0] [i_2] [i_2] [(unsigned short)7] [i_10] [i_10] = (((+((-(arr_15 [i_0] [(unsigned short)8] [i_0] [i_10] [i_10] [i_0]))))) / (var_10));
                        var_32 = ((/* implicit */long long int) max((var_32), (var_3)));
                        var_33 = ((((((/* implicit */_Bool) min((arr_12 [i_0]), ((unsigned short)49713)))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)62342)) - (((/* implicit */int) arr_35 [i_1] [i_1] [i_2] [i_1]))))) : (((long long int) arr_5 [i_10])))) - (((long long int) var_3)));
                    }
                    var_34 = ((/* implicit */unsigned short) var_1);
                    arr_37 [i_0] = (unsigned short)65535;
                }
            } 
        } 
        arr_38 [i_0] = arr_2 [1LL] [1LL];
    }
}
