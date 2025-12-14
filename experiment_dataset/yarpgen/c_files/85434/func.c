/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85434
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
    for (signed char i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_6))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))))))));
                var_12 = ((/* implicit */short) ((var_6) / (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                /* LoopSeq 2 */
                for (unsigned int i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    var_13 = ((/* implicit */signed char) (~(((/* implicit */int) var_3))));
                    arr_11 [i_0] [i_2] [i_2] [8U] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9))));
                    arr_12 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) - (((/* implicit */int) var_1))));
                }
                for (short i_4 = 0; i_4 < 13; i_4 += 1) 
                {
                    arr_17 [i_2] [i_2] [(unsigned char)0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (var_7)));
                    var_14 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_6))));
                }
            }
            for (int i_5 = 0; i_5 < 13; i_5 += 2) 
            {
                var_15 = ((var_5) - (((/* implicit */unsigned int) ((/* implicit */int) var_8))));
                arr_22 [i_0] = ((((var_6) * (var_6))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))));
            }
            /* LoopSeq 3 */
            for (unsigned char i_6 = 0; i_6 < 13; i_6 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_7 = 3; i_7 < 11; i_7 += 1) 
                {
                    for (int i_8 = 2; i_8 < 11; i_8 += 1) 
                    {
                        {
                            var_16 = ((32505856U) | (((/* implicit */unsigned int) 2147483647)));
                            var_17 += ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) - (((/* implicit */int) var_1))));
                        }
                    } 
                } 
                arr_31 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0))));
            }
            for (unsigned int i_9 = 0; i_9 < 13; i_9 += 2) 
            {
                var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) var_4))));
                /* LoopNest 2 */
                for (unsigned short i_10 = 1; i_10 < 11; i_10 += 3) 
                {
                    for (signed char i_11 = 0; i_11 < 13; i_11 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) var_2);
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) * (((/* implicit */int) var_4)))))));
                arr_40 [i_0] [i_0] [i_9] [i_9] = ((/* implicit */int) ((var_10) / (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                var_22 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-5))) ^ (4294967285U)));
            }
            for (unsigned short i_12 = 0; i_12 < 13; i_12 += 3) 
            {
                var_23 = ((/* implicit */unsigned short) (~(var_5)));
                /* LoopSeq 2 */
                for (unsigned int i_13 = 2; i_13 < 11; i_13 += 1) 
                {
                    var_24 += ((/* implicit */signed char) ((((/* implicit */int) var_9)) << (((/* implicit */int) ((var_10) == (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_5)));
                    var_26 = ((/* implicit */unsigned short) ((var_7) ^ (var_7)));
                }
                for (unsigned int i_14 = 3; i_14 < 9; i_14 += 3) 
                {
                    var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) var_4))));
                    arr_50 [i_0 + 1] [i_0] [i_12] [(unsigned short)12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1))))) ? (var_7) : (((((/* implicit */int) var_1)) >> (((((/* implicit */int) var_2)) - (31393)))))));
                }
            }
            /* LoopSeq 2 */
            for (unsigned short i_15 = 0; i_15 < 13; i_15 += 1) 
            {
                var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1770170464)) ? (3751307326U) : (((/* implicit */unsigned int) 2147483626))));
                var_29 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_2))));
            }
            for (unsigned int i_16 = 0; i_16 < 13; i_16 += 2) 
            {
                /* LoopSeq 3 */
                for (int i_17 = 0; i_17 < 13; i_17 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_18 = 2; i_18 < 10; i_18 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5))));
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                    }
                    var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((((/* implicit */int) var_9)) ^ (var_7))))));
                    var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) var_1))));
                }
                for (unsigned short i_19 = 1; i_19 < 12; i_19 += 2) 
                {
                    arr_63 [(unsigned short)0] [i_1] [i_0] [i_19 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3))))) ? (((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_1)))) : (((/* implicit */int) var_2))));
                    arr_64 [i_0] = ((/* implicit */short) (~((~(var_7)))));
                }
                for (int i_20 = 0; i_20 < 13; i_20 += 1) 
                {
                    var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned char)255)) : (-1202306502))))));
                    var_35 = ((/* implicit */short) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_3))));
                }
                var_36 &= ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) var_2))));
            }
            var_37 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2124735886U)) || (((/* implicit */_Bool) var_7))));
        }
        for (unsigned int i_21 = 1; i_21 < 12; i_21 += 3) /* same iter space */
        {
            var_38 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */int) var_9)) / (((/* implicit */int) var_9)))) : (((/* implicit */int) var_2))));
            var_39 = ((/* implicit */unsigned short) (~(((2147483633) - (((/* implicit */int) (unsigned short)64922))))));
            var_40 = ((/* implicit */unsigned int) min((var_40), (((/* implicit */unsigned int) ((var_6) == (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
        }
        for (unsigned int i_22 = 1; i_22 < 12; i_22 += 3) /* same iter space */
        {
            var_41 = ((/* implicit */unsigned int) ((((/* implicit */int) var_9)) & (((/* implicit */int) var_1))));
            arr_73 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_6)))));
        }
        for (int i_23 = 0; i_23 < 13; i_23 += 3) 
        {
            arr_77 [i_0] [i_0] = ((/* implicit */unsigned char) var_2);
            arr_78 [i_0 + 2] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
        }
        var_42 = var_3;
    }
    var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) min(((unsigned char)222), (((/* implicit */unsigned char) (signed char)36))))), (var_4)))) ? (((((var_7) | (((/* implicit */int) var_3)))) | (((/* implicit */int) var_2)))) : (((/* implicit */int) max((var_8), (((/* implicit */signed char) ((var_6) >= (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))))));
    var_44 = ((/* implicit */unsigned int) var_4);
    /* LoopSeq 3 */
    for (unsigned char i_24 = 0; i_24 < 14; i_24 += 2) 
    {
        arr_81 [i_24] = ((/* implicit */unsigned short) (~(2147483628)));
        var_45 &= var_0;
        arr_82 [i_24] &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) - (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)255)) >> (((((/* implicit */int) (unsigned char)51)) - (43))))))));
    }
    /* vectorizable */
    for (unsigned int i_25 = 0; i_25 < 19; i_25 += 1) /* same iter space */
    {
        var_46 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) | (((/* implicit */int) var_4))));
        var_47 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0))));
        var_48 = ((/* implicit */short) max((var_48), (((/* implicit */short) ((((/* implicit */int) (unsigned short)32512)) + (((/* implicit */int) (short)20339)))))));
        var_49 += ((/* implicit */short) ((((/* implicit */int) var_4)) + (((/* implicit */int) var_1))));
    }
    for (unsigned int i_26 = 0; i_26 < 19; i_26 += 1) /* same iter space */
    {
        var_50 = ((/* implicit */unsigned short) ((max((var_6), (((/* implicit */unsigned int) min((var_2), (((/* implicit */unsigned short) var_9))))))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_9)), (var_10)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8)))))))));
        arr_89 [i_26] [i_26] = ((min((((/* implicit */unsigned int) min((var_1), (var_8)))), (max((var_5), (((/* implicit */unsigned int) var_7)))))) & (var_10));
        arr_90 [i_26] [i_26] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((var_10) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) (short)20339)) ? (2147483628) : (((/* implicit */int) (signed char)-127))))));
    }
    var_51 += ((/* implicit */int) var_1);
}
