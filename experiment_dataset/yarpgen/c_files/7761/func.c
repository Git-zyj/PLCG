/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7761
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (short)-24845))));
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    arr_8 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) (signed char)-40))) / (((/* implicit */int) var_13))));
                    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned char)174)) + (((/* implicit */int) arr_4 [i_2] [i_2] [i_0])))))), (min(((-(((/* implicit */int) (unsigned char)49)))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)179)) : (((/* implicit */int) (signed char)-44)))))))))));
                    arr_9 [i_0] [i_0] [i_0] [1U] = ((/* implicit */int) min((((/* implicit */unsigned int) (_Bool)1)), (((arr_7 [i_1] [(unsigned char)2] [i_1] [i_0]) % (((/* implicit */unsigned int) arr_0 [i_1] [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (short i_4 = 1; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0] [(short)7] [i_4 + 1] [i_4] [i_4] [i_0] = ((/* implicit */int) ((unsigned long long int) ((short) max((arr_12 [i_0] [i_0] [i_0] [i_0] [(signed char)9]), (((/* implicit */signed char) arr_6 [i_2] [i_0] [i_0] [i_3]))))));
                                var_15 = ((/* implicit */unsigned int) ((short) ((((/* implicit */int) max(((unsigned char)174), (((/* implicit */unsigned char) (signed char)17))))) <= (((/* implicit */int) arr_3 [i_0] [i_1] [i_2])))));
                                arr_17 [5] [i_1] [i_0] [i_2] [i_3] [i_4] [i_4] = min((arr_0 [i_4] [i_4 - 1]), (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_0 [i_4 - 1] [i_4 - 1])) <= (3293147095207161609ULL)))));
                                var_16 = ((unsigned long long int) max(((+(((/* implicit */int) arr_4 [i_4] [i_0] [i_0])))), (((/* implicit */int) arr_14 [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4] [i_4 + 1]))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        arr_20 [(unsigned char)6] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])) != (((/* implicit */int) ((short) 6707914389474171189ULL)))));
                        arr_21 [i_0] [i_1] = ((/* implicit */unsigned long long int) (short)-28627);
                    }
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_17 = ((/* implicit */long long int) arr_7 [i_6] [(_Bool)1] [i_1] [i_0]);
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_26 [(unsigned char)8] [i_1] [i_1] [(unsigned char)8] [i_0] = ((/* implicit */long long int) ((((((((/* implicit */_Bool) (unsigned short)16460)) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) (unsigned char)83)))) << (((var_5) - (801571753432509767ULL))))) < (((/* implicit */int) arr_25 [0] [9U]))));
                        var_18 = ((unsigned short) ((((/* implicit */_Bool) arr_11 [i_7] [i_6] [0ULL] [0ULL] [i_0])) && (((/* implicit */_Bool) max((15826098654048716353ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))));
                    }
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_8 = 0; i_8 < 24; i_8 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) var_4);
        var_20 = ((/* implicit */long long int) arr_27 [i_8]);
        var_21 += ((/* implicit */unsigned long long int) var_0);
        var_22 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)175))) <= (arr_28 [i_8]))) ? (((((/* implicit */_Bool) arr_28 [i_8])) ? (arr_28 [i_8]) : (arr_28 [i_8]))) : (arr_28 [i_8])));
        var_23 = ((/* implicit */_Bool) ((short) (_Bool)0));
    }
    var_24 = ((/* implicit */unsigned int) ((int) ((short) var_9)));
    var_25 ^= ((/* implicit */unsigned char) var_8);
}
