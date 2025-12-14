/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78175
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 3) /* same iter space */
        {
            var_11 = ((/* implicit */int) -299183980467378995LL);
            /* LoopNest 3 */
            for (long long int i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)255))))) && (((/* implicit */_Bool) var_7)))))));
                            arr_16 [i_0] [i_1 + 2] [i_0] [i_4] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_7 [i_1] [i_1 + 2] [i_1 + 1]))))));
                            var_13 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_1 - 1] [i_2 - 1]))))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) + (8796093022207ULL)))));
                            arr_17 [i_0] [i_4] [i_2] [i_4] [11U] [11] = ((/* implicit */unsigned int) max((arr_0 [i_0]), (((unsigned long long int) arr_10 [i_1 + 1] [i_2] [i_2 - 1] [i_4] [i_4] [i_4]))));
                        }
                    } 
                } 
            } 
            var_14 = ((/* implicit */short) (+(((((/* implicit */_Bool) (~(var_9)))) ? (((var_2) & (((/* implicit */unsigned long long int) var_3)))) : (arr_7 [i_0] [i_1 - 1] [i_1 + 2])))));
        }
        for (unsigned short i_5 = 1; i_5 < 20; i_5 += 3) /* same iter space */
        {
            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_5 + 2] [i_5] [i_5])) ? (((((/* implicit */_Bool) 18446735277616529409ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) var_4)))))) : (((((/* implicit */_Bool) 8050230692844630566ULL)) ? (var_2) : (((/* implicit */unsigned long long int) 1861976133U)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) var_10)))))));
            var_16 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12635354251843937518ULL)) ? (4179916384966401079LL) : (var_4)))), (max((var_0), (arr_11 [i_0] [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_3) % (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) & (var_2)))))))));
        }
        var_17 += ((/* implicit */short) (unsigned char)0);
        /* LoopSeq 2 */
        for (int i_6 = 4; i_6 < 21; i_6 += 3) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_7 = 2; i_7 < 18; i_7 += 3) 
            {
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [13LL] [i_6 - 2] [i_6 - 1] [i_6 - 2]))) == (2078252918U)));
                var_19 = ((/* implicit */unsigned long long int) min((var_19), ((~(((((/* implicit */unsigned long long int) var_4)) * (6745173738542751231ULL)))))));
                var_20 = ((/* implicit */int) min((var_20), (0)));
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_6 - 3] [i_6 + 1])) * (((/* implicit */int) arr_18 [i_6 - 4] [i_6 - 1])))))));
            }
            for (int i_8 = 2; i_8 < 21; i_8 += 4) 
            {
                var_22 = ((/* implicit */unsigned short) ((unsigned int) arr_21 [i_6 - 3] [i_8 - 1]));
                arr_31 [i_8] |= ((/* implicit */unsigned char) ((max((var_8), (((/* implicit */unsigned long long int) arr_21 [i_0] [i_6])))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_21 [i_6 + 1] [i_8]))))))));
                var_23 = ((/* implicit */unsigned short) (~(arr_5 [i_6 - 3] [i_6 - 2])));
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 22; i_9 += 2) 
                {
                    for (signed char i_10 = 0; i_10 < 22; i_10 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) arr_4 [i_8] [i_8 - 1] [i_8 - 2])) : (var_4)));
                            var_25 ^= ((/* implicit */short) (+(((((/* implicit */_Bool) ((int) -859474008))) ? (min((((/* implicit */unsigned long long int) (_Bool)0)), (17381816474188059649ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_8 - 2] [i_6] [i_8] [i_6 - 3])))))));
                            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) arr_36 [i_8] [i_9] [i_9] [i_0] [i_8] [i_6] [i_0]))));
                        }
                    } 
                } 
            }
            var_27 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) 2216714377U)), (((unsigned long long int) arr_10 [i_6 - 1] [i_6] [i_6] [i_6 - 2] [i_6 + 1] [i_6 - 3]))));
        }
        for (short i_11 = 0; i_11 < 22; i_11 += 4) 
        {
            var_28 = ((/* implicit */long long int) (_Bool)0);
            var_29 ^= ((/* implicit */_Bool) max((arr_8 [i_0] [i_0] [(unsigned short)21]), (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_11] [i_11]))));
        }
    }
    var_30 *= var_8;
}
