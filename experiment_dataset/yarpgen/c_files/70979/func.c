/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70979
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
    var_11 = ((/* implicit */signed char) ((short) min((var_5), (((/* implicit */unsigned long long int) ((long long int) var_5))))));
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max(((signed char)-104), (((/* implicit */signed char) (_Bool)1))))) << (((((/* implicit */int) ((unsigned char) var_2))) - (193)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        var_13 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) ^ (((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3] [i_2] [(unsigned char)0] [(_Bool)1] [i_0] [i_0]))) != (var_5)))) >> (((/* implicit */int) arr_4 [i_0] [(unsigned char)5] [i_2] [12LL]))))));
                        arr_9 [i_0] [i_1] [(unsigned char)15] [i_2] [(unsigned short)4] [(signed char)0] = ((/* implicit */short) (+((((~(((/* implicit */int) var_8)))) ^ (((((/* implicit */int) var_7)) | (((/* implicit */int) var_9))))))));
                        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((unsigned long long int) arr_2 [i_0 - 1] [i_1] [i_2 + 2])) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_0 [i_3 + 1]), (arr_0 [i_3 + 1])))))));
                    }
                    arr_10 [(unsigned short)15] [i_2] [16ULL] [i_0] = ((((((/* implicit */_Bool) arr_0 [(short)8])) ? (((/* implicit */int) arr_7 [i_2 - 1] [i_0 - 1] [i_0 + 2] [(signed char)9])) : (((/* implicit */int) arr_0 [i_0])))) <= (((/* implicit */int) min((arr_0 [9LL]), (arr_0 [11ULL])))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        for (unsigned long long int i_5 = 1; i_5 < 17; i_5 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((_Bool) (~(((/* implicit */int) (_Bool)1))))))));
                                arr_15 [18LL] [i_1] [i_1] [(signed char)7] [(short)16] [i_1] [(unsigned char)18] = ((/* implicit */unsigned long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_6))) * (1647982164U)))));
                                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) - (((/* implicit */int) ((((/* implicit */int) arr_14 [(unsigned char)3] [(short)12] [i_2] [(unsigned short)1] [(unsigned short)5] [9ULL] [0ULL])) == (((/* implicit */int) var_6)))))))) ? (((/* implicit */int) arr_12 [i_2 - 1] [(_Bool)1] [i_0 + 1] [2LL] [i_4])) : (((((/* implicit */int) ((((/* implicit */int) arr_3 [(unsigned char)9] [5ULL])) == (((/* implicit */int) arr_14 [9] [i_1] [i_1] [(short)3] [i_2] [(_Bool)1] [(signed char)3]))))) << (((((/* implicit */int) ((short) arr_8 [i_5] [4ULL] [i_2] [(signed char)6] [i_1] [2ULL]))) - (14172)))))));
                                var_17 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_2 - 1])) ? (((/* implicit */int) arr_3 [i_0 - 1] [i_2 - 2])) : (((/* implicit */int) arr_3 [i_0 + 1] [i_2 - 2])))))));
                                var_18 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_7 [i_0] [i_1] [12LL] [i_5]))))) ? (((/* implicit */int) arr_5 [(_Bool)1] [i_0])) : (((/* implicit */int) var_7)))), (max((((/* implicit */int) arr_14 [(signed char)16] [(short)10] [(unsigned short)0] [(unsigned short)1] [19U] [(_Bool)1] [14ULL])), (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
