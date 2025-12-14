/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59933
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
    var_16 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (!((_Bool)0)))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) 9024501215948181730ULL))))))) : (-1073741824)));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [7LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_14)))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-7011))) : (var_10)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)14))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)127))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_13)))))));
        /* LoopSeq 3 */
        for (short i_1 = 4; i_1 < 10; i_1 += 2) 
        {
            arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) ((unsigned int) ((unsigned int) arr_1 [i_1])));
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                for (unsigned char i_3 = 1; i_3 < 10; i_3 += 2) 
                {
                    for (short i_4 = 0; i_4 < 11; i_4 += 2) 
                    {
                        {
                            arr_16 [i_3] [i_3] [i_2] [(short)8] [(short)8] = var_13;
                            var_17 = var_6;
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) 
        {
            arr_20 [i_0] [(short)4] [i_0] = ((/* implicit */unsigned long long int) ((long long int) var_5));
            /* LoopSeq 2 */
            for (unsigned char i_6 = 0; i_6 < 11; i_6 += 3) 
            {
                arr_23 [(unsigned char)5] [i_5] [i_0] = ((/* implicit */unsigned int) (-((-(arr_21 [i_5] [i_5])))));
                arr_24 [i_6] [i_6] [i_6] = ((unsigned long long int) var_11);
                var_18 = ((/* implicit */unsigned int) arr_21 [i_0] [i_5]);
                /* LoopNest 2 */
                for (signed char i_7 = 1; i_7 < 10; i_7 += 2) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */short) ((unsigned short) var_3));
                            arr_31 [i_8] [i_5] [i_5] [i_6] [i_7] [i_5] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_10)))))) : (((arr_13 [i_8] [i_8] [i_6] [i_8] [i_6]) & (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned short i_9 = 0; i_9 < 11; i_9 += 1) 
            {
                var_20 *= var_10;
                var_21 = ((/* implicit */unsigned short) var_8);
            }
        }
        for (long long int i_10 = 2; i_10 < 9; i_10 += 1) 
        {
            /* LoopSeq 2 */
            for (signed char i_11 = 0; i_11 < 11; i_11 += 2) 
            {
                arr_39 [i_10] = (~(((/* implicit */int) var_7)));
                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -809129381)) ? (((/* implicit */int) (unsigned short)15360)) : (-2088683973)))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) 1505047826U)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) var_4)))))) : ((-(((/* implicit */int) var_6))))));
                var_23 = ((/* implicit */unsigned long long int) ((unsigned char) 1073741823));
                var_24 = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (signed char)127)))) > (((unsigned int) var_1))))), ((+(arr_26 [(signed char)2] [(signed char)2] [(unsigned char)2] [i_10 + 1])))));
            }
            for (unsigned short i_12 = 0; i_12 < 11; i_12 += 4) 
            {
                arr_43 [i_10] [i_0] [i_10] [i_10] = ((/* implicit */unsigned int) ((unsigned short) 9223372036854775807LL));
                var_25 = ((/* implicit */unsigned short) ((unsigned int) ((unsigned short) 1073741823)));
                arr_44 [i_0] [i_10] [(unsigned short)9] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_2))) - (var_0)));
                arr_45 [i_10] [i_10] = ((short) var_5);
            }
            var_26 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50151))) ^ (arr_13 [i_10] [i_10 - 2] [i_10] [i_10 + 2] [i_10 + 1]))));
            var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) var_7))));
            var_28 = (+((~(var_14))));
        }
    }
}
