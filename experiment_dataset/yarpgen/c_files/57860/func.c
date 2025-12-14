/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57860
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (unsigned char)15);
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) var_1))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) max((((/* implicit */short) max((arr_0 [i_1] [i_1]), (arr_0 [i_0] [i_1])))), (max((((/* implicit */short) (unsigned char)33)), ((short)32754))))))));
            arr_6 [(unsigned short)2] [(signed char)1] = ((max(((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (-6824308829104938417LL))), (((/* implicit */long long int) 3490034058U)))) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_2 [i_0]))))));
            arr_7 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1709351354564222203LL)) ? (((/* implicit */int) (signed char)12)) : (((/* implicit */int) var_2)))))));
            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_4 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)222)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_4 [i_1]) : (arr_4 [i_0])))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_11 [18LL] [i_2] [i_2] = ((/* implicit */unsigned short) -9223372036854775779LL);
            arr_12 [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_6))))) ? (6824308829104938429LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_2] [i_2]))))) >> ((((((!(((/* implicit */_Bool) arr_8 [i_0] [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : ((+(-4812741194172863943LL))))) + (4812741194172863990LL)))));
        }
    }
    for (long long int i_3 = 1; i_3 < 16; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_4 = 2; i_4 < 13; i_4 += 1) 
        {
            for (long long int i_5 = 3; i_5 < 16; i_5 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 2; i_6 < 16; i_6 += 3) 
                    {
                        for (long long int i_7 = 0; i_7 < 17; i_7 += 3) 
                        {
                            {
                                arr_25 [(signed char)4] [i_7] [i_4] [(signed char)4] [i_7] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) arr_10 [i_4] [i_4 + 2] [i_4 + 2])), ((~(((/* implicit */int) (signed char)5))))))) ? (((/* implicit */int) ((unsigned short) arr_22 [i_5 - 1] [i_5] [i_3 + 1]))) : ((+(((((/* implicit */int) var_5)) * (((/* implicit */int) arr_0 [i_4] [i_4]))))))));
                                arr_26 [i_7] [i_4] [i_5] [i_6] = ((/* implicit */_Bool) ((max((((7395685935715678170LL) << (((((/* implicit */int) var_11)) - (65166))))), (72057593769492480LL))) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_23 [i_3] [i_4] [4LL] [i_7] [i_7])) > (var_9)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 17; i_8 += 1) 
                    {
                        for (short i_9 = 0; i_9 < 17; i_9 += 1) 
                        {
                            {
                                arr_33 [i_4] [i_5 + 1] [i_4] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-20)), (var_3)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_3 + 1]))))))));
                                arr_34 [(unsigned char)8] [(unsigned char)8] [(unsigned char)8] [i_4] [i_9] = ((/* implicit */long long int) (+(max((var_8), (((/* implicit */int) (short)13072))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_19 = ((/* implicit */signed char) ((_Bool) 4152727857570817127ULL));
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) max(((unsigned char)229), ((unsigned char)10))))));
    }
    var_21 |= ((/* implicit */unsigned int) var_3);
    /* LoopNest 3 */
    for (unsigned int i_10 = 3; i_10 < 21; i_10 += 2) 
    {
        for (long long int i_11 = 0; i_11 < 23; i_11 += 3) 
        {
            for (long long int i_12 = 0; i_12 < 23; i_12 += 3) 
            {
                {
                    arr_45 [i_10] [i_11] [i_11] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 553037284)) ? (((/* implicit */unsigned long long int) var_14)) : (arr_43 [i_11]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_35 [i_10 - 2] [i_11])), (var_10)))))));
                    arr_46 [2LL] [2LL] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_37 [i_10 - 2]) : (arr_37 [i_10 - 2])))) ? (((((/* implicit */_Bool) max((((/* implicit */int) var_15)), (-2113823364)))) ? (arr_38 [i_10 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_10] [i_10 + 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_10)))));
                }
            } 
        } 
    } 
}
