/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99245
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
    for (int i_0 = 0; i_0 < 22; i_0 += 4) /* same iter space */
    {
        var_10 |= ((/* implicit */unsigned int) max((((/* implicit */int) var_6)), ((~(((/* implicit */int) (unsigned char)131))))));
        var_11 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (short)(-32767 - 1))) && (((/* implicit */_Bool) (unsigned char)151)))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0]))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) min((var_5), (arr_0 [i_0])))) != ((-(((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_5)))))))));
    }
    for (int i_1 = 0; i_1 < 22; i_1 += 4) /* same iter space */
    {
        var_12 = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) min((((/* implicit */int) min((arr_0 [i_1]), (((/* implicit */unsigned char) var_6))))), (((arr_5 [i_1] [i_1]) / (((/* implicit */int) (short)-32758))))))) : (((((/* implicit */_Bool) arr_2 [i_1])) ? (3441487813328799614LL) : (((/* implicit */long long int) ((/* implicit */int) var_4))))));
        var_13 = ((/* implicit */_Bool) (short)-28467);
        arr_7 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) max((0ULL), (((/* implicit */unsigned long long int) arr_6 [i_1] [i_1]))))) ? (((((/* implicit */int) (unsigned char)33)) + (((/* implicit */int) (unsigned short)22588)))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)253)) || (((/* implicit */_Bool) arr_6 [i_1] [i_1])))))));
        var_14 &= ((/* implicit */short) min((((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [i_1])))), (((((/* implicit */int) arr_1 [i_1])) + (((/* implicit */int) var_6))))));
    }
    /* vectorizable */
    for (int i_2 = 4; i_2 < 10; i_2 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            var_15 = ((/* implicit */signed char) (unsigned char)26);
            var_16 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))) & (((((/* implicit */_Bool) (short)-32756)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (2122978131107763236ULL)))));
        }
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            /* LoopSeq 2 */
            for (long long int i_5 = 0; i_5 < 11; i_5 += 3) 
            {
                var_17 ^= ((/* implicit */unsigned int) ((((/* implicit */int) var_7)) | (((/* implicit */int) arr_12 [i_2] [i_2]))));
                var_18 = ((/* implicit */short) ((unsigned char) (short)-1));
            }
            for (unsigned char i_6 = 0; i_6 < 11; i_6 += 1) 
            {
                arr_22 [i_4] [i_4] [i_6] = ((/* implicit */signed char) (~((-(var_9)))));
                /* LoopNest 2 */
                for (unsigned char i_7 = 2; i_7 < 10; i_7 += 3) 
                {
                    for (unsigned char i_8 = 3; i_8 < 7; i_8 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) (signed char)1);
                            arr_29 [i_8 - 1] [i_4] [i_4] [(unsigned char)8] = ((/* implicit */short) ((((/* implicit */int) ((var_4) && (((/* implicit */_Bool) var_2))))) * (((/* implicit */int) var_6))));
                        }
                    } 
                } 
            }
            arr_30 [i_4] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)23))));
            var_20 -= ((/* implicit */short) 0U);
            var_21 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) (unsigned char)75)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-12)))) : (((/* implicit */int) ((((/* implicit */int) (short)-31845)) > (((/* implicit */int) arr_11 [i_4])))))));
        }
        for (short i_9 = 0; i_9 < 11; i_9 += 3) 
        {
            arr_33 [i_2] = ((((/* implicit */int) ((17592169267200ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))))) | (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (unsigned char)179))))));
            /* LoopSeq 4 */
            for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 3) 
            {
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_14 [i_2 - 1] [i_2 + 1]))));
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 1; i_11 < 9; i_11 += 1) 
                {
                    for (long long int i_12 = 0; i_12 < 11; i_12 += 1) 
                    {
                        {
                            arr_42 [i_2] [i_9] [i_9] [i_11] [i_12] [i_10] [i_10] = ((/* implicit */long long int) var_0);
                            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)242))) : (var_8))))));
                            var_24 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_2 - 1]))));
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_9] [i_10])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_40 [i_2 + 1]))));
                            var_26 = ((/* implicit */unsigned long long int) var_0);
                        }
                    } 
                } 
            }
            for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_14 = 0; i_14 < 11; i_14 += 2) 
                {
                    for (short i_15 = 0; i_15 < 11; i_15 += 3) 
                    {
                        {
                            var_27 *= ((/* implicit */unsigned char) (-(((/* implicit */int) var_1))));
                            var_28 = ((/* implicit */short) (~(arr_19 [i_2 + 1] [i_2 + 1])));
                        }
                    } 
                } 
                var_29 = ((/* implicit */signed char) (~(((((/* implicit */int) (signed char)34)) << (((var_9) - (1014332033U)))))));
                var_30 *= ((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) (short)21927))));
                arr_49 [i_13] [i_9] [i_2] |= 4626132961252680081LL;
            }
            for (unsigned long long int i_16 = 0; i_16 < 11; i_16 += 2) /* same iter space */
            {
                var_31 = ((/* implicit */long long int) 161377473U);
                arr_52 [i_2] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) < (((((/* implicit */_Bool) var_0)) ? (arr_18 [i_2] [i_9] [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                var_32 = ((/* implicit */unsigned short) (short)-25);
            }
            for (short i_17 = 0; i_17 < 11; i_17 += 4) 
            {
                var_33 = (short)63;
                var_34 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-14169)) ? (((((/* implicit */_Bool) arr_19 [i_17] [i_9])) ? (arr_31 [i_17] [i_2]) : (6027730391989426179LL))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                /* LoopNest 2 */
                for (unsigned char i_18 = 0; i_18 < 11; i_18 += 3) 
                {
                    for (signed char i_19 = 2; i_19 < 9; i_19 += 3) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) 7318153446716120709LL))));
                            arr_59 [i_19 - 1] [i_19] [i_18] [(_Bool)1] [i_19] [i_2] = ((/* implicit */_Bool) (unsigned char)242);
                            arr_60 [i_2] [i_9] [i_17] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_2])) >> (((((/* implicit */int) arr_1 [i_2 - 2])) - (78)))));
                        }
                    } 
                } 
            }
            arr_61 [i_2] [(unsigned char)0] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_8))));
        }
        /* LoopNest 3 */
        for (unsigned int i_20 = 0; i_20 < 11; i_20 += 3) 
        {
            for (unsigned char i_21 = 1; i_21 < 10; i_21 += 2) 
            {
                for (short i_22 = 1; i_22 < 8; i_22 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_23 = 0; i_23 < 11; i_23 += 3) 
                        {
                            var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) ((((/* implicit */int) var_4)) <= (((/* implicit */int) arr_71 [i_2 - 4] [i_20] [i_22 - 1] [i_21 - 1] [i_23] [i_23])))))));
                            var_37 ^= ((/* implicit */signed char) ((short) arr_17 [i_23] [i_2]));
                        }
                        for (long long int i_24 = 2; i_24 < 10; i_24 += 4) 
                        {
                            var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 5394552652168277623LL)) ? (((/* implicit */int) (unsigned char)42)) : ((~(((/* implicit */int) var_2))))));
                            var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) (-(((/* implicit */int) var_1)))))));
                        }
                        var_40 = ((/* implicit */int) min((var_40), ((~(((/* implicit */int) (short)3117))))));
                        var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((((/* implicit */int) var_3)) | (((/* implicit */int) (signed char)-69))))));
                    }
                } 
            } 
        } 
        var_42 = ((/* implicit */long long int) (~(((unsigned int) arr_53 [(signed char)7] [i_2] [i_2] [(signed char)7]))));
        var_43 = var_1;
    }
    var_44 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) min((var_2), (((/* implicit */short) var_0))))))))));
    var_45 &= ((/* implicit */long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) ((var_8) != (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))), (var_8)));
}
