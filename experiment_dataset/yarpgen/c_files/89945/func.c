/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89945
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
    var_19 = ((/* implicit */long long int) var_12);
    var_20 *= ((/* implicit */unsigned char) var_17);
    var_21 = (!(((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 7860468139764263933ULL))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((~(((/* implicit */int) arr_5 [i_0] [i_1])))), ((-(1619955370)))))) ? (8927381514983318259ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))))))));
            arr_6 [(signed char)12] &= ((/* implicit */int) arr_2 [8ULL]);
            arr_7 [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_0 + 1] [i_0]))))), (((9519362558726233357ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 1] [i_0])))))));
        }
        arr_8 [i_0] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_0])) >> (((var_4) - (3056526923U)))))) ? (var_6) : (((/* implicit */int) var_18)))) == (((/* implicit */int) var_13))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 1; i_2 < 20; i_2 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(2305772640469516288ULL)))) ? (arr_2 [i_2]) : (arr_9 [i_2])));
        var_24 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_2 + 1] [i_2]))));
        /* LoopSeq 3 */
        for (signed char i_3 = 3; i_3 < 20; i_3 += 4) 
        {
            var_25 -= ((/* implicit */signed char) 7860468139764263933ULL);
            var_26 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [20ULL] [i_3])) ? ((~(8927381514983318259ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [13LL] [13LL]))))))));
            var_27 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_2] [7LL])) | (((/* implicit */int) var_13))));
            arr_13 [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2])) ? (arr_9 [i_2]) : (arr_9 [i_2])));
        }
        for (unsigned long long int i_4 = 3; i_4 < 19; i_4 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned char i_5 = 1; i_5 < 20; i_5 += 3) /* same iter space */
            {
                var_28 = ((/* implicit */signed char) ((((/* implicit */long long int) arr_10 [i_2])) > ((-(var_3)))));
                var_29 = ((/* implicit */unsigned short) (((+(((/* implicit */int) var_8)))) >= (arr_16 [13U] [i_2 + 1] [i_2 + 1])));
            }
            for (unsigned char i_6 = 1; i_6 < 20; i_6 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned char i_7 = 0; i_7 < 21; i_7 += 3) 
                {
                    var_30 *= (!(((/* implicit */_Bool) (-(9519362558726233357ULL)))));
                    arr_29 [i_2] [2U] [i_4] [i_4] [i_6 + 1] [i_2] = arr_24 [i_2] [i_7];
                    arr_30 [i_2] [i_2] [i_2] [i_4 - 1] [i_6] [i_7] = ((/* implicit */short) ((((/* implicit */int) arr_15 [i_2 - 1] [i_4 + 2])) << (((((/* implicit */int) arr_15 [i_2 + 1] [i_4 + 1])) - (8318)))));
                    var_31 -= ((/* implicit */signed char) (-(((/* implicit */int) var_16))));
                }
                for (long long int i_8 = 0; i_8 < 21; i_8 += 1) 
                {
                    var_32 = var_7;
                    var_33 -= ((/* implicit */unsigned short) (+(((/* implicit */int) var_11))));
                    arr_33 [(unsigned short)2] [i_8] [i_6 - 1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)8))) % (var_14)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (((((/* implicit */_Bool) (unsigned short)52094)) ? (16140971433240035328ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))))));
                    arr_34 [1U] [11U] [i_2] [(_Bool)1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_2] [i_2] [(_Bool)1])) ? (arr_2 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_4] [i_6 + 1] [i_8]))))))));
                }
                /* LoopSeq 2 */
                for (unsigned int i_9 = 0; i_9 < 21; i_9 += 3) 
                {
                    var_34 = ((/* implicit */int) ((unsigned short) arr_16 [i_6 + 1] [i_6 + 1] [i_4 - 2]));
                    /* LoopSeq 3 */
                    for (signed char i_10 = 0; i_10 < 21; i_10 += 2) 
                    {
                        var_35 *= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)52094)) ? (((/* implicit */int) ((var_3) != (((/* implicit */long long int) var_4))))) : (((((/* implicit */_Bool) 8927381514983318258ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_27 [i_2] [i_4 + 2] [i_6]))))));
                        arr_39 [i_2 - 1] [i_2 - 1] [i_6] [i_9] [i_2] = ((/* implicit */unsigned int) arr_26 [i_2] [i_6 - 1] [i_2 + 1] [i_2] [12]);
                        arr_40 [10] [i_2] [i_4] [i_10] [i_2] [i_9] [i_10] &= ((/* implicit */long long int) (+(((((/* implicit */int) arr_5 [i_4 - 3] [i_9])) % (((/* implicit */int) (short)23832))))));
                    }
                    for (unsigned char i_11 = 3; i_11 < 20; i_11 += 3) 
                    {
                        var_36 += (+((+(var_4))));
                        arr_43 [1U] [i_4] [i_6 - 1] [i_2] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [(signed char)8] [(unsigned short)11] [i_2] [i_2 + 1] [(_Bool)1] [(_Bool)1]))) <= (((((/* implicit */_Bool) 12U)) ? (2305772640469516275ULL) : (((/* implicit */unsigned long long int) arr_36 [5LL] [i_4] [i_6] [i_6]))))));
                        var_37 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) (_Bool)1))))));
                        arr_44 [(short)4] |= ((/* implicit */signed char) var_1);
                    }
                    for (signed char i_12 = 0; i_12 < 21; i_12 += 3) 
                    {
                        var_38 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)54957)) ? (((/* implicit */int) arr_27 [(signed char)15] [i_4] [i_9])) : (((/* implicit */int) arr_26 [i_2] [i_4] [i_6] [i_9] [i_12])))));
                        var_39 = ((/* implicit */signed char) (~(((/* implicit */int) arr_25 [i_4] [i_4] [i_9] [i_12]))));
                        arr_48 [i_2 - 1] [i_12] [i_2] [i_2 - 1] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(9519362558726233370ULL))))));
                        var_40 = ((/* implicit */unsigned short) ((signed char) var_12));
                    }
                    /* LoopSeq 4 */
                    for (long long int i_13 = 1; i_13 < 19; i_13 += 4) /* same iter space */
                    {
                        arr_51 [i_2] [i_2] [i_2] [i_9] [(short)5] [i_6] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_21 [i_2]))));
                        var_41 = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_35 [i_2] [i_13 - 1]))))));
                        var_42 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_11))));
                        arr_52 [i_4 - 2] [12ULL] [i_9] |= ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_46 [16LL] [i_4] [i_4 - 1] [i_4 - 2])) ? (arr_16 [12LL] [9] [i_9]) : (((/* implicit */int) var_5))))));
                    }
                    for (long long int i_14 = 1; i_14 < 19; i_14 += 4) /* same iter space */
                    {
                        var_43 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) % (arr_36 [i_4 - 2] [i_2] [i_2 - 1] [i_14 + 1])));
                        var_44 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_2] [i_2 + 1])) ? (((int) var_3)) : (arr_22 [i_2 + 1] [i_2 + 1] [i_2 + 1])));
                        var_45 += ((/* implicit */unsigned int) var_10);
                        var_46 = ((/* implicit */_Bool) -2639966862723218429LL);
                    }
                    for (long long int i_15 = 0; i_15 < 21; i_15 += 4) 
                    {
                        var_47 -= ((((/* implicit */int) var_9)) << (((arr_0 [i_2 + 1]) - (2093562617965144247LL))));
                        var_48 &= ((/* implicit */short) (-(((/* implicit */int) arr_11 [i_15] [18ULL]))));
                        arr_59 [i_2] [i_4] [i_15] [i_9] [(unsigned short)12] = ((/* implicit */signed char) (+(arr_49 [i_2 + 1] [i_2 + 1] [i_4 + 1] [i_2 + 1] [i_6 + 1] [i_2 + 1] [i_6 + 1])));
                    }
                    for (signed char i_16 = 0; i_16 < 21; i_16 += 4) 
                    {
                        var_49 += ((/* implicit */long long int) arr_16 [i_4] [i_4] [19LL]);
                        var_50 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_4 - 1] [i_4 + 2] [i_4])) ? (((((/* implicit */_Bool) arr_9 [i_2])) ? (arr_55 [i_2 + 1] [i_2]) : (((/* implicit */unsigned long long int) arr_61 [(signed char)4] [i_2] [i_4] [i_4] [i_9] [i_4] [(unsigned short)2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned char i_17 = 0; i_17 < 21; i_17 += 1) 
                    {
                        var_51 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) 2305772640469516288ULL))));
                        var_52 &= (~(arr_10 [6]));
                        var_53 = ((/* implicit */short) (+(arr_22 [i_2 - 1] [i_2 + 1] [i_6 - 1])));
                        arr_64 [i_2] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2] [i_4 + 1]))) : (((((/* implicit */_Bool) arr_15 [i_4] [i_4])) ? (arr_23 [i_2] [i_4 - 1] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
                        var_54 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_47 [i_17] [14LL] [i_6 + 1] [i_9] [i_2 + 1] [i_4 + 1]))));
                    }
                    for (unsigned int i_18 = 3; i_18 < 18; i_18 += 2) 
                    {
                        var_55 = ((/* implicit */unsigned long long int) arr_53 [i_2] [i_2] [i_2] [i_2] [4LL] [5ULL]);
                        var_56 = ((/* implicit */unsigned short) (-(536870912U)));
                        var_57 ^= ((/* implicit */int) (~(arr_61 [i_2] [i_4] [i_4] [i_9] [i_4] [i_4] [i_2])));
                        arr_67 [i_2] [i_4 + 1] [i_6] [(signed char)11] [i_2] [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_2] [i_4 + 2] [i_2] [i_4 + 2] [i_2])) && (((/* implicit */_Bool) var_4)))))));
                    }
                    for (long long int i_19 = 0; i_19 < 21; i_19 += 2) 
                    {
                        var_58 |= (+(arr_68 [i_6 + 1] [i_6 - 1]));
                        var_59 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_2] [i_6])) << (((((/* implicit */int) (short)19070)) - (19054)))))) ? (((/* implicit */int) arr_41 [i_2 - 1] [i_2 + 1] [i_4] [i_4] [16] [i_9] [i_19])) : ((+(((/* implicit */int) arr_21 [i_19]))))));
                        arr_70 [i_2 - 1] [i_4] [i_6] [i_2] [5U] = ((/* implicit */unsigned short) (+(3040780004U)));
                        var_60 += ((/* implicit */_Bool) arr_27 [i_2] [i_2 - 1] [i_2 - 1]);
                    }
                    var_61 = ((/* implicit */unsigned char) (-(arr_61 [i_4 - 1] [(_Bool)1] [i_6] [i_2 - 1] [i_6 - 1] [i_2 - 1] [i_2 - 1])));
                }
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    arr_73 [9ULL] [i_2] [9ULL] [(unsigned char)4] = ((/* implicit */long long int) var_14);
                    /* LoopSeq 1 */
                    for (long long int i_21 = 1; i_21 < 20; i_21 += 2) 
                    {
                        arr_76 [3U] [3U] [3U] [i_2] [(unsigned char)17] [i_6] = ((/* implicit */short) ((int) var_13));
                        var_62 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_46 [i_2] [i_6] [i_20] [i_21])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_27 [i_4] [16ULL] [i_20]))))));
                    }
                    var_63 = ((/* implicit */short) (-(arr_28 [i_2] [i_2 - 1] [(signed char)1] [i_6] [i_6 - 1] [(unsigned char)4])));
                }
                var_64 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_1 [i_2]))));
            }
            arr_77 [(short)14] [i_2] [i_4 - 3] = ((/* implicit */unsigned short) ((var_13) ? (((/* implicit */int) arr_4 [i_2 + 1] [i_4 + 2])) : (((/* implicit */int) arr_25 [i_2 + 1] [i_2 - 1] [i_4] [i_4 - 2]))));
        }
        for (unsigned long long int i_22 = 3; i_22 < 19; i_22 += 3) /* same iter space */
        {
            var_65 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_38 [i_2] [i_2] [i_2 - 1] [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_79 [i_2]))) : ((+(10586275933945287683ULL)))));
            arr_80 [17ULL] [i_2] [i_2] = ((/* implicit */_Bool) arr_46 [i_2] [i_2 + 1] [i_22 + 2] [i_2 - 1]);
            arr_81 [i_2] [(unsigned char)9] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_50 [i_2] [i_2 + 1] [i_22 - 1] [i_22] [i_2])) ? (arr_50 [i_2 - 1] [i_2] [i_22 - 3] [i_22 + 1] [i_2]) : (((/* implicit */unsigned long long int) var_3))));
            /* LoopSeq 1 */
            for (int i_23 = 1; i_23 < 20; i_23 += 4) 
            {
                var_66 = ((/* implicit */unsigned short) (-(arr_23 [i_2] [i_22] [i_23])));
                arr_85 [i_2] [i_2] [i_23 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_36 [i_2 - 1] [i_22 - 3] [i_22 - 3] [i_23 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_2]))) : (4067191165U)));
            }
            var_67 = ((/* implicit */signed char) (+((+(3112059586714678570ULL)))));
        }
        var_68 = ((/* implicit */short) arr_58 [i_2 - 1] [i_2] [i_2]);
    }
}
