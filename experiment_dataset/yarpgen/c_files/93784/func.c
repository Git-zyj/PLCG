/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93784
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_4] [i_3] [i_4] [i_3] &= ((/* implicit */short) (unsigned short)27197);
                                arr_15 [i_2] [i_1] = ((/* implicit */_Bool) max((max((((((/* implicit */_Bool) 3433851596393234772LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-31))) : (-9223372036854775805LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)15643))) : (arr_4 [i_4])))))), (((/* implicit */long long int) (((!((_Bool)0))) && ((_Bool)1))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) max((min((((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)151))) == (var_4)))), (arr_21 [i_0] [i_1] [i_2]))), (((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (var_3))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_2] [i_6] [i_5] [i_6]))))))));
                                arr_22 [i_2] [i_2] = ((/* implicit */short) (signed char)61);
                                arr_23 [i_6] [i_2] [i_2] [i_2] [i_2] [i_0] = (+((-(var_3))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_7 = 0; i_7 < 22; i_7 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            for (short i_9 = 0; i_9 < 22; i_9 += 2) 
            {
                for (signed char i_10 = 0; i_10 < 22; i_10 += 4) 
                {
                    {
                        arr_37 [i_7] [i_8] [i_9] [i_10] [i_10] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_11 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_7] [i_8 - 1] [i_8 - 1] [i_8 - 1])) && (((/* implicit */_Bool) arr_11 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_7] [i_8 - 1] [i_8 - 1] [i_8 - 1])))), (var_2)));
                        arr_38 [i_7] [i_8] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) arr_24 [i_9] [i_10])) % (((((/* implicit */_Bool) -2334748780299708163LL)) ? (789522531U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)19)))))));
                        arr_39 [i_9] [i_8] [i_9] [i_10] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-75)), (2187624384U))))));
                        arr_40 [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_7])) ? (((/* implicit */long long int) max((98450125U), (((/* implicit */unsigned int) var_18))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (short)-20126)) / (((/* implicit */int) (unsigned short)7307))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)28))))) : (arr_12 [i_10] [i_9] [i_8] [i_7])))));
                    }
                } 
            } 
        } 
        arr_41 [i_7] [i_7] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_27 [i_7]), (((/* implicit */unsigned int) var_9))))) && (((4095U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))))), (max((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)251))) + (arr_7 [i_7] [i_7] [i_7]))), (((/* implicit */long long int) (unsigned char)31))))));
    }
    /* LoopSeq 1 */
    for (short i_11 = 0; i_11 < 11; i_11 += 4) 
    {
        var_20 -= ((/* implicit */unsigned int) ((unsigned short) var_9));
        arr_44 [i_11] &= ((/* implicit */signed char) (+(var_1)));
        arr_45 [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((~(((/* implicit */int) (_Bool)0)))), (var_5)))) ? ((~(((/* implicit */int) (unsigned short)48239)))) : (((/* implicit */int) max((arr_11 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]), (arr_11 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]))))));
    }
}
