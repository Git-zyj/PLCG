/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76413
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */_Bool) min((var_13), (((((/* implicit */_Bool) ((signed char) max((arr_0 [i_0] [i_1 - 1]), (((/* implicit */unsigned short) var_8)))))) && (arr_2 [i_0])))));
                /* LoopSeq 2 */
                for (short i_2 = 3; i_2 < 16; i_2 += 4) /* same iter space */
                {
                    arr_8 [4LL] [(unsigned short)11] [i_2] = ((/* implicit */signed char) ((arr_1 [i_1] [i_1]) & (((/* implicit */int) ((_Bool) arr_4 [i_1])))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_2] [3LL] [i_0] [i_4] = (+(((max((7929477876802264564ULL), (var_3))) << (((max((((/* implicit */long long int) var_8)), (arr_7 [i_1 - 1]))) - (6880597960895719280LL))))));
                                var_14 -= ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1])) && (((/* implicit */_Bool) ((unsigned short) 81135570715974557LL))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */int) arr_6 [i_1]);
                    arr_14 [i_2] [i_1 - 1] [i_1 - 1] = ((/* implicit */int) arr_12 [i_0] [i_2] [(short)17] [i_2]);
                    arr_15 [i_2] [i_2] = ((/* implicit */short) max((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_7 [i_0]))))), ((signed char)-127)));
                }
                for (short i_5 = 3; i_5 < 16; i_5 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (short i_6 = 0; i_6 < 18; i_6 += 1) 
                    {
                        arr_21 [(short)10] &= ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_1 [i_1 - 1] [i_0 - 1]), (arr_1 [i_1 - 1] [i_0 - 1])))) ? (max((((/* implicit */unsigned long long int) arr_1 [i_1 - 1] [i_0 - 1])), (16155345478780603632ULL))) : (((/* implicit */unsigned long long int) arr_1 [i_1 - 1] [i_0 - 1]))));
                        var_16 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) max((var_8), (arr_18 [i_5] [i_1] [i_5] [i_6])))) > (((/* implicit */int) ((short) arr_17 [i_0] [i_1 - 1]))))))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_7 = 0; i_7 < 18; i_7 += 1) 
                    {
                        var_17 = ((/* implicit */signed char) ((int) (~(((/* implicit */int) arr_10 [(unsigned short)10] [0LL] [i_1] [i_0 - 1] [i_0 + 1] [i_0 + 1])))));
                        var_18 = ((/* implicit */_Bool) ((arr_19 [i_0] [i_0] [i_5 - 1] [i_0]) ? (arr_6 [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])))));
                        var_19 = arr_4 [(short)9];
                        var_20 = ((/* implicit */int) arr_19 [i_0] [i_0 + 1] [2ULL] [i_5 - 2]);
                    }
                    /* vectorizable */
                    for (short i_8 = 0; i_8 < 18; i_8 += 2) 
                    {
                        arr_27 [i_5] [i_1] [i_1 - 1] [i_1 - 1] = ((/* implicit */_Bool) ((short) (unsigned char)205));
                        arr_28 [i_0] [i_5] [(short)17] [i_8] = ((/* implicit */short) (~(((((/* implicit */int) arr_4 [13ULL])) * (((/* implicit */int) arr_0 [i_0] [i_0]))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned char) (!(arr_19 [i_5 + 1] [i_1 - 1] [i_1] [i_1])));
                            var_22 = ((/* implicit */int) ((unsigned int) arr_5 [i_5 - 2] [i_5 - 2]));
                            var_23 = ((/* implicit */long long int) ((signed char) (-(((/* implicit */int) arr_12 [i_0 - 1] [i_5] [i_5] [i_0])))));
                            var_24 = ((/* implicit */unsigned long long int) var_8);
                            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) var_12))));
                        }
                        for (unsigned long long int i_10 = 2; i_10 < 17; i_10 += 3) 
                        {
                            var_26 = arr_11 [i_1 - 1] [i_0] [i_1 - 1];
                            var_27 = ((/* implicit */unsigned char) ((unsigned long long int) arr_30 [i_0] [1LL] [i_1] [i_5 + 2] [i_5] [i_10 - 2]));
                        }
                    }
                }
                /* LoopNest 3 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (long long int i_12 = 0; i_12 < 18; i_12 += 1) 
                    {
                        for (short i_13 = 4; i_13 < 17; i_13 += 4) 
                        {
                            {
                                arr_40 [i_0 - 1] [14LL] [14LL] [i_12] [3LL] [(_Bool)1] [(_Bool)1] = ((/* implicit */long long int) arr_3 [i_0 - 1] [i_1] [i_0 - 1]);
                                var_28 = (i_12 % 2 == zero) ? (((/* implicit */unsigned short) ((((((((((/* implicit */_Bool) arr_1 [i_12] [(unsigned short)12])) ? (var_7) : (((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((/* implicit */int) ((7753264815609402923LL) <= (((/* implicit */long long int) ((/* implicit */int) (short)-4598)))))))) << (((((((/* implicit */int) max((arr_38 [i_12] [i_1 - 1] [i_13] [i_12] [(signed char)9] [13U]), (arr_38 [i_12] [i_1 - 1] [i_11] [i_12] [i_13] [i_12])))) + (17769))) - (30)))))) : (((/* implicit */unsigned short) ((((((((((/* implicit */_Bool) arr_1 [i_12] [(unsigned short)12])) ? (var_7) : (((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((/* implicit */int) ((7753264815609402923LL) <= (((/* implicit */long long int) ((/* implicit */int) (short)-4598)))))))) << (((((((((/* implicit */int) max((arr_38 [i_12] [i_1 - 1] [i_13] [i_12] [(signed char)9] [13U]), (arr_38 [i_12] [i_1 - 1] [i_11] [i_12] [i_13] [i_12])))) + (17769))) - (30))) - (9672))))));
                                arr_41 [i_0] [i_0] [i_0] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-8569)) < (((/* implicit */int) arr_19 [14U] [i_1] [i_11] [i_0])))) ? ((((_Bool)1) ? (arr_25 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_0] [i_1 - 1] [i_11] [i_11] [i_1 - 1]))))) : (((/* implicit */long long int) ((((/* implicit */int) var_5)) - (((/* implicit */int) (unsigned char)184)))))))) && (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_11 [i_0] [2] [i_0])) : (((/* implicit */int) var_1))))) || (((((/* implicit */_Bool) arr_26 [(_Bool)1] [(signed char)12] [(signed char)12] [i_12] [i_13] [i_13])) || (((/* implicit */_Bool) 87732257881672251LL))))))));
                                var_29 &= ((/* implicit */short) (+(((/* implicit */int) ((unsigned short) arr_22 [i_1 - 1] [i_1] [i_13 - 3] [i_12])))));
                            }
                        } 
                    } 
                } 
                var_30 = ((/* implicit */signed char) (~(min((((/* implicit */int) arr_10 [(short)6] [(short)6] [i_0] [i_0 + 1] [2U] [(short)6])), (((((/* implicit */_Bool) 3446511060U)) ? (((/* implicit */int) var_2)) : (arr_1 [i_0] [i_1 - 1])))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 4) /* same iter space */
                {
                    arr_44 [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned long long int) var_11);
                    arr_45 [i_0] [i_0] [i_0] [i_14] = ((/* implicit */short) ((unsigned long long int) (+(((arr_24 [(short)4] [(short)4] [i_14] [i_1] [(short)4] [i_14]) ^ (((/* implicit */long long int) 2633312003U)))))));
                    var_31 = ((/* implicit */int) ((_Bool) ((((3446511060U) == (1661655306U))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_14]))))));
                }
                /* vectorizable */
                for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 4) /* same iter space */
                {
                    arr_48 [(unsigned short)3] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_1 - 1])) ? (arr_7 [i_1 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    var_32 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)48)) || (((/* implicit */_Bool) 3179793661U)))))) > (arr_29 [i_0] [i_15] [i_15] [i_1 - 1] [i_1 - 1]));
                }
            }
        } 
    } 
    var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) max((((unsigned int) var_3)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), (var_12)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_9))))) : (var_7)))))))));
}
