/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64560
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 2; i_2 < 20; i_2 += 1) 
                {
                    var_13 *= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_2 - 1])) - (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))), (10752131873809183971ULL)));
                    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7)) ? (arr_5 [(short)15] [i_2 - 1] [(short)2]) : (((/* implicit */long long int) ((/* implicit */int) min(((short)-1), ((short)2)))))))) ? (-8485881901199549188LL) : (((((/* implicit */_Bool) (unsigned short)65518)) ? (((((/* implicit */_Bool) arr_6 [(short)18] [(unsigned short)16])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-15844))) : (-708432655198647474LL))) : (((((/* implicit */_Bool) (unsigned char)237)) ? (8485881901199549196LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
                    arr_9 [i_0] [12LL] [19LL] [i_1] = ((/* implicit */signed char) arr_1 [i_0] [i_1]);
                    /* LoopSeq 4 */
                    for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        arr_13 [i_3 - 1] [(unsigned short)1] [i_2] [(signed char)3] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_6))))));
                        var_15 = ((/* implicit */long long int) min((var_4), (((/* implicit */short) ((((/* implicit */int) ((unsigned short) 584276663U))) < (((((/* implicit */int) var_12)) << (((((/* implicit */int) var_10)) - (23309))))))))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        arr_17 [i_0] [i_1] [i_1] [i_4] = ((/* implicit */unsigned char) var_7);
                        var_16 = ((/* implicit */unsigned long long int) arr_10 [i_1]);
                        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (-(min((arr_1 [i_0] [i_2 - 1]), (arr_1 [i_4] [i_0]))))))));
                    }
                    for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 1) 
                    {
                        var_18 = ((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_1] [i_0] [i_5 - 1] [(short)13]);
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)65524)) != (((/* implicit */int) (unsigned short)65524)))))))) % (((((/* implicit */_Bool) ((8485881901199549174LL) ^ (((/* implicit */long long int) ((/* implicit */int) (short)12475)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (2263790702628454997ULL))))))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        arr_23 [i_0] [i_0] [i_2] [i_2] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) (short)-12)) != (((/* implicit */int) ((unsigned char) (unsigned char)1)))));
                        var_20 = ((/* implicit */long long int) (unsigned short)39640);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_7 = 2; i_7 < 21; i_7 += 3) 
                        {
                            var_21 = ((var_8) - (((/* implicit */unsigned int) ((/* implicit */int) var_10))));
                            var_22 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [(short)2] [i_6] [i_7 - 1])) ? (0ULL) : (((/* implicit */unsigned long long int) arr_11 [i_2 + 1]))));
                            arr_27 [i_7] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_12))));
                        }
                        /* vectorizable */
                        for (long long int i_8 = 0; i_8 < 22; i_8 += 1) 
                        {
                            var_23 = var_6;
                            var_24 = ((/* implicit */unsigned int) 2263790702628455020ULL);
                            var_25 *= ((/* implicit */_Bool) arr_18 [i_2 - 2] [i_2 + 1] [i_2] [i_2 - 2] [(unsigned char)2] [i_2 + 1]);
                        }
                        var_26 *= ((/* implicit */signed char) var_3);
                        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_28 [i_0] [i_1] [(signed char)1] [3ULL] [i_2] [i_1])))) ? (((((/* implicit */_Bool) 8661109596900958767LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_11 [i_2 - 2])))) : (((((/* implicit */_Bool) 2263790702628454997ULL)) ? (16182953371081096619ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19)))))));
                    }
                }
                var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((/* implicit */_Bool) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) + (2ULL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (-(((/* implicit */int) var_3))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)11))) - (2263790702628454997ULL))))))));
                var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 6182644158317421630LL)) ? (((((/* implicit */int) (short)-29053)) / (((/* implicit */int) (short)-43)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_0] [i_1] [i_0] [i_1] [i_1])))))));
                var_30 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 2263790702628455024ULL)) ? (6ULL) : (((unsigned long long int) (+(2263790702628454998ULL))))));
            }
        } 
    } 
    var_31 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) -6182644158317421636LL))) & (((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (var_10))))))) == ((-(var_11)))));
}
