/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87748
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
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (var_5)));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_0] = ((/* implicit */long long int) 18446744073709551615ULL);
                var_14 = 1073741696LL;
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) var_8);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_2 = 1; i_2 < 21; i_2 += 3) 
    {
        var_16 = ((/* implicit */short) 11388828449374082937ULL);
        /* LoopSeq 2 */
        for (unsigned short i_3 = 1; i_3 < 21; i_3 += 4) 
        {
            var_17 = ((/* implicit */short) arr_6 [i_2 + 1]);
            arr_12 [1] [11ULL] = ((/* implicit */short) (~(1073741694LL)));
            arr_13 [(unsigned short)16] [i_3] [i_2 + 1] &= arr_9 [i_2 - 1] [i_3 + 1] [i_3 - 1];
            var_18 = ((/* implicit */unsigned short) ((((11388828449374082937ULL) << (((((/* implicit */int) arr_7 [i_2 - 1])) - (63358))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_2 + 1] [0ULL] [15])) || (((/* implicit */_Bool) arr_6 [i_3 + 1]))))))));
        }
        for (unsigned short i_4 = 1; i_4 < 19; i_4 += 1) 
        {
            /* LoopSeq 3 */
            for (int i_5 = 2; i_5 < 18; i_5 += 4) /* same iter space */
            {
                arr_21 [i_2] [12LL] [i_2] [i_2 + 1] = ((/* implicit */int) (unsigned short)36342);
                arr_22 [(short)4] [i_2 - 1] [i_2 - 1] = ((/* implicit */long long int) (unsigned short)20526);
                var_19 = ((/* implicit */int) min((var_19), (2147483647)));
                /* LoopNest 2 */
                for (unsigned short i_6 = 1; i_6 < 18; i_6 += 3) 
                {
                    for (unsigned int i_7 = 2; i_7 < 21; i_7 += 3) 
                    {
                        {
                            arr_29 [i_2] [i_6] [i_5] [i_4] [i_4] [i_2] [i_2] = arr_16 [i_4] [i_4 + 1] [i_4 - 1];
                            arr_30 [i_2 + 1] [i_2 + 1] [i_2 + 1] = ((/* implicit */int) -8293770439866097978LL);
                            var_20 = ((/* implicit */unsigned short) arr_14 [16U] [i_7]);
                        }
                    } 
                } 
            }
            for (int i_8 = 2; i_8 < 18; i_8 += 4) /* same iter space */
            {
                arr_34 [i_2] = (-(12643549120075250200ULL));
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) arr_26 [i_8 - 1] [i_2 - 1] [12LL] [i_2 - 1] [i_2]))));
                var_22 *= (short)18837;
                arr_35 [i_2] [i_4] [i_8] = ((/* implicit */long long int) ((arr_14 [i_2] [18ULL]) != (((/* implicit */unsigned int) arr_26 [i_2] [i_2] [i_4 + 1] [i_8 + 4] [i_2]))));
            }
            for (int i_9 = 2; i_9 < 18; i_9 += 4) /* same iter space */
            {
                var_23 *= ((/* implicit */unsigned int) (short)-14452);
                arr_39 [i_9] [6ULL] [i_4] [i_2] = ((/* implicit */unsigned long long int) (!(((8173787667877169151LL) != (arr_11 [i_2] [i_4 + 2])))));
            }
            var_24 += ((/* implicit */unsigned long long int) arr_38 [i_2 - 1] [i_2 - 1] [i_4 + 3] [i_4]);
        }
        arr_40 [(unsigned short)15] [i_2 + 1] = ((/* implicit */long long int) -2147483647);
        var_25 += ((/* implicit */long long int) arr_18 [i_2] [i_2 - 1] [(unsigned short)20]);
    }
    /* vectorizable */
    for (unsigned long long int i_10 = 1; i_10 < 13; i_10 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_11 = 1; i_11 < 13; i_11 += 3) 
        {
            for (int i_12 = 4; i_12 < 12; i_12 += 1) 
            {
                for (unsigned short i_13 = 4; i_13 < 13; i_13 += 1) 
                {
                    {
                        var_26 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)31790))));
                        var_27 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_33 [i_13 - 4] [i_10 + 2])) * (((/* implicit */int) arr_33 [i_11] [i_10 + 2]))));
                        var_28 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-32752))));
                    }
                } 
            } 
        } 
        arr_51 [i_10 - 1] = ((/* implicit */long long int) (+(((/* implicit */int) arr_44 [i_10] [i_10 - 1] [i_10 + 1]))));
        arr_52 [i_10] = ((/* implicit */unsigned long long int) (~(arr_11 [i_10 + 1] [i_10 + 1])));
        arr_53 [i_10] = ((/* implicit */unsigned short) ((-2831268955628650177LL) & (((/* implicit */long long int) -971982439))));
    }
    for (unsigned long long int i_14 = 1; i_14 < 13; i_14 += 3) /* same iter space */
    {
        var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) (-((+(arr_6 [18]))))))));
        /* LoopSeq 3 */
        for (long long int i_15 = 1; i_15 < 12; i_15 += 2) 
        {
            arr_60 [i_14 - 1] [i_14] = min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_25 [i_14 - 1] [i_14 + 2]))))), (arr_41 [i_14]));
            var_30 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) (!(((/* implicit */_Bool) 3351056266307200142ULL)))))))));
        }
        for (int i_16 = 4; i_16 < 13; i_16 += 1) /* same iter space */
        {
            var_31 = ((/* implicit */unsigned long long int) max((var_31), (arr_17 [(unsigned short)6] [i_16] [i_14 + 2])));
            arr_63 [i_14] [i_16 + 1] = ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned short)20539)), (min((1353660849), (arr_32 [i_14 + 2] [i_16 + 1])))));
        }
        /* vectorizable */
        for (int i_17 = 4; i_17 < 13; i_17 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned short i_18 = 3; i_18 < 13; i_18 += 4) 
            {
                for (unsigned long long int i_19 = 3; i_19 < 14; i_19 += 1) 
                {
                    for (long long int i_20 = 1; i_20 < 13; i_20 += 2) 
                    {
                        {
                            var_32 += 9ULL;
                            arr_76 [i_14 + 1] [i_17] [i_18 - 1] [i_14] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_44 [0ULL] [2LL] [2LL])) >= (((/* implicit */int) ((arr_61 [0LL]) != (((/* implicit */unsigned long long int) arr_6 [i_20])))))));
                        }
                    } 
                } 
            } 
            var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_10 [i_14 - 1] [i_14 - 1] [i_14 - 1])))))));
            var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) arr_17 [i_14] [i_17 + 1] [i_17 + 1]))));
        }
    }
    var_35 = ((/* implicit */unsigned short) max(((-(((/* implicit */int) var_1)))), (-2147483647)));
}
