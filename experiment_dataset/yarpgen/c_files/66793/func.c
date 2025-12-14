/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66793
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
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((short) max((((/* implicit */short) ((((/* implicit */int) var_11)) < (((/* implicit */int) (signed char)-5))))), (var_5)))))));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        var_15 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 + 1])) < (((/* implicit */int) ((signed char) arr_1 [i_0])))))) < (((arr_2 [i_0 - 2] [(unsigned char)0]) & ((~(((/* implicit */int) arr_0 [i_0 + 1]))))))));
        var_16 = ((/* implicit */_Bool) ((long long int) max((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1]))));
        var_17 = ((/* implicit */int) ((unsigned short) ((_Bool) arr_2 [i_0 - 1] [i_0 + 1])));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            var_18 = ((/* implicit */unsigned short) ((int) (short)-13322));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                var_19 = ((/* implicit */long long int) arr_3 [i_2]);
                /* LoopSeq 1 */
                for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1])) < (((/* implicit */int) var_9)))))));
                    arr_10 [i_3] [14LL] [14LL] [14LL] [i_3] [i_0 + 1] = ((/* implicit */int) arr_1 [2ULL]);
                    arr_11 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 - 2] [i_0] &= ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (short)0)) < (-1708261628))));
                    var_21 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_7 [i_2] [i_2] [i_2] [(short)4])) < (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [4U] [2LL])))) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_2])) : (((/* implicit */int) (signed char)52))));
                }
                arr_12 [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_9 [i_0] [i_0 + 1] [i_0 - 2] [i_0] [i_0] [i_0 + 1])) < (((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_1] [i_1] [i_2])) < (((/* implicit */int) (_Bool)1)))))));
                var_22 ^= (+(((/* implicit */int) arr_4 [i_0 - 2] [i_0 - 2] [i_0 - 2])));
            }
        }
        /* vectorizable */
        for (signed char i_4 = 3; i_4 < 13; i_4 += 2) /* same iter space */
        {
            arr_15 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)112))) < (0U)));
            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) var_12))));
            /* LoopSeq 3 */
            for (short i_5 = 1; i_5 < 14; i_5 += 2) 
            {
                arr_20 [i_0] [i_0] = arr_9 [i_0] [i_4] [(unsigned short)7] [(unsigned short)7] [i_5 + 1] [i_4];
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 2) 
                {
                    for (unsigned int i_7 = 1; i_7 < 13; i_7 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((long long int) 2087106670)) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))))));
                            var_25 |= ((/* implicit */_Bool) arr_14 [i_0 - 1]);
                            var_26 = ((/* implicit */unsigned int) ((unsigned short) var_12));
                            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) arr_17 [i_7 + 1] [i_5 - 1] [i_4] [i_4 - 2]))));
                            arr_26 [i_0 + 1] [12] [i_5] [i_4 + 1] = ((/* implicit */long long int) (-(((/* implicit */int) arr_14 [i_0 + 1]))));
                        }
                    } 
                } 
            }
            for (unsigned int i_8 = 0; i_8 < 15; i_8 += 1) 
            {
                arr_29 [i_0 - 1] [i_0 - 1] [i_8] = ((/* implicit */int) arr_8 [i_0] [i_4] [i_4] [i_8] [i_8]);
                arr_30 [i_0] [i_0] [i_4 + 2] [i_8] = ((/* implicit */long long int) ((((/* implicit */int) arr_23 [i_0 + 1] [i_0 + 1])) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_8])))))));
            }
            for (unsigned short i_9 = 0; i_9 < 15; i_9 += 2) 
            {
                arr_35 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_9]);
                arr_36 [i_0 - 2] [i_0 - 2] = ((/* implicit */short) ((unsigned int) (_Bool)1));
            }
        }
        for (signed char i_10 = 3; i_10 < 13; i_10 += 2) /* same iter space */
        {
            var_28 -= ((/* implicit */unsigned short) ((((3788906767139047958ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_10 - 3]))) : (((unsigned long long int) arr_31 [i_0] [i_0] [i_0] [i_0 - 1]))));
            var_29 -= ((/* implicit */short) ((unsigned short) ((unsigned char) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0]))))));
        }
    }
}
