/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96708
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
    var_16 = ((/* implicit */signed char) ((_Bool) var_7));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_2 + 1] [i_0]))) | (var_14)));
                    var_18 += ((((/* implicit */_Bool) arr_2 [i_0] [i_2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) arr_2 [i_1] [i_2])) ? (6367227093346654829ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        var_19 = ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-32))) : (6367227093346654829ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0] [i_5])) ^ (((/* implicit */int) arr_1 [i_0] [i_0]))))) : ((~(12079516980362896773ULL))));
                        var_20 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)21554)) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_4]))));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_6 = 1; i_6 < 8; i_6 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned short) 16648888681032448755ULL);
                        /* LoopSeq 4 */
                        for (unsigned short i_7 = 2; i_7 < 9; i_7 += 4) /* same iter space */
                        {
                            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (signed char)20)) ? (((/* implicit */int) (signed char)-13)) : (((/* implicit */int) (signed char)5))))))));
                            var_23 = ((/* implicit */signed char) ((arr_5 [i_6 + 1] [i_6] [i_6 + 2]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_6 + 4] [i_6 + 2] [i_7 + 3] [i_7 + 1])))));
                            var_24 = ((unsigned short) arr_10 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 3]);
                        }
                        for (unsigned short i_8 = 2; i_8 < 9; i_8 += 4) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned short) ((_Bool) 9595631068950923877ULL));
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-13)) - (((/* implicit */int) ((unsigned short) var_10)))));
                            arr_22 [i_6] [i_0] [i_3] [i_4] [i_6] [i_8] [i_8] = (!(((/* implicit */_Bool) arr_10 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 + 1])));
                            var_27 *= ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_20 [i_4] [i_4])) && (((/* implicit */_Bool) 23ULL)))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_28 = (unsigned short)22499;
                            arr_26 [i_0] [i_6] [i_0] [i_0] [i_0] [i_0] [(unsigned short)4] = ((/* implicit */_Bool) arr_11 [i_0] [i_0]);
                            var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) arr_6 [i_3] [i_9]))));
                        }
                        for (unsigned short i_10 = 0; i_10 < 12; i_10 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_9 [(unsigned short)10] [i_3] [(unsigned short)11] [i_6]))));
                            arr_30 [i_6] = ((/* implicit */signed char) arr_8 [i_6] [i_0]);
                            var_31 = arr_20 [i_0] [i_6 + 3];
                        }
                        arr_31 [i_6] = ((_Bool) arr_25 [i_6] [i_6 + 4] [i_6 + 4] [i_6] [i_6 + 3] [i_6] [i_6 + 3]);
                    }
                    var_32 = ((/* implicit */unsigned short) ((unsigned long long int) (signed char)34));
                }
            } 
        } 
        arr_32 [i_0] = (!(((/* implicit */_Bool) arr_20 [i_0] [i_0])));
    }
    /* vectorizable */
    for (signed char i_11 = 0; i_11 < 11; i_11 += 4) 
    {
        var_33 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_11] [i_11] [(_Bool)1] [i_11] [(signed char)0] [i_11] [i_11]))) % (var_10)))) ? (((/* implicit */int) (signed char)15)) : (((((/* implicit */int) arr_33 [(unsigned short)8] [i_11])) << (((((/* implicit */int) var_9)) - (15472)))))));
        var_34 = ((/* implicit */signed char) arr_11 [i_11] [i_11]);
        var_35 *= ((/* implicit */unsigned long long int) var_7);
        arr_36 [i_11] = ((/* implicit */_Bool) ((signed char) var_8));
        arr_37 [i_11] = ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) > (((/* implicit */int) ((arr_21 [i_11] [i_11] [i_11]) || (var_13))))));
    }
    var_36 = ((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) (!(var_11)))) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)20)) ? (((/* implicit */int) (unsigned short)65521)) : (((/* implicit */int) (signed char)-53))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)52))))) : (((((/* implicit */_Bool) (signed char)-13)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)13))))))));
    var_37 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) 12079516980362896773ULL)) ? (((/* implicit */int) (unsigned short)38302)) : (((/* implicit */int) (signed char)-13)))), ((~(((/* implicit */int) (signed char)-13))))));
}
