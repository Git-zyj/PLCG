/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58301
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_17 = ((((arr_0 [i_0]) > (arr_0 [i_0]))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))) : (((/* implicit */unsigned long long int) ((int) arr_0 [i_0]))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (short)3018)) ? (9677016726701361261ULL) : (14937287604146443029ULL))))) ? (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)64307))))), (max((arr_0 [(short)9]), (arr_1 [i_0]))))) : (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)38062))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0])))))));
    }
    var_18 = min((((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) -1241065176)) : (14937287604146443023ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4826))))), ((-(((14937287604146443043ULL) * (13937453726567661850ULL))))));
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        for (short i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned short) ((unsigned char) max((((((/* implicit */unsigned long long int) 308247936)) - (3509456469563108597ULL))), (((/* implicit */unsigned long long int) arr_6 [i_1] [i_2])))));
                /* LoopSeq 2 */
                for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(max((14937287604146443051ULL), (arr_3 [i_3])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) ((((/* implicit */unsigned long long int) arr_6 [i_1] [i_1])) < (arr_4 [i_3])))), (((short) var_13)))))) : (max((arr_10 [i_1] [i_1] [i_1]), (arr_10 [i_3] [i_1] [i_3]))))))));
                    var_21 = ((/* implicit */int) (((+(arr_10 [i_1] [i_3] [i_3]))) | (((((/* implicit */_Bool) 7107898487504584165ULL)) ? (((3509456469563108587ULL) * (3509456469563108565ULL))) : (((((/* implicit */_Bool) arr_7 [i_3])) ? (3509456469563108579ULL) : (8781680725147410784ULL)))))));
                }
                for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_5 = 3; i_5 < 12; i_5 += 1) 
                    {
                        arr_17 [9] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) (short)-8005);
                        var_22 = ((/* implicit */unsigned long long int) (-((+(arr_12 [i_1])))));
                        arr_18 [i_1] [i_2] [i_1] [i_4] [i_5] = ((/* implicit */unsigned char) ((unsigned int) ((var_11) | (((/* implicit */unsigned long long int) var_4)))));
                        var_23 = ((/* implicit */short) ((unsigned int) (unsigned short)26173));
                    }
                    for (unsigned long long int i_6 = 2; i_6 < 10; i_6 += 3) 
                    {
                        var_24 = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) arr_19 [i_2] [i_6 + 3] [i_6 + 2] [i_6] [i_6])), (arr_11 [i_4] [i_6 + 2] [i_6 + 1] [i_6 + 2]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_19 [i_4] [i_6 + 3] [i_6 + 3] [i_6] [i_6 - 2])))))));
                        arr_21 [i_6] [i_1] [i_4] [i_4] = ((short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_5)), (arr_16 [i_1] [i_4] [i_4])))) ? (((/* implicit */unsigned long long int) max((2109443598), (((/* implicit */int) (short)-7995))))) : (((arr_3 [i_1]) + (((/* implicit */unsigned long long int) -1441489940))))));
                    }
                    /* LoopSeq 4 */
                    for (short i_7 = 0; i_7 < 13; i_7 += 2) 
                    {
                        var_25 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [(unsigned short)9]))))) + (((((/* implicit */_Bool) arr_23 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((9050482114372963279ULL) - (14863009227368764963ULL)))))));
                        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) max((max((((/* implicit */unsigned long long int) arr_16 [i_1] [i_1] [7ULL])), (max((((/* implicit */unsigned long long int) (short)32197)), (4588637693521817537ULL))))), (((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (short)28247))))))))))));
                    }
                    for (unsigned long long int i_8 = 1; i_8 < 12; i_8 += 4) 
                    {
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [4ULL] [i_1] [i_4] [i_8])) ? (9717290456624909301ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)-8005)), (var_8)))))))) ? (((((/* implicit */_Bool) -1480666537)) ? (3509456469563108551ULL) : (arr_13 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)8)))));
                        arr_27 [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((unsigned short)25041), (((/* implicit */unsigned short) arr_19 [i_1] [i_2] [i_2] [i_8] [i_8 - 1]))))) && (((/* implicit */_Bool) max((((/* implicit */int) arr_19 [0U] [i_2] [i_4] [i_8] [i_8])), (arr_12 [i_1]))))));
                        var_28 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((short) max((arr_11 [7ULL] [i_2] [7ULL] [i_8]), (((/* implicit */unsigned long long int) 3648550033U))))))));
                        arr_28 [i_1] [i_1] [i_8] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_22 [i_1] [i_1] [i_2] [i_2] [i_4] [i_8 + 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) > (arr_5 [i_1]))))) : ((+(14937287604146443039ULL))))) != ((~(min((((/* implicit */unsigned long long int) (unsigned short)48491)), (11254824471207546312ULL)))))));
                        arr_29 [i_1] [i_1] [i_8] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (-(arr_15 [i_1] [i_2] [i_1] [i_8 + 1])))) || (((/* implicit */_Bool) (~(arr_15 [i_1] [i_1] [i_1] [i_1])))))))));
                    }
                    for (short i_9 = 0; i_9 < 13; i_9 += 2) /* same iter space */
                    {
                        var_29 = ((unsigned long long int) (((-(((/* implicit */int) (short)13021)))) >= (((/* implicit */int) ((((/* implicit */_Bool) 3421206935602053588ULL)) || (((/* implicit */_Bool) 18210910865845787943ULL)))))));
                        arr_34 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (((~((-(8091233975285287488ULL))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-36)))));
                        arr_35 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) (-(-1426856576)))))));
                    }
                    for (short i_10 = 0; i_10 < 13; i_10 += 2) /* same iter space */
                    {
                        arr_38 [i_2] [i_2] [i_2] [(signed char)10] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)41))));
                        var_30 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 9717290456624909297ULL)) || (((/* implicit */_Bool) min((min((var_9), (((/* implicit */unsigned long long int) var_15)))), (max((((/* implicit */unsigned long long int) (unsigned char)121)), (arr_7 [i_1]))))))));
                    }
                }
                var_31 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) 13444466521659480758ULL)))))));
                /* LoopNest 2 */
                for (signed char i_11 = 0; i_11 < 13; i_11 += 3) 
                {
                    for (int i_12 = 1; i_12 < 12; i_12 += 2) 
                    {
                        {
                            var_32 = ((/* implicit */signed char) ((3362923822208888921ULL) & (14937287604146443065ULL)));
                            arr_44 [i_1] [4ULL] = ((/* implicit */short) max((((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_13)) < (min((arr_3 [i_11]), (10860312360134201917ULL)))))), (((signed char) max((18102479328308565406ULL), (arr_13 [i_12] [i_11] [0] [i_1]))))));
                            arr_45 [i_1] [i_1] [i_1] [i_12 + 1] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_11 [i_1] [(unsigned short)9] [i_11] [i_11])) || (((/* implicit */_Bool) arr_13 [i_2] [i_2] [(unsigned char)9] [i_2])))) && ((!(((/* implicit */_Bool) arr_42 [i_1] [i_2] [i_11] [i_12]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
