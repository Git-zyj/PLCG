/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76732
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0]);
        /* LoopSeq 2 */
        for (int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_2 = 2; i_2 < 11; i_2 += 4) 
            {
                var_11 = var_6;
                /* LoopSeq 1 */
                for (unsigned char i_3 = 1; i_3 < 14; i_3 += 4) 
                {
                    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(10415276136950533218ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_4)))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_3])) ? (524287U) : (var_3)))))) ? ((-(((/* implicit */int) ((((/* implicit */_Bool) 4265289924U)) && (((/* implicit */_Bool) 2388205314U))))))) : (((/* implicit */int) min((arr_4 [i_1 - 2] [i_2 + 4]), (arr_4 [i_1 + 3] [i_2 - 1]))))));
                    var_13 = ((/* implicit */unsigned short) (~(max((((((/* implicit */_Bool) arr_1 [i_2] [i_3])) ? (((/* implicit */unsigned int) var_1)) : (2180562981U))), (arr_8 [i_0] [i_0 + 1] [i_2] [i_3 - 1])))));
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) -1102582242787744378LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)189))) : (((((/* implicit */_Bool) arr_11 [i_1 + 4])) ? (var_2) : (arr_11 [i_1 - 1])))));
                }
            }
            /* LoopSeq 2 */
            for (unsigned int i_4 = 0; i_4 < 15; i_4 += 1) 
            {
                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((((/* implicit */long long int) arr_6 [i_0 + 1] [i_1 + 2] [i_1 - 1] [i_4])) >= (7358631599699388998LL)))) : (((/* implicit */int) ((arr_13 [i_0 - 1] [i_4] [i_4]) >= (arr_13 [i_0 + 2] [i_0] [i_4])))))))));
                arr_16 [i_0] [i_1] [i_4] = arr_14 [i_0] [i_1] [i_1] [i_4];
            }
            for (unsigned short i_5 = 0; i_5 < 15; i_5 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 15; i_6 += 2) 
                {
                    for (unsigned int i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned char)113)) ? (-7358631599699389003LL) : (((/* implicit */long long int) min((((/* implicit */unsigned int) -726481442)), (3221225472U))))))));
                            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17095006U)) ? ((~(var_2))) : (max((((((/* implicit */_Bool) 8031467936759018397ULL)) ? (arr_19 [i_0] [i_5] [i_7]) : (var_0))), (max((var_7), (var_0))))))))));
                            arr_26 [i_1] [i_5] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_18 [i_1 + 2] [i_1 + 4])) ? ((+(((/* implicit */int) var_6)))) : (1656087542))) >> (((((((/* implicit */_Bool) var_9)) ? (min((((/* implicit */long long int) arr_19 [i_1] [i_5] [i_6])), (var_8))) : (((/* implicit */long long int) ((/* implicit */int) ((var_7) >= (arr_6 [i_0] [i_0] [i_0] [i_0]))))))) - (3559673364LL)))));
                            var_18 = ((/* implicit */long long int) ((((((unsigned int) 145833214U)) >= (arr_18 [i_0 - 4] [i_0]))) ? (2388205331U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((10415276136950533218ULL) >= (arr_13 [i_1] [i_5] [i_6])))))))));
                            var_19 = ((/* implicit */int) var_0);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (long long int i_8 = 0; i_8 < 15; i_8 += 3) /* same iter space */
                {
                    var_20 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_1)))) ? (arr_19 [i_0] [i_1] [i_1]) : (min((arr_19 [i_1 + 1] [i_1] [i_8]), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1]))) < (arr_20 [i_0]))))))));
                    var_21 = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_5] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned short)61541)))) : (arr_8 [i_0 + 3] [i_1 + 3] [i_5] [i_8])))));
                    var_22 = ((/* implicit */int) (~(var_2)));
                }
                for (long long int i_9 = 0; i_9 < 15; i_9 += 3) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned char) max((66060288U), (2114404307U)));
                    arr_33 [i_9] [i_5] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) max(((+(8590897731987695211LL))), (var_8)));
                }
            }
            var_24 = ((/* implicit */int) 4060854567U);
            var_25 = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_10 [i_0 - 2] [i_0 + 3] [i_0 - 3] [i_0 + 2])) ? (arr_8 [i_0 - 4] [i_0 - 4] [i_0 + 1] [i_0 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0 + 3] [i_0 + 3] [i_0 + 2] [i_0 - 2])))))));
        }
        for (unsigned int i_10 = 0; i_10 < 15; i_10 += 4) 
        {
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (+(((/* implicit */int) arr_12 [i_0]))))), (var_4)))) && (((/* implicit */_Bool) ((((/* implicit */long long int) arr_27 [i_0] [i_0] [i_0] [i_0] [i_10] [i_10])) ^ (var_8))))));
            var_27 ^= max((var_2), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_10] [i_10] [i_10]))))));
            var_28 -= ((/* implicit */unsigned int) var_4);
            arr_38 [i_0] [i_0] [i_10] = ((/* implicit */unsigned short) ((unsigned long long int) var_2));
        }
        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) arr_35 [i_0])) : (((((/* implicit */_Bool) (~(8031467936759018395ULL)))) ? (((long long int) arr_20 [i_0])) : (((/* implicit */long long int) arr_5 [i_0 - 2] [i_0] [i_0 - 3]))))));
    }
    for (unsigned int i_11 = 0; i_11 < 23; i_11 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_12 = 4; i_12 < 22; i_12 += 2) 
        {
            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_40 [i_12 - 1])) ? (var_0) : (arr_40 [i_12 + 1])));
            var_31 = ((/* implicit */unsigned short) ((arr_42 [i_12 + 1] [i_12 - 4]) / (arr_42 [i_12 + 1] [i_12 - 1])));
            var_32 = (+(((((/* implicit */_Bool) arr_40 [i_11])) ? (((/* implicit */int) (unsigned char)67)) : (var_1))));
        }
        var_33 = ((/* implicit */int) (((!((!(((/* implicit */_Bool) var_8)))))) ? (((((((/* implicit */unsigned long long int) var_3)) > (18104376868129274042ULL))) ? (arr_39 [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_8)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_41 [i_11]))))));
        var_34 = 2639477587U;
    }
    /* LoopNest 3 */
    for (int i_13 = 0; i_13 < 21; i_13 += 4) 
    {
        for (unsigned long long int i_14 = 3; i_14 < 17; i_14 += 2) 
        {
            for (unsigned char i_15 = 0; i_15 < 21; i_15 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_16 = 1; i_16 < 18; i_16 += 3) 
                    {
                        var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) arr_54 [i_14] [i_16] [i_16] [i_16 - 1]))));
                        arr_57 [i_14] [i_15] [i_14] [i_14] = ((/* implicit */long long int) (~(((var_10) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                    }
                    for (unsigned char i_17 = 0; i_17 < 21; i_17 += 3) 
                    {
                        var_36 ^= ((/* implicit */unsigned short) 3707083363U);
                        var_37 ^= ((/* implicit */int) ((((/* implicit */_Bool) 524272U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65533))) : (9766803756326505823ULL)));
                        arr_61 [i_13] [i_14] [i_15] [i_17] [i_14] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_48 [i_14 - 2])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_14 + 2])))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_18 = 3; i_18 < 20; i_18 += 3) 
                    {
                        for (unsigned long long int i_19 = 0; i_19 < 21; i_19 += 3) 
                        {
                            {
                                var_38 = ((/* implicit */unsigned long long int) var_9);
                                var_39 = ((/* implicit */unsigned int) min((((unsigned long long int) ((((/* implicit */_Bool) arr_43 [i_18])) ? (arr_39 [i_14]) : (var_2)))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))) & ((~(var_7))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) 0U))));
    var_41 = ((/* implicit */unsigned char) var_9);
    var_42 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_7) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_5)) > (var_10)))))))) ? ((-(var_4))) : (((/* implicit */long long int) var_5))));
}
