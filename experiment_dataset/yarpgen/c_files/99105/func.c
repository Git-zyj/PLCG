/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99105
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
    var_10 -= ((/* implicit */unsigned short) (-((~(((/* implicit */int) var_6))))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */short) (unsigned short)65535);
        arr_4 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) ((unsigned short) var_7)))));
        arr_5 [i_0] = ((/* implicit */unsigned short) var_2);
    }
    for (short i_1 = 1; i_1 < 15; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_2 = 1; i_2 < 15; i_2 += 3) 
        {
            var_13 = ((/* implicit */short) arr_3 [i_1]);
            var_14 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_12 [i_1] [i_1 - 1] [i_1])), (arr_8 [i_1 - 1])))) != (((arr_6 [i_2] [i_1]) / (((/* implicit */int) var_2)))))))));
            /* LoopNest 2 */
            for (short i_3 = 1; i_3 < 13; i_3 += 2) 
            {
                for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    {
                        arr_18 [i_1] [i_3] [i_3 + 2] [i_1] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_2 + 1])) ? (arr_17 [i_2 + 1]) : (arr_17 [i_2 + 1]))))));
                        arr_19 [1ULL] [i_2] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_10 [i_1] [i_2 - 1] [i_1 - 1])) | (arr_3 [i_1]))))));
                        var_15 = ((/* implicit */_Bool) min(((((_Bool)1) ? ((~(((/* implicit */int) arr_14 [i_2] [i_2] [i_3])))) : (((int) (unsigned short)36478)))), ((-(((/* implicit */int) var_1))))));
                        /* LoopSeq 3 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_16 = ((/* implicit */_Bool) arr_8 [i_2 + 1]);
                            arr_24 [i_1] [i_3] [i_3 + 3] [i_3 + 3] [i_3 + 3] = arr_6 [i_3] [i_3 - 1];
                        }
                        /* vectorizable */
                        for (unsigned short i_6 = 2; i_6 < 15; i_6 += 4) /* same iter space */
                        {
                            arr_27 [i_6] [i_2 + 1] [i_4] [i_3] [i_2 - 1] [i_2 + 1] [i_1 + 1] = ((/* implicit */long long int) (!(arr_0 [i_1 + 1])));
                            arr_28 [i_1 - 1] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)36275))));
                        }
                        for (unsigned short i_7 = 2; i_7 < 15; i_7 += 4) /* same iter space */
                        {
                            arr_31 [i_1] [i_2 + 1] [i_2 + 1] [i_3] [i_7] [i_4] = min((((/* implicit */int) min((var_0), (((/* implicit */short) arr_26 [i_1 + 1] [i_1 + 1] [(unsigned short)15] [4LL] [i_3]))))), (((((/* implicit */int) arr_26 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_3])) << (((/* implicit */int) arr_26 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1] [i_3])))));
                            var_17 = ((/* implicit */short) max((12893640494480263165ULL), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) (short)-2014))))))));
                            var_18 |= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_22 [i_1] [i_1] [i_1] [i_1 - 1] [i_4] [i_1 - 1] [i_1]))));
                        }
                    }
                } 
            } 
        }
        var_19 = ((/* implicit */short) ((_Bool) -2853851888446989222LL));
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((long long int) arr_9 [i_1 + 1] [i_1 + 1])))));
        arr_32 [i_1] [(unsigned short)7] = ((/* implicit */int) ((((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)127))))) % (((unsigned int) var_0)))) % (((/* implicit */unsigned int) (-(((/* implicit */int) var_0)))))));
    }
    for (unsigned short i_8 = 0; i_8 < 19; i_8 += 2) 
    {
        arr_36 [i_8] = ((/* implicit */unsigned short) ((arr_33 [i_8] [i_8]) - (((/* implicit */int) arr_34 [i_8]))));
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) min((((/* implicit */int) ((((-311198604) + (((/* implicit */int) arr_34 [i_8])))) < (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_34 [9LL])) : (arr_33 [i_8] [i_8])))))), (arr_33 [i_8] [i_8]))))));
        /* LoopSeq 1 */
        for (unsigned short i_9 = 1; i_9 < 17; i_9 += 3) 
        {
            arr_40 [(short)15] [i_9] = ((/* implicit */long long int) (short)2029);
            arr_41 [i_8] = ((unsigned short) var_8);
            /* LoopNest 3 */
            for (short i_10 = 0; i_10 < 19; i_10 += 3) 
            {
                for (long long int i_11 = 3; i_11 < 16; i_11 += 3) 
                {
                    for (unsigned short i_12 = 1; i_12 < 18; i_12 += 3) 
                    {
                        {
                            arr_52 [i_12] [i_8] [i_8] &= ((/* implicit */unsigned char) max(((~(((/* implicit */int) (unsigned char)3)))), ((~(((/* implicit */int) arr_39 [i_12 - 1] [i_9 + 1] [i_11 - 1]))))));
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) var_6))));
                            var_23 -= ((/* implicit */short) ((max((arr_38 [i_12 - 1] [i_11 - 1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) arr_50 [i_8] [i_8] [i_8] [i_11 - 3] [i_9 + 1] [i_10])) : (((/* implicit */int) (unsigned char)190))))))) >= (((/* implicit */unsigned long long int) (-((~(-2853851888446989222LL))))))));
                        }
                    } 
                } 
            } 
        }
        arr_53 [i_8] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)30943)) + (((/* implicit */int) (unsigned short)4907))))) && (((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), (arr_50 [i_8] [i_8] [i_8] [(_Bool)1] [i_8] [i_8])))))));
        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_43 [i_8]))))) ? ((~(((/* implicit */int) arr_43 [i_8])))) : (((((/* implicit */_Bool) arr_43 [i_8])) ? (((/* implicit */int) arr_43 [i_8])) : (((/* implicit */int) arr_43 [i_8]))))));
    }
    for (unsigned int i_13 = 0; i_13 < 18; i_13 += 4) 
    {
        arr_56 [i_13] = ((/* implicit */long long int) (((_Bool)1) || (((/* implicit */_Bool) max(((unsigned short)43662), (((/* implicit */unsigned short) (short)25523)))))));
        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) var_3))));
    }
    /* LoopNest 2 */
    for (long long int i_14 = 0; i_14 < 13; i_14 += 3) 
    {
        for (long long int i_15 = 0; i_15 < 13; i_15 += 4) 
        {
            {
                var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) arr_2 [i_14])) || (((/* implicit */_Bool) arr_2 [i_14]))))))));
                arr_64 [i_14] [i_14] = ((/* implicit */_Bool) ((unsigned long long int) (+((~(((/* implicit */int) (short)-14379)))))));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned short) ((long long int) ((unsigned int) ((((/* implicit */int) var_8)) > (((/* implicit */int) var_5))))));
}
