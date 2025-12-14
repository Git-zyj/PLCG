/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5498
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
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((unsigned int) var_12)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)8191)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)8168)) / (((/* implicit */int) (unsigned short)8150))))) : (3083426125U)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */_Bool) (-(-412035612)));
                    var_22 = ((/* implicit */unsigned short) ((unsigned int) (_Bool)1));
                    arr_6 [i_0] [(unsigned short)5] [i_0] = ((/* implicit */_Bool) arr_5 [i_0] [8] [i_0] [8]);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            /* LoopSeq 2 */
            for (int i_4 = 1; i_4 < 8; i_4 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned int i_5 = 3; i_5 < 6; i_5 += 2) 
                {
                    for (short i_6 = 3; i_6 < 6; i_6 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) ((short) arr_16 [i_4] [i_5 + 3] [i_5] [i_5] [i_5 - 1]));
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)57349)) ? (((/* implicit */int) (signed char)31)) : (-976772950)));
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8183))) * (var_7)));
                /* LoopSeq 1 */
                for (long long int i_7 = 0; i_7 < 10; i_7 += 2) 
                {
                    var_26 = ((/* implicit */short) (+(arr_13 [i_4 + 2] [i_4] [i_4 + 2])));
                    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)51443)) ? (((((/* implicit */_Bool) (short)-10025)) ? (2507632784U) : (((/* implicit */unsigned int) 412035617)))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8168)))));
                    var_28 = ((/* implicit */signed char) ((unsigned int) 2386760364U));
                    var_29 = ((/* implicit */long long int) ((unsigned short) arr_8 [i_4]));
                }
                var_30 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-31))));
                var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) 250082894)) ? (((/* implicit */long long int) arr_1 [i_0])) : (8666235339356439450LL))) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)62)) - (((/* implicit */int) (unsigned short)8191)))))));
            }
            for (unsigned short i_8 = 1; i_8 < 8; i_8 += 2) 
            {
                var_32 = ((/* implicit */_Bool) (+(((/* implicit */int) var_15))));
                arr_21 [i_8] [(short)7] [i_8 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)57341)) ? (arr_15 [i_0] [i_3] [i_3] [i_8] [(unsigned short)3] [i_8 - 1] [i_8]) : (((/* implicit */int) (_Bool)1))));
            }
            var_33 -= ((((/* implicit */_Bool) 1913955940U)) ? (arr_8 [i_0]) : (arr_8 [i_0]));
            var_34 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_3])) || (((/* implicit */_Bool) (unsigned short)127)))))));
            /* LoopNest 2 */
            for (long long int i_9 = 0; i_9 < 10; i_9 += 2) 
            {
                for (long long int i_10 = 1; i_10 < 9; i_10 += 2) 
                {
                    {
                        var_35 = (+(arr_25 [i_0] [i_10 - 1] [i_0] [i_0] [i_10] [i_10]));
                        var_36 -= ((/* implicit */int) ((((/* implicit */_Bool) 2634911055U)) ? (-9223372036854775804LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)33)))));
                        var_37 = ((/* implicit */unsigned int) (-(1746631464104265797LL)));
                        var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) ((unsigned int) arr_5 [i_10 - 1] [i_10 - 1] [i_10 + 1] [i_10 - 1])))));
                        var_39 = ((((/* implicit */_Bool) arr_0 [i_10 - 1])) ? (var_14) : (((/* implicit */int) var_16)));
                    }
                } 
            } 
        }
        var_40 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) 4058770021U)) ? (arr_13 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) 0)))));
    }
    /* vectorizable */
    for (long long int i_11 = 0; i_11 < 15; i_11 += 2) 
    {
        arr_31 [i_11] = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)30))));
        var_41 = ((/* implicit */short) ((((/* implicit */_Bool) 8666235339356439450LL)) ? (((((/* implicit */_Bool) (signed char)-106)) ? (arr_28 [(short)4]) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((signed char) var_6)))));
        var_42 ^= ((/* implicit */unsigned int) arr_28 [i_11]);
    }
    var_43 = ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_13)), ((unsigned short)52461)))) ? (((var_4) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : ((((_Bool)1) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))) : (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) var_0))))))));
}
