/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69177
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned short) (!((!(((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) var_3))))))));
                var_12 = ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)3769))) + (6LL))) / (((/* implicit */long long int) arr_3 [i_1]))));
                arr_6 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) ((arr_3 [i_1]) << (((((unsigned long long int) var_2)) - (54742ULL))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (int i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((int) (!(((/* implicit */_Bool) arr_7 [i_2]))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) /* same iter space */
        {
            var_14 = ((/* implicit */unsigned short) ((int) arr_9 [14LL]));
            arr_11 [i_2] [i_3] [3] = ((/* implicit */int) ((long long int) arr_10 [i_2] [i_3] [i_3]));
            var_15 = ((/* implicit */long long int) ((unsigned long long int) arr_8 [i_2] [i_2]));
        }
        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 3) /* same iter space */
        {
            arr_15 [i_2] [i_4] = ((/* implicit */unsigned short) ((((long long int) var_8)) + (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_0)) + (((/* implicit */int) var_2)))))))))));
            var_16 = ((/* implicit */int) ((arr_8 [i_4] [i_2]) + (((/* implicit */long long int) var_1))));
            arr_16 [i_4] [i_4] = ((/* implicit */unsigned short) var_3);
        }
        var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 2097151)) / (((11862720796349872288ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((-703778699) <= (-632551227)))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 4) 
    {
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 14; i_6 += 4) 
        {
            for (unsigned short i_7 = 4; i_7 < 13; i_7 += 3) 
            {
                for (long long int i_8 = 3; i_8 < 12; i_8 += 3) 
                {
                    {
                        arr_26 [i_8] [i_8 - 3] [i_8] [0LL] [i_5] [i_8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) var_1)))));
                        arr_27 [i_8] [i_7] = (~(arr_14 [i_6 + 1] [i_8]));
                        arr_28 [i_8] [i_8] [i_8] [i_5] = ((/* implicit */long long int) var_0);
                        var_18 = ((/* implicit */long long int) ((((1685103553) > (((/* implicit */int) var_0)))) || ((!(((/* implicit */_Bool) arr_9 [i_5]))))));
                        arr_29 [i_5] [(unsigned short)14] [i_6 + 1] [i_7 - 1] [i_7] [i_5] &= ((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_8 + 3] [i_8 + 3])) * (((/* implicit */int) arr_12 [i_8 - 3] [i_8 + 3]))));
                    }
                } 
            } 
        } 
        arr_30 [i_5] = ((/* implicit */unsigned short) (((-(-703778707))) < ((+(((/* implicit */int) arr_12 [(unsigned short)20] [i_5]))))));
        var_19 -= ((/* implicit */int) ((unsigned long long int) arr_20 [i_5] [i_5]));
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_25 [i_5] [i_5] [i_5] [i_5])) + (((/* implicit */int) arr_25 [i_5] [i_5] [i_5] [i_5])))))));
        /* LoopSeq 2 */
        for (int i_9 = 0; i_9 < 15; i_9 += 3) 
        {
            var_21 = ((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_5] [i_5])) / (((/* implicit */int) var_2))));
            arr_33 [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((unsigned short) var_8));
        }
        for (long long int i_10 = 2; i_10 < 11; i_10 += 3) 
        {
            arr_36 [i_5] [i_10] |= ((/* implicit */unsigned short) (-(arr_35 [i_10 - 2] [i_10] [i_5])));
            /* LoopSeq 4 */
            for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_12 = 0; i_12 < 15; i_12 += 2) 
                {
                    for (long long int i_13 = 0; i_13 < 15; i_13 += 3) 
                    {
                        {
                            arr_46 [i_5] [i_10] [i_11] [i_12] = ((arr_22 [i_5] [i_10 + 3] [i_11]) / (((/* implicit */int) arr_25 [i_11] [i_10 - 1] [i_10] [i_12])));
                            arr_47 [i_13] [i_10] [i_11] [i_10 + 2] [1] [i_10] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) ((703778720) < ((-2147483647 - 1))))) >> (((arr_10 [i_5] [i_10] [i_11]) - (3885546329910897304ULL)))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned long long int) ((arr_32 [i_10] [i_10 + 2]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_2))))))));
            }
            for (unsigned short i_14 = 2; i_14 < 12; i_14 += 4) 
            {
                var_23 += ((/* implicit */unsigned short) ((arr_38 [i_10 + 4] [i_10 + 1] [i_14 - 2] [i_5]) == (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9)))))));
                arr_51 [i_10] [i_10] [i_10] = ((arr_34 [i_10 + 1] [i_10] [i_14 - 2]) * (arr_34 [i_10 + 2] [i_10 + 2] [i_14 + 1]));
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 15; i_15 += 3) 
                {
                    for (unsigned long long int i_16 = 2; i_16 < 14; i_16 += 3) 
                    {
                        {
                            arr_58 [4ULL] [i_10] [i_14] [i_14] [i_10] [3LL] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9))) == (1048575ULL)));
                            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((int) arr_45 [9ULL] [i_10 + 1] [i_14] [i_15] [i_16 + 1])) - (((/* implicit */int) arr_55 [i_10] [i_14] [i_10 - 1])))))));
                        }
                    } 
                } 
            }
            for (int i_17 = 1; i_17 < 14; i_17 += 4) 
            {
                arr_62 [i_5] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_20 [i_10 + 1] [i_17 - 1])) >= (((/* implicit */int) arr_20 [i_10 + 2] [i_17 + 1]))));
                var_25 = ((/* implicit */unsigned short) (+((-(((/* implicit */int) arr_25 [i_17] [8ULL] [i_10] [i_17]))))));
                arr_63 [i_10] [i_10 - 2] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) 166900398)) && (((/* implicit */_Bool) 4785960442056306535ULL))));
                /* LoopNest 2 */
                for (unsigned long long int i_18 = 0; i_18 < 15; i_18 += 1) 
                {
                    for (unsigned long long int i_19 = 2; i_19 < 13; i_19 += 3) 
                    {
                        {
                            var_26 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_55 [i_17 + 1] [i_5] [i_17 + 1])) < (((/* implicit */int) arr_55 [i_17 + 1] [i_5] [i_17 - 1]))));
                            arr_68 [i_10] [i_18] [11] [i_10] [i_10] = ((/* implicit */long long int) ((int) ((((/* implicit */int) var_2)) + (var_1))));
                        }
                    } 
                } 
            }
            for (long long int i_20 = 0; i_20 < 15; i_20 += 3) 
            {
                var_27 = ((/* implicit */int) ((((/* implicit */_Bool) arr_64 [i_5] [i_10])) || (((/* implicit */_Bool) arr_40 [i_5] [i_10 - 1]))));
                arr_72 [i_10] = ((/* implicit */unsigned short) var_6);
            }
            arr_73 [i_10] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_42 [i_10] [i_10] [i_5] [i_10] [i_10 + 3] [i_10 + 4]))));
        }
    }
    for (int i_21 = 0; i_21 < 25; i_21 += 4) 
    {
        var_28 += ((/* implicit */unsigned short) min(((+(((arr_77 [i_21] [i_21]) & (-2147483644))))), (((/* implicit */int) ((((arr_75 [i_21]) >= (arr_75 [i_21]))) && (((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned long long int) var_8))))))))));
        var_29 = ((/* implicit */int) max((((long long int) (!(((/* implicit */_Bool) arr_76 [i_21]))))), (min((((/* implicit */long long int) ((arr_76 [i_21]) ^ (arr_76 [13LL])))), (((var_6) ^ (((/* implicit */long long int) arr_76 [i_21]))))))));
        var_30 = ((/* implicit */unsigned long long int) var_7);
    }
    var_31 = ((/* implicit */long long int) (((-(var_4))) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))));
    var_32 = (-(var_3));
}
