/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66583
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
    var_12 = ((/* implicit */long long int) min((((/* implicit */unsigned char) ((min((((/* implicit */long long int) var_1)), (var_10))) == (((/* implicit */long long int) ((/* implicit */int) min((var_0), (((/* implicit */unsigned short) var_8))))))))), (((unsigned char) min((5112929772056356004ULL), (((/* implicit */unsigned long long int) (unsigned short)11102)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 4; i_0 < 9; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            var_13 = ((/* implicit */long long int) max(((~(((/* implicit */int) var_1)))), (((/* implicit */int) arr_4 [i_0 - 3]))));
            var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (((~(((/* implicit */int) (unsigned short)12665)))) < (((arr_0 [i_0 - 2]) >> (((((/* implicit */int) (signed char)-32)) + (46))))))))));
            /* LoopSeq 2 */
            for (short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                var_15 = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */int) arr_4 [i_0 + 1])) != (((/* implicit */int) arr_4 [i_0 - 2]))))), (((var_4) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_4))))));
                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) max((((/* implicit */unsigned short) ((min((arr_5 [i_0] [i_0] [i_2] [i_2]), (((/* implicit */unsigned long long int) arr_0 [i_2])))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))), (min((((/* implicit */unsigned short) max((var_6), ((signed char)-1)))), (var_0))))))));
                arr_7 [i_0] [i_0] [i_0] [i_0 - 2] = ((/* implicit */_Bool) ((arr_3 [i_0 - 4] [i_0 - 1]) << (((/* implicit */int) min(((unsigned char)192), (((/* implicit */unsigned char) var_1)))))));
            }
            for (short i_3 = 0; i_3 < 10; i_3 += 3) 
            {
                arr_12 [i_0] [i_0] [i_3] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (var_9)))) ? (((((/* implicit */_Bool) arr_8 [i_0 - 4] [i_0] [i_0 - 3])) ? (((/* implicit */int) (unsigned char)58)) : (((/* implicit */int) arr_6 [i_0])))) : (((((/* implicit */_Bool) arr_5 [i_0 - 4] [i_0 - 4] [i_0 - 4] [i_0 - 2])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_6 [i_0 - 4]))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (-(((/* implicit */int) var_4)))))));
                    /* LoopSeq 2 */
                    for (int i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        var_18 = ((/* implicit */int) ((((/* implicit */long long int) var_11)) == (var_10)));
                        var_19 = ((/* implicit */unsigned short) (~(((var_7) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))));
                        arr_17 [i_0 - 1] [i_0 - 1] [i_3] [i_3] [i_0 - 1] [i_4] [i_0 - 1] = ((/* implicit */unsigned char) var_10);
                        var_20 &= ((/* implicit */short) var_5);
                    }
                    for (short i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        var_21 -= ((/* implicit */int) (_Bool)1);
                        var_22 = ((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_1] [i_0 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((var_7) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_11))));
                        arr_21 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 3] = ((/* implicit */unsigned int) (((_Bool)1) ? (arr_11 [i_0 - 2] [i_4] [i_3]) : (((/* implicit */int) var_8))));
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_8 [i_0 - 4] [i_0 - 4] [i_1])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_5))));
                    }
                }
                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (((-(arr_3 [i_0] [i_1]))) % (((/* implicit */int) var_8)))))));
            }
            var_25 = ((/* implicit */unsigned int) var_9);
        }
        /* LoopSeq 3 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_24 [i_0 - 4] [i_7] [i_0] = (-(((int) max((((/* implicit */unsigned long long int) arr_18 [i_0] [i_0] [i_0 - 2] [i_0])), (var_2)))));
            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) var_9))));
        }
        for (unsigned char i_8 = 0; i_8 < 10; i_8 += 3) /* same iter space */
        {
            arr_28 [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_0] [i_8] [i_0 - 2])) % (((/* implicit */int) (short)-1))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) + (var_9))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_1 [i_0 - 2])))))));
            var_27 = ((/* implicit */int) max((var_27), (((arr_0 [i_0 - 2]) % (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 + 1])) != (((/* implicit */int) var_4)))))))));
        }
        for (unsigned char i_9 = 0; i_9 < 10; i_9 += 3) /* same iter space */
        {
            var_28 = (-(max(((-(0LL))), (min((((/* implicit */long long int) var_0)), (var_10))))));
            arr_32 [i_0] &= ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) || (((/* implicit */_Bool) (unsigned char)173))))), (min((((/* implicit */long long int) arr_13 [i_0 + 1] [i_0 - 1] [i_0 - 3] [i_0 - 1])), (max((((/* implicit */long long int) var_7)), (1152921504606846912LL)))))));
            arr_33 [i_0 - 3] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)29849)), (var_0)))) ? (((/* implicit */int) arr_6 [i_0 - 2])) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_6 [i_0 - 4])) : (((/* implicit */int) (unsigned short)0))))));
        }
        arr_34 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) -2120972190)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-1)))));
        var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -4341027108614997196LL)), ((~(min((var_9), (((/* implicit */unsigned long long int) (unsigned char)0)))))))))));
    }
    for (long long int i_10 = 4; i_10 < 9; i_10 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_11 = 3; i_11 < 7; i_11 += 4) 
        {
            var_30 *= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_39 [i_11 - 3] [i_10 - 2] [i_10 - 4])) ? (arr_39 [i_11 + 1] [i_10 - 1] [i_10 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (short)-30564))))), (((/* implicit */long long int) min((((/* implicit */unsigned short) var_1)), ((unsigned short)45618))))));
            /* LoopSeq 1 */
            for (signed char i_12 = 2; i_12 < 8; i_12 += 2) 
            {
                arr_44 [i_12] = ((/* implicit */signed char) 17815116510493507890ULL);
                arr_45 [i_10] [i_11 + 2] [i_12] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_37 [i_10 - 2] [i_12 - 2] [i_12 + 2])))) * (max((((/* implicit */unsigned long long int) var_8)), (arr_16 [i_10 - 1] [i_10 + 1])))));
            }
            var_31 += ((((/* implicit */_Bool) -4546306158008538146LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)));
        }
        arr_46 [i_10 - 1] = ((/* implicit */long long int) ((min((369052113), (((/* implicit */int) var_5)))) & (-13696977)));
        var_32 -= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned char) arr_40 [i_10 - 4] [i_10]))), (var_10)));
    }
    var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) < (((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : ((~(954904558U))))))))));
}
