/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74419
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) ((((arr_0 [i_0]) ^ (((/* implicit */long long int) ((int) -7381678097115574521LL))))) % (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)63)) << (((((/* implicit */int) min(((unsigned char)224), (((/* implicit */unsigned char) (signed char)-26))))) - (220))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((var_9), (((unsigned char) arr_0 [i_0]))));
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) min((((arr_0 [i_0]) | (arr_0 [i_0]))), (min((((/* implicit */long long int) arr_1 [i_0] [i_0])), (arr_0 [i_0]))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            var_19 *= ((/* implicit */long long int) min((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -1623074155)), (arr_5 [i_2])))) ? (max((-1623074177), (((/* implicit */int) (unsigned char)245)))) : (((/* implicit */int) arr_4 [i_2])))), (((/* implicit */int) ((min((var_0), (((/* implicit */unsigned long long int) (unsigned char)32)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_1 [i_1] [i_2])))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_3 = 0; i_3 < 14; i_3 += 1) 
            {
                var_20 *= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)43)) <= (-1623074188))))) * (arr_12 [i_2] [i_2] [i_1] [i_2])));
                var_21 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)104)) | (1623074203)));
                /* LoopSeq 3 */
                for (long long int i_4 = 0; i_4 < 14; i_4 += 4) /* same iter space */
                {
                    arr_17 [(unsigned char)10] [i_4] [i_3] &= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_6 [i_4] [i_3]))));
                    arr_18 [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) ((unsigned long long int) arr_1 [i_2] [i_3]));
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_1])) ? (((/* implicit */int) (unsigned char)138)) : (((/* implicit */int) arr_16 [i_1])))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        var_23 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_1])) || (((/* implicit */_Bool) arr_6 [i_1] [i_1]))));
                        var_24 = ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)34))))) * (var_15));
                    }
                    for (int i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        arr_23 [i_1] [i_4] [i_4] [i_4] [i_3] [i_1] [i_3] = ((((/* implicit */_Bool) var_5)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_6] [i_4] [i_2] [i_2] [i_1] [i_1]))));
                        var_25 = ((/* implicit */int) ((signed char) arr_16 [i_3]));
                        var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_20 [i_1] [i_2] [i_3] [i_4] [i_3] [(unsigned char)7] [i_6]))));
                    }
                    var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) var_2))));
                }
                for (long long int i_7 = 0; i_7 < 14; i_7 += 4) /* same iter space */
                {
                    var_28 *= ((/* implicit */signed char) (-(((((/* implicit */int) var_5)) % (((/* implicit */int) var_10))))));
                    arr_26 [i_1] [i_3] = ((/* implicit */unsigned char) ((long long int) arr_7 [i_3] [i_7]));
                }
                for (long long int i_8 = 0; i_8 < 14; i_8 += 4) /* same iter space */
                {
                    var_29 ^= ((/* implicit */unsigned long long int) arr_7 [i_1] [i_1]);
                    var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) -1125899906842624LL))));
                    var_31 = ((/* implicit */unsigned long long int) var_7);
                }
            }
            /* vectorizable */
            for (unsigned char i_9 = 0; i_9 < 14; i_9 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 4) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 3) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_9])) | (((/* implicit */int) var_14))))))))));
                            var_33 = ((/* implicit */int) min((var_33), ((-(((/* implicit */int) (unsigned char)182))))));
                            var_34 = ((/* implicit */unsigned long long int) arr_21 [i_9] [i_2] [i_11] [i_10] [i_2] [i_2]);
                        }
                    } 
                } 
                var_35 = ((/* implicit */int) max((var_35), ((~(((/* implicit */int) arr_28 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))));
            }
        }
        var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((-(-1995154349))), (((/* implicit */int) ((((/* implicit */_Bool) -1147380095)) || (((/* implicit */_Bool) (unsigned char)250)))))))) || (((/* implicit */_Bool) (signed char)-39))));
        arr_37 [i_1] &= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((arr_6 [i_1] [i_1]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)17)))))))), ((-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128))) : (0ULL)))))));
        var_37 += ((/* implicit */unsigned char) ((((/* implicit */long long int) arr_25 [i_1] [i_1] [i_1] [i_1] [i_1])) ^ (((((/* implicit */_Bool) arr_30 [i_1] [i_1] [i_1] [i_1])) ? (max((arr_32 [i_1] [i_1] [i_1] [i_1] [i_1]), (arr_10 [i_1] [i_1] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1])))))));
        var_38 = ((/* implicit */unsigned char) ((min((arr_5 [i_1]), (arr_35 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) != (arr_35 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))));
    }
    for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 1) 
    {
        var_39 = ((/* implicit */unsigned char) min((((/* implicit */int) var_9)), ((~(((/* implicit */int) ((unsigned char) (unsigned char)222)))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 1) 
        {
            arr_43 [i_12] [i_12] [i_12] = ((unsigned char) ((int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)250))) : (462474706159994291LL))));
            var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) ((long long int) var_12)))));
        }
        arr_44 [i_12] [i_12] = ((/* implicit */long long int) (~(((/* implicit */int) min((((unsigned char) arr_42 [i_12])), (var_9))))));
    }
    var_41 = ((/* implicit */int) var_15);
    var_42 = ((/* implicit */int) max((((/* implicit */long long int) var_12)), (var_3)));
}
