/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6459
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_16 = min((((((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (var_13)))) ? (((/* implicit */int) (unsigned char)47)) : (((/* implicit */int) var_9)))), (((/* implicit */int) arr_2 [i_0])));
        arr_4 [i_0] = min((var_12), (((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)193))) ^ (var_13))) != (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0])))))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_1 = 2; i_1 < 17; i_1 += 1) 
    {
        for (int i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_17 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_10 [i_1] [16LL] [i_1] [i_1])) ? (((/* implicit */long long int) (+(((/* implicit */int) var_11))))) : (((var_5) ^ (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3] [i_3] [i_2] [i_1 + 1]))))))));
                    arr_12 [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */long long int) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned char) var_11))))) ? (((/* implicit */int) (unsigned char)209)) : (((((/* implicit */_Bool) arr_10 [i_3] [i_2] [i_1 - 1] [i_1])) ? (((/* implicit */int) (unsigned char)191)) : (((/* implicit */int) (unsigned char)148))))))) / (arr_0 [i_1] [i_1]));
                    /* LoopSeq 3 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_17 [i_1] [i_1] [i_1] [i_3] [i_4] [i_4] = ((/* implicit */short) max(((unsigned char)33), (((/* implicit */unsigned char) (_Bool)1))));
                        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_4)) : (arr_5 [i_1 - 2] [(_Bool)1])))))));
                    }
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        arr_21 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */_Bool) ((((var_10) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) / ((~(var_3)))));
                        arr_22 [i_1] [i_1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (var_14)))) <= (((((/* implicit */_Bool) -1513553631)) ? (var_3) : (-1752108497779212123LL)))));
                    }
                    for (long long int i_6 = 1; i_6 < 19; i_6 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */int) (short)17681)) / (((((var_11) ? (var_14) : (((/* implicit */int) arr_23 [i_1] [i_1] [16] [16] [8LL] [i_6])))) % (max((var_4), (((/* implicit */int) var_7)))))))))));
                        var_20 = ((/* implicit */long long int) max((var_20), (((min((-7635506254013372008LL), (((/* implicit */long long int) ((unsigned char) var_13))))) | (((((/* implicit */_Bool) arr_18 [i_6 - 1] [i_6 + 1] [i_6 - 1] [5] [i_6] [i_6 - 1])) ? (((/* implicit */long long int) ((((/* implicit */int) var_15)) % (((/* implicit */int) var_7))))) : (((var_13) / (((/* implicit */long long int) ((/* implicit */int) var_12)))))))))));
                        arr_26 [i_1] [i_1] [i_3] [i_6 - 1] [(unsigned char)11] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) max((((/* implicit */unsigned char) arr_23 [i_1] [i_1] [i_1] [i_1 + 3] [5LL] [i_1 + 1])), ((unsigned char)51)))), ((~(var_14)))))) ? (((((/* implicit */long long int) ((/* implicit */int) min(((short)2161), ((short)11302))))) + (max((arr_24 [i_1] [(_Bool)1] [i_3] [i_3] [i_3]), (((/* implicit */long long int) var_4)))))) : (-7360191153703580082LL)));
                        arr_27 [i_1] [i_6] = ((/* implicit */unsigned char) (+(((2147483642) - (((/* implicit */int) (unsigned char)215))))));
                    }
                    var_21 += ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)23)))) ? (((int) arr_0 [i_1 + 2] [i_1 + 3])) : (2147483642)));
                    /* LoopSeq 1 */
                    for (int i_7 = 3; i_7 < 19; i_7 += 3) 
                    {
                        arr_31 [i_1] = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned char) (_Bool)1))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_7])) | (((/* implicit */int) var_12)))))))), ((~(((/* implicit */int) (short)-4993))))));
                        arr_32 [i_1] [(unsigned char)10] [i_2] [(unsigned char)4] [i_7 + 1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */int) max(((_Bool)1), (var_2)))) + (((/* implicit */int) var_9)))) : (((((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned char)2)))) % (((/* implicit */int) (unsigned char)209))))));
                    }
                }
                arr_33 [i_1] [19] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)209)) ? (((((/* implicit */_Bool) var_8)) ? (max((2147483630), (((/* implicit */int) var_12)))) : (min((((/* implicit */int) (unsigned char)3)), (var_14))))) : ((-((+(727494665)))))));
                /* LoopSeq 1 */
                for (int i_8 = 0; i_8 < 20; i_8 += 1) 
                {
                    var_22 = ((/* implicit */unsigned char) arr_6 [i_1]);
                    arr_36 [i_1 + 2] [i_2] [i_1] = ((/* implicit */_Bool) min(((-(((((/* implicit */int) var_15)) - (((/* implicit */int) (short)-23)))))), (((/* implicit */int) max((max((((/* implicit */unsigned char) (_Bool)1)), (var_15))), (((/* implicit */unsigned char) arr_1 [i_1 + 3])))))));
                    arr_37 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)115))) : (8109507591718590779LL))), (((/* implicit */long long int) min((var_6), (((/* implicit */short) var_1)))))))) ? (((((/* implicit */_Bool) arr_13 [i_1 - 1] [i_1 + 2] [i_1] [(_Bool)1] [i_1 + 2])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_15)) == (((/* implicit */int) (unsigned char)167)))))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)55)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_15 [i_1] [i_1] [3] [i_8]))))), ((((_Bool)0) ? (arr_11 [i_1] [i_1] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))))));
                }
            }
        } 
    } 
}
