/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84469
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
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_2 [i_1])))) < (((/* implicit */int) (short)-30728))));
                var_18 = (+(max((((((/* implicit */_Bool) (short)-30743)) ? (((/* implicit */unsigned long long int) arr_0 [i_1])) : (var_3))), (((/* implicit */unsigned long long int) arr_2 [3ULL])))));
                arr_6 [i_1] = ((/* implicit */unsigned long long int) (-(-1LL)));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [19ULL] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((~(((/* implicit */int) (short)-30743)))) >> (((((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])) - (15565))))))));
                                arr_16 [i_4] [i_3] [(signed char)19] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 2082628679U)))))));
                                arr_17 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3] [5ULL] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_13 [i_4]))));
                                var_19 = ((/* implicit */unsigned long long int) (-(max((var_13), (((/* implicit */int) arr_10 [i_2] [i_1] [i_2] [i_1]))))));
                            }
                        } 
                    } 
                    arr_18 [(signed char)2] [(signed char)17] [i_2] = ((/* implicit */int) min((var_9), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2])) ? (((/* implicit */unsigned long long int) 1LL)) : (var_8)))))))));
                    var_20 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((int) 4294705152U))))) ? ((+(((/* implicit */int) arr_13 [i_0])))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_2 [13ULL])) : (((/* implicit */int) var_17))))) && (((/* implicit */_Bool) min(((short)32767), (arr_2 [i_1])))))))));
                    /* LoopSeq 1 */
                    for (signed char i_5 = 2; i_5 < 17; i_5 += 4) 
                    {
                        arr_23 [i_0] [i_0] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_5 + 3])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)32765))))) : (((((/* implicit */_Bool) arr_2 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (arr_12 [i_0] [i_1])))))) ? (((/* implicit */unsigned int) ((max((((/* implicit */int) arr_2 [i_5])), (arr_3 [i_0]))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_1])))))))) : (((((/* implicit */_Bool) min(((short)32752), ((short)0)))) ? (var_10) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)1240)) ? (arr_1 [i_1]) : (((/* implicit */int) arr_8 [i_2] [i_1] [i_1] [i_0]))))))));
                        arr_24 [12ULL] = ((/* implicit */unsigned int) arr_11 [i_5 + 2] [6LL] [10] [i_1] [1LL] [i_0]);
                        arr_25 [i_0] [i_5 + 1] = ((/* implicit */short) (~(min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) | (15ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-30733)) ? (var_10) : (((/* implicit */unsigned int) 636401129)))))))));
                        var_21 = ((/* implicit */short) ((arr_0 [i_1]) < (((((/* implicit */_Bool) arr_8 [(unsigned short)4] [i_5 + 2] [(unsigned short)4] [(unsigned short)4])) ? (((/* implicit */int) arr_21 [13LL] [i_1] [13LL] [i_1] [i_5 - 1])) : (((((/* implicit */int) (short)-13485)) + (((/* implicit */int) arr_4 [(unsigned short)3] [(unsigned short)3] [i_5]))))))));
                    }
                }
                for (unsigned long long int i_6 = 3; i_6 < 16; i_6 += 1) 
                {
                    var_22 ^= ((/* implicit */unsigned long long int) (unsigned short)0);
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) max((max((arr_28 [i_6]), (((/* implicit */unsigned long long int) var_4)))), (arr_28 [i_0]))))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_7 = 0; i_7 < 17; i_7 += 3) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_9 = 0; i_9 < 17; i_9 += 2) 
                {
                    arr_40 [(unsigned short)2] [(unsigned short)2] [i_9] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-25208)) ? (14ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-26)))));
                    arr_41 [i_7] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_31 [i_7])) < (17645359661532173849ULL)))) | (((/* implicit */int) (signed char)66))))) | (var_3)));
                    arr_42 [12U] [i_8] = ((/* implicit */short) (+(((/* implicit */int) (signed char)-34))));
                    arr_43 [(unsigned short)14] [(signed char)2] [i_7] = ((/* implicit */unsigned int) (-((-(((/* implicit */int) var_5))))));
                    arr_44 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2082628679U)) ? (((/* implicit */int) arr_21 [4ULL] [i_8] [i_8] [i_8] [5ULL])) : (((/* implicit */int) arr_35 [i_7]))))) ? (((unsigned long long int) arr_8 [i_7] [i_7] [i_7] [i_7])) : (((/* implicit */unsigned long long int) -8019916269957348083LL))));
                }
                /* vectorizable */
                for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 4) 
                {
                    arr_49 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */unsigned long long int) 6492773559660734204LL)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_7] [i_7] [i_7] [i_7] [11])))));
                    arr_50 [i_7] |= ((/* implicit */long long int) arr_37 [(signed char)14] [i_8] [(short)9] [0]);
                    /* LoopNest 2 */
                    for (short i_11 = 0; i_11 < 17; i_11 += 1) 
                    {
                        for (long long int i_12 = 2; i_12 < 16; i_12 += 2) 
                        {
                            {
                                arr_57 [(signed char)13] = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_9 [i_10] [i_10] [i_10]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [4ULL] [i_12 + 1] [(short)16] [i_12] [2U] [i_12 - 1]))) : ((+(var_8)))));
                                var_24 = ((((/* implicit */_Bool) arr_36 [i_12 + 1] [i_12 - 1])) ? (((/* implicit */int) arr_36 [i_12 + 1] [i_12 - 2])) : (((/* implicit */int) arr_36 [i_12 + 1] [i_12 - 2])));
                            }
                        } 
                    } 
                }
                arr_58 [i_8] [i_7] [i_7] &= ((/* implicit */int) ((min((((((/* implicit */_Bool) (signed char)-33)) ? (((/* implicit */int) (short)32757)) : (((/* implicit */int) (signed char)36)))), (((((/* implicit */_Bool) arr_56 [(short)7])) ? (((/* implicit */int) arr_21 [6ULL] [i_8] [i_7] [i_7] [i_7])) : (((/* implicit */int) var_4)))))) < (((/* implicit */int) ((((/* implicit */int) arr_48 [i_7] [i_8] [i_8])) < (((/* implicit */int) arr_38 [i_7] [i_7] [(signed char)11] [i_8])))))));
                var_25 *= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_10 [i_7] [i_7] [i_8] [i_8])))) ? (((/* implicit */int) arr_10 [i_7] [i_7] [i_8] [i_8])) : (((/* implicit */int) max((arr_10 [i_8] [i_8] [i_7] [i_7]), (arr_10 [i_7] [i_7] [i_8] [i_8]))))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned int) (-(((int) min(((short)-30728), (((/* implicit */short) var_15)))))));
}
