/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93295
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
    var_18 = ((short) ((unsigned short) ((_Bool) var_12)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) == (((/* implicit */int) (unsigned short)49374))));
        /* LoopSeq 3 */
        for (int i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            arr_8 [i_0] = ((/* implicit */unsigned int) (!(var_1)));
            arr_9 [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned short) ((int) 3508049208100648916ULL));
        }
        for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            arr_12 [i_0] [i_0] [(unsigned short)2] = ((/* implicit */long long int) (unsigned short)16162);
            arr_13 [i_2] [(short)16] = ((/* implicit */long long int) ((arr_0 [i_0 - 3]) >> (((var_3) - (3001027628U)))));
        }
        for (long long int i_3 = 1; i_3 < 18; i_3 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_4 = 2; i_4 < 19; i_4 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned short i_5 = 1; i_5 < 19; i_5 += 2) 
                {
                    arr_23 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) 14938694865608902686ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)49358)))))) : (((unsigned int) arr_7 [i_0 - 3] [i_0 - 3]))));
                    arr_24 [i_0] [i_3] [i_4 - 2] [i_5] = ((/* implicit */short) ((arr_1 [i_3] [i_5]) ? (((/* implicit */int) arr_1 [i_4 + 1] [i_3 + 1])) : (((/* implicit */int) ((unsigned short) (unsigned short)16196)))));
                    arr_25 [i_0 - 2] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned int) ((0ULL) * (((/* implicit */unsigned long long int) var_10)))));
                    arr_26 [i_0 - 2] |= ((unsigned long long int) (unsigned short)49344);
                    arr_27 [i_0] [i_0] [i_4] [i_5 - 1] = ((/* implicit */unsigned short) arr_21 [i_0 - 2] [i_3] [i_4 - 1] [i_5] [i_0 - 3] [i_5]);
                }
                /* LoopNest 2 */
                for (short i_6 = 2; i_6 < 17; i_6 += 3) 
                {
                    for (long long int i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        {
                            arr_33 [i_0] [i_3] [i_4] [i_4] = ((/* implicit */unsigned short) ((((unsigned long long int) var_6)) * (((/* implicit */unsigned long long int) arr_5 [i_3] [i_4 + 2] [i_7]))));
                            arr_34 [(unsigned char)9] [i_6] [i_4 + 1] [i_6] [i_7] = ((/* implicit */long long int) (unsigned short)47328);
                            arr_35 [i_0 - 1] [i_3] [i_4] [i_4] [i_6 + 4] [i_7] [i_6] = ((/* implicit */unsigned short) -2169262984102117812LL);
                        }
                    } 
                } 
            }
            for (unsigned long long int i_8 = 2; i_8 < 19; i_8 += 2) /* same iter space */
            {
                arr_38 [i_0] = (unsigned short)16161;
                arr_39 [i_8 - 2] [i_3] = ((/* implicit */long long int) 14938694865608902700ULL);
            }
            arr_40 [i_0] [i_3] = ((/* implicit */unsigned int) ((3508049208100648923ULL) * (14938694865608902714ULL)));
        }
        /* LoopSeq 1 */
        for (unsigned char i_9 = 2; i_9 < 20; i_9 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_10 = 3; i_10 < 17; i_10 += 2) 
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 21; i_11 += 3) 
                {
                    for (unsigned short i_12 = 0; i_12 < 21; i_12 += 3) 
                    {
                        {
                            arr_52 [i_9] [i_9] [i_10] [i_10] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)16187)) : (((/* implicit */int) var_7))));
                            arr_53 [i_0 - 2] [8U] [i_9] [i_11] [i_12] = ((/* implicit */unsigned short) ((_Bool) var_14));
                        }
                    } 
                } 
                arr_54 [i_0 + 1] [i_0 + 1] [i_9] [i_0] = ((/* implicit */unsigned long long int) ((long long int) arr_16 [i_10] [i_10 + 2]));
            }
            for (unsigned int i_13 = 0; i_13 < 21; i_13 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_14 = 0; i_14 < 21; i_14 += 2) 
                {
                    for (short i_15 = 0; i_15 < 21; i_15 += 1) 
                    {
                        {
                            arr_63 [1U] [i_9] [i_9] [15U] [i_15] = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                            arr_64 [i_0] [i_0] [i_9] [i_9] [i_13] [i_9] [i_15] = ((/* implicit */short) arr_56 [i_0] [17LL]);
                            arr_65 [i_9] [i_9 - 2] [i_9 - 1] [i_9 - 2] [(_Bool)1] = ((/* implicit */unsigned short) ((unsigned long long int) ((int) var_14)));
                            arr_66 [i_9] [i_9] [i_9 - 1] [i_9] [i_9] [i_9 - 1] = ((/* implicit */unsigned int) 3508049208100648903ULL);
                        }
                    } 
                } 
                arr_67 [i_9] [20LL] [i_13] = ((/* implicit */unsigned short) var_4);
                arr_68 [8LL] = ((/* implicit */long long int) ((((/* implicit */int) var_1)) - (((/* implicit */int) (short)10418))));
            }
            for (short i_16 = 1; i_16 < 19; i_16 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_17 = 0; i_17 < 21; i_17 += 1) 
                {
                    for (unsigned short i_18 = 0; i_18 < 21; i_18 += 2) 
                    {
                        {
                            arr_79 [12U] [12U] [i_16 + 1] [i_9] [i_16 + 2] [i_16] [i_16 + 2] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_78 [(unsigned short)0] [i_9] [i_16] [i_17] [(unsigned short)17] [i_16 - 1] [i_17]))) - (((3046834971U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16178)))))));
                            arr_80 [i_9 - 1] [i_9] [i_16 + 1] [i_17] [i_0] [i_0] [i_9] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)22))));
                        }
                    } 
                } 
                arr_81 [i_0] [i_9] [i_9] [i_9] = ((/* implicit */short) ((arr_21 [i_16] [i_16] [i_16] [i_16 + 2] [i_16 + 1] [i_16]) * (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)192))) : (arr_77 [i_0] [i_9])))));
            }
            arr_82 [(short)6] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) var_14)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49348))))));
        }
    }
    for (long long int i_19 = 0; i_19 < 22; i_19 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_20 = 0; i_20 < 22; i_20 += 3) 
        {
            arr_88 [i_20] = ((unsigned int) (!(((/* implicit */_Bool) var_2))));
            /* LoopSeq 1 */
            for (long long int i_21 = 0; i_21 < 22; i_21 += 2) 
            {
                arr_91 [i_21] [i_20] [i_21] = ((/* implicit */long long int) max((((((/* implicit */int) arr_84 [i_19] [i_19])) / (arr_87 [i_20]))), (((((/* implicit */_Bool) ((unsigned int) (unsigned short)3198))) ? (((/* implicit */int) ((unsigned short) arr_87 [i_21]))) : (((/* implicit */int) min(((unsigned short)49352), (((/* implicit */unsigned short) (short)-11524)))))))));
                arr_92 [i_19] [i_20] = ((/* implicit */unsigned char) min((min((((((/* implicit */_Bool) -8229551739878480579LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_13))), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)192))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((long long int) var_5))))))));
            }
            arr_93 [i_20] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_2)), (max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)56361))) / (-8229551739878480579LL)))), ((-(var_16)))))));
        }
        arr_94 [i_19] [i_19] = 4166665339U;
        arr_95 [i_19] [i_19] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_90 [i_19] [i_19])) / (((/* implicit */int) var_4))))) && (((/* implicit */_Bool) (unsigned short)49358))));
        arr_96 [i_19] [i_19] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_90 [i_19] [i_19]), (arr_90 [i_19] [i_19])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) var_1))) ? (((/* implicit */int) (unsigned short)44388)) : ((-(-1215955143)))))) : (((arr_83 [i_19]) - (((/* implicit */unsigned int) (~(((/* implicit */int) arr_84 [i_19] [i_19])))))))));
        arr_97 [i_19] &= ((/* implicit */int) 3267485897U);
    }
}
