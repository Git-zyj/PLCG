/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98882
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
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) (short)13413))));
        arr_3 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_1 [i_0]))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_18 -= ((/* implicit */_Bool) arr_2 [(short)2]);
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 15; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_3] = (-(arr_6 [i_0 + 3] [i_0] [i_0 + 2] [(_Bool)1]));
                        var_19 &= ((/* implicit */unsigned int) (-(arr_6 [i_2 - 1] [i_2 - 3] [i_2 - 1] [i_2 + 1])));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 16; i_4 += 3) 
        {
            /* LoopSeq 2 */
            for (int i_5 = 0; i_5 < 16; i_5 += 3) 
            {
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_5] [i_4] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) arr_0 [6LL] [6LL])))))) : (arr_0 [i_0] [i_0])));
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((unsigned char) arr_14 [i_0] [i_0] [i_0 + 1])))));
                arr_17 [i_0] [i_4] [i_5] = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_5] [i_0] [i_5] [i_5]))))) == (((/* implicit */int) arr_4 [i_0])));
            }
            for (int i_6 = 2; i_6 < 13; i_6 += 3) 
            {
                var_22 = ((/* implicit */int) (unsigned short)25509);
                arr_20 [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_13 [i_4] [i_4]))));
            }
            arr_21 [i_0] [1ULL] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned short)6061)) ? (((/* implicit */int) (unsigned short)59474)) : (536870912)))));
            arr_22 [i_0] = ((/* implicit */short) arr_10 [i_0 + 1] [i_0 + 2] [i_0] [i_4] [i_0 + 1]);
            arr_23 [i_0] = ((/* implicit */unsigned int) var_6);
        }
        for (long long int i_7 = 1; i_7 < 12; i_7 += 2) 
        {
            var_23 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)21)) / (315381828)))) ? (((/* implicit */int) (unsigned short)6061)) : ((-(((/* implicit */int) arr_13 [i_7] [i_7])))))) + (((/* implicit */int) var_13))));
            /* LoopSeq 2 */
            for (unsigned int i_8 = 0; i_8 < 16; i_8 += 4) 
            {
                var_24 = (i_0 % 2 == 0) ? (((/* implicit */unsigned int) (~(max((((arr_10 [i_0 + 3] [13] [i_0] [i_7] [i_0 + 3]) >> (((arr_10 [i_0] [i_0] [i_0] [6] [i_8]) - (133426130881148913ULL))))), (((/* implicit */unsigned long long int) arr_18 [i_0 + 2]))))))) : (((/* implicit */unsigned int) (~(max((((arr_10 [i_0 + 3] [13] [i_0] [i_7] [i_0 + 3]) >> (((((arr_10 [i_0] [i_0] [i_0] [6] [i_8]) - (133426130881148913ULL))) - (15202954722203747200ULL))))), (((/* implicit */unsigned long long int) arr_18 [i_0 + 2])))))));
                var_25 = ((/* implicit */unsigned char) (-(arr_12 [i_0] [i_0] [i_8])));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_9 = 0; i_9 < 16; i_9 += 1) 
                {
                    var_26 = ((/* implicit */int) (unsigned short)0);
                    var_27 = ((/* implicit */unsigned short) ((unsigned char) arr_6 [i_0] [(unsigned short)8] [i_0] [i_9]));
                    arr_31 [i_9] [(unsigned short)12] [(signed char)12] [i_0] = ((/* implicit */unsigned short) 18246053405984783156ULL);
                    /* LoopSeq 3 */
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        var_28 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(arr_12 [(unsigned short)10] [i_8] [i_10]))))));
                        arr_34 [i_0] [i_7] [i_8] [i_9] [i_0] = ((/* implicit */short) arr_27 [i_7 + 1] [i_8] [i_0]);
                    }
                    for (long long int i_11 = 0; i_11 < 16; i_11 += 1) 
                    {
                        arr_37 [i_0] [i_7] [i_0] [(short)10] [i_8] [i_9] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) / (((/* implicit */int) arr_14 [i_9] [i_8] [i_7]))))) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_8] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56799))) : (3008089105U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_3)))))));
                        var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)28253)) ? (((/* implicit */int) (unsigned short)39717)) : (1376687051))))));
                        var_30 = ((/* implicit */int) ((unsigned short) ((unsigned short) 1082753928)));
                    }
                    for (unsigned int i_12 = 1; i_12 < 15; i_12 += 4) 
                    {
                        arr_41 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)6061))));
                        arr_42 [i_0] [i_0] [6] [(short)8] [i_7] = ((/* implicit */unsigned long long int) ((signed char) (!(((/* implicit */_Bool) -1255961308)))));
                    }
                }
            }
            for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 1) 
            {
                var_31 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)75)), (((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0]))) > (-4266598325912150038LL)))) * (((/* implicit */int) var_13))))));
                var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((((/* implicit */int) (unsigned short)37283)) + ((-(((/* implicit */int) arr_8 [i_7 + 1] [i_0 + 2])))))))));
                var_33 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_24 [(short)11] [i_7 - 1])) && (((/* implicit */_Bool) min((-4784621256300283948LL), (((/* implicit */long long int) (unsigned short)6062))))))) ? (((arr_19 [i_0] [i_7 + 4] [i_13] [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 100833279)))))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_18 [i_0])) - (((/* implicit */int) arr_33 [i_0] [i_7] [i_7] [i_13] [i_13])))))))));
                arr_46 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_36 [i_7] [i_7] [3U] [i_7] [i_0] [i_7 + 1] [i_7]), (((/* implicit */unsigned long long int) max((arr_29 [i_0] [i_7] [i_13] [i_13] [(signed char)6] [i_0]), (((/* implicit */unsigned short) var_1)))))))) ? ((~(((/* implicit */int) (signed char)70)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(4611686018427387904ULL)))))))));
            }
        }
        var_34 &= max(((+(var_10))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_27 [i_0] [i_0] [12LL]))))) ? (arr_30 [i_0] [i_0] [i_0] [i_0 + 3] [i_0]) : (((/* implicit */int) (unsigned char)126)))));
        var_35 = ((/* implicit */int) max((var_35), (((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)122)) ? (2147483647) : (999942657))) == ((~(((/* implicit */int) (_Bool)0))))))) / ((-((+(var_15)))))))));
    }
    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
    {
        var_36 = ((/* implicit */short) (~(((int) ((((/* implicit */_Bool) -999942658)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)59474)))))));
        var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) ((int) min((max((((/* implicit */unsigned long long int) arr_26 [(_Bool)0])), (arr_19 [i_14 - 1] [i_14 - 1] [i_14] [i_14]))), (((/* implicit */unsigned long long int) min((arr_30 [i_14] [9LL] [1] [9LL] [i_14 - 1]), (arr_26 [8ULL]))))))))));
    }
    /* vectorizable */
    for (short i_15 = 0; i_15 < 19; i_15 += 2) 
    {
        var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) (((!(((/* implicit */_Bool) (signed char)36)))) && (((/* implicit */_Bool) arr_50 [i_15] [i_15])))))));
        var_39 -= ((/* implicit */unsigned short) (-(((/* implicit */int) var_6))));
    }
    var_40 -= ((/* implicit */unsigned long long int) (unsigned short)59474);
}
