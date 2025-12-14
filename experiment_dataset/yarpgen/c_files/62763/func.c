/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62763
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
    var_19 |= ((/* implicit */int) (unsigned char)229);
    var_20 = (+(((/* implicit */int) ((min((131064U), (((/* implicit */unsigned int) 531057621)))) > (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (short i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 15; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((int) (+(((((/* implicit */int) (unsigned char)228)) % (((/* implicit */int) var_11)))))));
                                var_21 = ((((((/* implicit */unsigned long long int) ((arr_9 [i_0] [i_1] [i_0] [i_3] [i_4] [i_4]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)25))) : (arr_5 [i_0] [i_0])))) > (6069614320292802410ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1 - 1])))))) : (((((/* implicit */_Bool) 5151571159926563531ULL)) ? (((16627074981627812983ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) : (((var_17) ? (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_3] [i_4])) : (var_14))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_5 = 1; i_5 < 13; i_5 += 2) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_20 [i_6] [i_5] [i_1 - 1] [i_0] = ((((((/* implicit */_Bool) arr_19 [i_5 - 1] [i_1 - 2] [i_0 - 1] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_5 + 2] [i_1 - 1] [i_0 - 1] [i_6]))) : (9828635966735929552ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_5 + 1] [i_1 - 3] [i_0 + 1] [i_6]))) != (var_15))))));
                            /* LoopSeq 2 */
                            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                            {
                                var_22 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) 12958062720183155717ULL)) && (((/* implicit */_Bool) 5151571159926563531ULL)))) ? (var_13) : (min((((/* implicit */unsigned long long int) (unsigned short)32767)), (arr_6 [i_0] [i_1] [i_5] [i_0]))))))));
                                var_23 = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)122))));
                            }
                            for (int i_8 = 0; i_8 < 16; i_8 += 2) 
                            {
                                arr_26 [i_0] [i_0] [i_8] [i_5 + 1] [i_6] [i_0] = ((/* implicit */unsigned short) ((min((((((/* implicit */int) (unsigned short)28309)) >> (((((/* implicit */int) (unsigned short)65535)) - (65506))))), (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)112)), (arr_17 [i_1] [i_1])))))) << ((((-((-(var_10))))) - (405875173)))));
                                arr_27 [i_0] [i_1 - 2] [i_1] [i_1] [i_8] [i_8] [i_5] &= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) ((unsigned short) var_6))) > ((-(((/* implicit */int) arr_19 [i_0 - 1] [i_1] [i_0 - 1] [i_1])))))));
                            }
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_9 = 3; i_9 < 12; i_9 += 4) 
                {
                    for (unsigned char i_10 = 2; i_10 < 15; i_10 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 4) 
                            {
                                var_24 |= ((/* implicit */short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_35 [i_1] [i_10] [i_10] [i_9 + 2] [i_0 + 1] [i_1] [i_0 + 1])) > (((/* implicit */int) var_0)))))) & (((((/* implicit */_Bool) var_5)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37242))))))), (((/* implicit */unsigned long long int) ((short) arr_13 [i_9] [i_10] [i_10])))));
                                arr_36 [i_0] [i_1] [i_9] [i_10 + 1] [i_11] = max((((/* implicit */unsigned long long int) ((unsigned short) arr_31 [i_0] [i_9] [i_10] [i_0]))), (arr_24 [i_11] [i_10] [i_1]));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 4) 
                            {
                                var_25 = ((/* implicit */signed char) ((0ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32211)))));
                                var_26 |= ((short) var_2);
                                var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_12] [i_0] [i_1] [i_0])) || (((/* implicit */_Bool) (-(((/* implicit */int) (short)-27240))))))))));
                            }
                            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_18 [i_10] [i_10] [i_10] [i_10])) ? (((/* implicit */int) (unsigned short)28294)) : (((/* implicit */int) arr_4 [i_0] [i_1 - 1])))))) ? (((arr_29 [i_9] [i_9] [i_1 - 2] [i_1]) ? (((/* implicit */int) arr_29 [i_1] [i_1 - 3] [i_1 - 3] [i_1])) : (((/* implicit */int) arr_29 [i_1] [i_1] [i_1 + 1] [i_1])))) : (((((/* implicit */_Bool) max((var_16), (((/* implicit */unsigned short) (unsigned char)179))))) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_28 [i_0] [i_1])), (arr_37 [i_0] [i_9 - 2] [i_9] [i_10] [i_1] [i_1])))))))))));
                            /* LoopSeq 3 */
                            for (short i_13 = 0; i_13 < 16; i_13 += 4) 
                            {
                                var_29 = (~((-(13122146409677561980ULL))));
                                arr_41 [i_13] &= 9828635966735929564ULL;
                                var_30 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_14 [i_0] [i_0] [i_9] [i_10]), (var_6)))) ? (((((((/* implicit */unsigned int) ((/* implicit */int) var_0))) < (arr_11 [i_0] [i_1] [i_9] [i_10] [i_13]))) ? (var_15) : (((/* implicit */unsigned long long int) arr_31 [i_0] [i_1] [i_1] [i_13])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_0 - 1] [i_1 - 2] [i_9 - 1] [i_10 - 1])) && (((/* implicit */_Bool) arr_14 [i_0 - 1] [i_1 + 1] [i_9 + 4] [i_10 - 1]))))))));
                            }
                            for (short i_14 = 0; i_14 < 16; i_14 += 2) 
                            {
                                var_31 ^= arr_2 [i_0 - 2];
                                arr_44 [i_10] = ((/* implicit */unsigned int) min((((unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_0])) && (((/* implicit */_Bool) arr_3 [i_9]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_1 - 2])) && (((/* implicit */_Bool) arr_21 [i_1 - 3])))))));
                                arr_45 [i_0] [i_1] [i_1] [i_9] [i_10 - 2] [i_14] = (unsigned char)228;
                                var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((((((((/* implicit */_Bool) 9828635966735929570ULL)) || (((/* implicit */_Bool) var_15)))) || (((/* implicit */_Bool) var_3)))) || ((!(((/* implicit */_Bool) (unsigned char)235)))))))));
                                var_33 = ((/* implicit */unsigned long long int) min((var_33), (min((((/* implicit */unsigned long long int) min((arr_5 [i_9 - 1] [i_0]), (((/* implicit */unsigned int) (short)31070))))), (((((/* implicit */_Bool) arr_15 [i_10 + 1] [i_10 + 1] [i_0 + 1])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27232)))))))));
                            }
                            for (unsigned int i_15 = 0; i_15 < 16; i_15 += 1) 
                            {
                                var_34 = ((/* implicit */int) (+(arr_8 [i_0])));
                                arr_48 [i_9] [i_9] [i_9] [i_9] [i_15] [i_9] [i_10 + 1] |= ((/* implicit */short) ((((arr_31 [i_0 - 2] [i_0 - 2] [i_9] [i_10 + 1]) == (arr_31 [i_0] [i_0] [i_9] [i_10 - 2]))) ? ((-(arr_21 [i_0 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_0 - 2])) && (((/* implicit */_Bool) (short)27991))))))));
                                var_35 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_9] [i_0] [i_10] [i_15])) | (((((/* implicit */_Bool) (short)27991)) ? (var_2) : (((/* implicit */int) var_8))))))) ? (((((((/* implicit */_Bool) arr_11 [i_0 - 2] [i_1 - 2] [i_9] [i_10] [i_15])) ? (((/* implicit */unsigned long long int) -1LL)) : (4294967295ULL))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (unsigned short)51122)) : (((/* implicit */int) (unsigned char)0))))))) : (((max((arr_39 [i_9] [i_1]), (((/* implicit */unsigned long long int) arr_30 [i_0] [i_0] [i_1] [i_9 + 4] [i_1] [i_15])))) & ((~(8618108106973622045ULL)))))));
                            }
                            var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8618108106973622033ULL)) ? (2147483636) : (((/* implicit */int) (unsigned char)117))))) : (arr_15 [i_0] [i_9] [i_0])))) ? (((int) arr_25 [i_0 - 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) 8618108106973622087ULL))))))));
                            arr_49 [i_0] [i_0] [i_0] [i_10] = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (unsigned char)64)), ((unsigned short)33007)));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_16 = 1; i_16 < 13; i_16 += 4) 
                {
                    for (int i_17 = 0; i_17 < 16; i_17 += 1) 
                    {
                        for (long long int i_18 = 2; i_18 < 15; i_18 += 3) 
                        {
                            {
                                var_37 += ((/* implicit */signed char) (unsigned char)126);
                                arr_56 [i_0] [i_1] [i_0] [i_1] [i_18] = arr_7 [i_0];
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
