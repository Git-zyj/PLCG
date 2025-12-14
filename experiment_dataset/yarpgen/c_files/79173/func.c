/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79173
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_2 [7LL] = ((/* implicit */int) var_9);
        arr_3 [(short)1] [i_0] = ((/* implicit */_Bool) arr_0 [2]);
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_1] [i_2] [6] = ((/* implicit */unsigned short) ((signed char) ((3215858140174232537LL) / (-1946150213115288602LL))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 9; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_4] [6LL] [(unsigned short)1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) ((unsigned char) arr_11 [i_0] [i_0] [i_0] [i_3] [i_4 + 1]))))))) + (arr_4 [i_0] [i_0] [3LL])));
                                arr_16 [i_0] [5LL] [i_2] [i_4] [(short)8] [i_4 - 1] = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 12582912)))))));
                                arr_17 [i_0] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */int) (!((_Bool)1)));
                            }
                        } 
                    } 
                    arr_18 [(_Bool)1] = ((/* implicit */long long int) ((int) 3226188276U));
                }
            } 
        } 
        arr_19 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 7U)) ? (((/* implicit */int) (signed char)-33)) : (((/* implicit */int) (unsigned char)106))));
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 20; i_5 += 1) 
    {
        for (short i_6 = 2; i_6 < 18; i_6 += 4) 
        {
            {
                arr_28 [i_6] [i_6] = ((/* implicit */unsigned short) ((unsigned char) 1416416643U));
                arr_29 [i_5] [i_5] = ((/* implicit */short) arr_21 [i_6] [i_5]);
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 20; i_7 += 4) 
                {
                    for (short i_8 = 0; i_8 < 20; i_8 += 2) 
                    {
                        {
                            arr_37 [i_5] [i_6] [i_5] [i_5] [i_6] = ((/* implicit */short) ((unsigned short) (unsigned char)244));
                            arr_38 [i_8] [i_8] [i_8] [i_5] = ((/* implicit */unsigned char) 67108863ULL);
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) (signed char)24);
}
