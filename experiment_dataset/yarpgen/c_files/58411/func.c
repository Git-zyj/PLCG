/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58411
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
    var_18 = min((((((11707396218830906758ULL) ^ (var_15))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) ((var_13) && (var_13)))), (var_3)))));
    var_19 = ((/* implicit */unsigned short) var_15);
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((1385982296295652177ULL), (((/* implicit */unsigned long long int) var_5))))) ? (6739347854878644837ULL) : (6123682154690670291ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (11707396218830906771ULL)));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) max((((((var_16) + (9223372036854775807LL))) << (((((/* implicit */int) (_Bool)1)) >> (((6739347854878644830ULL) - (6739347854878644805ULL))))))), (((/* implicit */long long int) min((arr_4 [i_2 - 1] [i_2 + 2]), (arr_4 [i_2 + 1] [i_2 + 1])))))))));
                    var_22 = min((max((((/* implicit */unsigned long long int) (!(var_1)))), (max((11707396218830906758ULL), (6739347854878644844ULL))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_3 [(short)7] [i_0] [i_2 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (11707396218830906778ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14826)))))));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */long long int) max((var_9), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_6) == (var_6)))) < ((-(((/* implicit */int) var_2)))))))));
    }
    for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 2) 
    {
        arr_13 [(short)6] &= ((/* implicit */short) ((6739347854878644837ULL) & (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 6739347854878644842ULL)) ? (((/* implicit */int) arr_12 [i_3 + 3])) : (((/* implicit */int) arr_12 [(unsigned short)9])))), (max((((/* implicit */int) arr_11 [i_3] [i_3])), (67099155))))))));
        var_23 = arr_11 [i_3 + 2] [i_3 + 2];
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_17 [i_4] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (((_Bool)1) ? (((((/* implicit */int) arr_4 [i_4] [i_4])) / (((/* implicit */int) arr_6 [i_4])))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)4503)) > (((/* implicit */int) (short)32757)))))))) != (((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)0)), (arr_10 [(short)10])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)0)) * (((/* implicit */int) arr_11 [12LL] [i_4]))))) : (9750674392463593981ULL)))));
        /* LoopSeq 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            var_24 -= ((/* implicit */short) var_7);
            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) arr_12 [i_5]))) ? (max((13653488738225354432ULL), (((/* implicit */unsigned long long int) arr_12 [i_4])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48942))))))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            arr_24 [i_6] [i_6] [i_4] = ((/* implicit */unsigned long long int) min((var_11), ((+(((/* implicit */int) (unsigned short)4503))))));
            arr_25 [2ULL] &= ((/* implicit */unsigned long long int) (_Bool)1);
        }
    }
    /* LoopNest 2 */
    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 4) 
    {
        for (short i_8 = 0; i_8 < 12; i_8 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_9 = 0; i_9 < 12; i_9 += 3) /* same iter space */
                {
                    var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (~(((((/* implicit */int) var_2)) / (((/* implicit */int) (short)28045)))))))));
                    var_27 = ((/* implicit */_Bool) ((unsigned short) arr_4 [i_7] [i_8]));
                }
                for (long long int i_10 = 0; i_10 < 12; i_10 += 3) /* same iter space */
                {
                    var_28 -= ((((/* implicit */_Bool) (-(min((((/* implicit */long long int) (short)-14827)), (var_4)))))) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) <= (arr_32 [i_7]))))));
                    arr_38 [i_7] [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) 11707396218830906776ULL))) ? (((/* implicit */unsigned long long int) max((var_11), (((/* implicit */int) arr_10 [i_8]))))) : (((((/* implicit */_Bool) arr_5 [i_7] [(unsigned short)3] [i_7])) ? (((/* implicit */unsigned long long int) var_10)) : (arr_33 [i_7] [i_7] [i_10])))))) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) min((var_2), (((/* implicit */unsigned short) (signed char)6))))))));
                }
                arr_39 [i_8] [i_7] [(unsigned short)7] = ((/* implicit */unsigned short) arr_36 [i_7] [i_7] [i_8]);
                var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)14826)) : (((/* implicit */int) arr_5 [i_7] [i_8] [i_7])))) * (((/* implicit */int) (signed char)110))))) ? (((/* implicit */int) arr_11 [i_7] [i_8])) : (max(((-(((/* implicit */int) var_13)))), ((~(((/* implicit */int) arr_0 [(short)6])))))))))));
                arr_40 [i_8] = ((/* implicit */unsigned short) (+(((arr_33 [i_8] [i_7] [i_7]) / (var_0)))));
            }
        } 
    } 
}
