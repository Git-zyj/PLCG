/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93194
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */_Bool) min((67553994410557440LL), (((/* implicit */long long int) (unsigned char)115))));
        arr_5 [i_0] = ((/* implicit */int) ((signed char) (-(((/* implicit */int) arr_1 [i_0] [i_0])))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_10 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((unsigned int) (_Bool)1)) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) var_7)), (arr_8 [i_1])))))));
        arr_11 [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (arr_2 [i_1]) : (2773714817U)))) ? (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)127)))) : (((/* implicit */int) ((unsigned char) var_4))))) ^ ((~((~(214930947)))))));
        arr_12 [i_1] = ((/* implicit */long long int) (((((_Bool)1) ? (arr_7 [i_1]) : (arr_7 [i_1]))) > (((var_3) + (13779691942863163928ULL)))));
        arr_13 [i_1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((10U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (min((((/* implicit */unsigned long long int) (unsigned short)57349)), (14334189216835521101ULL))) : (((/* implicit */unsigned long long int) (~(4294967277U)))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1])))));
    }
    var_10 = ((/* implicit */unsigned short) min((((/* implicit */int) var_6)), ((+(((/* implicit */int) var_8))))));
    /* LoopSeq 2 */
    for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        arr_16 [i_2] = ((/* implicit */_Bool) (-(10718236633224892819ULL)));
        arr_17 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) 29U)) && (((/* implicit */_Bool) 7U)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_2])) ? (((((/* implicit */_Bool) arr_15 [i_2])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_2]))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))))))));
        arr_18 [i_2] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)40)) : (((/* implicit */int) (_Bool)1))));
        arr_19 [(short)12] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) var_5))))) : (var_4))))));
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_4 = 2; i_4 < 23; i_4 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                arr_26 [i_3] [i_4] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_4 + 1])) ? (arr_21 [i_4 + 1]) : (arr_21 [i_4 + 1])));
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 1; i_6 < 22; i_6 += 3) 
                {
                    for (unsigned char i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        {
                            arr_31 [i_6] = ((/* implicit */unsigned int) ((_Bool) ((unsigned short) var_8)));
                            arr_32 [i_5] [i_6] [i_3] [i_5] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)-49)) && (((/* implicit */_Bool) arr_24 [i_3] [i_4] [i_7])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 176837404U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6))))) : ((+(var_9)))));
                        }
                    } 
                } 
            }
            arr_33 [i_3] = ((/* implicit */signed char) ((arr_29 [i_3] [i_3] [i_4 - 2] [i_3] [i_3] [i_3] [i_4 - 1]) ? (((/* implicit */int) arr_27 [i_3] [(signed char)8] [i_4 - 1] [10] [i_3])) : (((/* implicit */int) var_5))));
            arr_34 [i_3] = ((/* implicit */int) (~((+(arr_28 [i_3] [i_4 - 2] [i_4] [i_4] [i_4] [i_4 - 2])))));
            arr_35 [i_3] [i_4] [i_3] = ((/* implicit */_Bool) arr_27 [i_3] [i_4] [i_4] [i_3] [i_4 - 1]);
        }
        for (unsigned long long int i_8 = 2; i_8 < 23; i_8 += 3) /* same iter space */
        {
            arr_38 [i_3] [(unsigned char)14] = ((/* implicit */unsigned long long int) (-(arr_20 [i_3] [i_3])));
            arr_39 [i_3] [i_8] = ((/* implicit */signed char) ((arr_28 [i_8 - 1] [(_Bool)1] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1]) <= (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_3] [i_8 + 1] [i_8 - 2])))));
            arr_40 [i_3] = ((/* implicit */short) ((unsigned short) (unsigned short)22814));
        }
        /* LoopNest 2 */
        for (short i_9 = 1; i_9 < 22; i_9 += 4) 
        {
            for (signed char i_10 = 2; i_10 < 22; i_10 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_11 = 0; i_11 < 24; i_11 += 4) 
                    {
                        for (unsigned int i_12 = 2; i_12 < 21; i_12 += 4) 
                        {
                            {
                                arr_52 [i_12] = ((/* implicit */short) ((((/* implicit */int) arr_45 [i_10 - 2] [i_12 + 3])) & (((/* implicit */int) arr_45 [i_10 + 2] [i_12 + 2]))));
                                arr_53 [i_3] [(unsigned short)14] [i_10] [(signed char)7] [(signed char)7] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_48 [i_3] [i_9] [i_10] [i_11] [i_12]))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        arr_56 [i_3] [i_9] [i_10 + 2] [i_3] = ((/* implicit */signed char) (-((+(-314021366)))));
                        arr_57 [i_3] [i_9] [i_9] [i_13] = ((/* implicit */signed char) ((((/* implicit */int) arr_55 [i_3] [i_9] [i_9 + 1] [i_10 + 1])) != (((/* implicit */int) (unsigned char)111))));
                    }
                }
            } 
        } 
    }
    var_11 = ((/* implicit */unsigned char) min(((((!(((/* implicit */_Bool) (unsigned short)20082)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((2773714840U) == (((/* implicit */unsigned int) var_1)))))) : ((~(var_4))))), ((~(1521252471U)))));
}
