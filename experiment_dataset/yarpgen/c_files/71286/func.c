/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71286
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
    var_18 += ((/* implicit */unsigned char) max((((/* implicit */signed char) (!(((/* implicit */_Bool) ((var_12) - (((/* implicit */long long int) ((/* implicit */int) var_14))))))))), (var_8)));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 17; i_0 += 3) /* same iter space */
    {
        var_19 -= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) var_15))) >= ((~((~(((/* implicit */int) arr_1 [i_0 - 2] [i_0]))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) var_7))));
                                var_21 -= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_10 [i_0] [i_1] [i_2 - 1] [i_2 - 1] [16LL] [(unsigned short)5] [(unsigned short)5]))))))) >= (max((((long long int) arr_5 [i_3])), (((/* implicit */long long int) arr_9 [12ULL] [12LL] [(unsigned char)18] [i_3]))))));
                                var_22 += ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0 - 1] [i_2 + 1])) ? (((/* implicit */int) arr_2 [(signed char)8] [i_0 + 1] [i_2 - 2])) : (((/* implicit */int) (_Bool)0)))))));
                                var_23 += ((/* implicit */unsigned char) ((unsigned short) ((unsigned int) arr_9 [i_4] [(unsigned char)10] [(unsigned char)10] [i_0])));
                                arr_12 [i_0] [i_1] [(_Bool)1] [i_2] [1ULL] [i_2] = ((/* implicit */unsigned char) max((((arr_8 [i_2]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)96)))), (((((/* implicit */_Bool) max((var_1), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_7 [(unsigned char)8] [i_2] [i_3] [i_3]))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned char) min((min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (signed char)109)))), (var_9)));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 1; i_5 < 17; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 15; i_6 += 3) 
                        {
                            {
                                var_25 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_6] [i_5 - 1] [i_1 - 1]))))) ? (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)49908))))) <= (((var_2) ? (((/* implicit */int) arr_16 [i_0] [i_1 + 2] [17LL] [i_5] [(signed char)1])) : (((/* implicit */int) var_13))))))) : (min((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_5] [2ULL] [9LL] [9LL] [i_6 + 3] [(unsigned char)0] [i_2]))))), (((((/* implicit */int) arr_8 [(short)6])) ^ (((/* implicit */int) var_13))))))));
                                arr_17 [i_2] [i_1] = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_2] [i_2 - 2] [i_5 - 1]);
                                var_26 -= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) max((((/* implicit */short) arr_2 [(_Bool)1] [(signed char)10] [(short)9])), (arr_15 [i_0] [18] [i_2] [i_5 + 1] [18])))) ? (((/* implicit */int) arr_3 [(signed char)14])) : (((/* implicit */int) (short)31361))))));
                                var_27 += min(((+(((/* implicit */int) arr_16 [i_0] [i_1 + 2] [i_0] [i_1] [i_6 + 3])))), ((~(((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_9 [i_1] [12ULL] [12ULL] [12ULL])) : (((/* implicit */int) var_11)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (long long int i_7 = 2; i_7 < 17; i_7 += 3) /* same iter space */
    {
        var_28 -= (+(max((arr_20 [i_7 - 2]), (((((/* implicit */int) arr_4 [i_7 + 1] [i_7 + 1] [(_Bool)1])) * (((/* implicit */int) (_Bool)0)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 2; i_8 < 18; i_8 += 1) 
        {
            for (unsigned char i_9 = 0; i_9 < 19; i_9 += 2) 
            {
                {
                    arr_25 [i_8] [i_8] [(signed char)2] [i_8] = ((/* implicit */signed char) ((((/* implicit */int) ((short) (!(((/* implicit */_Bool) arr_1 [(unsigned short)5] [17ULL])))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_8]))))))))));
                    arr_26 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_7] [(signed char)1] [(signed char)1]))) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) arr_2 [i_8 - 2] [i_8 - 2] [i_7]))))))) ? ((~(((/* implicit */int) min(((short)19558), (arr_1 [i_7] [i_8])))))) : (((/* implicit */int) ((((/* implicit */int) min((var_1), (((/* implicit */short) arr_19 [i_8] [i_8]))))) != (((/* implicit */int) ((short) arr_23 [i_8] [i_8] [15ULL]))))))));
                }
            } 
        } 
        arr_27 [i_7] = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))))), (arr_13 [i_7] [i_7 + 1] [i_7] [i_7 - 1])))) ? (max((((/* implicit */long long int) var_17)), (((var_0) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_7 + 2] [i_7]))) : (var_12))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)239))));
    }
}
