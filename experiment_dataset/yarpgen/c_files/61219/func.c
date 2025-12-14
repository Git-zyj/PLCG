/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61219
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        var_12 = ((/* implicit */long long int) ((unsigned int) min((((/* implicit */unsigned int) arr_1 [i_0 - 1])), (var_1))));
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) & (((/* implicit */int) (_Bool)1))))) | (((((/* implicit */_Bool) var_7)) ? (7972338840564216422ULL) : (((/* implicit */unsigned long long int) var_1))))))) ? (((unsigned long long int) ((((/* implicit */unsigned long long int) -7756717942327790715LL)) <= (3645275145709385296ULL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        var_14 -= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) -2993956171448089596LL)) ? (var_3) : (var_3)))) ? (arr_4 [10ULL]) : (((/* implicit */long long int) var_1))))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 1; i_2 < 12; i_2 += 3) 
        {
            /* LoopSeq 2 */
            for (long long int i_3 = 4; i_3 < 14; i_3 += 2) 
            {
                arr_11 [i_1] [i_1] [i_2] [i_3 + 1] = (-(((arr_3 [i_2 - 1] [i_3 - 2]) / (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2 + 1] [i_3 + 1]))))));
                arr_12 [i_1] [i_2 + 2] [i_3] [i_1] = ((/* implicit */unsigned long long int) arr_5 [i_1]);
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_15 ^= ((/* implicit */unsigned long long int) (+(var_1)));
                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((((/* implicit */unsigned int) ((((/* implicit */int) var_5)) >> (((/* implicit */int) (_Bool)1))))) <= ((+(var_4))))) ? (((((/* implicit */_Bool) ((arr_14 [i_1] [i_1] [(short)0] [i_1]) ? (-5921116544531266404LL) : (((/* implicit */long long int) var_4))))) ? (((/* implicit */unsigned long long int) max((var_9), (var_2)))) : (var_8))) : (((/* implicit */unsigned long long int) min((max((-6923789487169479226LL), (arr_3 [i_1] [i_1]))), (((/* implicit */long long int) ((unsigned int) var_9)))))))))));
                var_17 += ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_2 + 1])) > (((/* implicit */int) (!(((/* implicit */_Bool) 4092623699519659446ULL)))))));
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 15; i_5 += 3) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_20 [6LL] &= ((/* implicit */unsigned short) arr_17 [i_1] [(_Bool)1] [i_1] [i_4] [i_6] [i_2]);
                            var_18 = ((((/* implicit */_Bool) -8140680550058641577LL)) ? (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_2 - 1] [i_2 - 1] [i_2 + 1])) + (((/* implicit */int) arr_13 [i_2 + 2] [(_Bool)1] [i_2 - 1] [i_2]))))) : (139611588448485376LL));
                        }
                    } 
                } 
                var_19 += ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_1] [(unsigned char)2] [i_1] [i_1] [(unsigned char)2] [i_1])) || (arr_15 [10U] [i_2 + 3] [i_2 + 3] [i_2 + 3])))), (((arr_15 [(short)2] [(short)2] [(short)2] [i_2 + 3]) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [12LL] [0ULL] [(_Bool)1] [i_2 + 1])))))));
            }
            var_20 |= ((((/* implicit */_Bool) ((arr_17 [i_1] [i_2 + 1] [i_2] [3U] [i_2 + 3] [i_2]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)53)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_7 [i_1] [i_2]))))) : ((+(var_2))));
        }
        /* LoopSeq 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_23 [i_1] [i_7] = ((/* implicit */short) (((~(arr_21 [i_1] [i_7]))) > (arr_21 [i_1] [i_7])));
            arr_24 [i_1] [i_1] = ((arr_21 [i_1] [i_7]) != (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_8 [0LL] [i_1] [i_1]), (((((/* implicit */_Bool) var_8)) && (var_10))))))));
            var_21 += ((/* implicit */unsigned int) 273686881224818013ULL);
            arr_25 [i_1] [i_1] [i_7] = min((((/* implicit */long long int) (+(min((((/* implicit */unsigned int) var_5)), (916278919U)))))), ((+(((long long int) var_10)))));
            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) ((var_9) - (((/* implicit */long long int) ((/* implicit */int) (signed char)117)))))) ? (((/* implicit */unsigned long long int) var_1)) : (min((var_8), (((/* implicit */unsigned long long int) arr_4 [(unsigned char)4])))))) : (arr_19 [i_1] [(short)1]))))));
        }
        for (unsigned char i_8 = 0; i_8 < 15; i_8 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_9 = 2; i_9 < 13; i_9 += 2) 
            {
                arr_31 [i_1] [i_1] [i_9] [i_1] &= ((/* implicit */_Bool) var_5);
                arr_32 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_9 + 1] [i_1] [i_9] [i_9] [i_1] [i_9 + 2])) ? (arr_18 [i_9 + 2] [i_1] [i_9 - 2] [i_9 + 2] [i_1] [i_9 + 2]) : (arr_18 [i_9 - 2] [i_1] [i_9 + 2] [i_9] [i_1] [i_9 - 2])));
            }
            /* LoopNest 2 */
            for (long long int i_10 = 2; i_10 < 14; i_10 += 1) 
            {
                for (long long int i_11 = 0; i_11 < 15; i_11 += 3) 
                {
                    {
                        arr_37 [i_8] [i_8] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9069314181934767586ULL)) ? (-2609769208029079453LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (((unsigned long long int) var_1)) : (arr_6 [i_8])))) ? (((/* implicit */unsigned long long int) ((long long int) (-(((/* implicit */int) var_5)))))) : (((((/* implicit */_Bool) arr_27 [i_1] [14LL])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (arr_10 [i_1]))) : (((/* implicit */unsigned long long int) -2686258357145807479LL))))));
                        arr_38 [i_1] [i_10] [i_8] [i_1] = ((/* implicit */long long int) ((((arr_21 [i_11] [i_1]) != (arr_21 [i_10 - 1] [i_11]))) ? (min((arr_21 [i_1] [i_10]), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((long long int) arr_21 [i_1] [i_8])))));
                    }
                } 
            } 
            arr_39 [i_1] [i_1] = ((min((((/* implicit */unsigned long long int) (unsigned char)63)), (var_8))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_3 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1])))))));
        }
    }
    /* LoopNest 3 */
    for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 2) 
    {
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            for (long long int i_14 = 0; i_14 < 15; i_14 += 1) 
            {
                {
                    var_23 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_2)) ? (var_0) : (var_9))) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))), (((arr_8 [i_12] [i_12] [i_14]) ? (8442007040805427161ULL) : (((/* implicit */unsigned long long int) 5311080761849431945LL))))));
                    var_24 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_1)), ((+(min((var_11), (9680103127832193868ULL)))))));
                    var_25 = ((/* implicit */unsigned long long int) max((var_25), ((+(((((/* implicit */_Bool) arr_19 [i_13] [i_12])) ? (((/* implicit */unsigned long long int) var_4)) : (arr_19 [i_14] [i_12])))))));
                }
            } 
        } 
    } 
    var_26 *= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) var_1)))))), (var_7)));
    var_27 = ((((/* implicit */_Bool) ((short) max((((/* implicit */unsigned char) var_10)), ((unsigned char)249))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : ((~(5275616030179134314ULL))));
}
