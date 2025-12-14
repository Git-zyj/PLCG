/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7839
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
    var_20 = (+(((/* implicit */int) var_3)));
    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) var_9))));
    var_22 = ((/* implicit */signed char) max((max(((-(((/* implicit */int) var_15)))), (((/* implicit */int) var_6)))), (min(((-(((/* implicit */int) var_11)))), (((/* implicit */int) var_17))))));
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        arr_2 [19ULL] [19ULL] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) min((0), (arr_1 [i_0])))) ? (arr_1 [i_0]) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)25653)) : (((/* implicit */int) var_19))))))));
        var_23 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((unsigned int) (-(((/* implicit */int) (short)-25346)))))), (arr_0 [i_0 - 2])));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [22] [(unsigned short)22] = ((/* implicit */short) ((15ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29427)))));
                    var_24 -= ((/* implicit */_Bool) 1073741823);
                    arr_8 [i_0] [i_2] = ((((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned short)39884), (((/* implicit */unsigned short) arr_5 [i_1] [i_2]))))) || (arr_5 [i_1 - 1] [i_0])))) ^ (((/* implicit */int) arr_5 [i_0] [i_0])));
                    var_25 = ((((/* implicit */_Bool) ((5472467170569145757LL) >> (((/* implicit */int) ((var_14) != (((/* implicit */long long int) ((/* implicit */int) var_19))))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17332586585105742390ULL)) ? (((/* implicit */int) (unsigned char)155)) : (((/* implicit */int) (signed char)82))))) : (arr_0 [i_0]));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_6 = 2; i_6 < 15; i_6 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_3] [i_5]))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 1) 
                        {
                            arr_26 [i_4] [(signed char)4] [i_4] [i_4] = ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) 0U)))));
                            arr_27 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_5] [i_6] [i_6] [i_6 - 1] [i_6] [i_6])) ? (((/* implicit */long long int) (+(((/* implicit */int) var_5))))) : (arr_18 [i_6 - 1] [i_6 - 1] [i_6 + 1] [(unsigned short)2])));
                        }
                    }
                    arr_28 [i_4] [i_3] [i_4] [(short)5] = ((/* implicit */long long int) ((arr_24 [13] [i_3] [i_4] [i_3] [i_3] [i_3]) > (((/* implicit */int) arr_17 [i_3] [i_4] [i_3]))));
                }
            } 
        } 
        arr_29 [i_3] = ((/* implicit */unsigned long long int) arr_14 [i_3] [6] [i_3]);
        arr_30 [i_3] = ((((/* implicit */_Bool) arr_23 [i_3] [i_3] [11ULL])) ? (((/* implicit */int) arr_10 [i_3])) : (((/* implicit */int) (signed char)-107)));
    }
    for (unsigned char i_8 = 1; i_8 < 13; i_8 += 2) 
    {
        arr_34 [i_8] = ((/* implicit */unsigned char) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_9)))) / (min((17635088993683349582ULL), (((/* implicit */unsigned long long int) (signed char)-80)))))));
        arr_35 [i_8] [i_8] = max((min((arr_11 [i_8]), (((/* implicit */unsigned long long int) ((arr_21 [i_8] [i_8] [15ULL] [(unsigned char)0] [i_8] [i_8]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_15))))))), (min((arr_0 [i_8 - 1]), (((/* implicit */unsigned long long int) arr_16 [i_8 + 1] [i_8 - 1] [i_8] [i_8 - 1])))));
    }
}
