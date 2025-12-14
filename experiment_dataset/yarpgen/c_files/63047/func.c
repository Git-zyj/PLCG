/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63047
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            var_13 = ((/* implicit */signed char) -7575114404320447070LL);
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    {
                        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) var_7))));
                        arr_9 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_7 [i_1 + 1] [i_0] [i_2]);
                        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_1 + 1] [0] [i_1])) ? (((/* implicit */int) arr_0 [0U] [i_1 + 1])) : (((/* implicit */int) arr_0 [(_Bool)1] [i_1 - 1])))))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_4 = 4; i_4 < 11; i_4 += 3) 
        {
            arr_12 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 14530156423336954054ULL)) ? (((/* implicit */unsigned long long int) -7575114404320447066LL)) : (3916587650372597562ULL)));
            arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+(14530156423336954069ULL)));
            arr_14 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_1 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_4] [i_4])) || (((/* implicit */_Bool) (short)17600)))))) : ((-(1012386775U)))));
            var_16 ^= ((/* implicit */signed char) (-(((/* implicit */int) arr_7 [i_4] [12] [i_4 - 1]))));
        }
        for (int i_5 = 1; i_5 < 12; i_5 += 1) 
        {
            arr_18 [4U] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))));
            arr_19 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) (+(arr_16 [i_0])))) : (((((/* implicit */_Bool) 8386560ULL)) ? (18446744073709551600ULL) : (((/* implicit */unsigned long long int) arr_6 [i_5] [i_5] [i_0]))))));
            var_17 = ((/* implicit */signed char) arr_4 [i_5 - 1] [i_0] [i_0] [i_5]);
        }
        var_18 = ((/* implicit */int) (~(3282580521U)));
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 2; i_6 < 10; i_6 += 4) 
        {
            for (unsigned int i_7 = 0; i_7 < 13; i_7 += 1) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_0])) ? (((((/* implicit */_Bool) arr_10 [i_7] [i_8])) ? (var_8) : (((/* implicit */unsigned long long int) 3038510472U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                        arr_28 [i_0] [i_6] [i_0] [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)31293)))))));
                        var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_15 [i_6] [i_6 - 1] [i_6 + 3]))));
                    }
                } 
            } 
        } 
        arr_29 [i_0] = var_10;
    }
    for (unsigned short i_9 = 1; i_9 < 20; i_9 += 1) 
    {
        arr_33 [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1137221601)) && (((/* implicit */_Bool) arr_32 [i_9 + 1] [i_9]))));
        arr_34 [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)3)) ? ((-(-8505720362404438480LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)26118)))));
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_9 + 2])) ? (min((((/* implicit */unsigned long long int) arr_32 [i_9] [9])), (arr_31 [7]))) : (((/* implicit */unsigned long long int) 1772260431))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)6))) : (max((((((/* implicit */_Bool) (short)-26119)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32743))) : (arr_31 [i_9]))), (((((/* implicit */_Bool) 742589125)) ? (arr_31 [i_9]) : (((/* implicit */unsigned long long int) var_11))))))));
        var_22 = ((/* implicit */long long int) arr_30 [i_9 - 1]);
    }
    for (unsigned long long int i_10 = 2; i_10 < 21; i_10 += 3) 
    {
        arr_39 [i_10] [i_10 + 2] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_0)) | (1256456823U)))) ? (((((/* implicit */_Bool) (unsigned short)255)) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (1034421992U))) : (((/* implicit */unsigned int) ((int) arr_37 [i_10])))))));
        var_23 ^= min((((/* implicit */unsigned long long int) (short)0)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [16ULL])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_10])))))) ? (var_6) : (((18446744073709551597ULL) - (((/* implicit */unsigned long long int) 1012386772U)))))));
    }
    for (unsigned int i_11 = 1; i_11 < 20; i_11 += 4) 
    {
        arr_43 [i_11] [i_11] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_11 + 1] [i_11 - 1])) ? (arr_41 [i_11 + 1] [i_11 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_11 + 1] [i_11 + 1])))))) ? (var_5) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-80))))));
        arr_44 [i_11 - 1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_42 [i_11 + 1] [i_11 + 1])) ? (arr_35 [i_11]) : (arr_35 [i_11])))));
    }
    var_24 ^= ((((((/* implicit */_Bool) 1753687031U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) 6545851917617943477ULL)))))) : ((+(25ULL))))) | (min((((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) ((signed char) (unsigned char)0))))));
}
