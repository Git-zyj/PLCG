/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90741
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    var_14 += ((/* implicit */long long int) ((min((arr_6 [i_0] [i_1] [i_2] [i_0]), (arr_6 [i_0] [i_1] [17] [i_2]))) ? (2414822110U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-19)))));
                    var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) var_6))));
                    var_16 = ((/* implicit */short) min((((((/* implicit */_Bool) 2147483647)) ? (-3084644594894938380LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)93)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)162))))))));
                }
                /* vectorizable */
                for (short i_3 = 0; i_3 < 20; i_3 += 4) /* same iter space */
                {
                    var_17 -= ((/* implicit */unsigned char) ((((9284316451113820068ULL) << (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)23)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_11)))))));
                    arr_10 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_4);
                }
                for (short i_4 = 0; i_4 < 20; i_4 += 4) /* same iter space */
                {
                    var_18 = ((/* implicit */int) ((((((((/* implicit */long long int) ((/* implicit */int) var_4))) / (var_0))) * (((/* implicit */long long int) (+(((/* implicit */int) (short)24506))))))) / (-6905858830269195227LL)));
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_1] [i_4])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (32767U) : (((/* implicit */unsigned int) 758371112)))))))) | (((/* implicit */int) (signed char)-126))));
                }
                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(max((var_0), (((/* implicit */long long int) var_9))))))) ? (max((8716517247489600660ULL), (((/* implicit */unsigned long long int) (short)-21564)))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0])) << (((/* implicit */int) (_Bool)1))))), (-1409730263122750786LL)))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_5 = 0; i_5 < 14; i_5 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_6 = 3; i_6 < 11; i_6 += 1) 
        {
            arr_20 [i_5] [i_5] [i_5] = ((/* implicit */signed char) ((int) 4294967295U));
            var_21 = ((/* implicit */int) ((short) 1437388088));
        }
        arr_21 [i_5] = ((/* implicit */long long int) ((int) var_8));
        arr_22 [i_5] = ((/* implicit */short) 18446744073709551609ULL);
    }
    for (unsigned int i_7 = 0; i_7 < 19; i_7 += 4) 
    {
        arr_27 [i_7] = ((/* implicit */unsigned char) 15814776807791869378ULL);
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-9736)) ? (arr_24 [i_7]) : (arr_23 [i_7])))) ? (max((var_3), (((/* implicit */unsigned long long int) -1682024299)))) : (((((/* implicit */_Bool) arr_8 [i_7] [i_7] [i_7])) ? (((/* implicit */unsigned long long int) var_9)) : (arr_8 [i_7] [i_7] [i_7])))));
        arr_28 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_7])) ? (max((((((/* implicit */_Bool) (signed char)-41)) ? (-1930079485) : (((/* implicit */int) (short)-24507)))), (((((/* implicit */_Bool) (short)19226)) ? (((/* implicit */int) (short)-15290)) : (((/* implicit */int) (short)24492)))))) : (((/* implicit */int) (signed char)74))));
        var_23 = ((/* implicit */short) max((arr_23 [i_7]), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) & (9604138705588773941ULL)))));
        arr_29 [i_7] = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((var_1), (((/* implicit */long long int) 3475684968U))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (min((((/* implicit */unsigned long long int) var_10)), (2034769858835193038ULL))))) / (((/* implicit */unsigned long long int) ((2147483647) + (((((/* implicit */int) arr_0 [i_7] [(unsigned char)18])) / (((/* implicit */int) arr_14 [i_7] [(short)7] [i_7] [i_7])))))))));
    }
    var_24 = ((/* implicit */long long int) 13291570725919041840ULL);
}
