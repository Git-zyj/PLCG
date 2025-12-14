/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90642
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        var_14 |= ((/* implicit */unsigned int) ((signed char) var_7));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((-529432076911099004LL) - (((/* implicit */long long int) (+(var_4))))));
                    var_15 = ((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_0])) * (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_5))))));
                    var_16 -= ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(short)10] [(short)10]))) & (8493392072100552321ULL))) >= (((/* implicit */unsigned long long int) ((unsigned int) arr_7 [i_2] [i_0])))));
                    var_17 ^= arr_8 [i_0] [i_0 - 2] [20] [i_1 - 1];
                }
            } 
        } 
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) var_11))));
    }
    /* vectorizable */
    for (signed char i_3 = 2; i_3 < 22; i_3 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_4 = 2; i_4 < 22; i_4 += 3) 
        {
            var_19 ^= ((/* implicit */long long int) arr_11 [12ULL] [i_4 - 2]);
            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (unsigned char)204))));
        }
        for (unsigned short i_5 = 0; i_5 < 25; i_5 += 3) 
        {
            /* LoopSeq 1 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                arr_21 [i_3] [i_5] [18] [18] = ((/* implicit */int) (unsigned char)39);
                arr_22 [i_3] [i_3] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [4] [i_5])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65513))) : (arr_15 [i_3])));
            }
            arr_23 [i_3] = ((/* implicit */short) ((arr_15 [i_3]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_3])))));
        }
        for (signed char i_7 = 0; i_7 < 25; i_7 += 3) 
        {
            arr_27 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_4)) < (var_8)))) / (((/* implicit */int) arr_11 [i_3] [i_3 - 2]))));
            var_21 = var_5;
            arr_28 [i_3] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32736)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_3]))) : (4031356251U))))));
        }
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((var_5) ? (((/* implicit */unsigned long long int) 268435456)) : (arr_15 [14ULL]))))));
    }
    var_23 = ((/* implicit */int) ((max((((/* implicit */long long int) var_7)), (((var_10) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) > (((/* implicit */long long int) ((/* implicit */int) var_11)))));
    /* LoopSeq 1 */
    for (unsigned int i_8 = 0; i_8 < 18; i_8 += 3) 
    {
        var_24 = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((((/* implicit */_Bool) arr_5 [i_8] [i_8])) && (((/* implicit */_Bool) var_6))))))), (max((max((((/* implicit */int) (_Bool)0)), (arr_2 [i_8]))), (((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_8])) || (((/* implicit */_Bool) 14170140704876210013ULL)))))))));
        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [24])) ? (((/* implicit */int) (signed char)91)) : (((/* implicit */int) arr_10 [(short)16]))))) ? (((var_8) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-86))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_10 [(short)18])) < (2103516043))))))))));
    }
}
