/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97705
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
    var_14 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-102)) ? (752309470) : (((/* implicit */int) var_13))))))) % ((+(var_3)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_15 *= arr_1 [i_0] [i_1 + 1];
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) max((752309470), (max((((/* implicit */int) min((arr_9 [i_0] [i_1 + 1] [i_1 + 1] [i_3]), (((/* implicit */unsigned short) (_Bool)0))))), (((((/* implicit */_Bool) (signed char)102)) ? (267869780) : (((/* implicit */int) var_9))))))));
                            arr_10 [i_1] [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned char) -1156922373963568235LL))), (min((-1LL), (((/* implicit */long long int) -1918869011))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))) : (min((arr_6 [i_1] [i_1 + 1] [i_2]), (((/* implicit */unsigned long long int) ((arr_7 [i_0] [i_0] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-93))))))))));
                            /* LoopSeq 1 */
                            for (short i_4 = 1; i_4 < 10; i_4 += 4) 
                            {
                                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((arr_6 [i_0] [8] [i_4 - 1]) >> (((((/* implicit */int) var_2)) % (((/* implicit */int) (signed char)93)))))))));
                                var_18 &= var_13;
                                arr_15 [i_3] [(signed char)8] &= ((/* implicit */signed char) var_1);
                            }
                            arr_16 [i_3] [i_3] [i_3] [0LL] [0LL] &= ((/* implicit */unsigned short) ((-2704975133700862196LL) / (((/* implicit */long long int) (-(((/* implicit */int) var_6)))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_6 = 0; i_6 < 11; i_6 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) arr_17 [i_1 + 1]))));
                        var_20 += -752309471;
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_23 [i_1] [i_1 + 1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)102)) ? (((/* implicit */int) ((((/* implicit */_Bool) 4736468654196010LL)) && (((/* implicit */_Bool) (unsigned short)11224))))) : (((/* implicit */int) (unsigned char)9)))) > (((/* implicit */int) var_13))));
                        arr_24 [i_1] = ((/* implicit */long long int) ((signed char) (!(((/* implicit */_Bool) max(((unsigned short)11219), (((/* implicit */unsigned short) (signed char)96))))))));
                    }
                    for (signed char i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) 0LL))));
                        var_22 = ((/* implicit */unsigned char) arr_20 [i_0] [i_0] [i_5 - 1] [i_8] [i_1]);
                        arr_28 [i_0] [i_1] [i_1] [i_1] [i_8] = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_6))) < (arr_3 [i_1 + 1] [i_5 - 1] [i_8])))), (arr_11 [i_1])));
                        var_23 = ((/* implicit */long long int) max((((_Bool) arr_12 [i_1] [i_1] [i_8] [i_8] [i_5])), (arr_8 [i_1])));
                        /* LoopSeq 1 */
                        for (short i_9 = 1; i_9 < 9; i_9 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((var_11) % (((((/* implicit */long long int) ((/* implicit */int) (!(var_12))))) - (min((8929691012516557588LL), (((/* implicit */long long int) arr_1 [i_0] [i_0])))))))))));
                            arr_32 [i_0] [i_1] [(_Bool)1] [i_8] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */int) (short)(-32767 - 1))) : (-752309467)));
                        }
                    }
                    var_25 *= ((/* implicit */signed char) var_7);
                    arr_33 [i_5 - 1] [i_5] [i_5 - 1] [i_1] = ((/* implicit */unsigned char) max((max((((/* implicit */long long int) arr_14 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_1])), (var_7))), (max((-8929691012516557589LL), (((/* implicit */long long int) arr_12 [i_0] [i_0] [i_1 + 1] [(unsigned char)5] [i_5 - 1]))))));
                    arr_34 [i_0] [i_1] [i_1 + 1] [4LL] = (_Bool)0;
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 2; i_10 < 7; i_10 += 3) 
                    {
                        for (signed char i_11 = 0; i_11 < 11; i_11 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((signed char) min((arr_3 [i_1 + 1] [i_1 + 1] [i_5 - 1]), (((/* implicit */long long int) var_0))))))));
                                var_27 -= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) -8929691012516557590LL)) ? (((/* implicit */int) (signed char)102)) : (((/* implicit */int) (signed char)93)))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-32760))) == (arr_3 [i_5 - 1] [i_5 - 1] [i_5 - 1]))))));
                            }
                        } 
                    } 
                }
                var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) (signed char)-80))));
            }
        } 
    } 
}
