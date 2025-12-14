/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77137
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
    var_10 -= ((/* implicit */signed char) -513197000);
    var_11 = ((/* implicit */_Bool) max((var_4), (((/* implicit */short) var_6))));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            arr_4 [i_1] [i_0] [i_1] = (unsigned short)57153;
            var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)234)) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0 + 1])))))));
            var_13 = ((/* implicit */short) arr_2 [i_1] [i_1] [(unsigned short)9]);
        }
        for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_3 = 1; i_3 < 15; i_3 += 3) 
            {
                arr_10 [(signed char)9] [i_2] [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [9] [i_3])))))));
                arr_11 [i_0 + 1] [i_3 - 1] = ((/* implicit */int) var_5);
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    for (long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned short) (short)32767);
                            arr_16 [i_0] [3LL] [i_3 + 1] [i_3 + 1] = ((/* implicit */long long int) min(((_Bool)1), (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))) <= (((/* implicit */int) arr_0 [i_3 + 1]))))));
                            var_15 ^= arr_15 [i_0 + 1];
                        }
                    } 
                } 
            }
            var_16 = ((/* implicit */int) min((((unsigned short) (unsigned char)10)), (((/* implicit */unsigned short) max((arr_8 [i_0 + 1] [i_2] [7] [7]), (((/* implicit */signed char) (_Bool)1)))))));
            var_17 ^= ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) (signed char)100))));
        }
        arr_17 [i_0] [(signed char)4] = ((/* implicit */long long int) (signed char)25);
        var_18 = ((/* implicit */int) min((var_3), (((/* implicit */short) arr_3 [i_0 - 2] [i_0]))));
        var_19 ^= ((/* implicit */long long int) ((((/* implicit */int) max((var_8), (((/* implicit */short) min((var_0), (arr_13 [(unsigned char)5] [(signed char)14] [i_0] [i_0]))))))) ^ (min(((+(((/* implicit */int) arr_3 [i_0] [(short)15])))), (((/* implicit */int) arr_1 [i_0] [i_0]))))));
        /* LoopNest 3 */
        for (signed char i_6 = 0; i_6 < 16; i_6 += 2) 
        {
            for (short i_7 = 0; i_7 < 16; i_7 += 4) 
            {
                for (signed char i_8 = 2; i_8 < 14; i_8 += 4) 
                {
                    {
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_8 [i_8 + 2] [i_6] [i_7] [i_0 + 1]))))) & ((-2147483647 - 1))));
                        /* LoopSeq 1 */
                        for (long long int i_9 = 3; i_9 < 15; i_9 += 2) 
                        {
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) max((((/* implicit */int) arr_19 [i_0])), (((((/* implicit */int) max((((/* implicit */unsigned char) arr_0 [i_0 + 1])), ((unsigned char)18)))) & (((((/* implicit */_Bool) arr_25 [i_0] [i_6] [i_7] [i_8] [i_8] [i_9])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [(_Bool)1])))))))))));
                            var_22 *= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 202512735)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)16))))) ? (((((/* implicit */int) arr_28 [i_0] [i_0] [i_7] [i_8] [i_0])) + (((/* implicit */int) var_3)))) : ((((_Bool)1) ? (((/* implicit */int) arr_25 [i_0 - 1] [i_6] [i_6] [8LL] [i_9] [i_9 + 1])) : (((/* implicit */int) arr_19 [i_8]))))))), (1569460018053594910ULL)));
                            arr_30 [i_6] = ((/* implicit */signed char) (~(((/* implicit */int) min(((unsigned short)255), (((/* implicit */unsigned short) arr_20 [i_6] [i_9])))))));
                        }
                        var_23 = ((/* implicit */short) var_9);
                    }
                } 
            } 
        } 
    }
}
