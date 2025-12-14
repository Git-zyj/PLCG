/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89617
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)634)), (238054463U)))), (((((/* implicit */_Bool) (short)623)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)72))) : (var_11)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (min((var_4), (var_4)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [(unsigned short)5] [i_1] [i_1] = ((((/* implicit */int) max((((/* implicit */short) arr_0 [i_0])), (arr_6 [i_0 - 3] [i_0 - 3])))) ^ (((/* implicit */int) ((unsigned char) -464907405917258559LL))));
                var_17 = ((/* implicit */unsigned long long int) var_0);
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 1; i_2 < 11; i_2 += 1) /* same iter space */
                {
                    arr_12 [i_0] [i_0 - 1] [i_2 + 2] = ((/* implicit */unsigned long long int) arr_4 [i_2 - 1] [i_2 + 1] [i_1]);
                    var_18 = ((/* implicit */unsigned char) ((unsigned long long int) 755033878U));
                }
                for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 1) /* same iter space */
                {
                    var_19 = ((/* implicit */long long int) arr_0 [i_0]);
                    var_20 = ((/* implicit */int) arr_5 [i_0 - 3] [i_0 + 1] [i_3 + 1]);
                }
                for (long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 464907405917258559LL)) ? (((/* implicit */int) (unsigned short)17647)) : (((((/* implicit */int) (short)-30095)) - (arr_14 [0] [i_0 - 1] [i_0 - 2] [i_0])))));
                    var_22 = ((((((((/* implicit */_Bool) arr_13 [i_4] [i_1] [i_0] [i_0])) ? (arr_4 [i_4] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_4] [2ULL]))))) | (((/* implicit */long long int) arr_10 [i_4] [i_1] [i_0])))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((((/* implicit */int) arr_0 [i_0])) << (((((/* implicit */int) var_5)) - (60)))))))));
                    var_23 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_1)), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 667276402636760940ULL)) ? (((/* implicit */int) (short)30095)) : (((/* implicit */int) arr_16 [i_4] [i_1] [i_0]))))), (min((arr_2 [i_0]), (((/* implicit */unsigned int) arr_6 [8] [i_1]))))))));
                }
                var_24 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)3584)) ? (-1323592273) : (((/* implicit */int) (_Bool)1))))), (((unsigned int) arr_4 [i_1] [i_0 + 1] [i_0 - 3]))));
                /* LoopSeq 2 */
                for (unsigned long long int i_5 = 1; i_5 < 11; i_5 += 1) 
                {
                    var_25 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((unsigned char) max((arr_1 [i_0 - 1]), (((/* implicit */unsigned int) arr_8 [i_0] [i_1])))))), (arr_18 [i_5] [i_1] [i_5])));
                    /* LoopNest 2 */
                    for (short i_6 = 1; i_6 < 10; i_6 += 3) 
                    {
                        for (int i_7 = 1; i_7 < 12; i_7 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned short) max((0LL), (((/* implicit */long long int) (short)-609))));
                                var_27 = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_7] [i_1])) ? (((/* implicit */int) ((short) max(((short)-634), (((/* implicit */short) (signed char)101)))))) : (((((/* implicit */_Bool) arr_25 [i_0] [i_0 - 3] [i_5 + 2] [8] [i_7 - 1])) ? (var_2) : (var_15)))));
                                var_28 = ((/* implicit */unsigned int) ((unsigned char) -1808248570));
                                var_29 = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) arr_22 [i_7] [i_5] [i_5] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_25 [i_0] [(unsigned char)12] [i_5] [i_1] [i_0]))), (((/* implicit */unsigned int) max(((unsigned short)6630), (((/* implicit */unsigned short) (_Bool)1))))))) - (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_15 [i_0] [i_1])) : (arr_19 [i_0] [i_0]))), (((((/* implicit */_Bool) arr_10 [i_6 + 1] [i_1] [i_1])) ? (arr_24 [i_6] [i_5] [i_0]) : (arr_22 [i_0] [(unsigned char)6] [i_5] [(unsigned char)11]))))))));
                                var_30 = ((/* implicit */int) ((unsigned int) min((((/* implicit */unsigned long long int) ((int) arr_24 [i_1] [i_5 + 1] [4]))), (((unsigned long long int) arr_23 [i_1] [i_6 + 1])))));
                            }
                        } 
                    } 
                    var_31 = (!(((/* implicit */_Bool) max((arr_8 [i_5 - 1] [i_0 - 1]), (arr_8 [i_5 + 2] [i_0 - 2])))));
                }
                for (short i_8 = 2; i_8 < 12; i_8 += 4) 
                {
                    arr_29 [i_1] [i_8 - 1] = ((/* implicit */unsigned char) arr_9 [i_1] [i_1] [i_8]);
                    /* LoopSeq 1 */
                    for (long long int i_9 = 0; i_9 < 13; i_9 += 2) 
                    {
                        var_32 = ((/* implicit */unsigned int) arr_21 [i_0] [i_0 + 1] [i_1] [i_1] [i_8] [i_9]);
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 3; i_10 < 12; i_10 += 2) 
                        {
                            arr_34 [i_10] [i_1] [i_10] = ((/* implicit */short) min((((/* implicit */int) ((unsigned char) arr_22 [i_0] [i_1] [i_10] [i_9]))), (var_2)));
                            arr_35 [i_8] [i_8 - 1] [i_10] [4ULL] [i_10] [(unsigned char)5] = ((/* implicit */int) (((_Bool)1) ? (((((/* implicit */_Bool) -4566177921076318619LL)) ? (-8237849641294145803LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))))) : (4566177921076318638LL)));
                            var_33 = ((/* implicit */_Bool) max((8958479597494841563LL), (((/* implicit */long long int) ((signed char) min((arr_0 [i_0]), (((/* implicit */unsigned char) (signed char)(-127 - 1)))))))));
                            arr_36 [i_10] [i_10] = ((/* implicit */_Bool) (+(((unsigned long long int) ((((/* implicit */_Bool) -6360053614950646476LL)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58588))))))));
                            var_34 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */long long int) 930859177)) : (-8355464409773920162LL)))), (min((var_4), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-2083)) ? (((/* implicit */int) (short)30094)) : (((/* implicit */int) var_7)))))))));
                        }
                        arr_37 [(signed char)5] = ((/* implicit */long long int) var_2);
                        var_35 = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_9 [i_0] [i_8] [i_9])))) ? (((/* implicit */long long int) arr_23 [i_9] [i_0])) : (max((((arr_4 [i_8] [i_1] [i_0 - 3]) & (((/* implicit */long long int) ((/* implicit */int) var_5))))), (((/* implicit */long long int) ((unsigned short) arr_1 [i_0])))))));
                    }
                }
            }
        } 
    } 
    var_36 = ((/* implicit */unsigned short) ((((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (signed char)124)) - (104))))) < (max((((/* implicit */int) var_8)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (var_2)))))));
    var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-27)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (min((((/* implicit */long long int) (unsigned short)58588)), (((((/* implicit */_Bool) 6360053614950646487LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-464907405917258563LL)))))));
}
