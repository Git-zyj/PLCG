/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71716
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
    var_20 = ((/* implicit */unsigned int) var_8);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((unsigned short) arr_1 [i_0])), (((/* implicit */unsigned short) min((arr_0 [i_1] [i_0]), (arr_0 [i_0] [i_0]))))))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) ((((/* implicit */int) (short)-18205)) <= (((/* implicit */int) arr_3 [i_0] [i_0] [i_1])))))));
                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) var_17))));
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)18)) % (((/* implicit */int) arr_2 [(short)9] [i_1]))))), (16ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12)))))));
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) min((var_6), (((/* implicit */long long int) arr_3 [i_0] [i_1] [i_1]))))) ? (((/* implicit */int) ((unsigned char) (unsigned char)16))) : (((/* implicit */int) (unsigned char)240))))) < (((long long int) arr_2 [i_1 + 1] [i_1 + 1]))));
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_2 = 3; i_2 < 8; i_2 += 2) 
    {
        arr_8 [i_2] = ((/* implicit */unsigned int) -4004219041817341054LL);
        arr_9 [i_2] [i_2] = ((/* implicit */long long int) (unsigned char)148);
        /* LoopSeq 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) arr_3 [i_2 + 2] [i_3] [i_2 + 2]))) >> ((((~(((/* implicit */int) var_9)))) + (31)))));
            /* LoopSeq 4 */
            for (unsigned long long int i_4 = 1; i_4 < 8; i_4 += 3) 
            {
                arr_16 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -4004219041817341054LL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))));
                var_25 = ((/* implicit */unsigned int) (-(((((/* implicit */int) (unsigned short)65519)) - (((/* implicit */int) var_1))))));
                var_26 = ((/* implicit */int) (unsigned char)148);
            }
            for (unsigned char i_5 = 0; i_5 < 10; i_5 += 3) /* same iter space */
            {
                arr_20 [i_2 + 2] [i_2] [i_2 + 2] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_2 + 1] [i_2 - 1] [i_5])) - (((/* implicit */int) (unsigned short)60920))));
                arr_21 [i_2] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2])) ? (((/* implicit */int) (short)23432)) : (((/* implicit */int) (unsigned short)65532)))))));
            }
            for (unsigned char i_6 = 0; i_6 < 10; i_6 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (signed char i_7 = 2; i_7 < 7; i_7 += 1) 
                {
                    var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((unsigned short) ((9223372036854775807LL) - (((/* implicit */long long int) ((/* implicit */int) var_0)))))))));
                    var_28 = ((/* implicit */unsigned short) ((short) (~(arr_23 [i_2] [i_2] [i_6] [i_7]))));
                    var_29 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_6)))) ^ (arr_19 [i_2 - 1] [i_3] [2LL] [i_7 - 2])));
                    arr_27 [i_2] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) arr_7 [i_7 - 2] [i_2 + 2])) > (((/* implicit */int) var_12))));
                }
                var_30 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)237)) ? (arr_12 [(signed char)8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [2LL] [i_3]))))) >> (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_6]))) < (var_8))))));
            }
            for (int i_8 = 1; i_8 < 6; i_8 += 2) 
            {
                arr_31 [(signed char)8] [i_2] [i_8] = ((/* implicit */unsigned char) ((short) -2100423357605324199LL));
                arr_32 [i_2] [i_8] = ((/* implicit */_Bool) ((long long int) (-(arr_29 [i_2] [i_3] [i_2]))));
                arr_33 [i_2 - 1] [i_3] [i_3] [i_2] = ((/* implicit */long long int) ((signed char) (~(((/* implicit */int) (unsigned short)61475)))));
            }
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 10; i_10 += 4) 
            {
                for (unsigned short i_11 = 2; i_11 < 7; i_11 += 1) 
                {
                    {
                        var_31 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_17 [i_2 + 1] [i_2] [i_11 - 1] [i_2]))));
                        arr_40 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)63))))) % (((/* implicit */int) ((signed char) arr_0 [i_2] [i_10])))));
                    }
                } 
            } 
            arr_41 [i_2] [i_2] [i_9] = ((/* implicit */long long int) ((unsigned char) arr_18 [i_2] [i_2] [i_2 + 2] [i_2]));
        }
    }
    for (int i_12 = 0; i_12 < 14; i_12 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_13 = 4; i_13 < 12; i_13 += 3) 
        {
            for (signed char i_14 = 0; i_14 < 14; i_14 += 1) 
            {
                {
                    var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) min((((/* implicit */int) ((unsigned short) 9223372036854775779LL))), (((((/* implicit */int) ((((/* implicit */int) arr_3 [i_12] [i_12] [i_12])) > (((/* implicit */int) (unsigned char)16))))) & (((/* implicit */int) var_2)))))))));
                    var_33 &= ((/* implicit */signed char) var_7);
                    arr_51 [i_14] = ((/* implicit */unsigned char) var_19);
                    arr_52 [(_Bool)1] |= ((/* implicit */_Bool) 9007199254740992ULL);
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_15 = 3; i_15 < 11; i_15 += 3) 
        {
            for (unsigned short i_16 = 0; i_16 < 14; i_16 += 2) 
            {
                for (unsigned char i_17 = 0; i_17 < 14; i_17 += 4) 
                {
                    {
                        arr_60 [i_12] [i_15] [i_15 - 1] [i_15] [i_15] [i_17] &= ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_44 [i_15 - 2] [i_15 - 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_45 [i_15 + 2] [i_15 - 1])))) : (arr_45 [i_15 + 2] [i_15 - 1])));
                        var_34 = ((/* implicit */unsigned char) ((((min((((/* implicit */long long int) arr_42 [i_16])), (arr_58 [i_12] [i_12] [i_12] [i_16] [i_12]))) << (((68719476735LL) - (68719476678LL))))) ^ (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_57 [i_15 + 2] [i_15 + 2] [i_16] [i_17])), (arr_48 [i_15 + 1] [i_15 + 3] [i_15 + 3])))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_18 = 1; i_18 < 24; i_18 += 3) 
    {
        var_35 = ((/* implicit */unsigned short) max((((/* implicit */int) max((((/* implicit */unsigned short) ((var_10) == (((/* implicit */long long int) ((/* implicit */int) var_14)))))), (max(((unsigned short)15), (((/* implicit */unsigned short) (signed char)-98))))))), ((~(((/* implicit */int) var_18))))));
        var_36 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) var_12))));
    }
    var_37 -= ((/* implicit */long long int) var_16);
    /* LoopSeq 1 */
    for (unsigned short i_19 = 1; i_19 < 10; i_19 += 2) 
    {
        arr_67 [i_19] = ((/* implicit */long long int) arr_59 [8ULL] [8ULL] [i_19 + 3] [i_19] [i_19 + 2]);
        var_38 = ((/* implicit */_Bool) arr_61 [i_19 + 3]);
        /* LoopSeq 1 */
        for (unsigned short i_20 = 2; i_20 < 11; i_20 += 3) 
        {
            var_39 = ((/* implicit */_Bool) max((var_39), ((!(((/* implicit */_Bool) var_3))))));
            arr_70 [i_19] = ((/* implicit */long long int) min((min((arr_53 [i_19 - 1] [i_19 + 1] [i_20 - 1]), (((/* implicit */unsigned long long int) max((arr_68 [i_20]), (var_8)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_19 + 2] [i_20 - 1])) ? (arr_46 [i_19 + 1] [i_20] [i_20]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_19 - 1] [i_20 - 2]))))))));
        }
    }
}
