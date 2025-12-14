/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7351
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
    var_17 -= ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((var_7) << (((var_16) + (2626510472556573908LL)))))) : ((-(var_6))))));
    var_18 ^= ((/* implicit */unsigned char) -2147483645);
    /* LoopSeq 4 */
    for (int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_9))) & ((+(arr_0 [i_0] [i_0 + 2])))));
        arr_2 [i_0] [i_0 - 1] = ((/* implicit */long long int) (_Bool)1);
        var_20 *= ((/* implicit */signed char) (-(-2147483645)));
    }
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 21; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) -2147483635))));
            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_1 + 1] [i_1 - 2])))))));
            var_23 ^= ((/* implicit */unsigned long long int) arr_3 [i_1]);
            var_24 *= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) -1)))) ? (var_2) : (arr_0 [(unsigned short)9] [i_2])));
        }
        var_25 = ((/* implicit */long long int) var_13);
    }
    for (int i_3 = 0; i_3 < 18; i_3 += 2) 
    {
        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((short) var_15)))));
        var_27 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_6))));
        /* LoopSeq 2 */
        for (unsigned long long int i_4 = 3; i_4 < 17; i_4 += 3) 
        {
            var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)188)) && (((/* implicit */_Bool) arr_3 [i_3])))))));
            arr_14 [i_4] = ((/* implicit */unsigned long long int) arr_12 [i_4]);
            var_29 = ((/* implicit */unsigned char) arr_11 [i_3] [i_3]);
        }
        for (long long int i_5 = 0; i_5 < 18; i_5 += 3) 
        {
            var_30 *= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) 1))) ? ((~(var_15))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))) & ((+(var_3)))));
            var_31 = arr_8 [i_3] [i_5];
            arr_17 [i_3] [i_5] = ((/* implicit */signed char) arr_11 [(signed char)16] [i_5]);
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_6 = 0; i_6 < 18; i_6 += 4) 
            {
                var_32 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) -2147483624)) || (((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) arr_16 [i_3] [i_3])) : (((/* implicit */int) arr_18 [i_3] [i_3] [(short)14] [i_3]))));
                arr_20 [i_6] [i_5] [i_6] [i_6] = ((/* implicit */long long int) ((((-1242140905) > (((/* implicit */int) (short)5171)))) ? (((/* implicit */int) arr_3 [i_6])) : (((/* implicit */int) (short)1701))));
                var_33 &= ((/* implicit */unsigned char) ((((/* implicit */int) ((var_11) < (((/* implicit */unsigned long long int) var_3))))) ^ (var_0)));
            }
            for (unsigned char i_7 = 0; i_7 < 18; i_7 += 2) 
            {
                var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((((var_6) > (arr_0 [i_7] [i_5]))) ? (((/* implicit */int) ((((/* implicit */int) arr_22 [i_3] [i_5] [i_5] [i_7])) <= (((/* implicit */int) (unsigned short)2508))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 6483323515669409150ULL)))))))) < (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_13 [i_5] [i_3])) ? (var_16) : (((/* implicit */long long int) var_0)))) : (var_3))))))));
                var_35 = ((/* implicit */int) arr_4 [i_7]);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 4) 
                {
                    /* LoopSeq 3 */
                    for (int i_9 = 0; i_9 < 18; i_9 += 2) 
                    {
                        arr_29 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((long long int) arr_18 [i_3] [i_5] [i_7] [i_8]));
                        arr_30 [i_3] [i_5] [i_7] [i_8] [i_9] = ((/* implicit */unsigned char) ((arr_24 [6] [i_5] [i_5] [i_5] [i_5] [i_5]) & (((/* implicit */long long int) 2147483635))));
                    }
                    for (int i_10 = 0; i_10 < 18; i_10 += 2) 
                    {
                        var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) (short)5171))));
                        var_37 = ((/* implicit */int) ((((/* implicit */_Bool) ((12U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)1705)))))) ? (((((/* implicit */_Bool) arr_18 [11U] [i_8] [i_7] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_8]))) : (-6861043280665275479LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_10] [1] [i_7] [i_7] [i_3] [i_3])) ? (1061767594) : (arr_9 [i_7]))))));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_38 |= ((/* implicit */unsigned char) ((int) arr_28 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]));
                        arr_35 [i_3] [i_5] [i_7] [i_8] [i_11] = ((/* implicit */long long int) var_13);
                    }
                    var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_3] [i_5] [i_7] [i_7] [11ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_5] [16]))) : (var_5))))));
                    var_40 = ((/* implicit */short) arr_18 [(unsigned short)4] [i_5] [i_7] [(unsigned short)4]);
                    var_41 = ((/* implicit */unsigned short) max((var_41), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_23 [(unsigned short)12] [i_5] [i_7] [i_5]) : (arr_31 [i_8] [i_8] [i_7] [i_5] [i_5] [i_3] [i_3])))))))));
                    var_42 = ((/* implicit */unsigned short) var_16);
                }
                var_43 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_28 [i_7] [i_5] [i_5] [i_3] [i_3] [i_3] [i_3]))));
                var_44 = ((((((/* implicit */int) ((unsigned short) arr_24 [i_3] [i_3] [i_7] [i_3] [i_7] [(short)2]))) < ((+(-2147483636))))) ? (((/* implicit */int) arr_22 [i_7] [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_18 [i_3] [i_3] [i_5] [12LL])));
            }
        }
        arr_36 [(short)6] = ((/* implicit */short) var_0);
    }
    for (short i_12 = 0; i_12 < 19; i_12 += 2) 
    {
        var_45 = ((/* implicit */unsigned long long int) max((var_45), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 527473861)) ? (((/* implicit */unsigned long long int) var_3)) : (arr_6 [i_12]))))))) % (((((/* implicit */_Bool) arr_7 [i_12] [(unsigned short)18])) ? (((/* implicit */int) arr_7 [i_12] [i_12])) : (((/* implicit */int) arr_7 [i_12] [i_12])))))))));
        /* LoopSeq 3 */
        for (unsigned char i_13 = 0; i_13 < 19; i_13 += 1) 
        {
            arr_43 [i_13] = ((/* implicit */short) arr_6 [i_12]);
            /* LoopNest 2 */
            for (signed char i_14 = 0; i_14 < 19; i_14 += 2) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        arr_50 [i_14] [i_14] [i_14] [i_14] [i_13] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)9857))) - (6861043280665275479LL)));
                        var_46 -= ((/* implicit */int) ((((/* implicit */long long int) arr_47 [i_15])) == (((((/* implicit */_Bool) arr_47 [i_15])) ? (((/* implicit */long long int) arr_47 [i_15])) : (arr_0 [i_12] [i_13])))));
                        arr_51 [i_15] [i_13] [i_13] [i_12] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~((~(var_3))))))));
                    }
                } 
            } 
            arr_52 [i_12] [i_13] [i_12] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) <= (((((/* implicit */_Bool) arr_3 [i_13])) ? (((/* implicit */int) arr_3 [i_12])) : (((/* implicit */int) arr_3 [i_13]))))));
            var_47 |= ((/* implicit */short) (+(var_7)));
        }
        for (unsigned short i_16 = 3; i_16 < 18; i_16 += 1) /* same iter space */
        {
            var_48 = ((/* implicit */short) min((var_48), (((/* implicit */short) (!(((/* implicit */_Bool) ((arr_46 [i_12] [i_16 - 1] [i_12]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_16 - 2])))))))))));
            arr_55 [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483635)) ? (arr_42 [i_12] [i_16] [i_16 + 1]) : (((/* implicit */long long int) var_8))))) ? (((((/* implicit */_Bool) arr_46 [i_12] [i_16 + 1] [i_16 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_12] [i_12]))) : (arr_0 [i_12] [i_16]))) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned char)49))))))) < (arr_54 [i_16] [i_16] [i_12])));
            arr_56 [i_12] = ((/* implicit */unsigned int) arr_6 [i_16]);
            arr_57 [i_12] [i_12] = ((/* implicit */unsigned short) var_4);
        }
        for (unsigned short i_17 = 3; i_17 < 18; i_17 += 1) /* same iter space */
        {
            arr_60 [i_17] [i_12] [2ULL] = ((/* implicit */int) var_11);
            var_49 = ((/* implicit */unsigned short) (unsigned char)198);
            arr_61 [i_12] [i_17] [i_17] = var_6;
            var_50 = ((/* implicit */signed char) max((var_50), (arr_39 [i_12])));
        }
    }
    var_51 *= ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_15)) : (var_2)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -2147483635)) ? (((/* implicit */int) var_1)) : (var_0)))) : (var_14))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_18 = 0; i_18 < 13; i_18 += 4) 
    {
        var_52 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_18] [i_18] [i_18] [i_18])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_18] [i_18] [i_18] [i_18]))) : (3010543155U)));
        /* LoopNest 3 */
        for (unsigned char i_19 = 0; i_19 < 13; i_19 += 1) 
        {
            for (signed char i_20 = 0; i_20 < 13; i_20 += 1) 
            {
                for (int i_21 = 2; i_21 < 9; i_21 += 2) 
                {
                    {
                        var_53 = ((/* implicit */_Bool) max((var_53), ((!(((/* implicit */_Bool) arr_39 [i_21 + 3]))))));
                        var_54 *= ((/* implicit */signed char) (unsigned short)7936);
                        arr_73 [i_18] [i_18] [i_18] [i_18] [10ULL] = ((/* implicit */long long int) var_9);
                        arr_74 [i_18] [i_18] [i_18] [i_18] = ((/* implicit */short) var_0);
                        arr_75 [i_18] [i_19] [i_20] [i_21 + 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_18] [i_19])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) : ((-(var_5)))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_22 = 0; i_22 < 17; i_22 += 2) 
    {
        var_55 = ((/* implicit */unsigned short) max((var_55), (((/* implicit */unsigned short) ((short) arr_58 [i_22] [i_22] [i_22])))));
        var_56 |= ((/* implicit */unsigned char) (short)32050);
    }
}
