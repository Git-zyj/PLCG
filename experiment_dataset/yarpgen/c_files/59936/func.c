/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59936
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
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        var_17 = ((/* implicit */signed char) (_Bool)1);
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            arr_5 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_1)))) : ((~(var_8)))));
            var_18 = ((/* implicit */int) (signed char)38);
        }
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 2])) & (((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 2]))));
            arr_8 [i_0] = ((var_1) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_1 [i_2])) : (var_10)))));
            var_20 = ((/* implicit */signed char) arr_3 [i_0] [i_0] [i_0]);
        }
        for (short i_3 = 1; i_3 < 9; i_3 += 4) 
        {
            arr_12 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) >> (((((/* implicit */int) var_11)) - (14310)))));
            var_21 ^= ((/* implicit */int) 0ULL);
            /* LoopSeq 2 */
            for (unsigned long long int i_4 = 3; i_4 < 9; i_4 += 4) 
            {
                var_22 = ((/* implicit */int) arr_9 [i_4] [(signed char)3]);
                arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (short)-4681);
            }
            for (signed char i_5 = 1; i_5 < 8; i_5 += 4) 
            {
                var_23 = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)23810))));
                var_24 &= ((/* implicit */unsigned short) ((var_0) && (((/* implicit */_Bool) (short)23815))));
            }
        }
        /* LoopSeq 1 */
        for (signed char i_6 = 3; i_6 < 8; i_6 += 3) 
        {
            var_25 = ((/* implicit */_Bool) ((unsigned long long int) var_6));
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 2) 
            {
                for (signed char i_8 = 4; i_8 < 7; i_8 += 1) 
                {
                    {
                        var_26 = ((/* implicit */unsigned long long int) arr_10 [i_6 + 2] [i_6 - 3] [i_6 - 2]);
                        /* LoopSeq 2 */
                        for (short i_9 = 0; i_9 < 10; i_9 += 2) 
                        {
                            var_27 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_19 [i_7] [i_7] [i_7] [i_7]))));
                            var_28 = ((/* implicit */unsigned int) arr_26 [i_8 + 3] [i_8 + 3] [i_8 - 3] [i_8 + 1]);
                            arr_31 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12513180526452387037ULL)) ? (((/* implicit */int) arr_30 [i_0])) : (((/* implicit */int) arr_1 [i_0 - 2]))));
                            var_29 = ((/* implicit */short) ((var_12) ? (((/* implicit */int) arr_22 [i_0 - 2] [i_6 - 1] [i_6 - 1])) : (((/* implicit */int) arr_22 [i_0 - 1] [i_6 - 2] [i_0 - 1]))));
                        }
                        for (short i_10 = 0; i_10 < 10; i_10 += 3) 
                        {
                            arr_36 [i_0] [i_0] = ((/* implicit */short) (_Bool)1);
                            var_30 = ((((/* implicit */int) ((signed char) arr_16 [i_0] [i_0]))) > (((/* implicit */int) ((_Bool) var_11))));
                        }
                        arr_37 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] = (_Bool)1;
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                var_31 = ((/* implicit */unsigned char) ((((((((/* implicit */int) arr_33 [i_6])) + (2147483647))) << (((var_8) - (12978345267319130441ULL))))) >> (((((/* implicit */int) arr_33 [i_0 - 1])) + (151)))));
                arr_40 [i_0] [i_11] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0 - 2]))));
                /* LoopNest 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (unsigned int i_13 = 1; i_13 < 7; i_13 += 4) 
                    {
                        {
                            var_32 = ((/* implicit */signed char) (-(3ULL)));
                            var_33 = ((/* implicit */_Bool) (short)23789);
                        }
                    } 
                } 
                arr_45 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0 + 1])) / (((/* implicit */int) (unsigned char)127))));
                var_34 = ((/* implicit */int) (_Bool)1);
            }
        }
        var_35 = (!(((/* implicit */_Bool) arr_21 [i_0])));
        /* LoopSeq 3 */
        for (int i_14 = 0; i_14 < 10; i_14 += 3) 
        {
            /* LoopSeq 1 */
            for (short i_15 = 1; i_15 < 8; i_15 += 4) 
            {
                arr_50 [8U] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_13);
                /* LoopSeq 2 */
                for (unsigned long long int i_16 = 1; i_16 < 7; i_16 += 4) 
                {
                    var_36 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) var_13))) & (((/* implicit */int) arr_1 [i_16]))));
                    var_37 = ((((/* implicit */_Bool) var_3)) ? (11793750039419327350ULL) : (((/* implicit */unsigned long long int) arr_28 [i_0 - 2] [i_16 + 3] [i_15 + 1] [i_0 - 2] [i_0 - 2])));
                    arr_53 [i_0] [i_0] [i_14] [i_0] [i_16] = ((/* implicit */unsigned char) (short)-16454);
                    var_38 = ((/* implicit */unsigned int) var_14);
                }
                for (unsigned long long int i_17 = 4; i_17 < 9; i_17 += 4) 
                {
                    var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) (signed char)-101))));
                    arr_58 [i_0] [i_0] [i_0 - 1] [i_0] = ((/* implicit */signed char) (-(1437447044253304903ULL)));
                    var_40 = ((/* implicit */unsigned short) (signed char)-83);
                }
                arr_59 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (unsigned char)239);
                arr_60 [i_14] [i_14] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)32750))));
            }
            arr_61 [i_0 - 2] [i_0] = ((/* implicit */_Bool) ((unsigned char) arr_41 [i_0]));
        }
        for (unsigned long long int i_18 = 0; i_18 < 10; i_18 += 1) 
        {
            var_41 = ((/* implicit */unsigned long long int) max((var_41), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((arr_48 [i_0] [i_18] [2U] [i_18]) != (((/* implicit */int) arr_7 [i_0]))))))))));
            var_42 = ((/* implicit */short) (-(((/* implicit */int) var_13))));
            var_43 = ((((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_18])) ? (5693440471712806802ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) << (((var_9) + (17771938))));
            var_44 = ((/* implicit */short) arr_41 [i_0]);
            arr_66 [i_0] = ((/* implicit */signed char) (_Bool)0);
        }
        for (signed char i_19 = 0; i_19 < 10; i_19 += 4) 
        {
            arr_69 [i_0] [i_0] = ((/* implicit */signed char) ((int) ((arr_67 [i_0] [i_0]) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_14)))));
            arr_70 [i_0] [i_0] [i_0 - 1] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_62 [i_0 - 2])) ? (17919487472215449058ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45571))))));
            var_45 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_63 [i_0] [i_19] [i_0])) - (((/* implicit */int) (short)8430))));
            arr_71 [i_0] [i_19] = ((/* implicit */unsigned int) ((arr_16 [i_0] [i_0 - 1]) << (((((/* implicit */int) (short)16452)) - (16401)))));
            arr_72 [i_0] [i_19] = ((/* implicit */short) var_15);
        }
    }
    var_46 = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) var_12)), (min((((/* implicit */unsigned char) var_7)), ((unsigned char)76)))))), (((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)16452)), (4024032180U)))) / (3296302114923838221ULL)))));
}
