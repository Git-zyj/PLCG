/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82864
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_13 = ((/* implicit */_Bool) (+(((((/* implicit */int) ((((/* implicit */long long int) 2369440846U)) < (var_1)))) << (((var_0) + (2407178131259231005LL)))))));
        var_14 = ((min((((int) arr_1 [i_0] [i_0])), (((/* implicit */int) var_3)))) > (((/* implicit */int) arr_0 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */int) arr_1 [i_0] [(signed char)5]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) min((-2384024790791733259LL), (max((var_0), (((/* implicit */long long int) var_12)))))))));
                                var_17 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_6 [i_1] [i_2] [i_2] [i_2])) ? (arr_7 [i_0] [i_0] [i_3] [i_3]) : (((/* implicit */long long int) arr_6 [i_1] [i_2] [i_3] [i_3])))), (((/* implicit */long long int) (_Bool)0))));
                                var_18 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) (short)12863)) ? (1705395453U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65508))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -5239317607547678054LL))))))))), (4467570830351532032ULL)));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */signed char) -7294337525566938689LL);
                    var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_7 [i_1] [i_1] [i_1] [i_1]), (((/* implicit */long long int) arr_10 [i_0])))))));
                    /* LoopSeq 3 */
                    for (long long int i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        var_21 -= arr_11 [i_0] [i_1] [i_2] [i_5];
                        /* LoopSeq 1 */
                        for (long long int i_6 = 2; i_6 < 20; i_6 += 3) 
                        {
                            var_22 = max((((/* implicit */long long int) (+((-(((/* implicit */int) arr_1 [i_1] [i_1]))))))), (((((9223372036854775807LL) | (-8414704287076921716LL))) / (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_5)))))));
                            var_23 = ((/* implicit */_Bool) arr_12 [i_6] [i_6] [i_6] [i_6 - 1] [i_6] [i_6 + 1]);
                        }
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned int) 288230376084602880LL);
                        /* LoopSeq 2 */
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            var_25 = ((/* implicit */int) 2905042311U);
                            var_26 = ((/* implicit */int) (short)19484);
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((min((var_0), (((/* implicit */long long int) var_8)))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_8] [i_0] [i_0] [i_0]))) <= (var_0)))))))) ? (((((/* implicit */_Bool) arr_20 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1])) ? (((arr_13 [i_7] [i_7]) ? (-8414704287076921716LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2] [i_0]))))) : (((/* implicit */long long int) 4092)))) : (((/* implicit */long long int) ((arr_12 [i_0] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8] [i_8 - 1]) - (arr_12 [21LL] [i_8 - 1] [i_8 - 1] [i_8] [i_8] [i_8 - 1]))))));
                            var_28 = (+(((/* implicit */int) (!(((/* implicit */_Bool) max((464131714), (491520))))))));
                        }
                        for (long long int i_9 = 2; i_9 < 20; i_9 += 1) 
                        {
                            var_29 -= ((/* implicit */unsigned short) ((((((var_10) > (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_7])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_0] [i_0] [i_9 - 1] [i_7] [i_9] [i_9] [17]))) : (((((/* implicit */_Bool) arr_8 [i_9] [i_9] [i_2] [i_2] [i_9] [7LL])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (9223372036854775803LL))))) != (((((/* implicit */_Bool) arr_16 [i_0] [i_7] [i_2] [i_0] [i_9 + 1] [i_9 + 1])) ? (-7277232624979402539LL) : (max((((/* implicit */long long int) 2097151U)), (arr_16 [i_0] [i_0] [(short)15] [i_0] [i_0] [i_0])))))));
                            var_30 &= ((/* implicit */int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_5))))), (var_7))))));
                        }
                    }
                    /* vectorizable */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        var_31 = ((/* implicit */unsigned int) (!(var_12)));
                        var_32 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 7294337525566938689LL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)53)))))));
                    }
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_11 = 1; i_11 < 18; i_11 += 3) 
        {
            for (short i_12 = 0; i_12 < 22; i_12 += 2) 
            {
                for (int i_13 = 3; i_13 < 21; i_13 += 2) 
                {
                    {
                        var_33 -= max((((/* implicit */int) (short)9243)), ((~(((/* implicit */int) ((_Bool) -1338173693))))));
                        var_34 = ((/* implicit */long long int) max((var_34), (arr_24 [i_13] [i_0])));
                        var_35 -= (_Bool)0;
                        var_36 = ((/* implicit */_Bool) arr_17 [i_13] [i_11] [i_13 - 1] [i_11]);
                    }
                } 
            } 
        } 
        var_37 = ((((/* implicit */_Bool) arr_16 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [i_0])) ? (((long long int) arr_10 [i_0])) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (arr_23 [i_0] [i_0] [i_0] [i_0]))))));
    }
    var_38 = ((/* implicit */_Bool) (+(((unsigned int) max((2589571842U), (((/* implicit */unsigned int) var_6)))))));
    var_39 *= ((/* implicit */unsigned short) (!(((max((((/* implicit */int) var_12)), ((-2147483647 - 1)))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))));
    /* LoopNest 2 */
    for (unsigned int i_14 = 0; i_14 < 20; i_14 += 3) 
    {
        for (long long int i_15 = 0; i_15 < 20; i_15 += 2) 
        {
            {
                var_40 = ((/* implicit */int) max((var_40), (((/* implicit */int) ((signed char) ((unsigned char) max((((/* implicit */long long int) (signed char)68)), (var_7))))))));
                var_41 -= ((/* implicit */short) ((((/* implicit */_Bool) (~(var_8)))) ? (((((/* implicit */_Bool) min((arr_8 [i_15] [i_15] [12] [i_14] [(_Bool)1] [i_14]), (((/* implicit */long long int) arr_12 [i_15] [i_15] [i_15] [i_14] [i_14] [i_14]))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_40 [i_14] [i_14]), ((unsigned short)0))))) : (((((/* implicit */long long int) arr_2 [i_15])) & (arr_4 [i_14]))))) : (((/* implicit */long long int) ((/* implicit */int) var_12)))));
                var_42 = ((/* implicit */short) ((((/* implicit */int) ((arr_35 [i_15] [i_15] [i_14] [i_14]) >= (((/* implicit */int) arr_23 [i_14] [15LL] [i_15] [i_15]))))) + (((/* implicit */int) (!(((/* implicit */_Bool) (+(-2119314396)))))))));
                /* LoopNest 2 */
                for (long long int i_16 = 0; i_16 < 20; i_16 += 1) 
                {
                    for (long long int i_17 = 0; i_17 < 20; i_17 += 4) 
                    {
                        {
                            var_43 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [(unsigned char)18] [i_15]))) > (-6927936295446518258LL))))))) ? (arr_30 [i_15] [i_16] [i_17]) : (arr_30 [i_14] [i_14] [i_14])));
                            var_44 = ((/* implicit */long long int) var_10);
                        }
                    } 
                } 
            }
        } 
    } 
    var_45 = ((/* implicit */_Bool) var_7);
}
