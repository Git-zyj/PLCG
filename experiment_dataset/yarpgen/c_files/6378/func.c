/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6378
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
    var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min(((+(var_8))), (((((/* implicit */_Bool) (unsigned short)32835)) ? (var_4) : (var_14))))))));
    var_19 = ((((/* implicit */int) var_6)) > ((-((-(var_4))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned char) max((max((arr_1 [i_0]), (arr_1 [i_0]))), (min((arr_1 [i_0]), (arr_1 [i_0])))));
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) max((((/* implicit */unsigned int) arr_0 [22] [17U])), (((arr_0 [i_0] [i_0]) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0] [i_0]))))) : ((~(arr_1 [(signed char)20]))))))))));
        arr_2 [18ULL] [18ULL] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((((/* implicit */int) arr_0 [(signed char)12] [(signed char)12])) * (((/* implicit */int) (_Bool)0)))) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))))));
        var_22 += ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0] [i_0]))))), (arr_1 [i_0])));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            var_23 = ((((((((/* implicit */int) max((var_7), (((/* implicit */unsigned short) arr_0 [i_0] [i_0]))))) ^ (((((/* implicit */_Bool) var_2)) ? (var_8) : (var_14))))) + (2147483647))) >> ((((+(((/* implicit */int) var_7)))) - (46864))));
            var_24 = ((/* implicit */_Bool) (((+((+(((/* implicit */int) arr_0 [i_0] [(signed char)20])))))) | (((/* implicit */int) arr_0 [i_0] [i_0]))));
            var_25 ^= ((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (-1696228204)));
        }
    }
    for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        var_26 = ((/* implicit */signed char) (((+(((/* implicit */int) ((var_15) == (((/* implicit */int) arr_3 [i_2] [i_2] [i_2]))))))) != ((((-(((/* implicit */int) (_Bool)1)))) ^ (((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_5 [i_2]))))))));
        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)18)))) ? (((((/* implicit */_Bool) arr_4 [(unsigned char)3] [(unsigned char)3] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2]))) : (arr_1 [i_2]))) : (((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2]))) : (262142U)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)1)) : (var_15))) >= (((/* implicit */int) arr_6 [i_2]))))))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_5 = 0; i_5 < 25; i_5 += 3) 
            {
                var_28 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_8 [i_5])) ? (arr_8 [i_3]) : (arr_8 [i_3]))), (arr_8 [i_4])));
                arr_16 [i_3] [i_4] [i_4] = ((/* implicit */unsigned long long int) arr_12 [i_3] [i_4] [i_5]);
                arr_17 [i_3] [i_3] [(unsigned short)8] = ((3878519034U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_5]))));
            }
            var_29 = ((/* implicit */int) ((((((arr_8 [i_3]) < (arr_10 [i_4] [i_3] [i_3]))) && (((/* implicit */_Bool) max((arr_13 [i_3]), (((/* implicit */long long int) arr_14 [i_3] [i_4]))))))) ? (((((/* implicit */long long int) (~(var_17)))) % ((-(arr_15 [i_4] [i_3] [i_3]))))) : (((((/* implicit */_Bool) arr_15 [i_3] [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)81))))) : (arr_13 [i_4])))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_30 = ((/* implicit */_Bool) arr_10 [i_3] [i_3] [i_6]);
            arr_21 [i_3] [i_3] = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) var_6)), (((12568315122919520692ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))), (max((((/* implicit */unsigned long long int) (-(arr_14 [i_3] [24U])))), (max((((/* implicit */unsigned long long int) arr_14 [i_6] [i_6])), (arr_11 [i_3])))))));
        }
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 25; i_7 += 2) 
        {
            for (unsigned short i_8 = 0; i_8 < 25; i_8 += 1) 
            {
                {
                    arr_28 [i_3] [i_3] [i_7] [i_3] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((-1696228204) + (((/* implicit */int) arr_26 [i_8] [i_3] [i_3] [i_3]))))) ? (((/* implicit */int) max((arr_20 [i_3]), (((/* implicit */unsigned char) var_16))))) : (((/* implicit */int) ((((/* implicit */int) arr_27 [i_8])) >= (((/* implicit */int) arr_26 [i_3] [i_3] [i_7] [i_8]))))))), (((/* implicit */int) ((((/* implicit */int) arr_26 [i_3] [i_3] [i_8] [i_7])) != (((/* implicit */int) arr_24 [i_3] [i_7])))))));
                    var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) (+((~(arr_13 [i_8]))))))));
                    /* LoopSeq 4 */
                    for (long long int i_9 = 0; i_9 < 25; i_9 += 4) 
                    {
                        var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_3] [i_3] [i_8] [i_9])) & (((/* implicit */int) arr_26 [i_9] [i_3] [i_3] [i_3]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)255)), (arr_9 [i_7]))))) ^ (((var_2) ^ (var_2)))))) : (min((((arr_11 [(unsigned short)9]) ^ (arr_11 [i_3]))), (((arr_18 [i_3] [8ULL] [i_8]) ? (arr_11 [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3])))))))));
                        arr_31 [i_3] [i_3] [i_7] [i_3] [i_3] = ((/* implicit */signed char) arr_23 [i_3]);
                        arr_32 [i_3] [i_7] [i_7] [(_Bool)1] [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((max((((/* implicit */int) arr_9 [i_3])), (arr_25 [i_3]))) ^ (((/* implicit */int) arr_18 [i_3] [i_8] [i_3])))))));
                    }
                    for (signed char i_10 = 3; i_10 < 23; i_10 += 4) 
                    {
                        var_33 = ((/* implicit */unsigned short) (((((-(arr_15 [i_7] [i_3] [i_8]))) / (((/* implicit */long long int) ((arr_10 [i_3] [i_3] [i_7]) / (((/* implicit */int) var_6))))))) * (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_24 [i_3] [i_3]), (((/* implicit */unsigned char) arr_30 [i_10] [i_10] [i_8] [i_7] [i_7] [i_3])))))) / (((arr_14 [i_8] [i_8]) * (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))));
                        arr_35 [i_10] [i_3] [i_8] [i_3] [i_3] [i_3] = ((/* implicit */int) 1943447142U);
                        var_34 &= ((/* implicit */long long int) (((+(min((4086432569U), (((/* implicit */unsigned int) (_Bool)1)))))) << ((((+(arr_33 [i_10 - 1] [i_10 - 2] [i_10 - 3]))) - (10285223071981293311ULL)))));
                    }
                    for (unsigned short i_11 = 0; i_11 < 25; i_11 += 4) /* same iter space */
                    {
                        var_35 = ((/* implicit */signed char) ((min(((~(((/* implicit */int) (signed char)-20)))), (((((/* implicit */_Bool) arr_12 [i_8] [17ULL] [i_8])) ? (((/* implicit */int) arr_9 [i_7])) : (arr_8 [i_8]))))) & ((+(var_3)))));
                        var_36 = min((((/* implicit */unsigned char) (!(((((/* implicit */int) arr_19 [i_11] [i_3])) > (((/* implicit */int) (signed char)-29))))))), (arr_37 [i_7]));
                        arr_38 [i_3] [i_3] [i_7] [i_3] [i_8] [i_3] = ((/* implicit */unsigned short) arr_11 [i_3]);
                    }
                    for (unsigned short i_12 = 0; i_12 < 25; i_12 += 4) /* same iter space */
                    {
                        arr_43 [i_3] [i_3] [i_3] [(unsigned short)0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_5))) / (arr_15 [i_7] [i_3] [i_3])));
                        var_37 |= ((/* implicit */unsigned long long int) (_Bool)1);
                        arr_44 [i_3] [i_12] [4U] [i_3] [i_3] &= ((/* implicit */short) ((((/* implicit */int) var_5)) == ((+((-(((/* implicit */int) arr_20 [i_7]))))))));
                        var_38 = ((/* implicit */unsigned char) arr_9 [i_3]);
                        var_39 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) arr_15 [i_12] [i_3] [i_3])), (arr_11 [i_8]))) << (min(((-(12568315122919520680ULL))), (((/* implicit */unsigned long long int) var_12))))));
                    }
                    var_40 = ((/* implicit */int) max((var_40), (var_3)));
                }
            } 
        } 
        var_41 = ((/* implicit */int) (((((_Bool)1) ? (-1696228204) : (((/* implicit */int) ((((/* implicit */unsigned int) -1696228204)) < (3878519034U)))))) <= (((/* implicit */int) (unsigned char)118))));
        var_42 |= ((/* implicit */unsigned long long int) (_Bool)1);
    }
    /* LoopNest 2 */
    for (long long int i_13 = 0; i_13 < 20; i_13 += 2) 
    {
        for (unsigned char i_14 = 0; i_14 < 20; i_14 += 3) 
        {
            {
                var_43 = ((/* implicit */_Bool) ((((/* implicit */int) arr_24 [i_13] [i_14])) / (((/* implicit */int) arr_22 [i_13] [i_14]))));
                arr_49 [i_13] [i_13] [i_14] = ((/* implicit */long long int) (~((~(((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
}
