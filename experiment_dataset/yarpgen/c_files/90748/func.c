/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90748
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            arr_5 [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) ((6896260769770018274ULL) >= (((/* implicit */unsigned long long int) arr_4 [i_1] [i_1])))))));
            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((unsigned long long int) (~(11550483303939533342ULL)))) >> (((/* implicit */int) (!(arr_0 [i_1 - 1] [i_1])))))))));
            var_19 -= ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)32)) ? (var_17) : (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0])))) >> (((((((/* implicit */_Bool) 13097736178149010089ULL)) ? (16492674416640ULL) : (3207487904528571741ULL))) - (16492674416593ULL)))))) ? (((/* implicit */int) min(((signed char)(-127 - 1)), (((/* implicit */signed char) (_Bool)1))))) : (((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-16))))) & (((/* implicit */int) (unsigned short)3532)))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                arr_9 [i_1] [i_2] = ((/* implicit */unsigned long long int) (~(var_1)));
                var_20 ^= ((/* implicit */unsigned long long int) 481405239U);
                /* LoopNest 2 */
                for (unsigned int i_3 = 1; i_3 < 11; i_3 += 4) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        {
                            var_21 &= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)27173))))) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8)))));
                            arr_15 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32764)) ? (11550483303939533350ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3)))));
                        }
                    } 
                } 
                arr_16 [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-9))) < (7910533557797483615ULL)));
                arr_17 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) 9060730565320278799LL);
            }
            for (short i_5 = 0; i_5 < 12; i_5 += 4) 
            {
                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-95)), (7648673806779377986ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (9622619378112636708ULL)))) ? (((((/* implicit */_Bool) ((int) (unsigned short)49265))) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)95))) & (9223372036854775807LL))) : (((/* implicit */long long int) (-(3821546491U)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 23LL)) ? (((/* implicit */int) (unsigned short)33405)) : (((/* implicit */int) (unsigned short)53281))))))))));
                var_23 = ((/* implicit */short) var_5);
                var_24 = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)112)) >> (((-562949953421312LL) + (562949953421329LL))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) 2305843009213693920ULL)))))));
                var_25 = ((/* implicit */unsigned short) arr_14 [i_0] [i_0] [i_5] [i_0]);
                var_26 += ((/* implicit */unsigned long long int) 1989275836U);
            }
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_27 &= arr_11 [i_0] [i_0] [i_6] [i_6];
            arr_25 [i_0] [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) -803722318)))) > (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (_Bool)1))))) ? (((var_9) ^ (((/* implicit */unsigned long long int) 1470550344U)))) : (((/* implicit */unsigned long long int) arr_8 [i_6] [i_6])))));
            arr_26 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)62004)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (unsigned short)35741)) : (((/* implicit */int) (unsigned short)0)))))));
        }
        for (signed char i_7 = 0; i_7 < 12; i_7 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned short i_8 = 0; i_8 < 12; i_8 += 1) 
            {
                for (unsigned short i_9 = 0; i_9 < 12; i_9 += 2) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 562949953421317LL))));
                            var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) ((unsigned int) -5599896198829995391LL)))) ? (arr_6 [i_0] [i_10] [i_10] [i_10]) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)31626)) ? (((/* implicit */int) (short)12095)) : (((/* implicit */int) (signed char)-110))))) ? (((/* implicit */int) ((signed char) (signed char)116))) : ((~(((/* implicit */int) var_5)))))))))));
                            var_30 = ((/* implicit */_Bool) max((((arr_7 [(unsigned char)0] [i_9] [i_8]) - (((/* implicit */unsigned long long int) 562949953421316LL)))), (((((/* implicit */_Bool) arr_7 [i_0] [i_9] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (arr_7 [i_0] [i_7] [i_8])))));
                            var_31 |= ((/* implicit */unsigned short) (+(((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_30 [i_0] [i_7] [i_8]))))));
                        }
                    } 
                } 
            } 
            arr_39 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) -562949953421312LL)) ? (7910533557797483615ULL) : (((/* implicit */unsigned long long int) 2305691460U)))) : (((/* implicit */unsigned long long int) arr_27 [i_0] [i_7]))));
            var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) | (((/* implicit */int) (short)-6900)))))));
        }
        var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) -4551838059213013304LL))));
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 12; i_11 += 2) 
        {
            for (unsigned short i_12 = 3; i_12 < 11; i_12 += 4) 
            {
                for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 1) 
                {
                    {
                        var_34 = ((/* implicit */int) ((_Bool) arr_8 [(short)0] [i_12 - 1]));
                        var_35 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((/* implicit */short) (_Bool)0)), ((short)31645))))));
                        var_36 = ((/* implicit */unsigned short) 0ULL);
                    }
                } 
            } 
        } 
        arr_47 [i_0] [i_0] = ((/* implicit */signed char) min((3948938980144143456LL), (((/* implicit */long long int) (unsigned char)5))));
    }
    for (unsigned int i_14 = 0; i_14 < 12; i_14 += 4) 
    {
        arr_50 [i_14] [i_14] = ((/* implicit */int) (unsigned short)53662);
        /* LoopNest 2 */
        for (short i_15 = 4; i_15 < 11; i_15 += 3) 
        {
            for (int i_16 = 0; i_16 < 12; i_16 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_17 = 0; i_17 < 12; i_17 += 2) 
                    {
                        var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) -3948938980144143456LL))));
                        arr_58 [i_14] [i_16] [i_14] [i_15] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */unsigned long long int) 1073741823)) : (13626344750677753703ULL)));
                        var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) var_7))));
                    }
                    arr_59 [i_15] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_19 [i_14] [i_16] [i_15 - 4])) | (576460752303423487LL)))) ? (((((/* implicit */_Bool) arr_19 [i_14] [i_15] [i_15 - 4])) ? (arr_19 [i_14] [i_15] [i_15 - 4]) : (arr_19 [i_14] [i_15] [i_15 - 4]))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-82)))))));
                }
            } 
        } 
    }
    for (long long int i_18 = 1; i_18 < 14; i_18 += 1) 
    {
        var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) ((var_12) % (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_61 [i_18] [i_18 + 1]), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_61 [i_18] [i_18]))))))))))))));
        arr_63 [11U] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_62 [i_18] [i_18 - 1])) ? (((/* implicit */unsigned long long int) 6189763629371029499LL)) : (arr_62 [i_18] [i_18 - 1]))))));
    }
    var_40 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (min((((/* implicit */long long int) (signed char)(-127 - 1))), (var_1))) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
}
