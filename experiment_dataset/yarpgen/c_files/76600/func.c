/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76600
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
    var_10 ^= 12194981836282859779ULL;
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned long long int) max((var_11), (6251762237426691837ULL)));
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_4)) >= (12194981836282859778ULL)));
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 1) 
    {
        var_13 = ((/* implicit */int) max((var_13), ((~(((/* implicit */int) arr_4 [i_1 + 2]))))));
        var_14 = ((/* implicit */unsigned char) ((12194981836282859779ULL) | (((/* implicit */unsigned long long int) 2205613516U))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            arr_8 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1828298865U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)193))) : (arr_6 [i_1 - 2])));
            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_7)))) ? (((unsigned long long int) arr_5 [i_1] [i_2])) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 + 1])))));
            arr_9 [i_2] = ((/* implicit */_Bool) var_1);
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_4 = 1; i_4 < 18; i_4 += 1) 
            {
                arr_15 [i_3] [i_3] [i_4] = ((/* implicit */unsigned short) ((-2002701195) < (((/* implicit */int) (unsigned char)230))));
                /* LoopSeq 1 */
                for (int i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    var_16 &= ((/* implicit */unsigned int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) * (12194981836282859778ULL)))));
                    var_17 ^= ((/* implicit */unsigned long long int) (~(1493099307)));
                    arr_18 [i_5] [12ULL] [17] [(_Bool)1] [i_1 + 2] = ((/* implicit */unsigned long long int) (-(arr_14 [i_1] [7ULL] [i_4] [i_4 + 2])));
                    var_18 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned char)238)))) & (6251762237426691837ULL)));
                }
                arr_19 [i_4] = ((unsigned char) (!(((/* implicit */_Bool) arr_4 [i_1]))));
                arr_20 [14ULL] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3981740492U)) ? (((/* implicit */int) ((unsigned char) (_Bool)0))) : (((/* implicit */int) (!(((/* implicit */_Bool) 3981740492U)))))));
            }
            arr_21 [i_3] = ((/* implicit */unsigned long long int) var_3);
            var_19 += 1828298865U;
        }
        for (unsigned int i_6 = 2; i_6 < 19; i_6 += 1) 
        {
            arr_26 [i_6] [12ULL] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
            arr_27 [i_1] = ((/* implicit */unsigned long long int) var_4);
            var_20 &= ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_1 + 3] [i_1 + 3] [i_6 - 2]))));
        }
        var_21 += ((/* implicit */short) (~((-(((/* implicit */int) (unsigned char)117))))));
    }
}
