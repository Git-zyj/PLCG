/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57205
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
    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) (((((!((_Bool)0))) || ((_Bool)0))) && (((/* implicit */_Bool) (short)-21746)))))));
    var_13 = ((/* implicit */short) var_2);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */signed char) (-(((/* implicit */int) ((short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)21739)) : (((/* implicit */int) (_Bool)1))))))));
                arr_5 [i_1] = var_6;
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */unsigned short) (_Bool)1)), (var_4)))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) arr_4 [i_2])) : (527765581332480LL)))))) ? (min((min((((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0] [(unsigned char)15])), (var_11))), (((/* implicit */unsigned long long int) arr_4 [i_1 + 1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_1 + 1])))))));
                    var_16 *= ((/* implicit */unsigned int) (_Bool)1);
                }
                for (short i_3 = 1; i_3 < 21; i_3 += 2) 
                {
                    arr_10 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) arr_7 [i_0] [i_3])), (((((/* implicit */long long int) ((/* implicit */int) (short)-21755))) | (arr_2 [i_0] [i_0] [i_3])))));
                    arr_11 [i_0] [i_0] [i_3] = ((/* implicit */short) ((((/* implicit */int) ((short) ((((/* implicit */int) (short)21741)) != (((/* implicit */int) arr_7 [i_0] [i_3])))))) > (min((2147483635), (((/* implicit */int) (unsigned short)22985))))));
                    arr_12 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((short) (-(((/* implicit */int) arr_3 [i_3 - 1])))));
                    arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)22985);
                }
                arr_14 [(unsigned short)3] [i_1] = ((/* implicit */unsigned int) (_Bool)1);
                var_17 = ((/* implicit */unsigned short) min((min((10342702241639658785ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) (_Bool)1))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((+(((/* implicit */int) (short)-32764)))), (((/* implicit */int) (!((_Bool)1))))))) ? (((/* implicit */int) min(((short)-21746), ((short)32746)))) : ((+(((((/* implicit */int) var_3)) / (((/* implicit */int) var_3))))))));
    /* LoopSeq 1 */
    for (short i_4 = 0; i_4 < 22; i_4 += 1) 
    {
        var_19 = ((/* implicit */long long int) (short)-20639);
        /* LoopSeq 2 */
        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 2) /* same iter space */
        {
            arr_20 [i_5] [i_4] [i_4] = ((/* implicit */short) min((arr_19 [i_4] [i_4] [i_4]), (((/* implicit */signed char) (((~(((/* implicit */int) (signed char)-75)))) == (((/* implicit */int) var_1)))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    for (int i_8 = 0; i_8 < 22; i_8 += 3) 
                    {
                        {
                            arr_29 [i_4] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)85)) ? (((/* implicit */int) arr_6 [i_5] [i_6] [i_5] [i_8])) : ((((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_25 [i_5]))))));
                            var_20 = ((/* implicit */unsigned short) ((((((/* implicit */int) (short)-20649)) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (arr_1 [i_5])))) - (1)))));
                            var_21 = (signed char)66;
                            arr_30 [(signed char)6] [i_7] [i_6] [i_6] [i_6] [i_5] [i_4] &= ((/* implicit */long long int) ((((/* implicit */int) ((203054602588022081LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42555)))))) - (arr_26 [i_7] [i_6] [i_5] [i_4])));
                        }
                    } 
                } 
                arr_31 [i_4] [i_5] [2ULL] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_6] [i_5] [i_4] [i_4]))));
                arr_32 [i_4] [i_4] [i_4] [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) (short)0)) | (272837768)));
            }
        }
        for (unsigned short i_9 = 0; i_9 < 22; i_9 += 2) /* same iter space */
        {
            var_22 = ((/* implicit */signed char) (((~(-203054602588022083LL))) & (min((((/* implicit */long long int) (unsigned short)22985)), (-4304698588164475218LL)))));
            /* LoopSeq 1 */
            for (short i_10 = 0; i_10 < 22; i_10 += 2) 
            {
                arr_37 [i_4] = ((/* implicit */_Bool) arr_1 [i_9]);
                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)21311)) ? ((~(((/* implicit */int) (short)-6)))) : (((/* implicit */int) arr_25 [i_4]))));
                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_36 [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_36 [i_4] [i_4] [i_10] [i_9])) : (((/* implicit */int) arr_28 [i_4] [13] [i_9] [13] [16LL])))), (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-8))))) ? ((~(((/* implicit */int) (short)31)))) : ((+(((/* implicit */int) arr_16 [i_9])))))))))));
            }
        }
    }
}
