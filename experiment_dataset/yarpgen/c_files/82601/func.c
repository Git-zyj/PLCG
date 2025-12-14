/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82601
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
        var_17 = ((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */short) arr_2 [i_0])), (((short) (short)-4188))))) | (((-1460979352) + (((((/* implicit */int) (signed char)-76)) * (((/* implicit */int) arr_3 [i_0]))))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            arr_6 [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4206))) == (2ULL))))) & (18446744073709551612ULL)));
            arr_7 [i_1] &= ((/* implicit */signed char) (+(((arr_0 [i_1 + 2] [i_1]) + (arr_0 [i_1 + 2] [i_1])))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            arr_10 [i_0] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((short) -587066542)))));
            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) var_14))));
            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_3 [i_0])) ? (-1324957577) : (((/* implicit */int) arr_3 [i_2])))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                var_20 -= ((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_0])) >> ((((~(arr_5 [i_0]))) + (1970424518)))));
                var_21 = ((/* implicit */unsigned short) ((((var_4) + (2147483647))) >> (17ULL)));
            }
        }
    }
    for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
    {
        var_22 = ((/* implicit */signed char) min((var_22), ((signed char)-115)));
        var_23 &= (~(((/* implicit */int) (signed char)60)));
        arr_16 [i_4] = ((/* implicit */signed char) min((arr_14 [i_4]), ((+(arr_14 [i_4])))));
    }
    for (signed char i_5 = 1; i_5 < 24; i_5 += 4) 
    {
        var_24 = ((/* implicit */signed char) (short)-23792);
        var_25 &= ((int) arr_17 [i_5]);
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 2) 
        {
            var_26 -= ((/* implicit */short) (~(min((((((/* implicit */_Bool) arr_17 [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4187))) : (18446744073709551614ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)0)))))))));
            var_27 = ((signed char) ((int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) -587066553)))));
        }
        var_28 += ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_15)) ? (min((((/* implicit */int) (unsigned short)1984)), (var_12))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)46327)) || (((/* implicit */_Bool) (signed char)-79)))))))));
    }
    /* LoopSeq 1 */
    for (int i_7 = 3; i_7 < 17; i_7 += 2) 
    {
        arr_25 [i_7] = ((((/* implicit */_Bool) ((short) (signed char)80))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_17 [i_7 + 2]))))) : ((-(((((/* implicit */_Bool) (short)-4210)) ? (arr_14 [i_7]) : (18446744073709551614ULL))))));
        arr_26 [i_7 - 2] = ((/* implicit */int) (short)30262);
        /* LoopSeq 3 */
        for (int i_8 = 1; i_8 < 18; i_8 += 1) 
        {
            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_18 [i_8 + 2])), (1006632960)))) ? (min((((/* implicit */unsigned long long int) (short)8461)), (25ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_18 [i_7 + 1]))))));
            /* LoopSeq 3 */
            for (unsigned short i_9 = 2; i_9 < 19; i_9 += 2) 
            {
                var_30 *= ((/* implicit */unsigned long long int) (+(((arr_23 [i_8 - 1]) - (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)-117)) : (((/* implicit */int) (signed char)76))))))));
                var_31 = max((((((/* implicit */int) var_9)) << (((arr_23 [i_7 + 2]) - (257043039))))), (((((/* implicit */_Bool) arr_23 [i_7 + 1])) ? (arr_23 [i_7 - 1]) : (var_4))));
            }
            /* vectorizable */
            for (int i_10 = 4; i_10 < 17; i_10 += 1) 
            {
                var_32 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)124))));
                /* LoopSeq 1 */
                for (unsigned long long int i_11 = 3; i_11 < 18; i_11 += 1) 
                {
                    var_33 = ((/* implicit */signed char) var_8);
                    var_34 += ((((/* implicit */_Bool) 18446744073709551614ULL)) ? (((/* implicit */int) (signed char)-117)) : (((/* implicit */int) (signed char)-69)));
                    var_35 -= ((/* implicit */short) (signed char)-58);
                    var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_14 [i_7 - 1])))))));
                    var_37 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2618)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)5))) : (18446744073709551615ULL)))) ? (((((/* implicit */_Bool) arr_22 [i_8])) ? (arr_31 [i_8] [i_8] [i_11]) : (((/* implicit */int) (signed char)102)))) : ((-(14)))));
                }
                arr_38 [i_7] [(unsigned short)0] [i_10] &= ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)63))));
                /* LoopSeq 1 */
                for (short i_12 = 0; i_12 < 20; i_12 += 1) 
                {
                    var_38 -= ((signed char) var_1);
                    var_39 = ((int) var_11);
                }
                arr_43 [i_8] [i_8] [i_8 + 1] = ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)82)) ? (2147483639) : (arr_40 [i_7] [i_8] [i_7] [i_8] [6]))) & (((/* implicit */int) ((unsigned short) (signed char)-2)))));
            }
            for (signed char i_13 = 0; i_13 < 20; i_13 += 3) 
            {
                var_40 = ((/* implicit */signed char) max((max((arr_14 [i_7]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)111)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_42 [i_7] [i_7] [i_8] [i_8] [i_13] [i_8]))))))), (((((/* implicit */_Bool) min((((/* implicit */int) (signed char)102)), (var_7)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (587066539) : (var_5)))) : (((arr_39 [i_8] [i_8] [i_13]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)63)))))))));
                arr_46 [i_8] [i_13] = ((/* implicit */short) (~(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_10)) ? (641490327) : (((/* implicit */int) (short)32755))))))));
            }
            arr_47 [i_7] [(signed char)18] [(signed char)18] |= (signed char)98;
            /* LoopSeq 3 */
            /* vectorizable */
            for (short i_14 = 2; i_14 < 19; i_14 += 4) 
            {
                var_41 -= ((/* implicit */signed char) (-(var_4)));
                var_42 = ((/* implicit */short) ((((/* implicit */int) (signed char)-40)) | (-2044666792)));
                /* LoopSeq 2 */
                for (int i_15 = 1; i_15 < 19; i_15 += 2) 
                {
                    var_43 = ((/* implicit */unsigned short) min((var_43), (((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_7] [i_7] [i_7] [i_7]))))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_14]))))))))));
                    var_44 = ((/* implicit */unsigned short) var_0);
                    var_45 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_36 [i_7 - 2] [i_8 + 1] [i_14 + 1] [i_15 + 1])) ? (arr_31 [i_8] [i_8] [i_14]) : (((int) (short)-4188))));
                    /* LoopSeq 1 */
                    for (unsigned short i_16 = 0; i_16 < 20; i_16 += 3) 
                    {
                        var_46 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_55 [i_7] [i_7 - 2] [i_14 + 1] [i_15 + 1]))));
                        var_47 *= ((/* implicit */unsigned short) 599285637);
                        arr_56 [i_7] [i_7] [i_8] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) arr_18 [i_14]))) - (((/* implicit */int) arr_17 [i_14]))));
                    }
                }
                for (signed char i_17 = 0; i_17 < 20; i_17 += 2) 
                {
                    var_48 = ((((((/* implicit */_Bool) arr_53 [i_8])) ? (((/* implicit */int) (signed char)103)) : (134086656))) * (((/* implicit */int) (unsigned short)35628)));
                    var_49 = ((/* implicit */unsigned long long int) max((var_49), (((/* implicit */unsigned long long int) ((signed char) -599285644)))));
                    arr_59 [i_8] [i_8] [i_14] [i_17] = ((((/* implicit */_Bool) 3150490462201178985ULL)) ? (((/* implicit */int) ((((/* implicit */int) (short)-14551)) == (((/* implicit */int) arr_50 [i_7] [i_8] [i_7]))))) : (2096585453));
                }
            }
            for (signed char i_18 = 0; i_18 < 20; i_18 += 1) 
            {
                arr_63 [i_7 + 3] [i_8] [i_7 + 3] [i_7 + 3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? ((~(var_3))) : (((/* implicit */int) ((var_4) >= (((/* implicit */int) arr_55 [i_7] [i_7] [i_18] [i_18])))))))) ? (((((/* implicit */_Bool) arr_20 [i_8 + 2])) ? (((/* implicit */int) (signed char)-17)) : (599285637))) : (((/* implicit */int) var_10))));
                arr_64 [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) var_3))) & (((/* implicit */int) (signed char)24))));
            }
            for (unsigned short i_19 = 2; i_19 < 18; i_19 += 1) 
            {
                var_50 = ((/* implicit */int) max((var_50), (((/* implicit */int) ((signed char) min((-587066531), (-599285639)))))));
                /* LoopSeq 1 */
                for (signed char i_20 = 3; i_20 < 19; i_20 += 1) 
                {
                    arr_71 [i_8] [i_8] [i_8] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (signed char)-41)))) ? (((((/* implicit */int) (signed char)85)) & (((/* implicit */int) arr_50 [i_8] [i_19 - 1] [i_8])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_60 [i_8])))))));
                    arr_72 [i_20] [i_20] [i_8] [i_8] [i_20] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_29 [i_7 + 1])) ? (((/* implicit */int) arr_29 [i_8 - 1])) : (((/* implicit */int) (short)28296))))));
                }
            }
            arr_73 [i_7] [i_8] [i_8 + 2] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (short)-32730)) ? (3356549211936031260ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_8] [i_7] [i_8] [i_8 - 1]))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_45 [i_7] [i_8] [i_7 - 2])))))));
        }
        for (signed char i_21 = 0; i_21 < 20; i_21 += 3) 
        {
            arr_76 [i_7] [i_21] = ((/* implicit */int) var_8);
            var_51 = (signed char)65;
            arr_77 [i_7] [(signed char)5] [i_7] = ((/* implicit */short) ((int) arr_21 [i_7] [i_21]));
            var_52 = (~(((((((/* implicit */int) var_9)) ^ (((/* implicit */int) (signed char)24)))) - (((/* implicit */int) max((arr_45 [i_21] [(short)16] [i_7]), ((signed char)64)))))));
        }
        for (int i_22 = 1; i_22 < 18; i_22 += 2) 
        {
            var_53 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-85))) : (var_6)))) ? (((((/* implicit */_Bool) ((int) 587066515))) ? (((((/* implicit */int) (short)32753)) % (((/* implicit */int) (signed char)-16)))) : (((/* implicit */int) max((((/* implicit */short) arr_35 [i_7] [i_7 - 3])), (arr_41 [i_7] [i_7] [i_22])))))) : (min((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) (short)-21527)))), (((int) arr_31 [i_7] [2] [i_22]))))));
            var_54 = max(((signed char)27), (min((arr_74 [i_7]), (arr_74 [i_7]))));
        }
    }
    var_55 = ((/* implicit */int) ((short) ((signed char) var_14)));
}
