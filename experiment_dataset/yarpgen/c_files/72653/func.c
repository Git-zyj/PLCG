/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72653
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_2 [0U] = ((((/* implicit */_Bool) 1216635015)) ? (((1216635024) / (((/* implicit */int) (unsigned short)24820)))) : ((+(881615140))));
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_12 = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
            arr_5 [i_0] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_1))) != (((/* implicit */int) var_7))));
        }
        for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            var_13 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) 595229001U)) : (arr_6 [i_0] [i_2] [i_2])))) ? (((unsigned long long int) var_10)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */int) arr_8 [i_0] [i_2])))))));
            var_14 = ((((((arr_7 [i_2]) | (((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) var_0))))))) + (2147483647))) << (((((/* implicit */int) (!((_Bool)0)))) - (1))));
        }
        for (int i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 3; i_4 < 17; i_4 += 3) 
            {
                arr_16 [i_3] [i_3] [i_3] = ((/* implicit */int) var_1);
                var_15 = ((/* implicit */unsigned int) (_Bool)0);
            }
            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) var_11))));
            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65522)) + (((/* implicit */int) (short)4539))))), (0U))))));
            var_18 = ((/* implicit */unsigned short) max((((unsigned int) ((((/* implicit */_Bool) arr_14 [i_0] [i_3] [i_3])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) (short)-18654))));
        }
        for (short i_5 = 3; i_5 < 17; i_5 += 2) 
        {
            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((unsigned int) 173761841753063606ULL)) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))))));
            var_20 = ((/* implicit */unsigned int) var_11);
        }
        var_21 *= ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) ((int) var_3))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)8260)) : (((/* implicit */int) var_5)))) : (max((1974301455), (-1974301456))))));
    }
    for (unsigned int i_6 = 1; i_6 < 8; i_6 += 2) 
    {
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)26604)) : (((/* implicit */int) (short)-4659))))) ? (((/* implicit */int) ((((/* implicit */int) ((_Bool) arr_13 [i_6] [i_6] [i_6]))) == (((-1216635025) - (((/* implicit */int) (short)0))))))) : (((/* implicit */int) max((((/* implicit */short) ((((/* implicit */_Bool) 2128436265)) || (((/* implicit */_Bool) var_11))))), (arr_18 [i_6 + 2]))))));
        /* LoopSeq 3 */
        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 3) 
        {
            var_23 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((unsigned long long int) (unsigned short)65519)) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (-1226996358) : (var_8)))))));
            var_24 = max((((((/* implicit */_Bool) (short)296)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7)))), (((((/* implicit */_Bool) arr_18 [i_6 + 3])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7)))));
            arr_25 [i_6] [(short)8] [i_7] = var_5;
            var_25 = ((/* implicit */unsigned long long int) min((var_25), (max((((/* implicit */unsigned long long int) var_3)), (max((((/* implicit */unsigned long long int) var_4)), (max((arr_6 [i_6 + 2] [i_6 - 1] [i_6]), (((/* implicit */unsigned long long int) arr_8 [i_6 + 1] [i_7]))))))))));
            arr_26 [i_6] = ((/* implicit */unsigned long long int) 895854124);
        }
        /* vectorizable */
        for (unsigned int i_8 = 0; i_8 < 11; i_8 += 3) 
        {
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 11; i_9 += 1) 
            {
                for (int i_10 = 0; i_10 < 11; i_10 += 4) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_6] [i_6 - 1])) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)36717)) : (-1216635002)))));
                            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((arr_27 [i_11] [i_11] [i_10]) || (((/* implicit */_Bool) arr_9 [i_10]))))) : (((var_0) ? (-1226996358) : (((/* implicit */int) var_5)))))))));
                        }
                    } 
                } 
            } 
            var_28 = ((((/* implicit */int) arr_1 [i_6 + 2])) << (((((/* implicit */int) arr_3 [i_6 + 3])) - (30992))));
            arr_37 [(short)4] [i_6] [i_6] = ((/* implicit */int) ((((((/* implicit */_Bool) -1729225252)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (415091012U))) << (((-1034605332) + (1034605357)))));
        }
        /* vectorizable */
        for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 2) 
        {
            var_29 = (-(((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5)))));
            var_30 *= var_4;
        }
    }
    /* vectorizable */
    for (unsigned short i_13 = 3; i_13 < 16; i_13 += 2) 
    {
        var_31 = (+(((((/* implicit */_Bool) (unsigned short)27)) ? (-2063783867) : (903086236))));
        var_32 = ((/* implicit */int) max((var_32), ((+(var_3)))));
        arr_42 [i_13] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_4)) != (1974301444))))) != (((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */unsigned long long int) -1974301424)))));
    }
    var_33 = var_11;
    var_34 = var_4;
}
