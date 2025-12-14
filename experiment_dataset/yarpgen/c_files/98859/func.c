/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98859
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)45854)) + (((/* implicit */int) var_4))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (unsigned short)65535);
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                arr_7 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))));
                var_11 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)36))));
            }
            var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) != (((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_1]))))));
            var_13 |= ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)32768)) | (((/* implicit */int) arr_5 [i_0] [i_0] [(unsigned short)1] [(unsigned short)8])))) != (((/* implicit */int) var_4))));
        }
        /* vectorizable */
        for (signed char i_3 = 0; i_3 < 11; i_3 += 1) /* same iter space */
        {
            arr_11 [i_0] = ((/* implicit */unsigned short) var_8);
            arr_12 [i_3] [i_3] [i_0] = (unsigned short)0;
        }
    }
    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
    {
        var_14 = arr_0 [i_4];
        /* LoopSeq 3 */
        for (long long int i_5 = 0; i_5 < 10; i_5 += 2) /* same iter space */
        {
            var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((0ULL), (((/* implicit */unsigned long long int) (unsigned short)1)))))));
            /* LoopSeq 2 */
            for (unsigned short i_6 = 0; i_6 < 10; i_6 += 4) 
            {
                arr_20 [i_4] [i_4] [i_4] [(signed char)0] = ((/* implicit */unsigned long long int) ((min((arr_19 [i_4] [i_4] [i_5] [(_Bool)1]), (var_7))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)31)) > (((/* implicit */int) (unsigned short)65514))))))));
                arr_21 [(unsigned short)4] [(unsigned short)4] [i_4] [(unsigned short)4] = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) (signed char)-101))) - (((/* implicit */int) ((arr_19 [(unsigned short)2] [i_4] [i_6] [i_6]) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4))))))));
            }
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_1 [(_Bool)1])), ((unsigned short)8))))));
                arr_24 [i_4] [i_5] [i_4] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)17)) ? ((~(((/* implicit */int) (unsigned short)7424)))) : (((/* implicit */int) ((unsigned short) (unsigned short)38318)))))) ^ (((var_6) ^ (((/* implicit */unsigned long long int) var_7))))));
            }
            /* LoopNest 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (unsigned short i_9 = 0; i_9 < 10; i_9 += 4) 
                {
                    {
                        arr_29 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) max((var_6), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_8] [i_8] [(unsigned short)1])) || (((/* implicit */_Bool) arr_19 [1LL] [i_4] [i_4] [6ULL]))))), ((-9223372036854775807LL - 1LL)))))));
                        arr_30 [i_4] [i_4] = ((/* implicit */unsigned short) min((((((/* implicit */int) ((unsigned short) arr_25 [i_4] [i_5] [i_4] [i_9]))) & (((/* implicit */int) ((unsigned short) 13309380638542563195ULL))))), (((/* implicit */int) ((((var_0) + (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_4]))))) != (arr_23 [i_4] [(_Bool)1] [(unsigned short)0]))))));
                        arr_31 [i_9] [i_8] [i_8] [i_5] [i_9] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_5])) ? (var_0) : (((/* implicit */long long int) (((((_Bool)0) ? (((/* implicit */int) arr_3 [i_9])) : (((/* implicit */int) var_8)))) >> (((max((((/* implicit */unsigned long long int) (_Bool)1)), (18014398509481983ULL))) - (18014398509481953ULL))))))));
                        arr_32 [i_4] [i_5] [i_4] [i_4] = ((/* implicit */unsigned short) (+(arr_23 [i_5] [i_5] [i_8])));
                    }
                } 
            } 
            arr_33 [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)33778)) & (((/* implicit */int) arr_4 [i_4]))))) != ((~(var_5)))));
        }
        for (long long int i_10 = 0; i_10 < 10; i_10 += 2) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned short) var_7);
            arr_36 [i_4] = ((/* implicit */_Bool) min((max((arr_8 [i_4] [i_4]), (arr_8 [i_4 + 1] [i_10]))), (max((arr_17 [(signed char)5] [(signed char)5] [i_10]), (arr_8 [i_4] [i_10])))));
            arr_37 [i_4] [i_4] = ((unsigned short) min((((/* implicit */long long int) var_1)), (max((arr_9 [i_10] [i_4] [i_4]), (((/* implicit */long long int) (signed char)115))))));
        }
        for (long long int i_11 = 0; i_11 < 10; i_11 += 2) /* same iter space */
        {
            arr_40 [(unsigned short)2] [i_4] = ((/* implicit */unsigned short) min((9017754965244949566LL), (((/* implicit */long long int) (_Bool)1))));
            var_18 = ((/* implicit */signed char) var_0);
            arr_41 [i_4] [i_11] = ((/* implicit */unsigned long long int) min(((-((-(((/* implicit */int) var_2)))))), (((((/* implicit */_Bool) arr_26 [(unsigned short)0] [i_11] [i_11] [i_4])) ? (((/* implicit */int) arr_4 [i_4])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)6)))))))));
            var_19 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) arr_39 [i_4])))));
        }
    }
    for (unsigned short i_12 = 0; i_12 < 16; i_12 += 3) 
    {
        var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_42 [i_12])))))));
        arr_44 [i_12] [i_12] = ((/* implicit */unsigned short) ((signed char) (-(7125771273686648234LL))));
        /* LoopSeq 1 */
        for (unsigned short i_13 = 0; i_13 < 16; i_13 += 4) 
        {
            arr_48 [i_12] = ((/* implicit */unsigned long long int) arr_47 [i_12]);
            /* LoopSeq 1 */
            for (unsigned short i_14 = 1; i_14 < 14; i_14 += 4) 
            {
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((((long long int) (~(((/* implicit */int) arr_50 [i_12] [i_13] [i_14]))))) + (9223372036854775807LL))) << (((var_0) - (7350178715184421929LL))))))));
                arr_51 [i_12] [i_12] = ((/* implicit */unsigned long long int) (_Bool)0);
                var_22 = (unsigned short)48996;
                /* LoopSeq 3 */
                for (unsigned short i_15 = 2; i_15 < 15; i_15 += 1) 
                {
                    arr_54 [i_12] [i_12] = ((/* implicit */unsigned short) max((((((/* implicit */int) arr_49 [i_12] [i_14 + 1] [i_15 - 1])) & (((/* implicit */int) arr_49 [i_12] [i_14 + 1] [i_15 - 2])))), (((/* implicit */int) var_8))));
                    arr_55 [i_12] [i_13] [(_Bool)1] [(unsigned short)4] [(signed char)2] [i_13] = ((/* implicit */signed char) 13309380638542563190ULL);
                }
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    var_23 = ((/* implicit */unsigned short) arr_57 [i_12] [(unsigned short)2] [i_12] [i_12]);
                    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) -7125771273686648228LL))));
                }
                for (unsigned short i_17 = 1; i_17 < 15; i_17 += 2) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_18 = 2; i_18 < 15; i_18 += 3) 
                    {
                        arr_63 [i_17] [i_12] [i_12] = ((/* implicit */unsigned short) (-(5137363435166988423ULL)));
                        arr_64 [i_12] [(_Bool)1] [i_12] [i_13] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) (unsigned short)44335)) : (((/* implicit */int) (unsigned short)48398))));
                    }
                    for (unsigned short i_19 = 3; i_19 < 12; i_19 += 1) 
                    {
                        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) (unsigned short)0)), (18446744073709551615ULL))))));
                        var_26 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) -7125771273686648228LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1))) : (((((/* implicit */_Bool) (unsigned short)3)) ? (-6560515171039714614LL) : ((-9223372036854775807LL - 1LL)))))) : (((/* implicit */long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) arr_45 [i_13])))) && (((/* implicit */_Bool) min((arr_50 [i_12] [i_13] [i_19]), (arr_47 [i_13]))))))))));
                    }
                    arr_67 [i_12] [i_13] [i_12] [i_13] &= ((/* implicit */unsigned short) arr_43 [i_17] [i_13]);
                    arr_68 [i_13] [i_12] [i_14] [i_13] = ((/* implicit */unsigned short) ((unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)24668)) || (((/* implicit */_Bool) var_7)))) && ((!(((/* implicit */_Bool) arr_46 [i_12])))))));
                }
            }
            arr_69 [i_12] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_1))))) & (var_5)))) ? (max((((/* implicit */unsigned long long int) (unsigned short)65519)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_0)) : (var_6))))) : (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (unsigned short)7424)))))))));
            arr_70 [i_12] [i_12] = var_4;
        }
        var_27 = ((/* implicit */unsigned short) ((long long int) (!((!(((/* implicit */_Bool) (signed char)117)))))));
    }
    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) ((signed char) 13309380638542563170ULL))) ? (max((((/* implicit */unsigned long long int) var_8)), (18446744073709551609ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) var_2)), ((signed char)-27)))))))));
}
