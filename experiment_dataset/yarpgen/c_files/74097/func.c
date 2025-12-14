/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74097
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) max((((/* implicit */int) var_17)), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */unsigned short) (_Bool)1))))) & (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (1243832010)))));
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_1] = ((/* implicit */unsigned short) var_2);
                    /* LoopSeq 3 */
                    for (signed char i_3 = 3; i_3 < 20; i_3 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_0] [i_1 - 2]))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_7 [i_0] [i_1 + 2])) : (((/* implicit */int) arr_7 [i_0] [i_1 + 1])))) : (((((/* implicit */int) (unsigned char)23)) % (((/* implicit */int) (_Bool)1))))));
                        var_22 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) -5644699290018228825LL)))))));
                        arr_13 [i_0] = var_18;
                    }
                    for (signed char i_4 = 1; i_4 < 19; i_4 += 2) 
                    {
                        arr_17 [i_0] [i_1] [i_2] [i_4 + 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1]))));
                        arr_18 [i_0] = ((/* implicit */unsigned char) var_0);
                    }
                    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        arr_21 [i_5] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((unsigned long long int) arr_16 [i_0] [i_1] [i_2] [i_1 + 1])) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-101)))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_6 = 3; i_6 < 21; i_6 += 1) 
                        {
                            var_23 = (-(((/* implicit */int) arr_22 [i_0] [i_2 - 2] [2LL] [i_5] [(unsigned char)16] [i_6 - 3] [i_1 + 2])));
                            arr_24 [i_5] [i_6] &= ((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)16)))) >= (((/* implicit */int) ((((/* implicit */int) (signed char)-17)) < (1740353115))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_7 = 3; i_7 < 19; i_7 += 3) 
                        {
                            arr_28 [i_5] [i_1 + 2] [i_2 - 2] [i_0] [(unsigned short)4] = (!(arr_8 [i_1] [(short)10] [i_0]));
                            var_24 = ((/* implicit */int) (_Bool)1);
                        }
                        var_25 = ((/* implicit */_Bool) max((var_25), (((((/* implicit */_Bool) (+((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (939524096)))))) || (((/* implicit */_Bool) arr_15 [(unsigned short)16] [(unsigned short)16] [(short)9] [i_1 - 2] [(unsigned short)16] [i_1]))))));
                    }
                }
            } 
        } 
    }
    for (unsigned short i_8 = 0; i_8 < 21; i_8 += 4) 
    {
        arr_31 [(signed char)2] [i_8] = ((/* implicit */short) ((signed char) (-(((/* implicit */int) var_0)))));
        /* LoopSeq 2 */
        for (unsigned long long int i_9 = 2; i_9 < 19; i_9 += 4) /* same iter space */
        {
            arr_34 [i_8] [i_8] [i_8] = ((/* implicit */int) ((unsigned int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9)))) / (((/* implicit */int) arr_33 [i_8])))));
            arr_35 [i_9 + 1] [(unsigned char)19] = ((/* implicit */unsigned int) (unsigned char)232);
        }
        /* vectorizable */
        for (unsigned long long int i_10 = 2; i_10 < 19; i_10 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (long long int i_11 = 2; i_11 < 20; i_11 += 2) 
            {
                for (int i_12 = 3; i_12 < 19; i_12 += 2) 
                {
                    for (unsigned short i_13 = 1; i_13 < 20; i_13 += 4) 
                    {
                        {
                            arr_46 [i_8] [(short)19] [i_12] [i_12 + 1] [(unsigned short)16] [i_13] [(signed char)8] = ((/* implicit */short) arr_15 [i_13 + 1] [i_13 + 1] [i_12 - 2] [i_12 - 2] [i_11 - 1] [i_10 - 2]);
                            arr_47 [i_8] [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_13 - 1] = ((/* implicit */short) (_Bool)1);
                        }
                    } 
                } 
            } 
            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) var_4))));
            var_27 = 457779505;
            /* LoopNest 2 */
            for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
            {
                for (short i_15 = 0; i_15 < 21; i_15 += 2) 
                {
                    {
                        arr_53 [i_10] [i_10] [i_8] [i_10 - 1] &= ((/* implicit */unsigned long long int) arr_8 [i_8] [i_10] [i_10]);
                        var_28 = ((/* implicit */unsigned long long int) var_19);
                    }
                } 
            } 
        }
        var_29 ^= ((/* implicit */unsigned char) (_Bool)1);
        var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((arr_12 [i_8] [i_8]) >= (((/* implicit */int) (unsigned char)22)))))));
    }
    for (unsigned long long int i_16 = 1; i_16 < 17; i_16 += 4) 
    {
        arr_56 [(unsigned char)4] [(unsigned char)4] &= ((/* implicit */unsigned short) (-(max(((-(((/* implicit */int) arr_5 [i_16] [i_16])))), (((/* implicit */int) (!(((/* implicit */_Bool) -4367441519228346844LL)))))))));
        arr_57 [i_16] = ((/* implicit */unsigned char) min((((/* implicit */int) var_4)), ((~(((/* implicit */int) arr_33 [i_16 - 1]))))));
    }
    var_31 ^= ((/* implicit */unsigned short) (((~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (1648326170U))))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1)))))));
    var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) min((((/* implicit */unsigned int) ((signed char) var_1))), ((~(1023U))))))));
    /* LoopNest 2 */
    for (short i_17 = 3; i_17 < 22; i_17 += 2) 
    {
        for (short i_18 = 2; i_18 < 22; i_18 += 3) 
        {
            {
                var_33 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((long long int) arr_58 [i_17 - 2]))))) ? (min((((/* implicit */long long int) arr_63 [i_17 - 1] [i_17 - 1] [i_17 - 3])), (((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */long long int) -153768872)) : (-3939079305774268803LL))))) : (((/* implicit */long long int) (+(((/* implicit */int) var_11)))))));
                var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 9167005815329291074ULL)) ? (((min((((/* implicit */unsigned long long int) -7443092017444263317LL)), (9167005815329291074ULL))) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_62 [i_17 - 2] [i_18 + 1] [i_17])))));
                arr_64 [i_17] [i_17] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_59 [i_17])) || (((/* implicit */_Bool) arr_59 [i_18 + 1])))))));
                var_35 = ((/* implicit */long long int) arr_63 [i_17] [i_17] [4LL]);
            }
        } 
    } 
}
