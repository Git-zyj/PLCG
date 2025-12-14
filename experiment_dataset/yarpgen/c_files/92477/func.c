/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92477
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
    var_12 = ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (-(var_2)))) ? (min((var_7), (-1500916238259175033LL))) : ((-(4287690055285783166LL))))) : (((long long int) (-(-1042713687493074455LL)))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 4; i_3 < 24; i_3 += 4) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_4 = 3; i_4 < 24; i_4 += 3) 
                        {
                            var_13 = ((long long int) ((((/* implicit */_Bool) arr_14 [i_0 - 3] [i_4])) ? (arr_11 [i_0 - 2] [i_1] [i_3] [i_1]) : (arr_4 [i_2])));
                            var_14 = ((/* implicit */long long int) min((var_14), (((7953906788868105785LL) & (-4061151495479968263LL)))));
                            arr_15 [i_0] [i_1] [i_1 + 3] [i_4] [i_3] [i_4] [i_4] = ((long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0 + 1] [i_0])) ? (1042713687493074434LL) : (2470209890533560540LL)));
                        }
                        for (long long int i_5 = 0; i_5 < 25; i_5 += 4) 
                        {
                            arr_18 [i_0 - 3] [i_1 + 1] [i_2] [i_3] [i_5] = (-(((arr_4 [i_0 - 2]) ^ (1368739194692922820LL))));
                            var_15 |= ((((/* implicit */_Bool) -9223372036854775805LL)) ? ((-9223372036854775807LL - 1LL)) : (7591366428473280221LL));
                            arr_19 [i_5] [i_3] [i_2] [i_1] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_16 [i_0 - 2] [i_1 + 2] [i_2] [i_3] [21LL] [i_5])))) ? (arr_6 [i_0 - 2]) : (arr_14 [i_0] [i_2])))) ? (min((-1564129229762245108LL), (-3913180951751049259LL))) : ((~(max((arr_4 [i_0]), (arr_0 [i_1] [i_0]))))));
                        }
                        var_16 = min((min((3156938818146818715LL), (((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_1 + 3] [i_1 + 3] [i_3] [i_3] [i_1 + 3])) ? (arr_0 [i_0] [i_0]) : (arr_7 [i_0 - 3] [i_0 - 3] [i_3 - 2]))))), (arr_14 [i_0] [i_2]));
                        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (!(((/* implicit */_Bool) (-(2228961889950390892LL)))))))));
                        arr_20 [i_0 + 1] [i_0] [i_0] [i_0] |= max((159723163585669072LL), (1904295102753636206LL));
                        arr_21 [i_0] [i_1] [i_2] [i_3 + 1] [i_3] = min(((+(6299994730570636459LL))), (((((/* implicit */_Bool) min((arr_13 [i_0] [i_0] [i_1] [i_0] [i_3 + 1] [i_3] [i_3]), (-4287690055285783167LL)))) ? ((+(0LL))) : (((((/* implicit */_Bool) arr_13 [i_0] [i_1 + 3] [i_1 + 1] [i_0] [i_1 + 3] [i_3] [i_3])) ? (var_6) : (var_9))))));
                    }
                    for (long long int i_6 = 4; i_6 < 24; i_6 += 4) /* same iter space */
                    {
                        arr_24 [i_0 - 2] [5LL] [5LL] = ((((arr_17 [i_0] [i_0 - 3] [i_6 - 1] [i_6] [i_6 - 2]) + (arr_17 [i_0 - 3] [i_0 + 1] [i_6 - 1] [i_6] [i_6]))) | (((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0 - 3] [i_6 - 4])) ? (arr_7 [i_0] [i_0 - 1] [i_6 - 2]) : (arr_7 [i_0] [i_0 - 2] [i_6 - 1]))));
                        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_12 [i_0 - 3] [i_1] [i_2] [i_6 + 1] [i_6 - 1])))) || (((/* implicit */_Bool) (+((-(arr_4 [i_0])))))))))));
                        var_19 = ((/* implicit */long long int) max((var_19), (max((max((((arr_23 [i_1]) - (arr_23 [i_0 - 2]))), (arr_3 [i_1 + 4] [i_1 - 1] [i_2]))), (((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_1 - 1])) ? (arr_9 [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2])) && (((/* implicit */_Bool) arr_5 [i_6] [i_6] [i_6]))))))))))));
                        arr_25 [i_0] [i_0 - 2] [i_0] [i_0] |= (~(min((6299994730570636459LL), (4287690055285783166LL))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_7 = 3; i_7 < 23; i_7 += 4) 
                    {
                        for (long long int i_8 = 0; i_8 < 25; i_8 += 3) 
                        {
                            {
                                var_20 = var_11;
                                arr_31 [i_0] [i_8] [i_2] [i_7 - 1] [i_8] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -5634067153177461095LL)) ? (-9223372036854775786LL) : (3354263271102056460LL))) % (((arr_17 [i_0 + 1] [i_0] [i_0] [i_0] [i_0]) ^ (arr_22 [i_0 - 1] [i_0 - 1] [i_2] [i_8] [i_8])))))) ? ((-(((arr_8 [i_1] [i_8]) | (arr_0 [i_0 - 1] [i_2]))))) : (((((/* implicit */_Bool) arr_22 [i_0] [i_7 + 2] [i_7 + 2] [24LL] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) ((-7830924686043993522LL) < (-4324193920590384316LL))))) : (arr_16 [i_8] [i_7 + 1] [i_0] [i_1] [i_0] [i_0]))));
                                var_21 = ((/* implicit */long long int) ((arr_4 [i_0 - 3]) < ((-(arr_7 [i_7] [i_7] [i_7 - 3])))));
                                var_22 = -5372604370101346391LL;
                                var_23 = (i_8 % 2 == 0) ? (((((/* implicit */_Bool) ((9223372036854775807LL) / (2228961889950390875LL)))) ? (((arr_14 [i_1 - 1] [i_8]) >> (((arr_14 [i_1 + 1] [i_8]) - (7080332726024258532LL))))) : (min((arr_14 [i_1 + 3] [i_8]), (arr_14 [i_1 - 1] [i_8]))))) : (((((/* implicit */_Bool) ((9223372036854775807LL) / (2228961889950390875LL)))) ? (((arr_14 [i_1 - 1] [i_8]) >> (((((arr_14 [i_1 + 1] [i_8]) - (7080332726024258532LL))) + (3097958388231147604LL))))) : (min((arr_14 [i_1 + 3] [i_8]), (arr_14 [i_1 - 1] [i_8])))));
                            }
                        } 
                    } 
                }
                arr_32 [i_0] [i_1] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((9223372036854775795LL) / (arr_12 [i_1 - 1] [i_1] [i_0] [i_0] [i_0])))))) || ((!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))));
                arr_33 [i_0] = 348184354050323736LL;
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_9 = 0; i_9 < 25; i_9 += 2) 
                {
                    var_24 = ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 + 4] [i_1])) ? (arr_12 [i_1] [i_1] [i_1] [i_1 + 1] [i_1 + 3]) : (((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_1] [13LL] [i_9] [i_9] [i_9])) ? (arr_34 [i_1]) : (arr_3 [i_0] [i_1] [i_1]))));
                    var_25 &= (-(arr_23 [i_0 - 2]));
                }
                for (long long int i_10 = 0; i_10 < 25; i_10 += 3) 
                {
                    /* LoopNest 2 */
                    for (long long int i_11 = 1; i_11 < 23; i_11 += 3) 
                    {
                        for (long long int i_12 = 0; i_12 < 25; i_12 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */long long int) max((var_26), (((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_6 [i_1 - 1]), (arr_43 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11 + 2])))) ? (((2228961889950390892LL) + (-2119999981986739066LL))) : (arr_27 [i_0] [i_0 + 1] [23LL] [i_0 - 2])))) ? (arr_30 [i_1]) : (((((/* implicit */_Bool) arr_34 [i_1 - 1])) ? (((((/* implicit */_Bool) 84718152628440854LL)) ? (-6299994730570636480LL) : (8713284825461530039LL))) : (((long long int) 1048575LL))))))));
                                var_27 = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 2162722953952360257LL)) ? (arr_37 [i_0] [i_0 - 2] [i_0 - 2] [i_0]) : (4457819640252545332LL))), (min((0LL), (arr_27 [i_0] [i_0] [i_0] [i_0 - 1])))))) ? (arr_38 [i_1] [i_10] [i_12]) : (2228961889950390892LL));
                                arr_45 [19LL] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? (arr_4 [i_0 - 3]) : (arr_4 [i_0 + 1]))) < (arr_40 [i_0] [i_1 + 1] [i_10] [i_11] [i_10])));
                            }
                        } 
                    } 
                    arr_46 [i_0] [i_1] [5LL] = min((min((arr_38 [i_0] [i_10] [i_0 - 1]), (arr_26 [i_1] [i_1 + 2] [i_0 - 1] [i_1 + 2] [12LL] [i_0]))), ((~(11LL))));
                    var_28 ^= arr_35 [i_0] [i_0 + 1] [i_0 - 1] [i_0 + 1];
                    /* LoopNest 2 */
                    for (long long int i_13 = 1; i_13 < 23; i_13 += 3) 
                    {
                        for (long long int i_14 = 1; i_14 < 24; i_14 += 3) 
                        {
                            {
                                var_29 = (-(((((/* implicit */_Bool) arr_41 [15LL] [i_10] [i_13] [i_14])) ? (4426605743929824249LL) : (min((1368739194692922818LL), (arr_2 [i_13 + 1] [i_13 + 1]))))));
                                arr_52 [i_0] [i_13] [i_13] [i_0] = max((max((max((-1368739194692922833LL), (arr_4 [i_10]))), (min((arr_1 [i_0]), (arr_1 [17LL]))))), (((((/* implicit */_Bool) arr_48 [i_13] [i_1] [i_1] [i_13 + 2] [i_1 - 1])) ? (((((/* implicit */_Bool) arr_51 [i_1] [i_1] [i_13] [i_13 + 2] [i_14] [i_1] [1LL])) ? (arr_28 [i_13 - 1]) : (3812600520492210936LL))) : (arr_42 [i_14] [21LL] [i_1] [i_1]))));
                                var_30 ^= ((long long int) min(((+(arr_48 [4LL] [i_1] [i_10] [22LL] [i_14]))), (((-7001882807531661466LL) / (arr_9 [i_0])))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
