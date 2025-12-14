/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6735
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
    var_11 = ((/* implicit */short) var_6);
    var_12 = ((/* implicit */_Bool) var_9);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                arr_14 [0ULL] [i_1] [(unsigned char)8] [(unsigned char)8] [i_1] = ((/* implicit */unsigned char) min(((~(((/* implicit */int) (unsigned short)38473)))), (((/* implicit */int) arr_8 [i_0] [i_1] [i_4]))));
                                arr_15 [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_1] [i_3 - 1] [i_3] [i_3 + 3])) / (max((var_0), (((/* implicit */int) arr_10 [i_0] [i_3 - 1] [i_3] [i_3 + 1] [i_3 - 3]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_21 [i_0] [i_5] [i_0] = ((/* implicit */int) var_3);
                                arr_22 [i_0] [i_0] = ((/* implicit */short) arr_13 [i_0] [i_1] [i_0] [i_2] [i_1] [(short)10]);
                                arr_23 [(_Bool)1] [(_Bool)1] [i_0] [i_5] [i_6] = ((/* implicit */unsigned short) (~(((((/* implicit */int) min((((/* implicit */unsigned char) var_5)), (arr_4 [i_0] [i_0])))) + (((/* implicit */int) ((unsigned char) (unsigned char)64)))))));
                                arr_24 [i_0] [i_1] [i_2] [i_5] [i_6] = ((/* implicit */unsigned short) arr_16 [i_0] [i_1] [i_2] [i_5] [i_6]);
                            }
                        } 
                    } 
                    arr_25 [i_0] = ((/* implicit */signed char) ((((((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_5 [i_0] [i_1] [i_2])))) > (((((/* implicit */int) var_10)) | (((/* implicit */int) var_3)))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)49978)) || (((/* implicit */_Bool) arr_6 [(unsigned short)6] [i_0] [i_2]))))) < (((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (arr_13 [i_2] [i_0] [i_0] [i_0] [i_0] [i_0]))))))) : (max(((~(((/* implicit */int) arr_6 [i_2] [i_1] [i_2])))), (((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) arr_10 [i_0] [(short)9] [(short)11] [i_0] [(short)9])))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 13; i_7 += 1) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 13; i_8 += 4) 
                        {
                            {
                                arr_30 [i_2] [i_1] [i_2] [i_2] [i_7] [i_0] [i_2] = ((short) (!(arr_3 [i_7])));
                                arr_31 [i_0] [i_1] [i_2] [i_0] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (min(((-(((/* implicit */int) (_Bool)1)))), (arr_11 [i_0] [i_0] [i_2] [i_0] [i_8]))) : (((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))))), ((unsigned short)5497))))));
                                arr_32 [i_0] [i_1] [i_2] [i_0] [i_8] = ((((/* implicit */_Bool) min((((/* implicit */int) ((short) arr_19 [i_0] [8ULL] [8ULL] [i_8] [(unsigned char)8]))), ((-(((/* implicit */int) arr_10 [(unsigned char)4] [i_2] [i_2] [i_1] [(short)5]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (min((((/* implicit */unsigned long long int) (unsigned char)47)), (17610319670408787372ULL))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
