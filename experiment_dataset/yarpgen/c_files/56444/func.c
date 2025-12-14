/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56444
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
    var_12 = ((/* implicit */unsigned short) ((max((((/* implicit */int) var_11)), (((((/* implicit */_Bool) 2384381517U)) ? (var_2) : (((/* implicit */int) (signed char)-123)))))) - (((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */long long int) var_3)) : (var_4)))))));
    var_13 = ((/* implicit */unsigned char) var_10);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 1; i_3 < 21; i_3 += 1) /* same iter space */
                    {
                        var_14 = ((/* implicit */int) ((unsigned char) (((-(var_3))) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)109))))));
                        var_15 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_2 [8] [i_3])) ? (((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) (signed char)-55)))) : ((-(((/* implicit */int) (unsigned short)65535)))))) - (((/* implicit */int) var_11))));
                    }
                    for (unsigned short i_4 = 1; i_4 < 21; i_4 += 1) /* same iter space */
                    {
                        var_16 ^= ((/* implicit */signed char) max(((((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) max(((unsigned char)240), ((unsigned char)15)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [(signed char)19] [i_4 + 2]))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_2] [i_4 + 3])) ? (arr_1 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)54)))))) ? (((/* implicit */int) ((1790195793) < (((/* implicit */int) (signed char)-54))))) : ((+(((/* implicit */int) arr_14 [(short)18] [i_1] [i_1] [i_4]))))))));
                        var_17 = arr_10 [i_0] [(signed char)11];
                    }
                    arr_17 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 1736603694677309219LL)) <= (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) 536870911))))));
                }
            } 
        } 
        var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [24ULL] [i_0])) ? ((+(arr_11 [16U] [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */int) max(((unsigned char)240), ((unsigned char)252)))))))));
    }
    for (long long int i_5 = 0; i_5 < 25; i_5 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) arr_14 [6LL] [6LL] [i_5] [(unsigned char)22]))));
        /* LoopNest 3 */
        for (signed char i_6 = 0; i_6 < 25; i_6 += 4) 
        {
            for (signed char i_7 = 0; i_7 < 25; i_7 += 4) 
            {
                for (unsigned short i_8 = 3; i_8 < 22; i_8 += 4) 
                {
                    {
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (max((((/* implicit */int) (signed char)99)), ((~(((/* implicit */int) (short)-32760)))))) : (max((((/* implicit */int) ((0) != (var_2)))), ((-(arr_29 [i_5] [0ULL] [(_Bool)1] [i_8 + 3])))))));
                        var_21 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_22 [i_6] [i_6] [i_7])), (((((/* implicit */_Bool) max((arr_24 [i_6] [i_7]), (((/* implicit */int) arr_23 [i_6] [i_6] [i_6] [i_6]))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_3)) : (9127449405449099209ULL))) : (((/* implicit */unsigned long long int) var_6))))));
                    }
                } 
            } 
        } 
        arr_30 [(signed char)24] [(signed char)24] = ((/* implicit */unsigned long long int) arr_19 [i_5] [i_5]);
    }
    for (unsigned char i_9 = 2; i_9 < 19; i_9 += 1) 
    {
        arr_35 [4LL] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_21 [i_9 - 1])) ? (((/* implicit */int) arr_33 [12])) : (((/* implicit */int) arr_27 [i_9 - 1] [i_9 + 2] [i_9] [i_9 + 2]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_23 [i_9 + 1] [i_9 + 1] [i_9 - 2] [i_9 + 3]), (arr_23 [i_9 + 1] [i_9 + 3] [i_9] [(unsigned char)17]))))) : (max((arr_15 [i_9 + 3] [i_9 + 3] [i_9] [(signed char)6]), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) < (var_3))))))));
        var_22 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_9] [i_9] [i_9 + 1] [4ULL])) ? ((-(((/* implicit */int) (signed char)99)))) : (((((/* implicit */_Bool) (signed char)-37)) ? (var_2) : (((/* implicit */int) (_Bool)1))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((((/* implicit */_Bool) (signed char)-19)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) arr_10 [i_9] [i_9])))) : (((/* implicit */int) max((((/* implicit */short) (unsigned char)229)), (arr_14 [20] [i_9] [20] [20])))))))));
    }
    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 1736603694677309219LL)) ? (4) : (((/* implicit */int) (unsigned char)34)))) % ((((_Bool)1) ? (((/* implicit */int) (signed char)27)) : (((/* implicit */int) (short)32764))))))) : (((0ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
}
