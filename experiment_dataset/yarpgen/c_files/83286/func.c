/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83286
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
    var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_0))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                {
                    var_12 -= ((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2 - 1]))) : (2081270331757014333ULL))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_3), (var_3)))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38069))))))))))));
                    var_13 = arr_2 [i_2] [i_2 - 1] [i_2];
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) arr_4 [i_1 + 1]))) > (((/* implicit */int) arr_3 [i_2] [i_2 + 3] [i_2]))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 2081270331757014335ULL)) ? (var_1) : (var_6))), (((/* implicit */long long int) (~(((/* implicit */int) var_5)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16365473741952537282ULL)) ? (((/* implicit */long long int) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_2))))) : (var_6)))) : (((((_Bool) 6349867716275615784ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)0)), (var_5))))) : (((((/* implicit */_Bool) 2081270331757014334ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (2081270331757014335ULL)))))));
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) var_4))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 25; i_3 += 4) 
    {
        var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_5))));
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3])) ? (2081270331757014333ULL) : (16365473741952537282ULL)))) ? (((/* implicit */unsigned long long int) ((arr_7 [i_3]) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (arr_8 [i_3]))))));
        var_19 -= ((/* implicit */int) (((_Bool)1) ? (arr_7 [i_3]) : (arr_7 [i_3])));
    }
    for (unsigned char i_4 = 1; i_4 < 24; i_4 += 4) 
    {
        /* LoopSeq 2 */
        for (long long int i_5 = 0; i_5 < 25; i_5 += 3) 
        {
            var_20 ^= ((/* implicit */short) arr_14 [i_4 + 1] [i_4 - 1]);
            var_21 = ((/* implicit */signed char) min((min((((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_4] [i_4])) | (((/* implicit */int) var_5))))), (arr_7 [i_4 + 1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_4] [i_4])) ? (((/* implicit */int) arr_9 [i_4] [i_4])) : (((((/* implicit */int) (_Bool)1)) / (var_10))))))));
        }
        for (signed char i_6 = 2; i_6 < 23; i_6 += 2) 
        {
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned char) var_2))))) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)5952)) : (((/* implicit */int) (_Bool)1))))) >= (max((((/* implicit */long long int) arr_14 [i_4] [i_6])), (-2666015279428478489LL))))))));
            var_23 = ((/* implicit */long long int) (unsigned char)0);
            var_24 = ((((/* implicit */_Bool) ((16365473741952537282ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_4] [i_4])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4] [i_4])))))), (min((2081270331757014360ULL), (((/* implicit */unsigned long long int) (short)18)))))) : (((/* implicit */unsigned long long int) 9223372036854775807LL)));
            var_25 += ((/* implicit */unsigned int) ((min((arr_14 [i_4 + 1] [i_6 + 1]), (arr_14 [i_4 - 1] [i_6 - 2]))) ? ((+(((/* implicit */int) arr_14 [i_4 - 1] [i_6 + 2])))) : (((/* implicit */int) arr_14 [i_4 - 1] [i_6 + 1]))));
            var_26 -= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_6 - 1] [i_4 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)21))) : (arr_16 [i_6 - 1] [i_4 + 1]))))));
        }
        var_27 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned long long int) (unsigned short)17216))))) ? (((var_0) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_4 + 1] [i_4 + 1]))))) : (min(((-(arr_16 [i_4] [i_4 + 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)0)) / (((/* implicit */int) (_Bool)1)))))))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_8 = 2; i_8 < 20; i_8 += 4) 
        {
            for (unsigned int i_9 = 0; i_9 < 23; i_9 += 1) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        var_28 = ((/* implicit */unsigned char) (-(2081270331757014335ULL)));
                        var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) max((((/* implicit */unsigned int) (unsigned short)59770)), (504967092U))))));
                        var_30 = ((/* implicit */unsigned short) (!(((_Bool) arr_21 [i_8 - 2] [i_8 - 2]))));
                        var_31 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_7] [i_7] [i_8 + 3])) ? (arr_2 [i_7] [i_8] [i_8 - 2]) : (arr_2 [i_7] [i_8 + 1] [i_8 + 1])))) ? (((((/* implicit */_Bool) arr_2 [(signed char)1] [i_8] [i_8 - 2])) ? (arr_2 [i_7] [i_8] [i_8 - 1]) : (arr_2 [i_7] [i_7] [i_8 + 1]))) : (arr_2 [i_7] [i_8] [i_8 + 1]));
                    }
                } 
            } 
        } 
        var_32 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_7])) ? (((/* implicit */int) (_Bool)1)) : (-142368137)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_7] [i_7] [i_7]))) : (var_1))) < (((/* implicit */long long int) ((arr_20 [i_7] [i_7]) ? (((/* implicit */int) min(((unsigned char)0), (var_8)))) : (((((((/* implicit */int) arr_9 [i_7] [i_7])) + (2147483647))) << (((3222078725712025138LL) - (3222078725712025138LL))))))))));
    }
}
