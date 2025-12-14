/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69558
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
    var_11 = ((/* implicit */short) ((unsigned long long int) max((((var_1) ^ (((/* implicit */unsigned long long int) -7861261034266156274LL)))), (((/* implicit */unsigned long long int) -3742881952552421914LL)))));
    var_12 = max(((~(((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)251)) >> (((((/* implicit */int) (short)-32516)) + (32543)))))));
    var_13 = ((/* implicit */unsigned char) var_2);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_7 [i_0] [(short)9]) != (((/* implicit */unsigned long long int) var_9)))))) == (arr_4 [i_0])))) ^ (((/* implicit */int) ((-2493156947569097859LL) == (((/* implicit */long long int) arr_2 [i_0])))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_15 [i_1] [i_3] [i_3] = ((/* implicit */int) max((((/* implicit */short) (unsigned char)180)), ((short)8229)));
                                arr_16 [i_0] [i_1] [i_4] [i_4] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)49)) ? (-6071506317654105233LL) : (-2821265864769980873LL)));
                                arr_17 [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */short) var_3);
                            }
                        } 
                    } 
                }
                for (short i_5 = 0; i_5 < 23; i_5 += 1) 
                {
                    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) -5430518434189246426LL)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))));
                    arr_20 [i_0] [i_1] [i_5] = ((/* implicit */short) max((max((((((/* implicit */_Bool) 1290771539U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)5))) : (-8735132547916472600LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) 6071506317654105251LL)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) 3004195745U))));
                }
                for (short i_6 = 0; i_6 < 23; i_6 += 1) 
                {
                    var_15 = ((/* implicit */short) var_4);
                    var_16 = ((((/* implicit */long long int) (~(arr_3 [i_6] [i_1])))) & ((~(2513159137527452619LL))));
                    arr_23 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) (unsigned char)5)), (arr_7 [i_0] [i_6]))), (((/* implicit */unsigned long long int) (short)-32751))));
                    /* LoopSeq 1 */
                    for (short i_7 = 3; i_7 < 21; i_7 += 1) 
                    {
                        arr_26 [i_0] [i_6] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [10])) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [7LL] [i_1]))) : (arr_4 [i_7])))) ? (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned char)4)))) : (((/* implicit */int) arr_24 [20] [i_1] [(unsigned char)5] [(unsigned char)0] [(unsigned char)0]))))));
                        arr_27 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [14] [i_0] [i_7 - 3] [i_7 + 2] [i_7 - 3] [i_7] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (short)16383)))) : ((~(954252614U)))));
                    }
                    arr_28 [i_1] = (~(((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_0] [i_1] [i_0]))))));
                }
                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_24 [1ULL] [i_1] [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) arr_18 [i_1])) : (((3496931026635204637ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_2) == (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))))));
            }
        } 
    } 
}
