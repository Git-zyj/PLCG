/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89988
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
    for (unsigned char i_0 = 4; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-22)))))));
                    var_11 = ((/* implicit */unsigned long long int) (-(arr_3 [i_0])));
                }
            } 
        } 
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 - 3] [i_0 + 1] [i_0 - 1] [i_0]))) & (max((arr_2 [i_0]), (((/* implicit */unsigned long long int) arr_6 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 1]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        arr_16 [i_0] = (~(((/* implicit */int) ((unsigned short) arr_4 [i_3] [i_4] [(unsigned char)8]))));
                        arr_17 [i_0] [i_4] [i_3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_0])) ? (6735460492506221092ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_13 [18] [i_3] [i_4] [1ULL]))) ? (((/* implicit */long long int) (-(arr_12 [i_0])))) : (arr_8 [i_0 - 3] [(_Bool)1]))))));
                    }
                    for (int i_6 = 4; i_6 < 21; i_6 += 2) 
                    {
                        arr_20 [i_0] = ((/* implicit */_Bool) (-(arr_1 [i_4])));
                        arr_21 [i_0] [i_4] [i_3] [i_3] [i_0] = arr_13 [i_6 - 4] [6ULL] [i_6] [i_6 - 4];
                        arr_22 [i_0] [i_3] = ((/* implicit */unsigned short) (-(12016578738509824634ULL)));
                        /* LoopSeq 3 */
                        for (unsigned int i_7 = 2; i_7 < 19; i_7 += 2) 
                        {
                            var_13 = ((/* implicit */_Bool) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [(unsigned char)21] [i_0] [i_7 + 2])))))) & (var_2))));
                            var_14 = ((/* implicit */int) ((((/* implicit */int) arr_6 [i_6 - 4] [i_0 + 1] [i_7 - 2] [0ULL])) < (((((/* implicit */_Bool) (unsigned short)32433)) ? (((/* implicit */int) arr_6 [21] [i_0 - 1] [i_7 - 2] [13LL])) : (((/* implicit */int) arr_6 [i_7] [i_0 + 1] [i_7 - 2] [i_0]))))));
                        }
                        for (unsigned short i_8 = 2; i_8 < 20; i_8 += 2) /* same iter space */
                        {
                            var_15 = ((/* implicit */int) min((arr_27 [i_8 + 2] [i_8 - 1] [i_8 - 2] [i_8 - 2] [i_8 - 1]), (arr_27 [i_8 + 2] [i_8 - 1] [21ULL] [i_8 - 2] [i_8 + 2])));
                            var_16 = ((/* implicit */unsigned long long int) min((var_16), (arr_27 [13ULL] [(unsigned short)19] [18ULL] [i_6 - 3] [(unsigned short)12])));
                            var_17 = ((/* implicit */int) ((_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= (var_8)))))));
                            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) arr_2 [i_4]))));
                        }
                        for (unsigned short i_9 = 2; i_9 < 20; i_9 += 2) /* same iter space */
                        {
                            arr_31 [2LL] [i_0] [13] [i_6] [8U] [i_0] [i_3] = ((/* implicit */unsigned long long int) var_2);
                            var_19 = ((/* implicit */unsigned long long int) arr_28 [16ULL] [i_3] [i_4] [i_4] [i_6 - 4] [i_0]);
                        }
                    }
                    for (unsigned short i_10 = 2; i_10 < 20; i_10 += 1) 
                    {
                        arr_34 [i_0] [i_0] [i_4] [20ULL] = ((/* implicit */int) ((unsigned short) 3001307247U));
                        var_20 |= ((/* implicit */int) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-22))) - (var_8))) > (min((arr_2 [i_4]), (((/* implicit */unsigned long long int) var_1)))))) ? (((/* implicit */unsigned long long int) min((((long long int) arr_19 [i_0] [i_0 - 1] [16U])), (arr_8 [i_0 - 2] [16U])))) : (((unsigned long long int) (~(arr_24 [4] [i_4] [(unsigned char)18]))))));
                        var_21 = ((/* implicit */int) arr_4 [i_10 + 2] [i_4] [i_0 - 1]);
                    }
                    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((arr_4 [i_0 - 4] [i_0 - 1] [i_0 - 1]) >> (((((unsigned long long int) arr_8 [(_Bool)1] [i_0])) - (10702573186918782076ULL))))))));
                    arr_35 [i_0] = ((((/* implicit */unsigned long long int) arr_25 [i_0 - 2] [i_0 - 1] [(unsigned short)5] [3LL] [i_0] [1ULL])) <= (((unsigned long long int) ((unsigned int) arr_13 [i_4] [i_3] [i_0 - 4] [i_0 - 4]))));
                    var_23 = arr_15 [i_4] [i_4] [i_3] [i_0];
                }
            } 
        } 
    }
    var_24 *= ((/* implicit */unsigned long long int) (-(var_2)));
    var_25 = ((/* implicit */unsigned int) 16857960506070622717ULL);
}
