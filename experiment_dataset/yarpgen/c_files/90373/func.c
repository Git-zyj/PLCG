/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90373
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
    for (int i_0 = 4; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_17 *= ((/* implicit */unsigned long long int) min((((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) var_4)))))), (arr_6 [i_0] [20LL])));
                arr_7 [(short)13] = ((/* implicit */unsigned short) (unsigned char)48);
                /* LoopSeq 2 */
                for (short i_2 = 4; i_2 < 24; i_2 += 1) 
                {
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [9] [i_0]))) : (var_3)))) ? ((+(((/* implicit */int) (signed char)-99)))) : (max((arr_2 [i_0]), (((/* implicit */int) var_2))))))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [19] [i_1] [i_1])))))));
                    arr_11 [i_0] [(short)18] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) == (((((/* implicit */_Bool) var_8)) ? (arr_1 [i_1 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                    arr_12 [(_Bool)1] [i_2] = ((/* implicit */short) ((687068740648983521ULL) - (17759675333060568094ULL)));
                    var_18 -= ((/* implicit */unsigned int) (+(((/* implicit */int) var_10))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    var_19 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 - 3])))))));
                    arr_15 [15ULL] = ((/* implicit */long long int) ((arr_13 [i_0] [i_1] [(short)10] [(unsigned char)19]) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [15LL])) || (((/* implicit */_Bool) min((3587938395341589993ULL), (((/* implicit */unsigned long long int) arr_6 [i_3] [i_1])))))))))));
                    arr_16 [i_1 + 1] [i_1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((-(((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */unsigned int) arr_2 [i_1])) : (((((((/* implicit */_Bool) arr_6 [i_1] [i_3])) && (((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_1] [i_3])))) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) arr_14 [0U] [(signed char)11] [i_3]))))));
                    arr_17 [(short)8] [i_1] [i_1] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_5 [(unsigned short)10])) / ((+(arr_2 [i_1])))));
                }
                arr_18 [i_1] [i_0 - 1] = ((/* implicit */unsigned short) ((arr_8 [i_0] [i_0] [23LL]) / ((-(arr_8 [i_0 + 2] [i_0 - 3] [i_1])))));
                var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_2 [i_0 + 4])), (arr_1 [i_0 - 4])))) || (((_Bool) arr_1 [i_0 - 1]))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) 3587938395341589993ULL);
    /* LoopSeq 4 */
    for (int i_4 = 0; i_4 < 19; i_4 += 1) 
    {
        arr_21 [i_4] [i_4] = ((/* implicit */long long int) arr_0 [(_Bool)1]);
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned int i_6 = 0; i_6 < 19; i_6 += 3) 
            {
                {
                    var_22 &= ((/* implicit */unsigned short) 3074491035U);
                    var_23 += ((/* implicit */_Bool) (~(((((var_8) | (((/* implicit */long long int) ((/* implicit */int) arr_6 [8LL] [8LL]))))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -4384486514508889209LL))))))))));
                    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((unsigned int) arr_9 [i_6] [(short)19] [i_4])))));
                }
            } 
        } 
        arr_27 [i_4] = ((/* implicit */short) ((((((/* implicit */_Bool) min(((unsigned short)26692), (((/* implicit */unsigned short) (unsigned char)208))))) ? (((arr_22 [10LL] [6]) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_6 [i_4] [i_4])))) : (max((((/* implicit */int) var_10)), (arr_20 [i_4] [i_4]))))) - ((~(((/* implicit */int) var_0))))));
        arr_28 [i_4] = ((/* implicit */_Bool) min((((/* implicit */int) max((((/* implicit */unsigned short) var_15)), (arr_19 [i_4])))), ((-(arr_2 [i_4])))));
    }
    for (long long int i_7 = 1; i_7 < 19; i_7 += 1) 
    {
        arr_32 [i_7] = ((/* implicit */short) arr_9 [i_7] [i_7] [i_7]);
        var_25 |= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) & (((/* implicit */int) arr_31 [(short)14]))))) == ((-(0ULL)))))) + (((/* implicit */int) arr_3 [i_7]))));
        arr_33 [i_7] [(_Bool)0] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_7 + 2] [i_7 + 2] [i_7]))) ^ (arr_29 [10LL] [i_7]))))));
        var_26 ^= ((/* implicit */unsigned long long int) (_Bool)1);
    }
    for (long long int i_8 = 0; i_8 < 11; i_8 += 1) 
    {
        var_27 *= ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) - (((/* implicit */int) arr_19 [i_8]))))) ? (((var_5) ^ (arr_23 [i_8] [i_8]))) : (((/* implicit */unsigned long long int) arr_8 [i_8] [i_8] [i_8])));
        arr_37 [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) <= (((/* implicit */int) arr_9 [i_8] [i_8] [5ULL]))));
        arr_38 [i_8] [i_8] = ((/* implicit */long long int) (+(17759675333060568094ULL)));
        var_28 = ((/* implicit */int) min((var_28), (((((((/* implicit */int) ((arr_29 [i_8] [i_8]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_8] [10LL])))))) != (((/* implicit */int) var_0)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((unsigned char) var_6)))))));
    }
    for (short i_9 = 0; i_9 < 24; i_9 += 1) 
    {
        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_1 [i_9])))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) arr_14 [i_9] [i_9] [i_9])) / (arr_40 [i_9] [i_9])))) ? (var_16) : ((+(((/* implicit */int) var_13)))))) : (((/* implicit */int) (short)(-32767 - 1)))));
        arr_41 [i_9] = ((/* implicit */unsigned long long int) arr_40 [i_9] [i_9]);
    }
}
