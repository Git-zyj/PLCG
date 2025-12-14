/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87370
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
    var_14 = ((/* implicit */long long int) var_2);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1 + 1] |= ((/* implicit */unsigned int) min((max((var_4), (((/* implicit */unsigned char) arr_4 [i_0] [i_0])))), (((/* implicit */unsigned char) arr_1 [i_0] [i_0]))));
                var_15 = ((/* implicit */int) (unsigned char)240);
                /* LoopNest 3 */
                for (unsigned int i_2 = 4; i_2 < 19; i_2 += 3) 
                {
                    for (signed char i_3 = 3; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_13 [(unsigned char)14] [i_1] [i_2] [20LL] [i_4] [i_2] = ((/* implicit */unsigned char) (((+(var_7))) / (((/* implicit */long long int) max((arr_10 [i_0] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_2] [i_3 + 1]), (((/* implicit */unsigned int) arr_6 [i_2] [i_0] [i_1 - 2] [i_1 - 2])))))));
                                arr_14 [i_2] [i_3] [i_4] = ((/* implicit */int) arr_6 [i_2] [i_1] [i_1] [(unsigned char)20]);
                                arr_15 [i_4] [i_2] [i_2 - 1] [i_2] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)176)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4167297531U))))) : (((((/* implicit */int) (unsigned char)108)) << (((((/* implicit */int) arr_3 [i_2] [i_3] [i_4])) + (85)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) (unsigned char)188))))) ? ((+(((/* implicit */int) (unsigned char)20)))) : (((/* implicit */int) arr_4 [i_1] [i_2]))))) : (min((((/* implicit */unsigned int) max(((unsigned char)215), ((unsigned char)101)))), (3659971602U))));
                                var_16 = ((/* implicit */unsigned char) arr_10 [i_0] [i_1] [i_2] [i_2] [i_2] [i_4]);
                                arr_16 [i_0] [10LL] [i_2] [i_3] [i_4] [i_0] = ((unsigned int) min((((/* implicit */unsigned int) arr_0 [i_0])), (arr_12 [i_0] [i_0] [i_0] [(unsigned char)9] [i_2])));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    arr_21 [i_0] [i_1] [i_5] = ((/* implicit */unsigned char) var_7);
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 2; i_7 < 19; i_7 += 1) 
                        {
                            {
                                var_17 += ((/* implicit */unsigned int) ((((/* implicit */int) arr_28 [(_Bool)1] [i_1] [i_1 - 2] [i_1] [i_1] [i_1 - 1])) > ((+(((/* implicit */int) arr_23 [(unsigned char)7] [i_1]))))));
                                arr_29 [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_2 [i_7 - 2] [i_7 - 2]))));
                                arr_30 [i_0] [i_0] [i_5] [i_6] [20LL] &= ((/* implicit */long long int) (~(((/* implicit */int) arr_18 [i_1 - 1] [i_1] [i_7 + 2]))));
                                arr_31 [i_0] [i_0] [18ULL] [i_5] [i_6] [i_7] = ((/* implicit */unsigned char) var_9);
                            }
                        } 
                    } 
                }
                for (long long int i_8 = 1; i_8 < 20; i_8 += 4) 
                {
                    var_18 *= ((/* implicit */signed char) arr_17 [i_8] [i_1] [i_0]);
                    /* LoopNest 2 */
                    for (long long int i_9 = 2; i_9 < 20; i_9 += 4) 
                    {
                        for (int i_10 = 0; i_10 < 21; i_10 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_33 [i_9] [i_8] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) max((arr_10 [i_10] [i_8] [i_1] [i_1] [i_8] [i_0]), (((/* implicit */unsigned int) arr_3 [i_1 - 1] [i_8 - 1] [i_8]))))) : (min((940432068728991360ULL), (((/* implicit */unsigned long long int) (unsigned char)50))))));
                                var_20 = max((((/* implicit */long long int) (+(arr_7 [i_10] [i_9] [i_8] [i_0])))), (-112806124661759826LL));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_11 = 0; i_11 < 21; i_11 += 3) 
                    {
                        for (unsigned int i_12 = 0; i_12 < 21; i_12 += 1) 
                        {
                            {
                                arr_43 [i_8] [i_1 - 2] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_24 [i_11] [i_11] [i_8] [(unsigned char)16] [i_0]))));
                                arr_44 [i_0] [i_1 - 1] [i_8 + 1] [i_11] [i_8] [i_12] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max((((/* implicit */long long int) arr_24 [i_0] [i_1] [i_8] [i_11] [i_12])), (arr_8 [i_0] [i_1] [i_8]))) % (arr_35 [i_0] [i_0] [12] [(unsigned char)3] [(signed char)4])))) ? ((+((-(((/* implicit */int) arr_37 [i_0] [i_12] [i_8] [12] [(unsigned char)16])))))) : ((~(((/* implicit */int) arr_28 [i_0] [i_1] [i_8 + 1] [9ULL] [i_11] [(unsigned short)10]))))));
                                var_21 *= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_20 [i_8 + 1] [8U] [i_8 - 1])) ? (((/* implicit */int) arr_20 [i_8 + 1] [i_12] [i_12])) : (((/* implicit */int) (unsigned char)141)))), (((/* implicit */int) max((arr_20 [i_8 - 1] [(signed char)1] [i_11]), (arr_20 [i_8 + 1] [i_11] [i_11]))))));
                                var_22 = ((/* implicit */_Bool) 717431206U);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(15736439286378480874ULL)))) || (((/* implicit */_Bool) arr_23 [i_0] [i_0]))));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) 260096U);
}
