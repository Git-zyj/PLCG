/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94169
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_10 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */unsigned short) arr_0 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (signed char)123)))) : (max((((/* implicit */long long int) arr_0 [i_0])), (1592689686418132663LL)))))));
        var_11 *= ((/* implicit */unsigned char) max((max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (var_3))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) var_1))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned int) -890305263))))) ? (-890305242) : ((~(((/* implicit */int) arr_1 [i_0])))))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)163)), (1143914305352105984LL)))) ? (max((((((/* implicit */unsigned int) -890305281)) ^ (134152192U))), (((/* implicit */unsigned int) (~(-1600225020)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)26853)))));
    }
    for (signed char i_1 = 1; i_1 < 16; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_1])) || (((/* implicit */_Bool) -890305263))))), (var_7))))));
        var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 896))));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        /* LoopSeq 2 */
        for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 890305281)) ? (((/* implicit */int) (unsigned char)243)) : (-890305252)));
            arr_11 [i_2] [i_3] = ((((/* implicit */_Bool) -1592689686418132665LL)) ? (890305252) : (((/* implicit */int) (unsigned short)27285)));
            /* LoopSeq 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                /* LoopSeq 2 */
                for (signed char i_5 = 2; i_5 < 14; i_5 += 1) 
                {
                    var_14 *= ((/* implicit */int) (!(((((/* implicit */int) (short)9872)) <= (((/* implicit */int) arr_9 [i_3]))))));
                    arr_16 [i_2] [i_2] [i_3] [i_4] [(signed char)5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_5 + 1])) ? (((/* implicit */int) arr_8 [i_2] [i_5 - 2])) : (-890305258)));
                    var_15 |= ((/* implicit */_Bool) (+(-4368378917072493512LL)));
                }
                for (short i_6 = 4; i_6 < 14; i_6 += 1) 
                {
                    var_16 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_17 [i_6] [i_6] [i_6 - 3] [i_6] [i_6] [i_6 + 2]))));
                    arr_20 [i_2] [(short)0] [i_4] [i_3] |= ((/* implicit */short) (!(((/* implicit */_Bool) arr_10 [i_6 - 2] [i_6 + 2]))));
                    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [(signed char)8] [i_3] [i_4] [i_6 + 3]))) : (var_5)));
                    arr_21 [i_2] [i_3] [i_2] [i_6] |= ((/* implicit */long long int) (~((-(var_6)))));
                    var_18 = ((/* implicit */_Bool) (~(890305218)));
                }
                var_19 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_3] [i_4])) ? (var_6) : (((/* implicit */int) arr_8 [i_3] [i_3]))));
            }
            for (unsigned short i_7 = 0; i_7 < 17; i_7 += 3) 
            {
                arr_25 [i_2] = ((/* implicit */short) (+(arr_19 [i_2] [10LL] [i_3] [i_3] [i_2] [i_2])));
                var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) var_0))));
            }
        }
        for (long long int i_8 = 1; i_8 < 15; i_8 += 2) 
        {
            var_21 = ((/* implicit */short) (+(arr_12 [i_2] [i_8 + 2])));
            arr_28 [i_2] [i_2] = ((/* implicit */unsigned short) (!(arr_18 [13] [(unsigned short)9] [i_8 + 2] [13] [i_8])));
        }
        var_22 -= ((/* implicit */unsigned short) (~(12964906486601722486ULL)));
    }
    /* LoopSeq 2 */
    for (short i_9 = 2; i_9 < 19; i_9 += 2) 
    {
        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) max((((/* implicit */long long int) (unsigned char)135)), (var_2))))) ? (max((max((((/* implicit */unsigned int) arr_30 [i_9 + 4])), (var_5))), (((/* implicit */unsigned int) max((-839188417), (((/* implicit */int) (short)0))))))) : (((/* implicit */unsigned int) max(((+(((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) -890305241)) ? (((/* implicit */int) (unsigned char)180)) : (((/* implicit */int) (short)10859)))))))));
        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) max((((/* implicit */long long int) max((((/* implicit */unsigned int) 524777684)), (917504U)))), (max((((/* implicit */long long int) (-(var_7)))), (((((/* implicit */_Bool) arr_30 [i_9])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))))))));
        arr_31 [i_9 - 2] [i_9 - 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_7)), (-1592689686418132677LL)))), (max((arr_29 [i_9]), (((/* implicit */unsigned long long int) var_1))))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)10850))) : (var_7))), (((/* implicit */unsigned int) max((var_0), (var_0))))))) : (max((((/* implicit */unsigned long long int) ((unsigned char) var_4))), ((~(2251731094208512ULL)))))));
        var_25 = ((/* implicit */unsigned char) max((((1856580518454973770LL) + (var_2))), (((/* implicit */long long int) ((int) (signed char)-82)))));
    }
    /* vectorizable */
    for (unsigned short i_10 = 0; i_10 < 14; i_10 += 1) 
    {
        var_26 = ((/* implicit */unsigned long long int) ((unsigned int) (-(var_8))));
        var_27 = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_7 [i_10]))))));
        var_28 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((-600091008) | (((/* implicit */int) (unsigned short)59029))))) ? (((/* implicit */unsigned int) var_6)) : (var_3)));
        arr_34 [i_10] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1600225023)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-10859))))) : (((((/* implicit */_Bool) arr_29 [i_10])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-10867)))))));
        var_29 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) -1498627508785131239LL)) ? (4924631867840492809ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3))))));
    }
}
