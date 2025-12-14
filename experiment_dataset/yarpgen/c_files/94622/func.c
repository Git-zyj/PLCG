/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94622
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
    for (signed char i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */unsigned short) min((((((/* implicit */long long int) (-(((/* implicit */int) var_9))))) / (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (var_5))))), (((/* implicit */long long int) arr_2 [(unsigned short)9]))));
                arr_4 [i_0 - 3] = var_8;
                arr_5 [i_0] [21LL] [i_0 - 1] = ((/* implicit */long long int) (unsigned short)10208);
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_11 = (-(4637726088256035016LL));
                            arr_13 [i_0 - 1] [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((arr_10 [i_3] [i_2] [21LL] [i_0]), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [1U]))))) || (((/* implicit */_Bool) ((((/* implicit */int) (signed char)-51)) + (((/* implicit */int) (unsigned short)11308))))))), (arr_0 [(signed char)9])));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_4 = 3; i_4 < 17; i_4 += 2) 
    {
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            for (long long int i_6 = 0; i_6 < 19; i_6 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_7 = 3; i_7 < 18; i_7 += 2) 
                    {
                        for (long long int i_8 = 2; i_8 < 18; i_8 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_6 [i_5] [i_7 + 1] [i_8])), (arr_1 [(signed char)0] [(short)6])))) ? (var_0) : (((4048148122984733795LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))))))) / (((/* implicit */long long int) 3508886031U))));
                                arr_29 [i_4] [i_8 + 1] [i_8] [(signed char)12] = ((/* implicit */signed char) (+((((!(((/* implicit */_Bool) arr_19 [i_4] [i_5] [9LL])))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)3)) >= (((/* implicit */int) var_7))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_4])))))))));
                            }
                        } 
                    } 
                    arr_30 [i_4] [i_4] [(signed char)13] = ((/* implicit */unsigned short) (short)15380);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */long long int) min((((/* implicit */int) var_4)), ((~(((/* implicit */int) (short)9801))))));
    /* LoopSeq 3 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_14 = ((/* implicit */long long int) (unsigned short)65533);
        arr_33 [i_9] [i_9] = ((/* implicit */short) 4294967270U);
        var_15 = ((/* implicit */unsigned int) var_8);
        arr_34 [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-127)) ? (((((/* implicit */_Bool) (signed char)72)) ? (arr_25 [i_9] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-3))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_9] [19LL] [i_9])) | (((/* implicit */int) (signed char)-11)))))));
    }
    /* vectorizable */
    for (long long int i_10 = 0; i_10 < 13; i_10 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_11 = 1; i_11 < 12; i_11 += 4) 
        {
            for (long long int i_12 = 3; i_12 < 10; i_12 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 3) 
                    {
                        for (long long int i_14 = 1; i_14 < 12; i_14 += 2) 
                        {
                            {
                                arr_49 [i_10] [1ULL] [i_12] [i_13] [i_14 - 1] = ((/* implicit */signed char) (unsigned short)53629);
                                var_16 = (unsigned short)7;
                                arr_50 [i_10] [i_11] [i_14] = arr_21 [i_10];
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned int) (_Bool)1);
                    /* LoopNest 2 */
                    for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                    {
                        for (long long int i_16 = 0; i_16 < 13; i_16 += 2) 
                        {
                            {
                                arr_59 [i_10] [(unsigned short)5] [i_12] [(signed char)5] [i_15] [0LL] = ((/* implicit */signed char) (short)27299);
                                arr_60 [i_10] [4U] [i_10] [(unsigned short)7] [i_10] = -1LL;
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_61 [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_10] [i_10] [i_10])) ? (((/* implicit */int) (short)248)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)113)))))));
        var_18 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-113)) > (((/* implicit */int) ((arr_0 [i_10]) || (((/* implicit */_Bool) var_2)))))));
        arr_62 [i_10] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) + (arr_45 [(signed char)7] [i_10] [i_10] [i_10])));
    }
    for (signed char i_17 = 0; i_17 < 17; i_17 += 2) 
    {
        var_19 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [(_Bool)1] [i_17] [i_17] [i_17])) ? (13882002329799428079ULL) : (((/* implicit */unsigned long long int) arr_64 [i_17] [i_17]))))) ? (((((/* implicit */_Bool) 25U)) ? (((/* implicit */int) arr_20 [i_17] [i_17] [(short)4] [i_17])) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (var_8))))))));
        var_20 = ((/* implicit */unsigned short) -2652219717118464758LL);
        var_21 ^= ((/* implicit */long long int) arr_14 [i_17] [i_17]);
    }
}
