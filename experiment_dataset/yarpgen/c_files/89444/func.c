/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89444
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
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_10 = ((/* implicit */unsigned int) ((unsigned short) (unsigned short)47794));
                                arr_12 [i_0] [i_2] [i_1] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-86)) ^ (((/* implicit */int) (unsigned short)47795))));
                                arr_13 [i_1] [i_1] [i_2 - 3] [i_1] [6] = (signed char)97;
                                var_11 = ((/* implicit */signed char) (!((((~(((/* implicit */int) arr_10 [i_2] [i_1] [i_2] [i_3] [i_4])))) > (909288531)))));
                            }
                        } 
                    } 
                    var_12 |= ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)24)) / (((/* implicit */int) (unsigned short)17742))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 20; i_5 += 1) 
        {
            for (signed char i_6 = 0; i_6 < 20; i_6 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 20; i_7 += 2) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 20; i_8 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((max((((/* implicit */int) (signed char)127)), (-1954662934))) > ((+((~(((/* implicit */int) (unsigned short)58793)))))))))));
                                var_14 = ((/* implicit */unsigned short) arr_11 [12U]);
                                arr_27 [i_0] [i_5] [i_5] [i_7] [i_7] = ((/* implicit */unsigned char) max((((((/* implicit */unsigned int) ((arr_5 [(unsigned char)17] [(unsigned char)17]) ^ (((/* implicit */int) arr_21 [i_0] [i_5] [16ULL] [i_0] [i_8]))))) ^ (arr_17 [i_8] [i_7] [i_6] [i_5]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_17 [i_0] [i_5] [i_7] [i_8])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0 - 2] [i_0] [i_0 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6736))) : (arr_17 [i_5] [i_5] [i_6] [i_8])))))))));
                                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) max((((int) ((((/* implicit */int) (unsigned short)6738)) ^ (((/* implicit */int) arr_18 [i_0] [i_5] [i_6] [i_7]))))), (((/* implicit */int) (((~(((/* implicit */int) (unsigned short)17736)))) >= ((~(((/* implicit */int) (short)-8641))))))))))));
                            }
                        } 
                    } 
                    var_16 ^= ((/* implicit */short) min(((unsigned short)6739), (((/* implicit */unsigned short) ((signed char) ((int) (unsigned short)47794))))));
                    var_17 = ((/* implicit */int) ((((/* implicit */int) ((signed char) (signed char)106))) == (((/* implicit */int) ((unsigned char) (~(10456507856749377419ULL)))))));
                }
            } 
        } 
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) arr_21 [i_0 + 1] [i_0 - 2] [i_0] [(signed char)10] [1U])), (arr_24 [i_0 - 2] [i_0] [i_0 + 1] [i_0] [14U])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_6 [18U] [18U])))) : (4026531840U)));
        arr_28 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_9 [i_0] [i_0] [i_0 + 1] [i_0])), (((((/* implicit */_Bool) 732134546)) ? (((/* implicit */int) arr_8 [18] [i_0] [i_0] [(unsigned short)4])) : (((/* implicit */int) (short)-8641))))))), (((unsigned long long int) (+(arr_16 [i_0] [i_0 - 1]))))));
    }
    for (unsigned char i_9 = 2; i_9 < 19; i_9 += 3) /* same iter space */
    {
        arr_31 [i_9] [(signed char)12] = ((/* implicit */unsigned short) ((max(((!(((/* implicit */_Bool) arr_16 [i_9] [i_9 - 1])))), ((!(((/* implicit */_Bool) arr_22 [i_9] [i_9])))))) || (min(((!(((/* implicit */_Bool) 2541269768U)))), ((!(((/* implicit */_Bool) (short)-21723))))))));
        var_19 = ((/* implicit */signed char) min((((/* implicit */unsigned int) arr_21 [19] [19] [i_9 - 2] [i_9 - 1] [i_9])), (min((((/* implicit */unsigned int) max((((/* implicit */unsigned short) (signed char)-63)), ((unsigned short)17764)))), ((-(3221225472U)))))));
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 20; i_10 += 1) 
        {
            for (short i_11 = 3; i_11 < 19; i_11 += 3) 
            {
                for (unsigned int i_12 = 0; i_12 < 20; i_12 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-117))) ^ (3104173968U))) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3216544449U)))))))))));
                        arr_38 [16] [6U] [i_12] |= ((/* implicit */short) arr_34 [(unsigned short)0]);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_13 = 2; i_13 < 19; i_13 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_14 = 0; i_14 < 20; i_14 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_15 = 2; i_15 < 19; i_15 += 2) 
            {
                arr_47 [i_13] = ((/* implicit */int) arr_40 [i_15]);
                var_21 -= ((/* implicit */signed char) (+((+(-732134546)))));
            }
            var_22 ^= ((/* implicit */short) (-(3935453055U)));
        }
        for (unsigned char i_16 = 0; i_16 < 20; i_16 += 2) 
        {
            var_23 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) (short)-8641))) ? ((~(((/* implicit */int) (short)-20466)))) : ((~(((/* implicit */int) (signed char)127))))));
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) arr_41 [i_13]))) > (2120448067)));
            var_25 = ((/* implicit */int) max((var_25), ((+(((/* implicit */int) (signed char)-59))))));
        }
        /* LoopNest 2 */
        for (short i_17 = 0; i_17 < 20; i_17 += 2) 
        {
            for (signed char i_18 = 0; i_18 < 20; i_18 += 3) 
            {
                {
                    arr_56 [i_18] [i_17] [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)11634))))) ? ((+(arr_41 [i_13]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)163)))));
                    arr_57 [i_18] [i_18] [i_18] = ((/* implicit */int) ((((/* implicit */unsigned int) -732134546)) % (1022980906U)));
                }
            } 
        } 
    }
    var_26 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)47194))));
    var_27 ^= ((/* implicit */unsigned short) var_8);
}
