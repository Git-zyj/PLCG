/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77823
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
    var_19 -= ((/* implicit */unsigned int) -1416861366260278786LL);
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_4)) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) ((17996806323437568LL) / (((/* implicit */long long int) var_14))))))) : (((/* implicit */unsigned long long int) var_11))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == ((~(((((((/* implicit */int) arr_0 [i_0] [i_0 - 1])) + (2147483647))) << (((((-7892204033848443696LL) + (7892204033848443723LL))) - (27LL)))))))));
                arr_5 [i_0 + 1] = ((/* implicit */long long int) ((((/* implicit */int) ((-90548847762548313LL) == (arr_2 [i_0 - 2])))) & (((int) (_Bool)1))));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    var_22 -= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((2290150046U) == (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))))), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_8 [i_0 - 3] [i_1] [i_1])))));
                    arr_9 [i_2] [i_1] = ((/* implicit */unsigned short) ((min((((long long int) (signed char)112)), (1758062378526239610LL))) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [(short)18] [i_1] [i_0 - 1])) ? (((/* implicit */int) arr_3 [i_0 - 3])) : (arr_6 [i_0] [i_1] [i_0 + 1]))))));
                    var_23 &= ((/* implicit */unsigned short) (((~(((/* implicit */int) ((4294967295U) == (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))))))) / (var_14)));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) 1974759232965771698ULL);
                        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) var_8))));
                        var_25 = ((/* implicit */int) max((((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((((-192265391) + (2147483647))) >> (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2]))) & (arr_10 [i_2] [i_2] [10U] [i_3] [i_1]))))), (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            var_26 = ((/* implicit */int) max((-1416861366260278786LL), (max((((long long int) 34359738367LL)), (((/* implicit */long long int) (((_Bool)1) || (((/* implicit */_Bool) 140737488355200ULL)))))))));
                            arr_15 [i_0] [i_1 + 1] [i_2] [i_2] [i_4] = (i_2 % 2 == 0) ? (((/* implicit */unsigned int) (((-(-1319352381))) >> ((((~(arr_8 [i_1] [i_2] [i_1 + 3]))) - (10436126560390294914ULL)))))) : (((/* implicit */unsigned int) (((-(-1319352381))) >> ((((((~(arr_8 [i_1] [i_2] [i_1 + 3]))) - (10436126560390294914ULL))) - (16035838181177531069ULL))))));
                            arr_16 [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) var_8)) : (min((-562949953421312LL), (((/* implicit */long long int) arr_10 [i_1] [i_1] [i_2] [i_3] [i_2]))))))) ? (arr_14 [i_2] [i_1 - 2] [i_2] [i_2]) : (((/* implicit */unsigned int) arr_1 [i_0 - 3]))));
                            var_27 = ((/* implicit */long long int) min((max((((/* implicit */unsigned int) arr_1 [i_1 - 2])), (var_4))), (((/* implicit */unsigned int) ((arr_1 [i_1 - 2]) >= (var_14))))));
                        }
                        for (signed char i_5 = 1; i_5 < 20; i_5 += 1) 
                        {
                            arr_19 [i_2] [i_2] [i_2] [i_5 - 1] [i_5 - 1] [i_2] [i_2] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)87))) / (-764608552301570682LL)))) ? (9223372036854775797LL) : (((/* implicit */long long int) min((((/* implicit */int) (unsigned char)139)), (arr_18 [i_2] [i_2] [i_2] [i_3] [i_5])))))), (max((-1LL), (((/* implicit */long long int) (-2147483647 - 1)))))));
                            arr_20 [i_0 - 2] [i_1] [i_2] [i_2] [(signed char)8] [i_5] = ((/* implicit */unsigned char) arr_11 [i_5 - 1] [i_0 + 1] [13] [i_0] [i_0]);
                            var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_3] [i_2])) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 1])))))) && (((/* implicit */_Bool) (~(var_0))))));
                            arr_21 [i_5] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 285978576338026496LL)) ? (((/* implicit */unsigned long long int) -9223372036854775798LL)) : (0ULL)));
                            var_29 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_4 [i_1 - 2] [i_0 - 3])) ? (arr_4 [i_1 + 1] [i_0 + 1]) : (arr_4 [i_1 - 2] [i_0 - 3]))) & ((-(arr_17 [2] [i_2] [(short)10] [i_3])))));
                        }
                        arr_22 [i_1] [i_2] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (4456665058858179477ULL) : (((/* implicit */unsigned long long int) var_13))))) ? (max((var_17), (((/* implicit */unsigned long long int) 9223372036854775806LL)))) : (((/* implicit */unsigned long long int) ((var_3) * (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))) | (min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_13 [i_3] [i_1] [1U] [1U] [i_1])), (arr_2 [i_0])))), (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_4 [(signed char)10] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)95)))))))));
                    }
                    for (long long int i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        var_30 = ((/* implicit */long long int) var_15);
                        arr_26 [i_6] [8U] [i_6] [i_6] &= ((/* implicit */int) (((((!(((/* implicit */_Bool) 1915873738)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_6] [i_6] [i_6] [i_0])) ? (((/* implicit */unsigned int) var_5)) : (var_4)))) : (((1099511627775ULL) | (((/* implicit */unsigned long long int) -24787318)))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)38307))))))));
                    }
                }
                for (unsigned int i_7 = 4; i_7 < 20; i_7 += 1) 
                {
                    arr_29 [i_0] [i_0] [i_0 - 2] = ((max(((~(140737488355200ULL))), (((/* implicit */unsigned long long int) var_13)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_1 [i_1])))) || (((arr_17 [14LL] [i_1] [18] [i_0]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27228))))))))));
                    var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) (-(((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [(_Bool)0] [i_7 - 2] [i_7 - 1])) ? (-1933695378) : (0)))) + (388266924U))))))));
                }
            }
        } 
    } 
}
