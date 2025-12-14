/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76746
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
    var_16 = ((/* implicit */unsigned char) (_Bool)1);
    var_17 = var_1;
    /* LoopSeq 4 */
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 1) /* same iter space */
    {
        var_18 &= ((/* implicit */unsigned short) (signed char)-67);
        arr_4 [i_0] = ((/* implicit */unsigned char) (signed char)-67);
        var_19 &= 2634059112U;
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_20 |= ((/* implicit */long long int) arr_12 [i_0 - 1] [7ULL] [i_0 - 1] [i_3] [i_3]);
                                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-48)) ? (((/* implicit */int) arr_14 [i_4] [i_3] [i_2])) : (((/* implicit */int) arr_8 [(short)0] [(signed char)6] [i_0]))))) ? (((arr_7 [9ULL] [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)66))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_1 [i_1])) : (1938796945))))))) ? (((/* implicit */int) arr_10 [i_3] [i_1] [i_3])) : (758977844)));
                                var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [(unsigned char)2] [(unsigned char)2] [i_2] [i_3]))))) ? (6603173162991340058ULL) : (((((/* implicit */_Bool) arr_16 [i_0] [i_3] [i_2] [i_0] [i_0])) ? (arr_7 [i_0] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15360))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [6] [i_2] [13LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3]))) : (11148524577910589177ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)66))) : (((((/* implicit */_Bool) arr_11 [i_0] [i_2] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-68))) : (12288U))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1406608105)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 11843570910718211544ULL)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 11148524577910589161ULL)) ? (7298219495798962439ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)697)))))))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [0] [0] [i_0 - 1])) ? (((/* implicit */int) arr_3 [i_0 + 2] [i_1])) : (((/* implicit */int) (short)-27996))))), (min((((/* implicit */long long int) arr_9 [i_0])), (880565238746288538LL)))))));
                    arr_19 [i_0] [5] [i_2] [(short)10] = ((/* implicit */unsigned short) arr_2 [i_0 - 2]);
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_5 = 2; i_5 < 12; i_5 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(unsigned char)7] [i_5] [(unsigned char)7]))) / (arr_15 [i_5 + 1] [i_5] [i_5] [i_5])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2634059109U)) ? (((/* implicit */int) arr_2 [i_5 + 2])) : (-1938796927)))) : (((((/* implicit */_Bool) 880565238746288538LL)) ? (11148524577910589181ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)220)))))));
        arr_22 [i_5] = ((/* implicit */int) ((arr_7 [i_5] [i_5]) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_5] [i_5] [i_5])) ? (((/* implicit */int) (signed char)-21)) : (((/* implicit */int) arr_20 [(unsigned short)5] [(unsigned short)5])))))));
        var_25 = ((/* implicit */unsigned char) 7LL);
        var_26 += ((/* implicit */unsigned short) ((((((/* implicit */int) arr_14 [(_Bool)1] [i_5] [i_5])) <= (((/* implicit */int) arr_17 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5 + 2])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_5 + 2])) ? (((/* implicit */int) arr_8 [i_5 - 2] [i_5 - 2] [i_5 - 2])) : (((/* implicit */int) arr_14 [i_5 + 1] [i_5] [i_5 + 2]))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_5] [i_5] [i_5] [i_5 + 1]))) / (-5105946151627993377LL)))));
    }
    for (unsigned int i_6 = 2; i_6 < 12; i_6 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_7 = 0; i_7 < 14; i_7 += 3) 
        {
            for (unsigned short i_8 = 0; i_8 < 14; i_8 += 4) 
            {
                for (short i_9 = 0; i_9 < 14; i_9 += 1) 
                {
                    {
                        arr_34 [i_8] [i_8] [i_8] [i_9] [i_8] [0LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)16953)) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_8])) - (((/* implicit */int) arr_3 [i_8] [i_8]))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-32760))))) : (((((/* implicit */_Bool) arr_0 [i_8])) ? (arr_12 [i_6] [(unsigned char)13] [(unsigned char)13] [i_6] [13ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7219))))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_8 [i_6] [i_7] [i_9])), (((((/* implicit */_Bool) arr_3 [i_6] [i_6])) ? (((/* implicit */int) arr_14 [i_6] [i_8] [i_8])) : (((/* implicit */int) arr_28 [i_6 - 1] [i_7] [i_7] [i_7])))))))));
                        arr_35 [i_6] [i_6] [i_7] [i_8] [i_7] &= ((/* implicit */int) ((((/* implicit */_Bool) 880565238746288538LL)) ? (11148524577910589133ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-45)))));
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_30 [i_6] [i_6])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_6] [i_6] [i_6] [7U])) ? (-1474428503) : (arr_25 [i_6])))) : (min((7298219495798962482ULL), (((/* implicit */unsigned long long int) (unsigned char)172)))))) * (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_0 [i_6 - 2])))))))));
    }
    for (unsigned int i_10 = 2; i_10 < 12; i_10 += 1) /* same iter space */
    {
        var_28 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_10 + 2] [i_10]))) : (arr_15 [i_10] [i_10] [i_10] [i_10 + 2])))) ? (((((/* implicit */_Bool) 1736758922)) ? (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_10]))) : (arr_24 [i_10]))) : (223702734529163049LL)))) ? (((((arr_31 [5] [i_10] [i_10 + 2] [i_10 + 2]) > (((/* implicit */int) arr_3 [i_10] [i_10])))) ? (((((/* implicit */int) (unsigned char)193)) / (((/* implicit */int) (short)-26034)))) : (((/* implicit */int) min(((short)-7289), ((short)29482)))))) : (((((7LL) == (((/* implicit */long long int) 872638935U)))) ? ((~(-1266765942))) : (((((/* implicit */_Bool) arr_8 [(unsigned char)2] [(unsigned char)2] [i_10])) ? (((/* implicit */int) arr_17 [i_10] [i_10] [i_10] [i_10 + 1] [i_10] [i_10])) : (((/* implicit */int) arr_32 [i_10] [i_10] [i_10] [(unsigned short)4] [i_10 - 2] [i_10]))))))));
        var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)72)) ? (3422328363U) : (((/* implicit */unsigned int) 1266765942)))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((-765136342) / (((/* implicit */int) arr_28 [i_10] [i_10 - 2] [i_10 + 2] [i_10]))))) ? (((((/* implicit */_Bool) -6820798149794548633LL)) ? (((/* implicit */int) (_Bool)0)) : (-596990085))) : (((((/* implicit */_Bool) (signed char)-71)) ? (((/* implicit */int) arr_10 [i_10 + 1] [i_10 + 1] [i_10 + 1])) : (((/* implicit */int) arr_13 [2] [i_10 + 2] [i_10] [2]))))))))))));
        var_30 = ((/* implicit */_Bool) min((var_30), (((((/* implicit */unsigned long long int) arr_24 [i_10 + 1])) >= (((((/* implicit */unsigned long long int) (-(3180905090U)))) | (12161639159466272569ULL)))))));
        var_31 = ((/* implicit */signed char) (((!(((((/* implicit */int) (unsigned char)41)) == (((/* implicit */int) arr_18 [(signed char)6] [i_10] [i_10] [(signed char)6])))))) || (((/* implicit */_Bool) arr_20 [i_10] [i_10]))));
    }
}
