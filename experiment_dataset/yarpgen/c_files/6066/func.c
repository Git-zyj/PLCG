/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6066
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
    var_18 = ((/* implicit */_Bool) var_0);
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_19 = ((/* implicit */int) var_11);
        /* LoopSeq 4 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            arr_17 [i_0] [i_2] [i_2] [i_3] [i_2] = arr_4 [4LL];
                            arr_18 [i_3] [i_2] [i_2] [i_3] [15ULL] = ((signed char) ((short) 1459673572U));
                        }
                    } 
                } 
            } 
            arr_19 [i_1] = ((/* implicit */unsigned long long int) arr_12 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [i_0]);
            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((unsigned int) (short)-24301)))));
        }
        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (signed char i_6 = 1; i_6 < 17; i_6 += 3) 
            {
                for (unsigned short i_7 = 0; i_7 < 20; i_7 += 4) 
                {
                    for (short i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) (~(((/* implicit */int) arr_25 [i_6 + 2] [i_5]))));
                            var_22 = ((/* implicit */long long int) (+(arr_8 [i_6] [i_6 + 3] [i_6])));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((-4856120268953412441LL) + (4856120268953412459LL))))))));
            /* LoopNest 2 */
            for (unsigned short i_9 = 0; i_9 < 20; i_9 += 2) 
            {
                for (signed char i_10 = 0; i_10 < 20; i_10 += 2) 
                {
                    {
                        arr_35 [i_0] [i_0] [i_5] [(_Bool)1] = ((/* implicit */unsigned long long int) ((signed char) ((unsigned long long int) 1071644672)));
                        var_24 = ((/* implicit */unsigned char) ((-428980253) | (((/* implicit */int) (unsigned short)63050))));
                        var_25 = ((/* implicit */_Bool) ((signed char) arr_3 [i_0] [i_0]));
                    }
                } 
            } 
        }
        for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 4) /* same iter space */
        {
            arr_40 [i_0] [i_0] [i_0] = ((((/* implicit */int) ((unsigned char) var_11))) < (((/* implicit */int) (signed char)67)));
            /* LoopSeq 3 */
            for (unsigned char i_12 = 0; i_12 < 20; i_12 += 3) 
            {
                var_26 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) var_7)))));
                /* LoopNest 2 */
                for (short i_13 = 3; i_13 < 19; i_13 += 3) 
                {
                    for (int i_14 = 0; i_14 < 20; i_14 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)1023)) && ((!((_Bool)1)))));
                            var_28 |= ((/* implicit */short) var_14);
                            var_29 -= ((/* implicit */short) arr_1 [i_0] [i_0]);
                        }
                    } 
                } 
                arr_49 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((short) 2885327659429596597ULL)))));
                arr_50 [i_0] [4ULL] = ((/* implicit */_Bool) arr_12 [i_12] [i_11] [i_11] [i_11] [i_11] [i_0]);
                arr_51 [i_0] [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)18034)) && (((/* implicit */_Bool) var_8))));
            }
            for (signed char i_15 = 0; i_15 < 20; i_15 += 4) 
            {
                var_30 = ((((/* implicit */long long int) 428980269)) < (arr_46 [i_0]));
                var_31 ^= arr_41 [i_0];
            }
            for (long long int i_16 = 0; i_16 < 20; i_16 += 4) 
            {
                /* LoopSeq 1 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    arr_63 [i_16] [(unsigned char)16] [i_17] &= ((/* implicit */unsigned char) ((arr_32 [i_0] [i_11] [i_16] [i_17]) ? (((/* implicit */long long int) ((int) 1569121813537668819ULL))) : (arr_39 [i_11])));
                    arr_64 [i_0] [i_17] [i_17] [8] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) (signed char)11)) | (((/* implicit */int) (short)4192)))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_18 = 3; i_18 < 18; i_18 += 1) 
                    {
                        var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) ((unsigned char) ((_Bool) arr_52 [i_0] [i_11] [i_11] [i_0]))))));
                        arr_67 [i_17] [i_11] [i_16] [i_18] = ((/* implicit */unsigned int) ((unsigned char) arr_55 [i_18 - 1]));
                    }
                    for (signed char i_19 = 0; i_19 < 20; i_19 += 2) 
                    {
                        arr_70 [i_17] [(unsigned short)3] [i_16] [i_17] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_44 [i_0] [18U] [i_16] [i_17] [i_19])) && (((/* implicit */_Bool) ((((/* implicit */int) (signed char)103)) * (((/* implicit */int) (unsigned short)49309)))))));
                        var_33 = ((/* implicit */signed char) var_8);
                    }
                    for (long long int i_20 = 3; i_20 < 19; i_20 += 1) 
                    {
                        var_34 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_62 [i_20 - 2] [(_Bool)1] [i_20 - 1] [i_20 - 1] [i_16]))) | ((-(9231865001174210167ULL))));
                        arr_75 [i_17] [i_17] [i_16] [i_11] [i_17] = ((/* implicit */long long int) -1824837378);
                    }
                }
                arr_76 [i_0] [i_0] [i_11] [i_16] = ((/* implicit */unsigned long long int) arr_57 [i_0] [i_11] [i_0]);
                var_35 = ((/* implicit */unsigned short) var_15);
            }
            /* LoopNest 3 */
            for (signed char i_21 = 0; i_21 < 20; i_21 += 1) 
            {
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    for (signed char i_23 = 1; i_23 < 19; i_23 += 2) 
                    {
                        {
                            arr_83 [(_Bool)1] [i_11] [(_Bool)1] [i_11] [i_21] [i_11] = ((/* implicit */unsigned long long int) arr_31 [i_21] [i_22] [i_21]);
                            var_36 = ((/* implicit */unsigned int) ((unsigned char) ((long long int) (signed char)-104)));
                        }
                    } 
                } 
            } 
            arr_84 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)55452)) && (((/* implicit */_Bool) 4294967295U))));
            arr_85 [i_11] |= (!(((/* implicit */_Bool) var_14)));
        }
        for (unsigned long long int i_24 = 0; i_24 < 20; i_24 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_25 = 0; i_25 < 20; i_25 += 3) 
            {
                for (long long int i_26 = 1; i_26 < 18; i_26 += 3) 
                {
                    {
                        arr_92 [i_24] &= ((/* implicit */long long int) ((unsigned int) arr_37 [i_26 - 1] [i_26 - 1]));
                        arr_93 [i_0] [i_0] [i_25] [i_25] [i_26] [i_0] = ((/* implicit */int) (signed char)-68);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_27 = 0; i_27 < 20; i_27 += 2) 
            {
                for (int i_28 = 0; i_28 < 20; i_28 += 4) 
                {
                    {
                        var_37 = ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_28] [i_0])) ^ (((/* implicit */int) arr_1 [i_0] [i_0]))));
                        arr_99 [i_28] [i_27] [i_24] [i_0] = ((/* implicit */signed char) var_11);
                        arr_100 [i_24] [i_0] = ((/* implicit */unsigned short) ((unsigned char) var_16));
                    }
                } 
            } 
            arr_101 [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)0))));
            var_38 = ((int) ((((/* implicit */_Bool) (signed char)70)) ? (((/* implicit */unsigned int) 1825462938)) : (4100848895U)));
        }
        var_39 = ((/* implicit */signed char) min((var_39), (((signed char) arr_98 [i_0] [i_0]))));
        var_40 = ((((((/* implicit */int) arr_65 [i_0] [i_0] [i_0] [i_0] [i_0])) + (((/* implicit */int) (signed char)59)))) ^ (((/* implicit */int) ((((/* implicit */unsigned long long int) -8294807494721169201LL)) >= (7637418833680150662ULL)))));
        var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) (~(arr_44 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
    }
}
