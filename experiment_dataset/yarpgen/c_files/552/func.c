/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/552
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
    var_13 = ((/* implicit */signed char) var_3);
    var_14 = var_3;
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        var_15 = ((/* implicit */short) ((long long int) arr_0 [i_0]));
        arr_2 [i_0 - 1] [i_0] = ((/* implicit */unsigned int) var_3);
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) 4294967295ULL);
    }
    for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_1])) ? ((-(((((/* implicit */int) (short)-27505)) - (((/* implicit */int) (short)22250)))))) : ((-(((/* implicit */int) (signed char)4)))))))));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 18; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                {
                    arr_12 [i_1] [i_1] = ((/* implicit */_Bool) max((-1549281259), (((/* implicit */int) (short)-22250))));
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 1; i_4 < 17; i_4 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 1; i_5 < 18; i_5 += 2) 
                        {
                            var_17 *= ((/* implicit */int) min((var_12), (((/* implicit */unsigned int) ((((/* implicit */int) (short)-22250)) < (((/* implicit */int) (short)22249)))))));
                            var_18 -= ((/* implicit */unsigned long long int) ((short) 1339347191));
                            var_19 ^= ((/* implicit */int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_5] [i_4] [7] [i_3] [i_3] [i_2] [i_1])) ? (var_11) : (((/* implicit */long long int) var_7))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 10810304731418486631ULL)) ? (((/* implicit */int) (short)-22250)) : (((/* implicit */int) (short)-8014))))) : (((var_5) & (((/* implicit */long long int) ((/* implicit */int) (short)32762)))))))));
                            arr_19 [i_5] = ((/* implicit */short) (+(((var_11) % (((/* implicit */long long int) ((/* implicit */int) (short)32761)))))));
                        }
                        var_20 *= ((/* implicit */short) ((max((((/* implicit */unsigned long long int) 1741995210)), (var_4))) * (((/* implicit */unsigned long long int) min((-1549281258), (var_3))))));
                        var_21 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-40)) / (((/* implicit */int) (short)-32762))));
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_6 = 0; i_6 < 19; i_6 += 2) 
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 19; i_7 += 1) 
            {
                for (signed char i_8 = 1; i_8 < 18; i_8 += 3) 
                {
                    {
                        var_22 = ((/* implicit */int) ((unsigned char) min((arr_24 [14] [14ULL] [i_8 - 1] [i_8 + 1] [0] [17ULL]), (((/* implicit */unsigned long long int) var_11)))));
                        var_23 ^= min((((/* implicit */int) (!(((/* implicit */_Bool) -4456999417073333673LL))))), (min((((/* implicit */int) var_1)), (arr_23 [i_7] [i_7] [i_8 + 1] [i_7]))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (short i_9 = 0; i_9 < 19; i_9 += 2) 
            {
                for (long long int i_10 = 0; i_10 < 19; i_10 += 2) 
                {
                    for (unsigned char i_11 = 0; i_11 < 19; i_11 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_23 [i_1] [i_6] [i_9] [i_10]) == (arr_23 [i_1] [i_1] [i_1] [i_1])))) >> (((((((/* implicit */_Bool) (short)22247)) ? (((/* implicit */int) (short)22250)) : (((/* implicit */int) (signed char)-35)))) - (22238))))))));
                            var_25 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((arr_21 [(signed char)0] [i_6]) ^ (((/* implicit */unsigned long long int) 521950089342846422LL)))), (((/* implicit */unsigned long long int) arr_4 [i_1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */short) var_9)), (arr_4 [i_1])))) ? (((/* implicit */int) (short)-32754)) : (((/* implicit */int) arr_17 [i_1] [i_6] [i_6] [i_10] [i_11] [i_9] [i_9]))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_9] [7U])) | (((/* implicit */int) (signed char)-4))))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)39))) & (arr_25 [i_1] [i_6] [i_9])))))));
                        }
                    } 
                } 
            } 
            var_26 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_25 [i_1] [i_1] [i_6]) < (((/* implicit */unsigned long long int) 3511459521U)))))) - ((-(arr_25 [i_1] [i_6] [i_6])))));
        }
    }
}
