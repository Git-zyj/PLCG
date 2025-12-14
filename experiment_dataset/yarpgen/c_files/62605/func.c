/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62605
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
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 23; i_2 += 2) 
            {
                for (long long int i_3 = 3; i_3 < 22; i_3 += 3) 
                {
                    {
                        arr_8 [4] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)112))));
                        arr_9 [i_3 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) ((unsigned short) (unsigned char)81))) ? (((-1243562061) / (((/* implicit */int) (unsigned char)81)))) : (((/* implicit */int) var_7)))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)100)) != (-1)))) == (((/* implicit */int) (unsigned short)65533)))))));
                        arr_10 [i_0] [i_1] [i_1] [13LL] [20LL] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) + (max((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65533))) : (3050853623850601758ULL))), (((/* implicit */unsigned long long int) -1243562061))))));
                        arr_11 [(unsigned char)13] [22] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min(((+(1735632896U))), (((/* implicit */unsigned int) ((int) arr_7 [i_2] [i_1] [i_2])))))) == (arr_5 [i_0] [i_1])));
                        arr_12 [7U] [7U] [i_1] [7U] = min((((/* implicit */unsigned int) (unsigned char)255)), (2559334399U));
                    }
                } 
            } 
        } 
        arr_13 [(unsigned char)4] = ((/* implicit */int) (-(max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)65528)), (arr_2 [7LL])))), ((-(arr_3 [i_0] [i_0] [(unsigned short)9])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            arr_17 [i_0] = arr_14 [i_0] [(short)5] [i_0];
            arr_18 [i_0] = ((/* implicit */_Bool) ((signed char) arr_4 [(unsigned char)20] [i_4] [(short)5] [i_4]));
        }
    }
    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 4) /* same iter space */
    {
        arr_21 [i_5] [i_5] = ((/* implicit */unsigned char) ((((arr_5 [i_5] [i_5]) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_5])))))) ? (65535ULL) : (max((arr_20 [(unsigned char)12]), (((/* implicit */unsigned long long int) -9223372036854775784LL))))));
        arr_22 [i_5] [(unsigned short)10] = ((/* implicit */long long int) ((((((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_5 [(unsigned char)12] [(unsigned char)7]))))) >= (((/* implicit */int) ((unsigned short) 12926655454368946178ULL))))) ? (((unsigned int) ((unsigned int) 913224987))) : (((/* implicit */unsigned int) (~(((int) arr_20 [i_5])))))));
    }
    for (unsigned short i_6 = 0; i_6 < 17; i_6 += 4) /* same iter space */
    {
        arr_26 [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned short) -913224983))), (((((/* implicit */_Bool) (short)1798)) ? (var_5) : (var_8))))))));
        arr_27 [13LL] = ((/* implicit */int) min(((_Bool)0), (((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) 762382009U))))));
        arr_28 [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) ((short) var_11)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((_Bool) -6520244020235545748LL)))));
    }
    for (unsigned short i_7 = 0; i_7 < 17; i_7 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_8 = 1; i_8 < 14; i_8 += 1) 
        {
            for (unsigned short i_9 = 3; i_9 < 16; i_9 += 1) 
            {
                {
                    arr_39 [i_8] = ((/* implicit */int) var_12);
                    arr_40 [i_8] = ((/* implicit */long long int) (+(max((((/* implicit */unsigned int) ((((/* implicit */int) var_7)) > (((/* implicit */int) (unsigned short)3))))), (max((((/* implicit */unsigned int) arr_38 [i_8])), (arr_1 [(unsigned short)16])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 0; i_10 < 17; i_10 += 3) 
                    {
                        for (int i_11 = 0; i_11 < 17; i_11 += 3) 
                        {
                            {
                                arr_47 [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((unsigned short) arr_37 [i_7] [i_8] [i_9]))), ((+(arr_35 [i_8])))))) ? (min((((/* implicit */unsigned long long int) arr_44 [i_9 + 1] [i_9] [(signed char)3] [i_8 - 1] [i_7])), (arr_3 [i_7] [i_7] [i_7]))) : (var_5)));
                                arr_48 [i_8] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_2))))));
                                arr_49 [i_7] [i_10] [i_9] [(short)2] [i_7] &= ((/* implicit */long long int) ((unsigned int) arr_42 [i_10] [(short)15] [i_8 + 3]));
                                arr_50 [i_7] [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) -913225005))))), (((((/* implicit */int) arr_38 [i_8])) * (((/* implicit */int) arr_33 [(unsigned short)6] [i_8 + 1] [i_7]))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_16 [i_7])) ? (((/* implicit */int) arr_29 [i_7])) : (((/* implicit */int) (_Bool)1)))) > (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (arr_36 [i_8]))))))) : (max((((/* implicit */long long int) ((unsigned short) var_1))), ((+(-6520244020235545748LL)))))));
                                arr_51 [i_7] [i_8] [i_7] [i_7] [i_8] [i_7] |= ((/* implicit */unsigned int) ((long long int) min((((/* implicit */unsigned long long int) arr_44 [i_8] [i_8 + 1] [i_8] [i_8] [i_8 + 2])), (min((arr_20 [(_Bool)1]), (((/* implicit */unsigned long long int) 913224987)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_52 [10] |= ((/* implicit */unsigned long long int) (-((~((-(4614022761380997826LL)))))));
    }
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_12))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)0)), ((short)-1)))))));
}
