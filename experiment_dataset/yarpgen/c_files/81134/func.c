/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81134
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 3; i_2 < 17; i_2 += 1) 
                {
                    var_19 = ((/* implicit */int) arr_2 [i_1]);
                    var_20 = ((/* implicit */_Bool) ((unsigned int) min((((/* implicit */long long int) arr_5 [5ULL] [i_2 - 1] [i_2])), (7382545489274259686LL))));
                }
                for (short i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    arr_12 [i_1] [(signed char)15] &= ((/* implicit */unsigned int) (~(((/* implicit */int) var_2))));
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) arr_5 [i_3] [i_1] [i_0]))) ? (((/* implicit */int) ((((((/* implicit */_Bool) 7382545489274259686LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (4373650655412925990LL))) <= (((/* implicit */long long int) 4294967295U))))) : (((/* implicit */int) var_2))));
                    arr_13 [i_0] [i_1] [i_3] [i_1] = ((signed char) ((150813176U) >= (((/* implicit */unsigned int) ((/* implicit */int) ((16777215LL) <= (((/* implicit */long long int) var_1))))))));
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) arr_1 [i_0]))));
                    /* LoopSeq 2 */
                    for (long long int i_4 = 2; i_4 < 17; i_4 += 4) /* same iter space */
                    {
                        arr_17 [i_4] [16ULL] = ((/* implicit */long long int) min((((/* implicit */signed char) max((arr_9 [i_4 - 1] [i_4 - 2] [i_4 - 1] [i_4]), ((_Bool)1)))), (max(((signed char)-106), (((/* implicit */signed char) arr_9 [i_4 - 2] [i_4] [i_4 + 1] [11]))))));
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((signed char) (~(((/* implicit */int) arr_10 [i_4 + 1] [i_1] [i_3] [i_4 + 1]))))))));
                    }
                    for (long long int i_5 = 2; i_5 < 17; i_5 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 4) 
                        {
                            var_24 ^= ((/* implicit */unsigned char) var_18);
                            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((arr_22 [i_0] [i_1] [i_1] [i_5] [i_5 + 1]) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_9 [i_0] [i_0] [(_Bool)1] [i_0])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_14 [11LL] [2] [(short)0] [0])))))));
                            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) var_10))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 18; i_7 += 3) 
                        {
                            var_27 = min(((!(((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), (var_14)))))), (((((/* implicit */_Bool) (unsigned char)247)) && (arr_9 [i_0] [i_1] [i_3] [i_5 - 2]))));
                            var_28 &= ((/* implicit */signed char) arr_21 [i_0] [i_1] [i_1] [i_3] [i_1] [i_1] [(_Bool)1]);
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_24 [i_7] [i_5 - 1] [i_5] [i_5] [i_5] [i_5 - 1]) <= (arr_24 [i_7] [i_5 - 2] [i_5] [i_5] [i_5] [i_5 - 2]))))) & (arr_24 [i_7] [i_5 + 1] [i_5] [2U] [i_5 - 2] [i_5 + 1])));
                        }
                        for (short i_8 = 0; i_8 < 18; i_8 += 3) 
                        {
                            var_30 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_3)) ? (3030781172U) : (var_1)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_11 [i_5] [i_3]), (((/* implicit */long long int) var_10))))) ? (((/* implicit */long long int) 4U)) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (short)2365))))))))));
                            var_31 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */int) (unsigned char)58)) : (((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) (short)3656))));
                            var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 702859268U)))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) % (var_5))))))));
                            var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) (((((_Bool)1) ? (max((var_5), (((/* implicit */unsigned long long int) (unsigned short)65535)))) : (((/* implicit */unsigned long long int) 4671253372096335530LL)))) + (12ULL))))));
                            var_34 ^= ((/* implicit */unsigned int) (_Bool)1);
                        }
                        var_35 ^= ((/* implicit */signed char) (-(((/* implicit */int) ((short) (unsigned char)180)))));
                        var_36 = ((/* implicit */signed char) (_Bool)1);
                    }
                }
                var_37 ^= ((/* implicit */long long int) arr_21 [i_1] [6LL] [i_1] [1U] [i_0] [3LL] [i_0]);
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 18; i_9 += 2) 
                {
                    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                    {
                        {
                            arr_33 [i_1] [i_10] = ((/* implicit */signed char) (unsigned char)53);
                            var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [16ULL] [(unsigned char)13] [i_10 + 1] [i_10])) & (((/* implicit */int) arr_9 [i_0] [i_1] [i_10 + 1] [i_10]))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_9 [i_0] [i_1] [i_10 + 1] [i_10 + 1]), (arr_9 [i_0] [i_1] [i_10 + 1] [i_0]))))) : (max((((/* implicit */long long int) (unsigned char)81)), (-865468988497118963LL)))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_11 = 0; i_11 < 18; i_11 += 2) 
    {
        arr_36 [(short)11] = ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) var_10)) ? (-1LL) : (var_8))), (((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_11] [i_11] [i_11]))) / (arr_3 [(unsigned char)12]))))) / (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-106))) : (702859268U)))))));
        arr_37 [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((int) -1018008538)) : (((((/* implicit */int) var_17)) | (var_6))))) : (((/* implicit */int) (unsigned char)79))));
        arr_38 [(short)10] = ((/* implicit */long long int) -1440742805);
    }
    var_39 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) var_6)) <= (max((((/* implicit */unsigned int) (_Bool)1)), (var_13))))))) * (((((/* implicit */_Bool) (signed char)25)) ? (14477064302675084414ULL) : (((/* implicit */unsigned long long int) 3485895032U))))));
    /* LoopNest 2 */
    for (unsigned char i_12 = 0; i_12 < 16; i_12 += 3) 
    {
        for (int i_13 = 0; i_13 < 16; i_13 += 4) 
        {
            {
                var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) (+(((((/* implicit */_Bool) arr_20 [i_13] [i_13] [i_13] [i_13] [i_13])) ? (((((/* implicit */_Bool) 2569236912U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3485895042U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_6)))))))))));
                arr_44 [i_12] = ((/* implicit */signed char) ((-7382545489274259687LL) >= (((/* implicit */long long int) 809072254U))));
                arr_45 [i_12] [9ULL] [i_12] = ((/* implicit */unsigned int) var_8);
            }
        } 
    } 
}
