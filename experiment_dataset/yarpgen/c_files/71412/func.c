/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71412
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
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 3; i_2 < 20; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 18; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)246)) ? (arr_8 [i_0] [i_1] [i_2] [i_2] [i_4] [14U]) : (((/* implicit */long long int) var_14))))) ? (((((/* implicit */long long int) var_16)) | (var_4))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                                var_19 = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_4 [i_3 + 2])) : (((/* implicit */int) arr_4 [i_3 - 3])));
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_12)) != (((/* implicit */int) (short)5438)))))) : (var_5)));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (int i_5 = 0; i_5 < 21; i_5 += 3) /* same iter space */
                    {
                        var_21 = ((((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)246))))) / (((/* implicit */unsigned long long int) var_1)));
                        var_22 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_17))) ? (var_2) : (arr_6 [i_0] [i_0 + 3] [i_2 - 2] [i_2 - 2])));
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) (unsigned char)10))) ? (((/* implicit */int) (short)-22)) : (((/* implicit */int) (unsigned char)9))));
                    }
                    for (int i_6 = 0; i_6 < 21; i_6 += 3) /* same iter space */
                    {
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) arr_3 [i_6])) : (-5214839464067853297LL)))) ? (arr_16 [i_0] [i_0] [i_0 + 4] [i_2 - 2] [i_2 - 3]) : (((/* implicit */long long int) (+(var_13))))));
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_7))) ^ (var_9)));
                    }
                    for (int i_7 = 0; i_7 < 21; i_7 += 3) /* same iter space */
                    {
                        var_26 -= ((/* implicit */unsigned short) ((arr_17 [i_0] [i_0 - 2] [i_2] [i_2 - 2]) - (arr_17 [i_0] [i_0 + 3] [i_1] [i_2 - 3])));
                        var_27 = ((/* implicit */unsigned short) ((arr_14 [i_2] [i_2] [i_2] [5LL] [i_2] [i_2 - 3]) + (arr_14 [i_2] [i_2] [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 2])));
                        var_28 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_7] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_7 [(short)17] [18ULL] [i_2 - 3] [(short)17] [i_7])))) ? (arr_6 [(signed char)8] [i_0 + 2] [i_2 - 2] [i_7]) : (((/* implicit */long long int) ((unsigned int) var_1))));
                        var_29 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [(unsigned char)7] [i_0] [i_7]))) : (var_14)))) ? (((unsigned int) var_13)) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned char)9)))));
                        var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [18LL]))) >= (var_14))) || (((/* implicit */_Bool) (+(var_0)))))))));
                    }
                }
                var_31 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((unsigned int) (unsigned short)19387)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned char)9)) : (((((/* implicit */int) (unsigned short)35343)) / (((/* implicit */int) var_8)))))))));
                /* LoopSeq 2 */
                for (unsigned int i_8 = 0; i_8 < 21; i_8 += 4) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_32 = max((((/* implicit */unsigned int) arr_3 [i_0 + 1])), ((+(arr_11 [i_0] [i_0] [i_0] [i_0 - 2] [i_0 + 2]))));
                                var_33 = ((/* implicit */int) ((((var_0) ^ (((/* implicit */long long int) ((/* implicit */int) var_11))))) == (((/* implicit */long long int) ((((/* implicit */int) arr_23 [i_0 + 1] [i_10 - 1] [i_10 - 1] [i_10] [i_10])) * (((/* implicit */int) ((short) var_8))))))));
                            }
                        } 
                    } 
                    var_34 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) max((((arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32247))))), ((!(((/* implicit */_Bool) arr_10 [i_1] [i_1])))))))) > (max(((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_2))), (((/* implicit */long long int) ((((/* implicit */_Bool) 3121449288U)) ? (((/* implicit */int) (_Bool)1)) : (131056))))))));
                }
                /* vectorizable */
                for (unsigned int i_11 = 0; i_11 < 21; i_11 += 4) 
                {
                    var_35 = ((unsigned int) var_6);
                    var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) -1316833420)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_10))));
                    var_37 = ((/* implicit */unsigned short) ((var_1) ^ (((((/* implicit */_Bool) var_11)) ? (var_0) : (var_9)))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_12 = 0; i_12 < 24; i_12 += 4) 
    {
        for (long long int i_13 = 3; i_13 < 23; i_13 += 3) 
        {
            {
                var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) ((((/* implicit */int) (short)5442)) << (((((/* implicit */int) (unsigned short)33277)) - (33259))))))));
                var_39 = ((/* implicit */signed char) arr_34 [i_13]);
            }
        } 
    } 
    var_40 -= ((/* implicit */unsigned long long int) ((var_4) != (((/* implicit */long long int) var_17))));
    var_41 = ((/* implicit */unsigned char) var_17);
    var_42 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551615ULL)) && (((((/* implicit */long long int) var_17)) != (var_4)))))), (var_13)));
}
