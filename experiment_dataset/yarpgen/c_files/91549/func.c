/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91549
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
    /* vectorizable */
    for (int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            var_18 = ((/* implicit */unsigned short) (~((-(((/* implicit */int) arr_4 [i_0] [i_0] [i_0 + 1]))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 2; i_2 < 23; i_2 += 1) /* same iter space */
            {
                arr_8 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-29)) != (((/* implicit */int) ((unsigned short) (signed char)-29)))));
                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((unsigned long long int) ((unsigned long long int) 967851814U))))));
                var_20 += ((/* implicit */unsigned short) ((int) ((unsigned long long int) (signed char)33)));
            }
            for (unsigned long long int i_3 = 2; i_3 < 23; i_3 += 1) /* same iter space */
            {
                arr_12 [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_10 [i_3] [i_1 + 1] [i_0]);
                var_21 = ((/* implicit */_Bool) ((int) (signed char)30));
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0 + 3])) != (((/* implicit */int) arr_9 [i_0]))));
                arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_5);
            }
        }
        for (unsigned int i_4 = 1; i_4 < 23; i_4 += 2) 
        {
            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) var_12)) ? (arr_1 [6] [6]) : (3490166927U)))))));
            arr_17 [i_0] [i_0] = ((/* implicit */short) ((unsigned char) (signed char)-34));
            arr_18 [i_0] = ((/* implicit */short) (-(arr_10 [i_0] [i_0 - 2] [i_0 + 1])));
        }
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)-33)) : (((/* implicit */int) var_13))))) % (((unsigned long long int) (signed char)-33))));
    }
    var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) var_17))));
    /* LoopNest 2 */
    for (long long int i_5 = 1; i_5 < 17; i_5 += 4) 
    {
        for (short i_6 = 0; i_6 < 20; i_6 += 1) 
        {
            {
                var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max(((unsigned char)73), (((/* implicit */unsigned char) (signed char)33))))) % (((/* implicit */int) arr_20 [i_5]))));
                var_27 = ((/* implicit */unsigned short) min((((short) (unsigned short)0)), (((/* implicit */short) (_Bool)1))));
                /* LoopNest 2 */
                for (unsigned short i_7 = 1; i_7 < 16; i_7 += 3) 
                {
                    for (short i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        {
                            arr_28 [i_5 + 2] [i_6] [i_7] [i_6] = ((/* implicit */signed char) (~(min((((((/* implicit */_Bool) 2909468017U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_19 [i_8])))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)0))))))));
                            /* LoopSeq 1 */
                            for (unsigned short i_9 = 1; i_9 < 18; i_9 += 3) 
                            {
                                arr_33 [i_5] [i_7] [i_5] [i_8] [i_9] = ((/* implicit */unsigned short) ((_Bool) (~(((/* implicit */int) (unsigned short)33975)))));
                                var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) 7250357124865759044ULL))));
                                arr_34 [i_9 + 1] [i_9 - 1] [i_7] [i_7] [i_6] [i_5 + 3] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) (unsigned short)33983))) >> ((((~(((unsigned long long int) var_17)))) - (18446744072334946813ULL)))));
                                var_29 ^= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) (unsigned char)0)))))) ? (((/* implicit */int) ((signed char) (unsigned char)29))) : ((-((-(((/* implicit */int) (unsigned char)183))))))));
                                arr_35 [i_5] [i_5] [i_7 + 2] [i_8] [i_8] |= ((/* implicit */unsigned char) min((((unsigned long long int) 4294967265U)), (((/* implicit */unsigned long long int) var_1))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
