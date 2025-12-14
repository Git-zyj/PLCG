/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58076
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
    var_14 -= ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_3)) : (3170760005238734033ULL)))) || (((/* implicit */_Bool) ((int) var_11))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_15 -= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (+(((/* implicit */int) (short)15163))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3 - 1] [i_3 - 1] [i_3 - 1]))) : ((-(arr_0 [i_0] [i_1])))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_4 = 1; i_4 < 11; i_4 += 4) /* same iter space */
                        {
                            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)81))))) ? (((/* implicit */int) arr_7 [6])) : (((/* implicit */int) arr_9 [i_0] [12ULL])))))));
                            var_17 -= ((/* implicit */_Bool) arr_11 [i_4 + 1] [i_4] [i_4 + 2] [i_3 - 1]);
                        }
                        for (unsigned short i_5 = 1; i_5 < 11; i_5 += 4) /* same iter space */
                        {
                            arr_16 [i_2] [i_2] [i_2] [i_1] [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) min((arr_4 [i_1]), (arr_4 [i_1]))))));
                            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((min((arr_8 [i_0] [i_1] [i_2]), (((/* implicit */short) arr_4 [i_1])))), (((/* implicit */short) arr_11 [i_3 - 1] [i_3] [i_5 + 2] [i_5 + 1]))))) || (((((/* implicit */_Bool) arr_8 [i_0] [i_5] [i_2])) && (((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2]))))));
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_1] [4] [(short)9] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((short) arr_7 [i_1]))), (arr_0 [i_0] [i_2])));
                            var_19 ^= ((/* implicit */unsigned int) (signed char)-82);
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_20 *= ((var_6) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [10U] [i_3 - 1] [i_3]))));
                            arr_22 [i_2] [i_2] [i_2] [i_2] [10ULL] &= var_4;
                            var_21 += ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [10ULL])) * (((/* implicit */int) arr_2 [(signed char)4]))));
                            arr_23 [i_3] [i_3] [i_3] [10ULL] [i_1] [6U] [3U] = ((/* implicit */short) var_5);
                        }
                        for (signed char i_7 = 3; i_7 < 12; i_7 += 1) 
                        {
                            arr_27 [i_3] [i_0] [2] [i_1] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (-(min((var_6), (((/* implicit */unsigned long long int) arr_13 [2LL] [i_3] [i_1] [i_0]))))))) ? (max(((+(15275984068470817583ULL))), (((/* implicit */unsigned long long int) (+(var_8)))))) : (((unsigned long long int) ((((/* implicit */int) (signed char)76)) | (((/* implicit */int) arr_3 [i_3] [i_3] [i_3])))))));
                            var_22 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (14627668793457910332ULL)));
                        }
                        arr_28 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) min((arr_1 [i_3 - 1]), (arr_1 [i_3 - 1])))) - (510160150460333414ULL)));
                    }
                    var_23 += 3819075280251641283ULL;
                }
            } 
        } 
        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (((!(((/* implicit */_Bool) 3170760005238734033ULL)))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_11 [i_0] [4LL] [i_0] [i_0]))))) : (((arr_21 [(_Bool)1]) + (arr_21 [(short)6]))))))));
        var_25 ^= arr_26 [0] [i_0] [i_0] [0] [i_0];
    }
    var_26 ^= ((((/* implicit */int) (short)-5759)) <= (((/* implicit */int) (signed char)-82)));
    var_27 = ((/* implicit */_Bool) (-(var_7)));
    /* LoopSeq 3 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        arr_33 [(_Bool)1] [5LL] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_31 [i_8] [i_8]))));
        arr_34 [(short)7] = ((/* implicit */_Bool) arr_29 [i_8]);
    }
    /* vectorizable */
    for (signed char i_9 = 0; i_9 < 21; i_9 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_10 = 1; i_10 < 19; i_10 += 2) 
        {
            for (long long int i_11 = 2; i_11 < 20; i_11 += 4) 
            {
                {
                    arr_45 [i_9] [i_10] [i_10] = ((/* implicit */unsigned char) arr_35 [0ULL] [i_10]);
                    var_28 = ((/* implicit */_Bool) min((var_28), (arr_35 [i_9] [i_9])));
                }
            } 
        } 
        arr_46 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(1272072253463277092LL)))) ? (((3170760005238734033ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_9] [(short)19] [15U] [(unsigned char)5]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_38 [i_9])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)81)))))));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 21; i_12 += 3) 
        {
            for (int i_13 = 0; i_13 < 21; i_13 += 3) 
            {
                {
                    var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-2235))) : (((unsigned int) 17936583923249218201ULL))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_14 = 2; i_14 < 19; i_14 += 4) 
                    {
                        var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_50 [i_14 + 1] [i_12] [i_12] [i_14 + 2]))));
                        var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) (~(((/* implicit */int) var_4)))))));
                    }
                }
            } 
        } 
    }
    for (long long int i_15 = 0; i_15 < 10; i_15 += 4) 
    {
        arr_56 [i_15] = min((((arr_26 [i_15] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_15]) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_15] [i_15])) && (((/* implicit */_Bool) var_12)))))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_15] [i_15] [2LL]))))) < (min((arr_10 [i_15] [(unsigned char)2] [i_15]), (3170760005238734033ULL)))))));
        var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 3170760005238734033ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (3170760005238734020ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-25))) : (((((/* implicit */_Bool) 1008751231U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (15275984068470817583ULL))))), (14627668793457910332ULL))))));
        arr_57 [i_15] [i_15] = ((/* implicit */signed char) min((max(((+(arr_49 [i_15] [i_15] [(unsigned char)20]))), (min((510160150460333414ULL), (12245426574330802481ULL))))), ((-(min((((/* implicit */unsigned long long int) 3112946749343309466LL)), (var_7)))))));
        var_33 += ((/* implicit */_Bool) max(((+(((/* implicit */int) arr_14 [i_15] [i_15] [i_15] [(short)1] [12])))), (((/* implicit */int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_15] [i_15]))) > (var_7))))))));
        arr_58 [i_15] = ((/* implicit */signed char) (-(2786317035U)));
    }
}
