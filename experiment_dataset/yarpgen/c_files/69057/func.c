/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69057
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
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) var_2)) ? (13401187107514415421ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))))));
    var_20 = ((/* implicit */long long int) (short)22339);
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_21 += ((/* implicit */signed char) var_18);
                    var_22 = ((/* implicit */long long int) ((unsigned long long int) ((signed char) (_Bool)1)));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_4)))) ? ((-(var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 131040)) <= (13401187107514415438ULL)))))))) ? ((~(((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_14))))))) : (((((/* implicit */int) ((((/* implicit */_Bool) (signed char)37)) || (((/* implicit */_Bool) 14830966337671974552ULL))))) ^ (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) var_1))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_3 = 0; i_3 < 25; i_3 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 23; i_5 += 4) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        arr_17 [i_6] [i_6] [i_6] [i_3] = ((/* implicit */unsigned char) (((~(var_10))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)44)) && (((/* implicit */_Bool) arr_9 [15U]))))))));
                        var_24 = ((/* implicit */unsigned short) ((long long int) var_10));
                        var_25 = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)62603))));
                        arr_18 [i_3] [i_4] [i_6] [i_5] [i_6] = (~(((unsigned long long int) (unsigned char)92)));
                        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) 5045556966195136194ULL))));
                    }
                } 
            } 
            var_27 *= ((/* implicit */signed char) ((((/* implicit */int) var_8)) & (((/* implicit */int) arr_10 [i_3] [i_3] [i_3]))));
        }
        for (unsigned int i_7 = 0; i_7 < 25; i_7 += 4) /* same iter space */
        {
            var_28 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (signed char)57)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_13 [i_7] [i_3] [i_3])))));
            /* LoopSeq 4 */
            for (long long int i_8 = 4; i_8 < 22; i_8 += 1) 
            {
                arr_23 [i_3] [i_3] [i_3] &= ((/* implicit */_Bool) ((arr_13 [i_8 + 3] [i_8 + 1] [i_8 + 2]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-38)))));
                var_29 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-38))))) & (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (17842556718373537901ULL)))));
            }
            for (unsigned char i_9 = 0; i_9 < 25; i_9 += 4) 
            {
                /* LoopSeq 2 */
                for (long long int i_10 = 0; i_10 < 25; i_10 += 2) /* same iter space */
                {
                    var_30 -= ((/* implicit */long long int) ((var_14) < (((/* implicit */unsigned long long int) arr_16 [i_10] [i_7]))));
                    arr_28 [i_10] [i_10] [i_3] [i_9] [i_3] [i_3] = ((/* implicit */unsigned char) ((signed char) -4348827045929444032LL));
                }
                for (long long int i_11 = 0; i_11 < 25; i_11 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (int i_12 = 1; i_12 < 22; i_12 += 4) 
                    {
                        var_31 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_12 - 1] [i_7] [3LL] [i_11] [i_12] [i_11])) || (((/* implicit */_Bool) var_6))));
                        arr_34 [i_12] [i_12] = ((/* implicit */_Bool) arr_26 [i_12] [i_12 + 1] [i_12 + 2] [i_12 - 1] [i_12 - 1] [i_12 + 3]);
                        var_32 &= ((/* implicit */short) ((((/* implicit */_Bool) (short)2604)) ? ((~(((/* implicit */int) var_15)))) : (((/* implicit */int) (_Bool)1))));
                    }
                    arr_35 [(_Bool)1] [i_7] [i_9] [i_11] = ((/* implicit */short) 10275733967430184690ULL);
                }
                var_33 = ((/* implicit */int) arr_20 [i_9] [i_7] [i_3]);
            }
            for (int i_13 = 0; i_13 < 25; i_13 += 4) 
            {
                arr_39 [i_13] [i_7] [i_3] = ((/* implicit */int) (~(7612432605580924669LL)));
                /* LoopNest 2 */
                for (long long int i_14 = 1; i_14 < 24; i_14 += 3) 
                {
                    for (long long int i_15 = 3; i_15 < 23; i_15 += 2) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned long long int) arr_8 [i_7] [i_14]);
                            arr_45 [i_14] [i_14] [i_13] = ((/* implicit */long long int) 2015184925U);
                            var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) <= (16291365998433092838ULL)))) : (((/* implicit */int) var_17)))))));
                            var_36 ^= (((_Bool)0) ? ((+(var_2))) : (((((/* implicit */_Bool) (unsigned short)30720)) ? (5045556966195136195ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))));
                        }
                    } 
                } 
            }
            for (unsigned short i_16 = 0; i_16 < 25; i_16 += 3) 
            {
                var_37 *= ((/* implicit */unsigned short) arr_43 [i_3] [i_7] [i_16]);
                arr_48 [i_3] [i_7] [i_7] = ((/* implicit */unsigned long long int) var_1);
            }
            arr_49 [i_3] [i_3] [i_7] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 7612432605580924669LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49152))) : (3502764589445024927ULL)))));
        }
        for (signed char i_17 = 0; i_17 < 25; i_17 += 4) 
        {
            var_38 = ((/* implicit */signed char) (-(((/* implicit */int) var_11))));
            /* LoopSeq 2 */
            for (signed char i_18 = 0; i_18 < 25; i_18 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_19 = 0; i_19 < 25; i_19 += 4) 
                {
                    for (long long int i_20 = 2; i_20 < 23; i_20 += 4) 
                    {
                        {
                            arr_63 [i_20] [i_18] [i_19] [i_3] [i_18] [i_3] = ((/* implicit */signed char) var_1);
                            arr_64 [i_3] [i_18] [i_3] = ((/* implicit */short) ((((((/* implicit */_Bool) var_18)) ? (16033842308578569661ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-26))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_3] [i_3] [i_3] [i_3])))));
                            var_39 -= ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_16)) ? (1989305856U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))))) + (((/* implicit */unsigned int) (-(((/* implicit */int) var_17)))))));
                            arr_65 [i_18] [i_18] [i_19] [i_18] [(unsigned short)8] [i_18] [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_60 [i_18] [i_20 + 1] [(short)18] [i_20 + 1] [i_3] [i_18])) ? (((/* implicit */int) arr_60 [i_18] [i_20 - 1] [i_20] [i_20 - 2] [i_17] [i_18])) : (1888361121)));
                        }
                    } 
                } 
                arr_66 [i_17] [i_17] [i_18] [i_17] = ((/* implicit */short) (+(arr_13 [i_3] [i_17] [i_18])));
            }
            for (unsigned long long int i_21 = 0; i_21 < 25; i_21 += 1) 
            {
                arr_71 [i_3] [i_3] [i_21] = ((/* implicit */short) (~(arr_59 [i_21] [i_3] [(unsigned short)7] [(unsigned short)7] [i_21] [i_21])));
                arr_72 [i_21] = ((/* implicit */unsigned short) 4638713482039261375ULL);
            }
        }
        /* LoopNest 2 */
        for (int i_22 = 0; i_22 < 25; i_22 += 4) 
        {
            for (short i_23 = 2; i_23 < 24; i_23 += 3) 
            {
                {
                    arr_80 [i_3] [i_22] [i_3] &= ((/* implicit */_Bool) (-(((/* implicit */int) arr_31 [i_3] [(unsigned short)14] [i_23 - 1]))));
                    var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) ((((/* implicit */int) ((var_2) < (var_14)))) | ((+(((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
    }
}
