/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81903
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 21; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 2; i_4 < 21; i_4 += 4) 
                        {
                            var_17 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) 8655949861764898475LL)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (4294967292U))))));
                            arr_12 [i_0] [i_1] [i_0] [i_1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-23766)) + (((/* implicit */int) (short)-23776))));
                        }
                        var_18 = ((/* implicit */unsigned long long int) var_16);
                    }
                } 
            } 
        } 
        arr_13 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) ^ (7670104954175150198ULL)));
        arr_14 [(short)12] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_4)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (short)22905))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) 1543591269U)) ? (((/* implicit */int) (short)-22905)) : (((/* implicit */int) var_12)))))));
        /* LoopSeq 1 */
        for (short i_5 = 3; i_5 < 21; i_5 += 4) 
        {
            arr_17 [i_5] [(short)18] [(short)18] &= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_5 + 1] [i_0]))) < (4294967294U)));
            arr_18 [(short)19] [i_0] = ((/* implicit */signed char) arr_11 [(short)16] [i_5] [(unsigned short)8] [i_5] [(short)9] [i_0] [i_0]);
        }
        arr_19 [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((short) 4294967290U)))));
    }
    for (short i_6 = 0; i_6 < 19; i_6 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_7 = 3; i_7 < 16; i_7 += 2) 
        {
            var_19 = min((var_14), (var_14));
            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) var_12))));
            arr_27 [i_6] [i_6] [i_6] = ((/* implicit */long long int) (short)23765);
        }
        for (unsigned short i_8 = 1; i_8 < 15; i_8 += 2) 
        {
            arr_30 [(unsigned char)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_16 [i_8] [i_8 + 4] [i_8])), (-8655949861764898480LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_8 + 2] [i_8 + 4] [i_8 + 4] [i_8] [i_8 + 4])) || (((/* implicit */_Bool) (short)-23613)))))) : (max((((/* implicit */unsigned long long int) var_6)), (var_9)))));
            var_21 = ((/* implicit */signed char) (short)32291);
            var_22 = ((/* implicit */long long int) var_10);
        }
        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (signed char)85))));
        arr_31 [i_6] = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 390992752441408344ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)20526))) : (var_3)))) ? (((/* implicit */unsigned long long int) max((var_3), (var_4)))) : ((+(18055751321268143246ULL))))), (((/* implicit */unsigned long long int) arr_26 [i_6]))));
        arr_32 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : (((((/* implicit */_Bool) max((-8655949861764898454LL), (((/* implicit */long long int) 17U))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)144)), (arr_7 [i_6] [i_6] [i_6]))))) : (var_3)))));
    }
    for (signed char i_9 = 0; i_9 < 14; i_9 += 2) 
    {
        arr_35 [i_9] [i_9] = ((/* implicit */signed char) min((((((/* implicit */_Bool) 7381289154909936357LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32755))) : (arr_25 [i_9]))), (max((arr_25 [i_9]), (((/* implicit */unsigned int) arr_22 [i_9]))))));
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) max((arr_24 [i_9]), (((/* implicit */short) arr_2 [i_9]))))) << (((7381289154909936352LL) - (7381289154909936338LL)))));
        var_25 = ((/* implicit */unsigned char) min((var_25), ((unsigned char)255)));
        /* LoopSeq 2 */
        for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 2) 
        {
            var_26 = ((/* implicit */signed char) ((unsigned char) ((short) var_3)));
            var_27 = ((/* implicit */long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)114))) | (min((1890715747U), (((/* implicit */unsigned int) var_14)))))), (((/* implicit */unsigned int) max((((/* implicit */int) arr_23 [i_9] [i_10])), (((((/* implicit */_Bool) (short)3487)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) (unsigned char)227)))))))));
        }
        for (signed char i_11 = 0; i_11 < 14; i_11 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_12 = 0; i_12 < 14; i_12 += 1) /* same iter space */
            {
                var_28 *= ((/* implicit */unsigned int) var_9);
                arr_45 [i_9] [i_9] [i_12] = ((/* implicit */short) ((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_7 [i_12] [i_12] [i_9])))) ? (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)31488))) / (arr_25 [i_9]))) < (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)32))) % (var_1)))))) : (((/* implicit */int) var_2))));
            }
            /* vectorizable */
            for (unsigned char i_13 = 0; i_13 < 14; i_13 += 1) /* same iter space */
            {
                arr_48 [i_9] [i_9] [i_13] [i_11] = ((/* implicit */unsigned long long int) 763290214U);
                var_29 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (17622568654247455719ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)116)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_9) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (7381289154909936357LL))));
            }
            /* vectorizable */
            for (unsigned char i_14 = 1; i_14 < 13; i_14 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned char i_15 = 0; i_15 < 14; i_15 += 4) 
                {
                    for (unsigned int i_16 = 2; i_16 < 13; i_16 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned int) -4014471123391298432LL);
                            arr_55 [(unsigned short)12] [i_11] [i_14] [(unsigned char)2] [i_14] [i_15] [i_9] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) - (1483920609U)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_17 = 0; i_17 < 14; i_17 += 2) 
                {
                    for (long long int i_18 = 0; i_18 < 14; i_18 += 2) 
                    {
                        {
                            var_31 = ((/* implicit */long long int) (+(((/* implicit */int) arr_34 [i_9]))));
                            arr_60 [i_11] [i_14] [i_17] [i_18] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)3464)) ^ (((/* implicit */int) (signed char)33))))) ? (((/* implicit */int) ((-5287426365411505359LL) <= (arr_21 [i_9])))) : (((/* implicit */int) (signed char)47))));
                        }
                    } 
                } 
                var_32 *= (signed char)0;
            }
            /* LoopNest 2 */
            for (unsigned int i_19 = 0; i_19 < 14; i_19 += 2) 
            {
                for (unsigned char i_20 = 0; i_20 < 14; i_20 += 2) 
                {
                    {
                        var_33 *= ((/* implicit */short) ((((/* implicit */_Bool) (-(((18446744073709551615ULL) & (((/* implicit */unsigned long long int) var_11))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_15))))) : (arr_61 [i_9] [i_20]))))));
                        var_34 *= ((/* implicit */unsigned char) (signed char)42);
                    }
                } 
            } 
            arr_66 [i_9] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_42 [i_9]))));
        }
    }
    var_35 = ((/* implicit */short) ((var_9) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((short)-29071), (((/* implicit */short) var_7))))) ? (((((/* implicit */int) (signed char)127)) << (((((/* implicit */int) var_13)) + (25878))))) : (((/* implicit */int) var_8)))))));
    var_36 = ((/* implicit */short) 13988505379961387194ULL);
}
