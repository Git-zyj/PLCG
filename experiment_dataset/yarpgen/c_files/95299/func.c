/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95299
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
    var_20 = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) (-(var_11)))), (var_18))) << (((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), ((signed char)44))))));
    var_21 = ((/* implicit */signed char) var_11);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (long long int i_2 = 4; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_2] [i_1] [i_2] &= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_5 [i_0] [i_2 - 3] [19ULL])))) * (((((/* implicit */_Bool) 1708684176U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-72))) : (14279453737046917401ULL)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) 12195875184453895272ULL)) || (((/* implicit */_Bool) ((12195875184453895272ULL) << (((/* implicit */int) (signed char)44)))))));
                        arr_12 [i_0] [0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_2 + 2] [i_2 - 2] [i_2])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)2)) : (((/* implicit */int) var_16)))) : (((/* implicit */int) ((short) var_3)))));
                        var_23 = ((/* implicit */short) arr_11 [i_0] [i_1] [i_1] [i_1] [i_1]);
                        var_24 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [(unsigned short)11] [i_1] [i_3])) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3] [i_2 + 3] [i_0])))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        arr_16 [i_0] [i_2] [(short)20] [i_4] [12U] [i_2] &= ((/* implicit */long long int) ((((/* implicit */_Bool) min((min((((/* implicit */long long int) (unsigned short)2)), (2811617846301375422LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [(signed char)10] [i_2])))))))) && ((!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_1)), (arr_2 [i_0] [i_1] [i_1]))))))));
                        var_25 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_10 [i_0] [i_2 - 4] [7U] [17U]))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_10 [(signed char)10] [i_2 + 3] [i_2] [12U])))))) : (((long long int) arr_8 [i_2 - 1] [i_2]))));
                        arr_17 [i_0] [18ULL] [14] [i_4] = ((/* implicit */short) arr_13 [i_0] [i_1] [i_2] [i_0]);
                        var_26 -= ((/* implicit */unsigned long long int) ((unsigned int) (+(((/* implicit */int) ((signed char) arr_0 [i_0] [i_2]))))));
                    }
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        arr_20 [i_0] [i_1] [i_2 + 1] = ((/* implicit */_Bool) arr_7 [i_0]);
                        arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) -7728818843241060849LL);
                    }
                    for (int i_6 = 3; i_6 < 18; i_6 += 3) 
                    {
                        var_27 = ((/* implicit */int) max((((3084951355U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62474))))), (((/* implicit */unsigned int) var_2))));
                        arr_25 [17ULL] [i_0] = ((/* implicit */unsigned long long int) max((arr_10 [i_1] [i_1] [i_0] [(signed char)19]), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))));
                    }
                    var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) -1070139572)) ? (((/* implicit */int) (short)12632)) : (((/* implicit */int) (unsigned char)0)))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) arr_11 [i_2] [i_2] [(_Bool)1] [i_1] [i_2])) : (((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) 12195875184453895284ULL)) ? (((/* implicit */int) arr_15 [i_0] [(unsigned char)16] [i_2] [i_0])) : (var_1))) : (((/* implicit */int) max((arr_19 [i_0] [i_1] [7LL]), (((/* implicit */signed char) (_Bool)0))))))))))));
                    var_29 = ((/* implicit */signed char) ((((_Bool) max((((/* implicit */unsigned long long int) 9223372036854775807LL)), (0ULL)))) ? (((((/* implicit */_Bool) (short)6)) ? (0ULL) : (((/* implicit */unsigned long long int) 9223372036854775807LL)))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) arr_7 [i_0]))))), (arr_2 [i_1] [i_1] [i_1]))))));
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */short) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) var_5)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) (~(924230716U)))))) < (((/* implicit */long long int) ((/* implicit */int) var_3)))));
    /* LoopSeq 1 */
    for (signed char i_7 = 3; i_7 < 8; i_7 += 1) 
    {
        arr_28 [(_Bool)1] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_1 [(unsigned char)2])) ? (((/* implicit */long long int) arr_27 [i_7 - 3])) : (var_11))), (((/* implicit */long long int) arr_8 [i_7] [18ULL]))));
        /* LoopNest 2 */
        for (unsigned int i_8 = 0; i_8 < 12; i_8 += 2) 
        {
            for (signed char i_9 = 0; i_9 < 12; i_9 += 1) 
            {
                {
                    var_31 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-87))) + (5U))) % (((unsigned int) arr_14 [i_9] [i_8] [0U] [i_7] [i_7]))));
                    arr_35 [i_9] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((arr_24 [i_9] [i_8] [9] [i_7] [8]), (arr_24 [i_9] [i_8] [i_9] [i_7] [(unsigned char)4]))))));
                    var_32 *= ((/* implicit */unsigned long long int) ((-9223372036854775800LL) + (17171480576LL)));
                    var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) arr_10 [i_7] [(_Bool)1] [i_9] [i_8])))), (((/* implicit */int) ((signed char) arr_10 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 3]))))))));
                    var_34 = (+(10497156102466638817ULL));
                }
            } 
        } 
    }
}
