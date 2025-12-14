/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71960
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
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 1; i_1 < 10; i_1 += 4) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) /* same iter space */
            {
                var_19 = ((int) ((unsigned long long int) -612053452369053781LL));
                var_20 = ((/* implicit */unsigned int) 612053452369053783LL);
                var_21 &= (((+(((/* implicit */int) arr_4 [i_0 - 2] [i_0 - 2])))) | (((/* implicit */int) ((((unsigned int) var_1)) < (((var_13) ^ (arr_5 [i_0] [i_0] [(unsigned char)8])))))));
            }
            for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        {
                            var_22 *= ((/* implicit */unsigned long long int) (~(((int) arr_8 [i_1 + 1]))));
                            var_23 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_5] [(_Bool)0])) ? (((/* implicit */long long int) var_3)) : (max((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)0))))), (((((/* implicit */_Bool) var_11)) ? (var_17) : (arr_14 [i_3] [i_1] [i_5] [i_4] [i_5])))))));
                            var_24 = ((/* implicit */int) arr_8 [i_0]);
                            arr_16 [i_0 - 2] [i_1] [i_3] [i_1] [10ULL] = ((/* implicit */int) min((((arr_0 [i_3] [i_3]) >= (18347591064541498975ULL))), (((_Bool) arr_6 [i_1] [i_1 + 2]))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_15 [i_1]) ? (((/* implicit */unsigned int) var_4)) : (var_18)))) && (((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) 612053452369053780LL)) && (((/* implicit */_Bool) arr_1 [i_1] [i_1]))))))));
                /* LoopSeq 1 */
                for (unsigned char i_6 = 0; i_6 < 12; i_6 += 4) 
                {
                    var_26 = ((/* implicit */long long int) ((((/* implicit */long long int) max((var_7), (((/* implicit */unsigned int) var_6))))) < (max((((/* implicit */long long int) var_18)), (var_5)))));
                    var_27 ^= ((/* implicit */long long int) (+(arr_12 [i_0 - 1] [6LL] [i_0])));
                }
                var_28 *= max((min((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 612053452369053780LL)) < (arr_0 [(unsigned char)3] [i_0 + 1])))), (var_18))), (var_7));
            }
            for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 12; i_8 += 4) 
                {
                    for (unsigned int i_9 = 1; i_9 < 11; i_9 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_13 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 2] [i_0]), (((/* implicit */unsigned int) ((arr_3 [i_8]) >= (((/* implicit */long long int) -319488958)))))))) ? (var_8) : (((((arr_19 [i_0] [i_8] [i_0] [(unsigned short)0]) * (((/* implicit */unsigned long long int) var_11)))) | (((/* implicit */unsigned long long int) var_14)))))))));
                            var_30 *= ((/* implicit */unsigned short) ((unsigned long long int) max((((/* implicit */long long int) ((unsigned int) var_14))), (((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */long long int) 3566071567U)))))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) arr_11 [i_1 + 2] [i_1] [(signed char)9] [i_0 - 2] [i_0])) | (4210024905080773057ULL))));
                var_32 |= max((var_10), (var_14));
                var_33 = ((/* implicit */unsigned short) ((((/* implicit */int) ((var_9) > (((/* implicit */unsigned long long int) arr_14 [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 2]))))) > (max((((/* implicit */int) var_2)), (var_15)))));
            }
            /* LoopNest 3 */
            for (unsigned char i_10 = 0; i_10 < 12; i_10 += 1) 
            {
                for (unsigned int i_11 = 0; i_11 < 12; i_11 += 4) 
                {
                    for (unsigned char i_12 = 2; i_12 < 11; i_12 += 4) 
                    {
                        {
                            arr_38 [i_1] [i_11] [(unsigned char)8] [i_0 + 1] [i_0 + 1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-103)) ? (-319488958) : (2013586820)));
                            var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) max((-1616647359), (((/* implicit */int) (unsigned short)62278)))))));
                            var_35 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_1))) > (max((((/* implicit */long long int) arr_25 [i_12] [i_12 - 1] [i_12 - 1] [i_1] [i_12] [i_12])), (var_11)))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (signed char i_13 = 1; i_13 < 10; i_13 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned int i_14 = 2; i_14 < 9; i_14 += 2) 
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_15 = 0; i_15 < 12; i_15 += 2) 
                {
                    var_36 -= ((/* implicit */unsigned int) ((arr_2 [i_0 - 2] [i_14 - 1]) > (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                    var_37 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_13 + 1]))));
                    arr_45 [i_0] [i_0] [i_13] [i_0] [i_13] = ((/* implicit */_Bool) ((((arr_33 [7U] [i_13] [7U]) ? (var_17) : (((/* implicit */long long int) 996400674)))) | (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_0 - 2] [i_0 - 2])))));
                    arr_46 [i_0] [i_13] [i_14 - 2] [i_15] = ((/* implicit */long long int) (-(arr_40 [i_13] [i_13])));
                    var_38 = ((/* implicit */signed char) ((((2429210666462918983ULL) - (((/* implicit */unsigned long long int) var_5)))) / (((/* implicit */unsigned long long int) arr_5 [(unsigned char)3] [i_13] [i_0]))));
                }
                for (unsigned int i_16 = 0; i_16 < 12; i_16 += 3) 
                {
                    var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4)))))));
                    var_40 = ((/* implicit */unsigned long long int) ((unsigned short) arr_44 [5U] [5U] [i_13] [7U]));
                    arr_49 [i_16] [i_13] [i_16] [i_16] [i_0] [i_0 - 1] = ((var_14) > (((unsigned int) arr_30 [i_0 + 1] [i_0 - 1] [i_13])));
                }
                for (unsigned short i_17 = 0; i_17 < 12; i_17 += 1) /* same iter space */
                {
                    var_41 += arr_22 [(unsigned short)9] [i_14] [i_0] [i_0];
                    var_42 &= ((/* implicit */unsigned short) var_13);
                }
                for (unsigned short i_18 = 0; i_18 < 12; i_18 += 1) /* same iter space */
                {
                    var_43 = ((/* implicit */unsigned char) min((var_43), (((/* implicit */unsigned char) arr_4 [i_13 + 2] [i_13]))));
                    arr_55 [i_13] [i_13] [i_14] [i_18] [i_18] = ((/* implicit */int) var_18);
                }
                var_44 = ((/* implicit */unsigned int) ((arr_31 [i_0] [i_13 + 1] [i_14 + 2] [i_14 + 2]) / (((/* implicit */long long int) arr_26 [i_14] [i_13 + 1] [i_0]))));
            }
            for (unsigned char i_19 = 0; i_19 < 12; i_19 += 2) 
            {
                var_45 = var_4;
                var_46 &= (+(var_5));
            }
            /* LoopNest 3 */
            for (long long int i_20 = 0; i_20 < 12; i_20 += 4) 
            {
                for (unsigned short i_21 = 0; i_21 < 12; i_21 += 2) 
                {
                    for (unsigned short i_22 = 1; i_22 < 8; i_22 += 3) 
                    {
                        {
                            var_47 = ((/* implicit */unsigned char) (((!(arr_47 [i_0 - 2] [8ULL] [i_21] [i_22 - 1]))) || (((/* implicit */_Bool) arr_0 [i_13 + 1] [i_13 + 1]))));
                            var_48 = ((/* implicit */short) max((var_48), (((/* implicit */short) var_10))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_23 = 0; i_23 < 12; i_23 += 2) 
        {
            var_49 = ((/* implicit */signed char) ((unsigned long long int) (unsigned char)143));
            var_50 = ((/* implicit */int) var_9);
        }
        arr_68 [i_0] = arr_37 [10U] [i_0 - 1];
        /* LoopNest 3 */
        for (unsigned long long int i_24 = 0; i_24 < 12; i_24 += 4) 
        {
            for (int i_25 = 0; i_25 < 12; i_25 += 4) 
            {
                for (unsigned char i_26 = 0; i_26 < 12; i_26 += 4) 
                {
                    {
                        arr_76 [i_26] [i_0] [8LL] [i_26] = ((/* implicit */unsigned long long int) var_15);
                        arr_77 [(unsigned char)6] [i_24] [i_25] [(unsigned char)6] |= ((/* implicit */unsigned int) var_1);
                        arr_78 [i_0] = ((/* implicit */unsigned int) arr_8 [i_0 - 2]);
                    }
                } 
            } 
        } 
    }
    var_51 = ((/* implicit */int) var_2);
    var_52 = ((/* implicit */long long int) ((unsigned int) var_5));
}
